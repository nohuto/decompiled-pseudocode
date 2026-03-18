/*
 * XREFs of UsbhSyncResumeDeviceInternal @ 0x1400120E4
 * Callers:
 *     UsbhPdoSetD0 @ 0x140016CD0 (UsbhPdoSetD0.c)
 *     UsbhPdoWaitForD3Reconnect @ 0x140038F0C (UsbhPdoWaitForD3Reconnect.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x14004964C (Usbh_PdoSurpriseRemove_PdoEvent.c)
 *     UsbhPdoPnp_RemoveDevice @ 0x14005D810 (UsbhPdoPnp_RemoveDevice.c)
 * Callees:
 *     UsbhSshSetPortsBusyState @ 0x140008460 (UsbhSshSetPortsBusyState.c)
 *     UsbhAcquirePdoStateLock @ 0x140010E10 (UsbhAcquirePdoStateLock.c)
 *     UsbhSyncResumePort @ 0x140010E74 (UsbhSyncResumePort.c)
 *     UsbhUnlatchPdo @ 0x140013A70 (UsbhUnlatchPdo.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     UsbhLatchPdo @ 0x140017B30 (UsbhLatchPdo.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 */

__int64 __fastcall UsbhSyncResumeDeviceInternal(__int64 a1, __int64 a2, struct _DEVICE_OBJECT *a3)
{
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // rcx
  signed __int32 v12; // eax
  unsigned int v13; // edx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  bool v17; // zf
  KIRQL v18; // dl
  int v19; // edi
  unsigned __int16 v20; // bx
  __int64 v21; // rax

  v6 = PdoExt(a3);
  v8 = UsbhLatchPdo(a1, *(unsigned __int16 *)(v6 + 1428), 0LL, 1884507474LL);
  v10 = *(unsigned __int16 *)(v6 + 1428);
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v11 = *(_QWORD *)(a1 + 64);
      if ( v11 )
      {
        v12 = _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 880), 0xFFFFFFFF);
        v13 = *(_DWORD *)(v11 + 884);
        v14 = *(_QWORD *)(v11 + 888);
        v7 = 32LL * ((v12 - 1) & v13);
        *(_DWORD *)(v7 + v14) = 1886221170;
        *(_QWORD *)(v7 + v14 + 8) = 0LL;
        *(_QWORD *)(v7 + v14 + 16) = v10;
        *(_QWORD *)(v7 + v14 + 24) = v8;
      }
    }
  }
  v15 = FdoExt(a1, v7, v10, v9);
  if ( v8 && a3 == (struct _DEVICE_OBJECT *)v8 && (*(_DWORD *)(v15 + 2560) & 0x10) == 0 )
  {
    UsbhAcquirePdoStateLock(v16, a2, 15);
    v17 = *(_DWORD *)(PdoExt(a3) + 1124) == 3;
    *(_DWORD *)(a2 + 136) = 0;
    qword_140070600 = 0LL;
    *(_DWORD *)(a2 + 88) = 1734964085;
    v18 = *(_BYTE *)(a2 + 132);
    if ( v17 )
    {
      KeReleaseSpinLock(&HubG, v18);
      v19 = UsbhSyncResumePort(a1, a2, *(_WORD *)(v6 + 1428));
    }
    else
    {
      v19 = -1073741810;
      KeReleaseSpinLock(&HubG, v18);
    }
  }
  else
  {
    v19 = -1073741810;
    if ( !v8 )
      return (unsigned int)v19;
  }
  UsbhUnlatchPdo(a1, v8, 0LL, 1884507474LL);
  if ( v19 >= 0 )
  {
    *(_DWORD *)(PdoExt(a3) + 788) = 1;
    PoSetPowerState(a3, DevicePowerState, (POWER_STATE)1);
    v20 = *(_WORD *)(PdoExt(a3) + 1428);
    v21 = PdoExt(a3);
    UsbhSshSetPortsBusyState(*(_QWORD *)(v21 + 1184), v20, 2LL, 0LL);
  }
  return (unsigned int)v19;
}
