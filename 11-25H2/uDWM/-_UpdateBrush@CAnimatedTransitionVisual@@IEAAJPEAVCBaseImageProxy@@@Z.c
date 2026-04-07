/*
 * XREFs of ?_UpdateBrush@CAnimatedTransitionVisual@@IEAAJPEAVCBaseImageProxy@@@Z @ 0x1800220D0
 * Callers:
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x180021818 (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?SetBitmap@CAnimatedTransitionVisual@@QEAAJPEAVCBitmapSource@@@Z @ 0x1800A3DA8 (-SetBitmap@CAnimatedTransitionVisual@@QEAAJPEAVCBitmapSource@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Update@CImageLegacyMilBrushProxy@@QEAAJNAEBUD2D_RECT_F@@0PEBVCDoubleResourceProxy@@W4Enum@MilBrushMappingMode@@2PEBVCRectResourceProxy@@3W44MilStretch@@W44MilTileMode@@W44MilHorizontalAlignment@@W44MilVerticalAlignment@@PEBVCBaseImageProxy@@@Z @ 0x18001F50C (-Update@CImageLegacyMilBrushProxy@@QEAAJNAEBUD2D_RECT_F@@0PEBVCDoubleResourceProxy@@W4Enum@MilBr.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::_UpdateBrush(CAnimatedTransitionVisual *this, struct CBaseImageProxy *a2)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v6; // [rsp+50h] [rbp-58h]
  __int128 v7; // [rsp+70h] [rbp-38h] BYREF
  __int128 v8; // [rsp+80h] [rbp-28h] BYREF

  v2 = *((_QWORD *)this + 68);
  v8 = _xmm;
  v7 = _xmm;
  v3 = CImageLegacyMilBrushProxy::Update(
         v2,
         (__int64)a2,
         (__int64)&v8,
         (__int64)&v7,
         0LL,
         1u,
         1,
         0LL,
         0LL,
         1,
         v6,
         0,
         0,
         (__int64)a2);
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x343u, 0LL);
  return v4;
}
