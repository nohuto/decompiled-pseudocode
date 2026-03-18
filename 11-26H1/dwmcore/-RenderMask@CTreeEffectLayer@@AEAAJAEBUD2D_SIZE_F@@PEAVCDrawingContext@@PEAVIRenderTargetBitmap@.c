/*
 * XREFs of ?RenderMask@CTreeEffectLayer@@AEAAJAEBUD2D_SIZE_F@@PEAVCDrawingContext@@PEAVIRenderTargetBitmap@@@Z @ 0x1801CAF28
 * Callers:
 *     ?RenderLayer@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x18005D650 (-RenderLayer@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVMILMatrix3x2@@M@Z @ 0x180203840 (-DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV-$TMilRect_ea_180203840.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTreeEffectLayer::RenderMask(
        CTreeEffectLayer *this,
        const struct D2D_SIZE_F *a2,
        struct CDrawingContext *a3,
        struct IRenderTargetBitmap *a4)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v8; // rax
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  if ( !a4 )
    return 0LL;
  if ( g_LockAndReadLayer )
  {
    v8 = (*(__int64 (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)a4 + 144LL))(a4);
    (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v8 + 112LL))(
      v8,
      ((unsigned __int64)a3 + 16) & -(__int64)(a3 != 0LL));
  }
  v5 = CDrawingContext::DrawBitmapRealization(a3, SLODWORD(FLOAT_1_0));
  v6 = v5;
  if ( v5 >= 0 )
  {
    return 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8B6,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\drawingcontext.cpp",
      (const char *)(unsigned int)v5);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x34Au, 0LL);
  }
  return v6;
}
