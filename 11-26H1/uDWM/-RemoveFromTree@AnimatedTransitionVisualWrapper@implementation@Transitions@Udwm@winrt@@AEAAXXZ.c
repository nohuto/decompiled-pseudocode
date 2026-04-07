/*
 * XREFs of ?RemoveFromTree@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@AEAAXXZ @ 0x18006EFD0
 * Callers:
 *     ?StopAnimation@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800400A8 (-StopAnimation@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXXZ.c)
 *     ?OnAnimationComplete@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@UEAAJI@Z @ 0x18006EE50 (-OnAnimationComplete@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@UEAA.c)
 * Callees:
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x180025A2C (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?EnsureSnapshotVisualIsAlive@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@AEAAXXZ @ 0x18006F030 (-EnsureSnapshotVisualIsAlive@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@win.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800D13DC (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper::RemoveFromTree(
        CContainerVisual **this)
{
  int v2; // eax
  int v3; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_BYTE *)this + 60) )
  {
    winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper::EnsureSnapshotVisualIsAlive((winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper *)this);
    v2 = CContainerVisual::RemoveChild(
           this[6],
           (struct CVisual *)(((unsigned __int64)this[5] + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this[5] >> 64)));
    if ( v2 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xB6,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\transitions.animatedtransitionvisualwrapper.cpp",
        (const char *)(unsigned int)v2,
        v3);
    *((_BYTE *)this + 60) = 0;
  }
}
