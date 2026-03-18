/*
 * XREFs of ?GetExplicitRealizationSizeCVI@CVisualSurface@@QEBAJPEAUD2D_VECTOR_2F@@PEAPEAVCCachedVisualImage@@@Z @ 0x180216868
 * Callers:
 *     ?GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1800D2EB0 (-GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z.c)
 *     ?GetCVIForRealizationSize@CVisualSurface@@QEAAJIAEBUD2D_VECTOR_2F@@PEAU2@PEAPEAVCCachedVisualImage@@@Z @ 0x1800D3DB0 (-GetCVIForRealizationSize@CVisualSurface@@QEAAJIAEBUD2D_VECTOR_2F@@PEAU2@PEAPEAVCCachedVisualIma.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateFromVisualSurface@CCachedVisualImage@@QEAAJPEAVCVisualTree@@AEBUD2D_VECTOR_2F@@11W4Enum@MilStretch@@@Z @ 0x1800D410C (-UpdateFromVisualSurface@CCachedVisualImage@@QEAAJPEAVCVisualTree@@AEBUD2D_VECTOR_2F@@11W4Enum@M.c)
 *     ??0?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedTexture@@@Z @ 0x1800F80BC (--0-$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedTexture@@@Z.c)
 */

__int64 __fastcall CVisualSurface::GetExplicitRealizationSizeCVI(
        CVisualSurface *this,
        struct D2D_VECTOR_2F *a2,
        struct CCachedVisualImage **a3)
{
  __int64 *v6; // rdx
  struct D2D_VECTOR_2F *v7; // rdi
  struct CCachedVisualImage *v8; // rsi
  int v9; // eax
  unsigned int v10; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct CCachedVisualImage *v13; // [rsp+50h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 204) || (v6 = (__int64 *)*((_QWORD *)this + 11), *((__int64 **)this + 12) == v6) )
  {
    v10 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x163,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visualsurface.cpp",
      (const char *)0x8000FFFFLL);
  }
  else
  {
    wil::com_ptr_t<CCachedTexture,wil::err_returncode_policy>::com_ptr_t<CCachedTexture,wil::err_returncode_policy>(
      &v13,
      *v6);
    v7 = (struct D2D_VECTOR_2F *)((char *)this + 192);
    v8 = v13;
    if ( *((_BYTE *)this + 205)
      || (v9 = CCachedVisualImage::UpdateFromVisualSurface(
                 v13,
                 *((_QWORD *)this + 10),
                 (float *)this + 44,
                 (float *)this + 46,
                 (float *)this + 48,
                 *((_DWORD *)this + 50)),
          v10 = v9,
          v9 >= 0) )
    {
      *a2 = *v7;
      *a3 = v8;
      v13 = 0LL;
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v13);
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x170,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visualsurface.cpp",
      (const char *)(unsigned int)v9);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v13);
  }
  return v10;
}
