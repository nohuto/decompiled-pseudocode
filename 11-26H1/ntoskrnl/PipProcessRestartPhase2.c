/*
 * XREFs of PipProcessRestartPhase2 @ 0x1407B7E54
 * Callers:
 *     PipProcessDevNodeTree @ 0x1409AE99C (PipProcessDevNodeTree.c)
 * Callees:
 *     McTemplateK0dz_EtwWriteTransfer @ 0x140499454 (McTemplateK0dz_EtwWriteTransfer.c)
 *     PoFxIdleDevice @ 0x1404ABB10 (PoFxIdleDevice.c)
 *     PipSetDevNodeState @ 0x1404CC0D0 (PipSetDevNodeState.c)
 *     IoRequestDeviceEject @ 0x1405DBA20 (IoRequestDeviceEject.c)
 *     PnpUpdateRebootRequiredReason @ 0x1407A76B0 (PnpUpdateRebootRequiredReason.c)
 *     PnpRequestDeviceRemoval @ 0x14096F3A8 (PnpRequestDeviceRemoval.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x1409AD3F8 (PnpStartedDeviceNodeDependencyCheck.c)
 */

__int64 __fastcall PipProcessRestartPhase2(__int64 a1, __int64 a2, __int64 a3)
{
  const wchar_t **v3; // rdi
  int v5; // esi
  unsigned int v6; // ebp
  __int64 v7; // r8

  v3 = (const wchar_t **)(a1 + 48);
  if ( (byte_140EF412B & 0x20) != 0 )
    McTemplateK0dz_EtwWriteTransfer(a1, (const EVENT_DESCRIPTOR *)KMPnPEvt_ProcessDeviceRestart_Start, a3, 2, *v3);
  v5 = *(_DWORD *)(a1 + 392);
  if ( v5 >= 0 )
  {
    PipSetDevNodeState(a1, 778);
    if ( (*(_DWORD *)(a1 + 704) & 0x20) != 0 )
    {
      PoFxIdleDevice(*(_QWORD *)(a1 + 32));
      *(_DWORD *)(a1 + 704) &= ~0x20u;
    }
    PnpStartedDeviceNodeDependencyCheck(a1);
  }
  else
  {
    if ( v5 == -1073741102 )
    {
      v6 = 14;
      PnpUpdateRebootRequiredReason((int)*v3, a2, 0x80000000LL);
    }
    else
    {
      v6 = 10;
    }
    PnpRequestDeviceRemoval(a1, 0LL, v6);
    if ( *(_DWORD *)(a1 + 568) )
    {
      IoRequestDeviceEject(*(PDEVICE_OBJECT *)(a1 + 32));
      v3 = (const wchar_t **)(a1 + 48);
    }
  }
  if ( (byte_140EF412B & 0x20) != 0 )
    McTemplateK0dz_EtwWriteTransfer(
      (__int64)*v3,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_ProcessDeviceRestart_Stop,
      v7,
      2,
      *v3);
  return (unsigned int)v5;
}
