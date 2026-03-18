/*
 * XREFs of ACPIBuildIssueNotifyInvalidateRelationsForDockDevice @ 0x140057E20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qs @ 0x140041F5C (WPP_RECORDER_SF_qs.c)
 */

void __fastcall ACPIBuildIssueNotifyInvalidateRelationsForDockDevice(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v3; // rdx
  volatile signed __int32 *v4; // rcx
  volatile signed __int32 *v5; // rax

  KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
  if ( RootDeviceExtension )
  {
    v3 = *(volatile signed __int32 **)(RootDeviceExtension + 800);
    while ( 1 )
    {
      v4 = v3;
      if ( v3 == (volatile signed __int32 *)(RootDeviceExtension + 800) )
        break;
      v5 = v3 - 204;
      v3 = *(volatile signed __int32 **)v3;
      if ( v5 && _bittest64((const signed __int64 *)v4 - 101, 0x39u) && *((_QWORD *)v4 - 79) == a2 )
      {
        _InterlockedCompareExchange(v4 - 154, 1, 0);
        if ( *((_DWORD *)v4 - 154) == 1 )
        {
          if ( (*(_BYTE *)(v4 - 202) & 8) != 0 )
            _InterlockedOr64((volatile signed __int64 *)v4 - 101, 0x400000000uLL);
          if ( (*(_DWORD *)(RootDeviceExtension + 8) & 0x208) == 0x200LL )
            IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(RootDeviceExtension + 784), SingleBusRelations);
        }
        goto LABEL_14;
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      dword_14008E680 = *(_DWORD *)(**(_QWORD **)(a2 + 760) + 40LL);
      byte_14008E684 = 0;
      WPP_RECORDER_SF_qs(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x15u,
        0x17u,
        (__int64)&WPP_5bab3af2503233a3d44df37daf259dd7_Traceguids,
        *(_QWORD *)(a2 + 760),
        (const char *)&dword_14008E680);
    }
  }
LABEL_14:
  KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
}
