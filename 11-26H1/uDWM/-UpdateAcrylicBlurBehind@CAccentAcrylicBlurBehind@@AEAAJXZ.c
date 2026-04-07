/*
 * XREFs of ?UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x1800945D0
 * Callers:
 *     ?ValidateVisual@CAccentAcrylicBlurBehind@@UEAAJXZ @ 0x180078890 (-ValidateVisual@CAccentAcrylicBlurBehind@@UEAAJXZ.c)
 * Callees:
 *     ??$SetBrush@PEAUICompositionColorBrush@Composition@UI@Windows@@@CSpriteVisual@@QEAAJPEAUICompositionColorBrush@Composition@UI@Windows@@@Z @ 0x18000ABC4 (--$SetBrush@PEAUICompositionColorBrush@Composition@UI@Windows@@@CSpriteVisual@@QEAAJPEAUIComposi.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050208 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetLuminosityOpacity@TaskbarAcrylic@@YANK@Z @ 0x18006D4A4 (-GetLuminosityOpacity@TaskbarAcrylic@@YANK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureAcrylicBrushForAccent@CAccentAcrylicBlurBehind@@AEAAJKPEBNPEAPEAUICompositionEffectBrush@Composition@UI@Windows@@@Z @ 0x180093C10 (-EnsureAcrylicBrushForAccent@CAccentAcrylicBlurBehind@@AEAAJKPEBNPEAPEAUICompositionEffectBrush@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAccentAcrylicBlurBehind::UpdateAcrylicBlurBehind(CAccentAcrylicBlurBehind *this)
{
  int v2; // edx
  CAccentAcrylicBlurBehind *v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  const double *v7; // r8
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct Windows::UI::Composition::ICompositionEffectBrush *v10; // [rsp+30h] [rbp+8h] BYREF
  double LuminosityOpacity; // [rsp+38h] [rbp+10h] BYREF

  if ( *((_BYTE *)this + 224) )
  {
    LuminosityOpacity = TaskbarAcrylic::GetLuminosityOpacity((TaskbarAcrylic *)*((unsigned int *)this + 52));
    v10 = 0LL;
    v4 = CAccentAcrylicBlurBehind::EnsureAcrylicBrushForAccent(v3, v2, &LuminosityOpacity, &v10);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 1086LL;
      goto LABEL_8;
    }
  }
  else
  {
    v7 = (const double *)((char *)this + 216);
    if ( *((double *)this + 27) == -1.0 )
      v7 = 0LL;
    v10 = 0LL;
    v4 = CAccentAcrylicBlurBehind::EnsureAcrylicBrushForAccent(this, *((_DWORD *)this + 52), v7, &v10);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 1091LL;
      goto LABEL_8;
    }
  }
  v4 = CSpriteVisual::SetBrush<Windows::UI::Composition::ICompositionColorBrush *>((__int64)this, (__int64)v10);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v5 = 0;
    goto LABEL_12;
  }
  v6 = 1095LL;
LABEL_8:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
    (const char *)(unsigned int)v4);
LABEL_12:
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)&v10);
  return v5;
}
