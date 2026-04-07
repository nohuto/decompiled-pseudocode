/*
 * XREFs of ?CreateSolidColorBrush@CCompositionEffectCache@@CAJUColor@UI@Windows@@PEAPEAUICompositionBrush@Composition@34@@Z @ 0x180075450
 * Callers:
 *     ?Initialize@CCompositionEffectCache@@AEAAJXZ @ 0x18008C1A8 (-Initialize@CCompositionEffectCache@@AEAAJXZ.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x1800056CC (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A7030 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CCompositionEffectCache::CreateSolidColorBrush(unsigned int a1, _QWORD *a2)
{
  __int64 *v3; // r9
  __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v8; // rax
  __int64 (__fastcall ***v9)(_QWORD, GUID *, __int64); // r9
  int v10; // eax
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v13; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v3 = *(__int64 **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6) + 40LL);
  v13 = 0LL;
  v4 = *v3;
  v13 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v4 + 64))(v3, a1, &v13);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v8 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)a2);
    v10 = (**v9)(v9, &GUID_ab0d7608_30c0_40e9_b568_b60a6bd1fb46, v8);
    if ( v10 < 0 )
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0xE5,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\compositioneffectcache.cpp",
        (const char *)(unsigned int)v10,
        v11);
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE4,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\compositioneffectcache.cpp",
      (const char *)(unsigned int)v5,
      v11);
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    return v6;
  }
}
