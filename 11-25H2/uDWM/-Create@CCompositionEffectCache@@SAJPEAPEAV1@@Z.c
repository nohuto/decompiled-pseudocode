/*
 * XREFs of ?Create@CCompositionEffectCache@@SAJPEAPEAV1@@Z @ 0x180086B9C
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z @ 0x180081384 (-Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ??$make_unique@VCCompositionEffectCache@@$$V$0A@@std@@YA?AV?$unique_ptr@VCCompositionEffectCache@@U?$default_delete@VCCompositionEffectCache@@@std@@@0@XZ @ 0x180086C18 (--$make_unique@VCCompositionEffectCache@@$$V$0A@@std@@YA-AV-$unique_ptr@VCCompositionEffectCache.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@CCompositionEffectCache@@AEAAJXZ @ 0x180098AD4 (-Initialize@CCompositionEffectCache@@AEAAJXZ.c)
 *     ??R?$default_delete@VCCompositionEffectCache@@@std@@QEBAXPEAVCCompositionEffectCache@@@Z @ 0x1800A9624 (--R-$default_delete@VCCompositionEffectCache@@@std@@QEBAXPEAVCCompositionEffectCache@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCompositionEffectCache::Create(struct CCompositionEffectCache **a1)
{
  struct CCompositionEffectCache *v2; // rbx
  int v3; // eax
  unsigned int v4; // edi
  __int64 v5; // rcx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CCompositionEffectCache *v9; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  std::make_unique<CCompositionEffectCache,,0>(&v9);
  v2 = v9;
  v3 = CCompositionEffectCache::Initialize(v9);
  v4 = v3;
  if ( v3 >= 0 )
  {
    *a1 = v2;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\compositioneffectcache.cpp",
      (const char *)(unsigned int)v3,
      v7);
    if ( v2 )
      std::default_delete<CCompositionEffectCache>::operator()(v5, v2);
    return v4;
  }
}
