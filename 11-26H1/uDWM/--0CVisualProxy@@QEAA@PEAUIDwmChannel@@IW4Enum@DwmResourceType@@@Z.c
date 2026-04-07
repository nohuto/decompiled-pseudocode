/*
 * XREFs of ??0CVisualProxy@@QEAA@PEAUIDwmChannel@@IW4Enum@DwmResourceType@@@Z @ 0x1800DE4B8
 * Callers:
 *     ??$CreateFromSharedHandle@VCVisualProxy@@@CResourceProxy@@SAJPEAUIDwmChannel@@PEAXPEAPEAVCVisualProxy@@@Z @ 0x18008266C (--$CreateFromSharedHandle@VCVisualProxy@@@CResourceProxy@@SAJPEAUIDwmChannel@@PEAXPEAPEAVCVisual.c)
 *     ??$Create@VCVisualProxy@@@CResourceProxy@@SAJPEAUIDwmChannel@@PEAPEAVCVisualProxy@@@Z @ 0x180082DC4 (--$Create@VCVisualProxy@@@CResourceProxy@@SAJPEAUIDwmChannel@@PEAPEAVCVisualProxy@@@Z.c)
 *     ??0CContainerVisualProxy@@QEAA@PEAUIDwmChannel@@I@Z @ 0x1800A80B4 (--0CContainerVisualProxy@@QEAA@PEAUIDwmChannel@@I@Z.c)
 *     ??0CCursorVisualProxy@@QEAA@PEAUIDwmChannel@@I@Z @ 0x1800A9750 (--0CCursorVisualProxy@@QEAA@PEAUIDwmChannel@@I@Z.c)
 *     ??0CRedirectVisualProxy@@QEAA@PEAUIDwmChannel@@I@Z @ 0x1800BF308 (--0CRedirectVisualProxy@@QEAA@PEAUIDwmChannel@@I@Z.c)
 *     ??0CSpriteVisualProxy@@QEAA@PEAUIDwmChannel@@I@Z @ 0x1800BFBEC (--0CSpriteVisualProxy@@QEAA@PEAUIDwmChannel@@I@Z.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x1800056CC (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A7030 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CResourceProxy@@IEAA@PEAUIDwmChannel@@IW4Enum@DwmResourceType@@@Z @ 0x1800BF338 (--0CResourceProxy@@IEAA@PEAUIDwmChannel@@IW4Enum@DwmResourceType@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
unsigned int *__fastcall CVisualProxy::CVisualProxy(unsigned int *a1)
{
  _QWORD *v2; // rcx
  __int64 v3; // rax
  __int64 (__fastcall *v4)(__int64, _QWORD, GUID *, __int64); // r10
  __int64 v5; // r11
  int v6; // eax
  int v8; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  CResourceProxy::CResourceProxy((CBaseObject *)a1);
  *v2 = &CVisualProxy::`vftable';
  v2 += 4;
  *v2 = 0LL;
  v3 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)v2);
  v6 = v4(v5, a1[6], &GUID_8819f277_549c_4862_8812_b114f85d1aae, v3);
  if ( v6 < 0 )
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      13LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\visualproxy.cpp",
      (const char *)(unsigned int)v6,
      v8);
  return a1;
}
