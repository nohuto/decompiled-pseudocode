/*
 * XREFs of ?EnsureCrossFadeEffectInitialized@CCompositionEffectCache@@AEAAXXZ @ 0x180042E78
 * Callers:
 *     ?GetCrossfadeEffectFactory@CCompositionEffectCache@@QEAAPEAUICompositionEffectFactory@Composition@UI@Windows@@XZ @ 0x180042E58 (-GetCrossfadeEffectFactory@CCompositionEffectCache@@QEAAPEAUICompositionEffectFactory@Compositio.c)
 * Callees:
 *     ?IsWindowAnimationEnabled@CDesktopManager@@SA_NXZ @ 0x180044858 (-IsWindowAnimationEnabled@CDesktopManager@@SA_NXZ.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A7030 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AssertW@@YAXPEBG000K@Z @ 0x1800E55B4 (-AssertW@@YAXPEBG000K@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CCompositionEffectCache::EnsureCrossFadeEffectInitialized(CCompositionEffectCache *this)
{
  __int64 v2; // rcx
  int CrossfadeEffectFactory; // eax
  unsigned int v4; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !CDesktopManager::IsWindowAnimationEnabled() )
    AssertW(
      0LL,
      L"CDesktopManager::IsWindowAnimationEnabled()",
      L"CCompositionEffectCache::EnsureCrossFadeEffectInitialized",
      L"clientcore\\windows\\dwm\\udwm\\compositioneffectcache.cpp",
      0x71u);
  if ( !*((_QWORD *)this + 8) )
  {
    v2 = *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6) + 40LL);
    *((_QWORD *)this + 8) = 0LL;
    CrossfadeEffectFactory = CreateCrossfadeEffectFactory(v2);
    if ( CrossfadeEffectFactory < 0 )
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x77,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\compositioneffectcache.cpp",
        (const char *)(unsigned int)CrossfadeEffectFactory,
        v4);
  }
}
