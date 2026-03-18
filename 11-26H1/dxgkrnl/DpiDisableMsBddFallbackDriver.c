/*
 * XREFs of DpiDisableMsBddFallbackDriver @ 0x14024B0EC
 * Callers:
 *     DpiFdoStartAdapterThreadImpl @ 0x14024809C (DpiFdoStartAdapterThreadImpl.c)
 *     DpiDisableMsBddFallbackDriverWorkItem @ 0x14024B2A0 (DpiDisableMsBddFallbackDriverWorkItem.c)
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1400321CC (DpiCheckForOutstandingD3Requests.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     DxgkAcquireAdapterStopResetSync @ 0x140191754 (DxgkAcquireAdapterStopResetSync.c)
 *     DxgkReleaseAdapterStopResetSync @ 0x14019243C (DxgkReleaseAdapterStopResetSync.c)
 *     ?EnableMsBddFallback@DXGADAPTER@@QEAAXEAEAU_GUID@@PEAX@Z @ 0x14019896C (-EnableMsBddFallback@DXGADAPTER@@QEAAXEAEAU_GUID@@PEAX@Z.c)
 *     DxgkAcquireAdapterCoreSync @ 0x14030D100 (DxgkAcquireAdapterCoreSync.c)
 *     DxgkReleaseAdapterCoreSync @ 0x14030E1AC (DxgkReleaseAdapterCoreSync.c)
 *     DpiEnableD3Requests @ 0x14030EA10 (DpiEnableD3Requests.c)
 *     DxgkInvalidateQdcCache @ 0x1403660C0 (DxgkInvalidateQdcCache.c)
 */

__int64 __fastcall DpiDisableMsBddFallbackDriver(struct _GUID *a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  NTSTATUS v4; // eax
  void (__fastcall *v5)(__int64, __int128 *); // rax
  __int64 v6; // rcx

  if ( qword_140169078 )
  {
    v3 = *(_QWORD *)(qword_140169078 + 64);
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v3 + 484) )
      DpiCheckForOutstandingD3Requests(v3);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v3 + 168), 1u);
    DxgkAcquireAdapterStopResetSync(*(_QWORD *)(v3 + 4032), 1);
    DxgkAcquireAdapterCoreSync(*(_QWORD *)(v3 + 4032), 2LL);
    DXGADAPTER::EnableMsBddFallback(*(struct _KTHREAD ***)(v3 + 4032), 0, a1, 0LL);
    DxgkReleaseAdapterCoreSync(*(_QWORD *)(v3 + 4032), 2LL);
    DxgkReleaseAdapterStopResetSync(*(_QWORD *)(v3 + 4032), 1);
    v4 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v3 + 2848), 0);
    if ( *(_QWORD *)(v3 + 2872) )
      v4 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v3 + 2864), 0);
    if ( v4 < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 4377;
    }
    v5 = *(void (__fastcall **)(__int64, __int128 *))(v3 + 992);
    v6 = *(_QWORD *)(v3 + 48);
    *(struct _GUID *)(v3 + 5776) = *a1;
    v5(v6, &xmmword_140169130);
    *(_OWORD *)(v3 + 5776) = 0LL;
    dword_1401691D0 = 2;
    DxgkInvalidateQdcCache();
    if ( *(_BYTE *)(v3 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(v3 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v3 + 168));
    KeLeaveCriticalRegion();
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(2LL);
    result = 3221225659LL;
    WdLogGlobalForLineNumber = 4319;
  }
  return result;
}
