/*
 * XREFs of ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x1803D81E4
 * Callers:
 *     ?_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@PositionerPropertySetHelpers@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1801DA4B0 (-_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@Posi.c)
 *     ?SubscribeToWNF@CCortanaWNFService@Cortana@TwinUI@@UEAAJPEAVICortanaWNFNotification@23@_N@Z @ 0x1803D84B0 (-SubscribeToWNF@CCortanaWNFService@Cortana@TwinUI@@UEAAJPEAVICortanaWNFNotification@23@_N@Z.c)
 * Callees:
 *     ?SetLastError@wil@@YAXAEBUFailureInfo@1@@Z @ 0x1800CABF8 (-SetLastError@wil@@YAXAEBUFailureInfo@1@@Z.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ?GetLastError@ThreadLocalData@details_abi@wil@@QEBA_NAEAUFailureInfo@3@IJ@Z @ 0x18031A1B0 (-GetLastError@ThreadLocalData@details_abi@wil@@QEBA_NAEAUFailureInfo@3@IJ@Z.c)
 *     ?RecordFeatureError@details@wil@@YAXIAEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z @ 0x18031B454 (-RecordFeatureError@details@wil@@YAXIAEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z.c)
 */

void __fastcall wil::details::ReportFeatureError(
        wil::details *this,
        __int64 a2,
        struct wil::ThreadErrorContext *a3,
        __int64 a4)
{
  unsigned int v5; // ebp
  int v7; // esi
  struct DiagnosticsInfo *v8; // r9
  const struct wil::FailureInfo *v9; // rdx
  unsigned int v10[14]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v11; // [rsp+58h] [rbp-70h]
  int v12; // [rsp+60h] [rbp-68h]
  struct DiagnosticsInfo v13; // [rsp+A8h] [rbp-20h]

  v5 = (unsigned int)a3;
  v7 = (int)this;
  memset_0(v10, 0, 0x98uLL);
  if ( !*(_QWORD *)a2
    || !wil::details_abi::ThreadLocalData::GetLastError(
          *(wil::details_abi::ThreadLocalData **)a2,
          (struct wil::FailureInfo *)v10,
          *(_DWORD *)(a2 + 8),
          v7) )
  {
    memset_0(v10, 0, 0x98uLL);
    v12 = *(unsigned __int16 *)(a4 + 24);
    v11 = *(_QWORD *)(a4 + 8);
    v13 = *(struct DiagnosticsInfo *)a4;
    v10[2] = v7;
    wil::SetLastError((wil *)v10, v9);
    if ( *(_QWORD *)a2 )
      wil::details_abi::ThreadLocalData::GetLastError(
        *(wil::details_abi::ThreadLocalData **)a2,
        (struct wil::FailureInfo *)v10,
        *(_DWORD *)(a2 + 8),
        v7);
  }
  wil::details::RecordFeatureError(
    (wil::details *)v5,
    (const struct wil::FailureInfo *)v10,
    (const struct DiagnosticsInfo *)a4,
    v8);
}
