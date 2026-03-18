/*
 * XREFs of DpiEnableMsBddFallbackDriver @ 0x14024B32C
 * Callers:
 *     DpiFdoHandleStopDevice @ 0x140242E80 (DpiFdoHandleStopDevice.c)
 *     DpiFdoStartAdapterThreadImpl @ 0x14024809C (DpiFdoStartAdapterThreadImpl.c)
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1400321CC (DpiCheckForOutstandingD3Requests.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     DxgkAcquireAdapterStopResetSync @ 0x140191754 (DxgkAcquireAdapterStopResetSync.c)
 *     DxgkReleaseAdapterStopResetSync @ 0x14019243C (DxgkReleaseAdapterStopResetSync.c)
 *     ?EnableMsBddFallback@DXGADAPTER@@QEAAXEAEAU_GUID@@PEAX@Z @ 0x14019896C (-EnableMsBddFallback@DXGADAPTER@@QEAAXEAEAU_GUID@@PEAX@Z.c)
 *     DxgkAcquireAdapterCoreSync @ 0x14030D100 (DxgkAcquireAdapterCoreSync.c)
 *     DxgkReleaseAdapterCoreSync @ 0x14030E1AC (DxgkReleaseAdapterCoreSync.c)
 *     DpiEnableD3Requests @ 0x14030EA10 (DpiEnableD3Requests.c)
 *     DxgkInvalidateQdcCache @ 0x1403660C0 (DxgkInvalidateQdcCache.c)
 */

__int64 __fastcall DpiEnableMsBddFallbackDriver(void *a1, struct _GUID *a2)
{
  __int64 result; // rax
  __int64 v5; // rbx
  __int64 v6; // r8
  __int64 v7; // r9
  void (__fastcall *v8)(__int64, __int128 *, __int64, __int64); // rax
  __int64 v9; // rcx

  if ( qword_140169078 )
  {
    v5 = *(_QWORD *)(qword_140169078 + 64);
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v5 + 484) )
      DpiCheckForOutstandingD3Requests(v5);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v5 + 168), 1u);
    if ( *(_QWORD *)(v5 + 4032) )
    {
      v8 = *(void (__fastcall **)(__int64, __int128 *, __int64, __int64))(v5 + 984);
      v9 = *(_QWORD *)(v5 + 48);
      *(struct _GUID *)(v5 + 5776) = *a2;
      LOBYTE(v7) = byte_140168DDC;
      LOBYTE(v6) = dword_1401691D0 == 1;
      v8(v9, &xmmword_140169130, v6, v7);
      *(_OWORD *)(v5 + 5776) = 0LL;
      byte_140168DDC = 0;
      DxgkAcquireAdapterStopResetSync(*(_QWORD *)(v5 + 4032), 1);
      DxgkAcquireAdapterCoreSync(*(_QWORD *)(v5 + 4032), 2LL);
      DXGADAPTER::EnableMsBddFallback(*(struct _KTHREAD ***)(v5 + 4032), 1, a2, a1);
      DxgkReleaseAdapterCoreSync(*(_QWORD *)(v5 + 4032), 2LL);
      DxgkReleaseAdapterStopResetSync(*(_QWORD *)(v5 + 4032), 1);
      if ( IoSetDeviceInterfaceState((PUNICODE_STRING)(v5 + 2848), 1u) < 0 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 4245;
      }
      if ( *(_QWORD *)(v5 + 2872) && IoSetDeviceInterfaceState((PUNICODE_STRING)(v5 + 2864), 1u) < 0 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 4257;
      }
      xmmword_140169140 = 0LL;
      DWORD2(xmmword_140169140) = -1;
      xmmword_140169130 = 0LL;
      memset(&xmmword_140169150, 0, 0x80uLL);
      dword_1401691D0 = 4;
      DxgkInvalidateQdcCache();
    }
    if ( *(_BYTE *)(v5 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(v5 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v5 + 168));
    KeLeaveCriticalRegion();
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(2LL);
    result = 3221225659LL;
    WdLogGlobalForLineNumber = 4164;
  }
  return result;
}
