/*
 * XREFs of _lambda_e77611733156e07a25f619698f3ee1ef_::_lambda_e77611733156e07a25f619698f3ee1ef_ @ 0x180296BD0
 * Callers:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_31520e38682400c193ecfa4924368fd9___ @ 0x1800B0EFC (CFrameApplicationPresentation--_AddTaskToQueue__lambda_31520e38682400c193ecfa4924368fd9___.c)
 * Callees:
 *     ??0?$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z @ 0x1800A38E0 (--0-$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x180296C3C (--0-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflecto_ea_180296C3C.c)
 */

_QWORD *__fastcall lambda_e77611733156e07a25f619698f3ee1ef_::_lambda_e77611733156e07a25f619698f3ee1ef_(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx

  Microsoft::WRL::ComPtr<CFrameApplicationPresentation>::ComPtr<CFrameApplicationPresentation>(a1, a2);
  *(_QWORD *)(v4 + 8) = *(_QWORD *)(v3 + 8);
  *(_DWORD *)(v4 + 16) = *(_DWORD *)(v3 + 16);
  *(_BYTE *)(v4 + 20) = *(_BYTE *)(v3 + 20);
  *(_BYTE *)(v4 + 21) = *(_BYTE *)(v3 + 21);
  *(_QWORD *)(v4 + 24) = *(_QWORD *)(v3 + 24);
  wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)(v4 + 32));
  a1[4] = &CFramePresentationTelemetry::SetSystemVisual::`vftable';
  return a1;
}
