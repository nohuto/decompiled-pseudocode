/*
 * XREFs of ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x18000EC74
 * Callers:
 *     ?_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180010A10 (-_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180001D20 (__security_check_cookie.c)
 *     memset_0 @ 0x180002FE8 (memset_0.c)
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180006800 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ?SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z @ 0x18000953C (-SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z.c)
 *     ??0StagingFailureInformation@details@wil@@QEAA@AEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z @ 0x18000CED8 (--0StagingFailureInformation@details@wil@@QEAA@AEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z.c)
 *     ?GetLastError@ThreadLocalData@details_abi@wil@@QEBA_NAEAUFailureInfo@3@IJ@Z @ 0x18000DD60 (-GetLastError@ThreadLocalData@details_abi@wil@@QEBA_NAEAUFailureInfo@3@IJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::details::ReportFeatureError(
        wil::details *this,
        __int64 a2,
        struct wil::ThreadErrorContext *a3,
        __int64 a4)
{
  int v6; // esi
  void *v7; // r9
  DWORD CurrentThreadId; // eax
  wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  void (__fastcall *v10)(__int64, struct DiagnosticsInfo *); // rax
  _BYTE v11[8]; // [rsp+20h] [rbp-E0h] BYREF
  int v12; // [rsp+28h] [rbp-D8h]
  __int64 v13; // [rsp+58h] [rbp-A8h]
  int v14; // [rsp+60h] [rbp-A0h]
  struct DiagnosticsInfo v15; // [rsp+A8h] [rbp-58h]
  struct DiagnosticsInfo v16[50]; // [rsp+C0h] [rbp-40h] BYREF

  v6 = (int)this;
  memset_0(v11, 0, 0x98uLL);
  if ( !*(_QWORD *)a2
    || !wil::details_abi::ThreadLocalData::GetLastError(
          *(wil::details_abi::ThreadLocalData **)a2,
          (struct wil::FailureInfo *)v11,
          *(_DWORD *)(a2 + 8),
          v6) )
  {
    memset_0(v11, 0, 0x98uLL);
    v14 = *(unsigned __int16 *)(a4 + 24);
    v13 = *(_QWORD *)(a4 + 8);
    v15 = *(struct DiagnosticsInfo *)a4;
    v12 = v6;
    CurrentThreadId = GetCurrentThreadId();
    if ( `wil::SetLastError'::`2'::lastThread != CurrentThreadId )
    {
      if ( _InterlockedIncrement(&`wil::SetLastError'::`5'::depth) < 4 )
      {
        `wil::SetLastError'::`2'::lastThread = CurrentThreadId;
        ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(0LL);
        if ( ThreadLocalDataCache )
          wil::details_abi::ThreadLocalData::SetLastError(ThreadLocalDataCache, (const struct wil::FailureInfo *)v11);
        `wil::SetLastError'::`2'::lastThread = 0;
      }
      _InterlockedDecrement(&`wil::SetLastError'::`5'::depth);
    }
    if ( *(_QWORD *)a2 )
      wil::details_abi::ThreadLocalData::GetLastError(
        *(wil::details_abi::ThreadLocalData **)a2,
        (struct wil::FailureInfo *)v11,
        *(_DWORD *)(a2 + 8),
        v6);
  }
  wil::details::StagingFailureInformation::StagingFailureInformation(
    v16,
    (const struct wil::FailureInfo *)v11,
    (const struct DiagnosticsInfo *)a4,
    v7);
  v10 = (void (__fastcall *)(__int64, struct DiagnosticsInfo *))g_wil_details_internalRecordFeatureError;
  if ( g_wil_details_internalRecordFeatureError
    || (v10 = (void (__fastcall *)(__int64, struct DiagnosticsInfo *))g_wil_details_apiRecordFeatureError) != 0LL )
  {
    v10(11973136LL, v16);
  }
}
