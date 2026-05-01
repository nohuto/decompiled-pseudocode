/*
 * XREFs of _lambda_31520e38682400c193ecfa4924368fd9_::_lambda_31520e38682400c193ecfa4924368fd9_ @ 0x180304240
 * Callers:
 *     ?SetSystemVisual@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z @ 0x1800B0A80 (-SetSystemVisual@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z.c)
 * Callees:
 *     ??0?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1800B0938 (--0-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0Is.c)
 */

__int64 __fastcall lambda_31520e38682400c193ecfa4924368fd9_::_lambda_31520e38682400c193ecfa4924368fd9_(
        __int64 a1,
        _DWORD *a2,
        _BYTE *a3,
        _BYTE *a4,
        __int64 a5,
        __int64 a6)
{
  *(_DWORD *)a1 = *a2;
  *(_BYTE *)(a1 + 4) = *a3;
  *(_BYTE *)(a1 + 5) = *a4;
  *(_QWORD *)(a1 + 8) = a5;
  wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    a1 + 16,
    a6);
  *(_QWORD *)(a1 + 16) = &CFramePresentationTelemetry::SetSystemVisual::`vftable';
  return a1;
}
