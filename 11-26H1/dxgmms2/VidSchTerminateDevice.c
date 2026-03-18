/*
 * XREFs of VidSchTerminateDevice @ 0x1400FD230
 * Callers:
 *     VidSchTerminateAdapter @ 0x1400C57F0 (VidSchTerminateAdapter.c)
 *     VidSchiCreateDeviceInternal @ 0x1400FC6AC (VidSchiCreateDeviceInternal.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     VidSchiDecrementDeviceReference @ 0x1400393C4 (VidSchiDecrementDeviceReference.c)
 *     McTemplateK0ppqpttqpqp_EtwWriteTransfer @ 0x14004B800 (McTemplateK0ppqpttqpqp_EtwWriteTransfer.c)
 *     ?DdiDestroyDevice@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x14004CE30 (-DdiDestroyDevice@ADAPTER_RENDER@@QEAAJPEAX@Z.c)
 *     VidSchFlushDevice @ 0x1400E8640 (VidSchFlushDevice.c)
 *     VidSchControlVSyncDevice @ 0x1400FD460 (VidSchControlVSyncDevice.c)
 *     VidSchiCloseProcessAdapterInfo @ 0x1400FD6A4 (VidSchiCloseProcessAdapterInfo.c)
 */

__int64 __fastcall VidSchTerminateDevice(__int64 a1)
{
  __int64 v2; // rbp
  unsigned int i; // ebx
  __int64 v5; // rcx
  void *v6; // rdx
  bool v7; // zf
  HANDLE CurrentProcessId; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int128 v11; // [rsp+70h] [rbp-28h] BYREF

  if ( a1 )
  {
    v2 = *(_QWORD *)(a1 + 40);
    ExAcquireResourceExclusiveLite((PERESOURCE)(v2 + 3128), 1u);
    _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1960), 1, 0);
    ExReleaseResourceLite((PERESOURCE)(v2 + 3128));
    v11 = 0LL;
    LODWORD(v11) = 15;
    VidSchFlushDevice(a1, (int *)&v11, 0xFFFFFFFD, 0LL);
    if ( (*(_DWORD *)(a1 + 56) & 1) != 0 )
    {
      v6 = *(void **)(a1 + 24);
      if ( v6 )
      {
        ADAPTER_RENDER::DdiDestroyDevice(*(ADAPTER_RENDER **)(v2 + 8), v6);
        v7 = bTracingEnabled == 0;
        *(_QWORD *)(a1 + 24) = 0LL;
        if ( !v7 )
        {
          CurrentProcessId = PsGetCurrentProcessId();
          if ( (byte_14008A201 & 8) != 0 )
            McTemplateK0ppqpttqpqp_EtwWriteTransfer(
              v9,
              &EventDestroyDevice,
              v10,
              CurrentProcessId,
              *(_QWORD *)(v2 + 16));
        }
      }
    }
    if ( *(_BYTE *)(v2 + 2500) )
    {
      for ( i = 0; i < *(_DWORD *)(v2 + 48); ++i )
      {
        if ( *(_DWORD *)(a1 + 4LL * i + 1336) )
        {
          *(_DWORD *)(a1 + 4LL * i + 1336) = 1;
          VidSchControlVSyncDevice(a1, 4LL, 0LL, i);
        }
      }
    }
    else if ( *(_DWORD *)(a1 + 1336) )
    {
      *(_DWORD *)(a1 + 1336) = 1;
      VidSchControlVSyncDevice(a1, 4LL, 0LL, 4294967293LL);
    }
    if ( *(_BYTE *)(a1 + 248) )
      VidSchiCloseProcessAdapterInfo(*(_QWORD *)(a1 + 48), v2);
    ExDeleteResourceLite((PERESOURCE)(a1 + 1232));
    VidSchiDecrementDeviceReference((char *)a1, 0);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(1LL, -1073741811LL);
    WdLogGlobalForLineNumber = 3938;
    DxgkLogInternalTriageEvent(v5, 0x40000LL);
    return 3221225485LL;
  }
}
