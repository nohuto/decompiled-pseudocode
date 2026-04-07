/*
 * XREFs of ??0CSpriteVisualProxy@@QEAA@PEAUIDwmChannel@@I@Z @ 0x1800BFBEC
 * Callers:
 *     ??$Create@VCSpriteVisualProxy@@@CResourceProxy@@SAJPEAUIDwmChannel@@PEAPEAVCSpriteVisualProxy@@@Z @ 0x180083010 (--$Create@VCSpriteVisualProxy@@@CResourceProxy@@SAJPEAUIDwmChannel@@PEAPEAVCSpriteVisualProxy@@@.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x1800056CC (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A7030 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CVisualProxy@@QEAA@PEAUIDwmChannel@@IW4Enum@DwmResourceType@@@Z @ 0x1800DE4B8 (--0CVisualProxy@@QEAA@PEAUIDwmChannel@@IW4Enum@DwmResourceType@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
CSpriteVisualProxy *__fastcall CSpriteVisualProxy::CSpriteVisualProxy(
        CSpriteVisualProxy *this,
        struct IDwmChannel *a2,
        __int64 a3)
{
  __int64 v4; // rax
  __int64 (__fastcall *v5)(__int64, GUID *, __int64); // r9
  __int64 v6; // r10
  int v7; // eax
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  CVisualProxy::CVisualProxy(this, a2, a3, 19LL);
  *(_QWORD *)this = &CSpriteVisualProxy::`vftable';
  *((_QWORD *)this + 5) = 0LL;
  v4 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)this + 40);
  v7 = v5(v6, &GUID_08e05581_1ad1_4f97_9757_402d76e4233b, v4);
  if ( v7 < 0 )
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      13LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\spritevisualproxy.cpp",
      (const char *)(unsigned int)v7,
      v9);
  return this;
}
