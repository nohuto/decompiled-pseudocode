/*
 * XREFs of _lambda_e77611733156e07a25f619698f3ee1ef_::_lambda_e77611733156e07a25f619698f3ee1ef__0 @ 0x180304538
 * Callers:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_31520e38682400c193ecfa4924368fd9___ @ 0x1800B0EFC (CFrameApplicationPresentation--_AddTaskToQueue__lambda_31520e38682400c193ecfa4924368fd9___.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1800B0938 (--0-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0Is.c)
 */

__int64 __fastcall lambda_e77611733156e07a25f619698f3ee1ef_::_lambda_e77611733156e07a25f619698f3ee1ef__0(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  *(_QWORD *)a1 = *a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)a1);
  *(_QWORD *)(a1 + 8) = a3;
  *(_DWORD *)(a1 + 16) = *(_DWORD *)a4;
  *(_BYTE *)(a1 + 20) = *(_BYTE *)(a4 + 4);
  *(_BYTE *)(a1 + 21) = *(_BYTE *)(a4 + 5);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a4 + 8);
  wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    a1 + 32,
    a4 + 16);
  *(_QWORD *)(a1 + 32) = &CFramePresentationTelemetry::SetSystemVisual::`vftable';
  return a1;
}
