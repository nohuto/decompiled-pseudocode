/*
 * XREFs of ?GetBrush@CNoiseSurfaceCache@CAccentAcrylicBlurBehind@@SAJPEAPEAUICompositionBrush@Composition@UI@Windows@@@Z @ 0x180094318
 * Callers:
 *     ?EnsureAcrylicBrushForAccent@CAccentAcrylicBlurBehind@@AEAAJKPEBNPEAPEAUICompositionEffectBrush@Composition@UI@Windows@@@Z @ 0x180093C10 (-EnsureAcrylicBrushForAccent@CAccentAcrylicBlurBehind@@AEAAJKPEBNPEAPEAUICompositionEffectBrush@.c)
 * Callees:
 *     ??0CGraphicsResourceOwner@@IEAA@XZ @ 0x180027888 (--0CGraphicsResourceOwner@@IEAA@XZ.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050208 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@UICompositionBrush@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUICompositionBrush@Composition@UI@Windows@@@Z @ 0x18006A2A4 (--4-$com_ptr_t@UICompositionBrush@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180085BEC (--2@YAPEAX_K@Z.c)
 *     ??R?$default_delete@VCNoiseSurfaceCache@CAccentAcrylicBlurBehind@@@std@@QEBAXPEAVCNoiseSurfaceCache@CAccentAcrylicBlurBehind@@@Z @ 0x180090B0C (--R-$default_delete@VCNoiseSurfaceCache@CAccentAcrylicBlurBehind@@@std@@QEBAXPEAVCNoiseSurfaceCa.c)
 *     ?EnsureNoiseSurfaceBrush@CNoiseSurfaceCache@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x180093EF8 (-EnsureNoiseSurfaceBrush@CNoiseSurfaceCache@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAccentAcrylicBlurBehind::CNoiseSurfaceCache::GetBrush(
        struct Windows::UI::Composition::ICompositionBrush **a1)
{
  CAccentAcrylicBlurBehind::CNoiseSurfaceCache *v2; // rbx
  CAccentAcrylicBlurBehind::CNoiseSurfaceCache *v3; // rax
  __int64 v4; // rcx
  CAccentAcrylicBlurBehind::CNoiseSurfaceCache *v5; // rdx
  int v6; // eax
  unsigned int v7; // ebx
  struct Windows::UI::Composition::ICompositionBrush *v8; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct Windows::UI::Composition::ICompositionBrush *v11; // [rsp+38h] [rbp+10h] BYREF
  CAccentAcrylicBlurBehind::CNoiseSurfaceCache *v12; // [rsp+40h] [rbp+18h]

  v11 = 0LL;
  v2 = CAccentAcrylicBlurBehind::CNoiseSurfaceCache::s_cache;
  if ( !CAccentAcrylicBlurBehind::CNoiseSurfaceCache::s_cache )
  {
    v3 = (CAccentAcrylicBlurBehind::CNoiseSurfaceCache *)operator new(0x20uLL);
    v2 = v3;
    v12 = v3;
    if ( v3 )
    {
      *(_OWORD *)v3 = 0LL;
      *((_OWORD *)v3 + 1) = 0LL;
      CGraphicsResourceOwner::CGraphicsResourceOwner(v3);
      *(_QWORD *)v2 = &CAccentAcrylicBlurBehind::CNoiseSurfaceCache::`vftable';
      *((_QWORD *)v2 + 3) = 0LL;
    }
    else
    {
      v2 = 0LL;
    }
    v5 = CAccentAcrylicBlurBehind::CNoiseSurfaceCache::s_cache;
    CAccentAcrylicBlurBehind::CNoiseSurfaceCache::s_cache = v2;
    if ( v5 )
    {
      std::default_delete<CAccentAcrylicBlurBehind::CNoiseSurfaceCache>::operator()(v4, v5);
      v2 = CAccentAcrylicBlurBehind::CNoiseSurfaceCache::s_cache;
    }
  }
  v6 = CAccentAcrylicBlurBehind::CNoiseSurfaceCache::EnsureNoiseSurfaceBrush(v2);
  v7 = v6;
  if ( v6 >= 0 )
  {
    wil::com_ptr_t<Windows::UI::Composition::ICompositionBrush,wil::err_returncode_policy>::operator=(
      (__int64 *)&v11,
      *((_QWORD *)CAccentAcrylicBlurBehind::CNoiseSurfaceCache::s_cache + 3));
    v8 = v11;
    v11 = 0LL;
    *a1 = v8;
    v7 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4BD,
      (int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
      (const char *)(unsigned int)v6);
  }
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)&v11);
  return v7;
}
