/*
 * XREFs of ?JointDivider_Paint@@YAXPEAUHDC__@@AEBUCRect@Geometry@@1W4DEVICE_SCALE_FACTOR@@PEAUHFONT__@@@Z @ 0x180519928
 * Callers:
 *     ?HandlePaint@JointDivider@@AEAAXPEAUHDC__@@@Z @ 0x18050E880 (-HandlePaint@JointDivider@@AEAAXPEAUHDC__@@@Z.c)
 *     LambdaCustomPaintProc__lambda_96edf2fb798d729d000c76ff579fff9f__HDC_____ @ 0x180523290 (LambdaCustomPaintProc__lambda_96edf2fb798d729d000c76ff579fff9f__HDC_____.c)
 * Callees:
 *     ?GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x180158B8C (-GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHFONT__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180225290 (--1-$unique_storage@U-$resource_policy@PEAUHFONT__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integral.c)
 *     ??8Geometry@@YA_NAEBUCRect@0@0@Z @ 0x1802388D8 (--8Geometry@@YA_NAEBUCRect@0@0@Z.c)
 *     ?FillRectARGB@GDIHelpers@@YAXPEAUHDC__@@PEBUtagRECT@@EK_N@Z @ 0x18050E784 (-FillRectARGB@GDIHelpers@@YAXPEAUHDC__@@PEBUtagRECT@@EK_N@Z.c)
 *     ?JointDivider_LoadGlyphFont@@YAPEAUHFONT__@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x180519890 (-JointDivider_LoadGlyphFont@@YAPEAUHFONT__@@W4DEVICE_SCALE_FACTOR@@@Z.c)
 *     ?RenderCenteredGlyph@GDIHelpers@@YAXPEAUHDC__@@PEAUHFONT__@@GKKAEBUCRect@Geometry@@@Z @ 0x180519A20 (-RenderCenteredGlyph@GDIHelpers@@YAXPEAUHDC__@@PEAUHFONT__@@GKKAEBUCRect@Geometry@@@Z.c)
 */

void __fastcall JointDivider_Paint(HDC hdc, RECT *a2, RECT *a3, enum DEVICE_SCALE_FACTOR a4, HDC h)
{
  int v9; // edi
  const struct tagRECT *v10; // r8
  struct Geometry::CRect *v11; // rbx
  __int64 Color; // rax
  __int64 v13; // r8
  struct Geometry::CRect *GlyphFont; // [rsp+30h] [rbp-18h] BYREF

  v9 = CImmersiveColor::GetColor(0x138u) & 0xFFFFFF;
  if ( !Geometry::operator==(a2, a3) )
    GDIHelpers::FillRectARGB(hdc, a2, v10, v9);
  GDIHelpers::FillRectARGB(hdc, a3, v10, v9);
  GlyphFont = 0LL;
  v11 = (struct Geometry::CRect *)h;
  if ( h || (GlyphFont = (struct Geometry::CRect *)JointDivider_LoadGlyphFont(a4), (v11 = GlyphFont) != 0LL) )
  {
    Color = CImmersiveColor::GetColor(0xDBu);
    v13 = 59247LL;
    if ( a3->right - a3->left <= a3->bottom - a3->top )
      LOWORD(v13) = -6268;
    GDIHelpers::RenderCenteredGlyph(hdc, (HDC)v11, (HFONT)v13, v9, Color & 0xFFFFFF, (unsigned int)a3, GlyphFont);
  }
  wil::details::unique_storage<wil::details::resource_policy<HFONT__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HFONT__ *,HFONT__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HFONT__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HFONT__ *,HFONT__ *,0,std::nullptr_t>>((void **)&GlyphFont);
}
