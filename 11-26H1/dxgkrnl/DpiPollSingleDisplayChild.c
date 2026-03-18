/*
 * XREFs of DpiPollSingleDisplayChild @ 0x14023A744
 * Callers:
 *     ?LinkTrainingTimeoutWorkItem@DMMVIDEOPRESENTTARGET@@SAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1402604F0 (-LinkTrainingTimeoutWorkItem@DMMVIDEOPRESENTTARGET@@SAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@.c)
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1400321CC (DpiCheckForOutstandingD3Requests.c)
 *     DpiFdoInvalidateChildStatus @ 0x140244D74 (DpiFdoInvalidateChildStatus.c)
 *     DpiEnableD3Requests @ 0x14030EA10 (DpiEnableD3Requests.c)
 */

__int64 __fastcall DpiPollSingleDisplayChild(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rbx
  NTSTATUS v7; // eax
  unsigned int v8; // edi
  int v9; // r8d
  int v10; // r9d

  v3 = *(_QWORD *)(a1 + 64);
  v7 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v3 + 64), 0LL, File, 1u, 0x20u);
  v8 = v7;
  if ( v7 >= 0 )
  {
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v3 + 484) )
      DpiCheckForOutstandingD3Requests(v3);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v3 + 168), 1u);
    if ( *(_DWORD *)(v3 + 236) == 2 )
    {
      if ( *(_DWORD *)(v3 + 4120) == 1 || *(_DWORD *)(v3 + 284) != 1 )
      {
        v8 = -1073741661;
        WdLogSingleEntry2(3LL, a1, -1073741661LL);
        WdLogGlobalForLineNumber = 3065;
      }
      else
      {
        LOBYTE(v10) = 1;
        LOBYTE(v9) = 1;
        v8 = DpiFdoInvalidateChildStatus(a1, a2, v9, v10, 0, 0, a3);
      }
    }
    else
    {
      v8 = -1073741823;
      WdLogSingleEntry2(3LL, a1, -1073741823LL);
      WdLogGlobalForLineNumber = 3055;
    }
    if ( *(_BYTE *)(v3 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(v3 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v3 + 168));
    KeLeaveCriticalRegion();
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v3 + 64), 0LL, 0x20u);
  }
  else
  {
    WdLogSingleEntry2(3LL, a1, v7);
    WdLogGlobalForLineNumber = 3039;
  }
  return v8;
}
