/*
 * XREFs of ?EnsureSnapshotVisualIsAlive@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@AEAAXXZ @ 0x18006F030
 * Callers:
 *     ?BeginRect@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEBURect@Foundation@Windows@5@@Z @ 0x18006EDDC (-BeginRect@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEBURect@.c)
 *     ?EndRect@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEBURect@Foundation@Windows@5@@Z @ 0x18006EF5C (-EndRect@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEBURect@Fo.c)
 *     ?RemoveFromTree@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@AEAAXXZ @ 0x18006EFD0 (-RemoveFromTree@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@AEAAXXZ.c)
 *     ?StartAnimation@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXHH@Z @ 0x180084960 (-StartAnimation@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXHH@Z.c)
 *     ?BeginRect@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAA?AURect@Foundation@Windows@5@XZ @ 0x180088D0C (-BeginRect@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAA-AURect@Fo.c)
 *     ?BeginClip@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAA?AURect@Foundation@Windows@5@XZ @ 0x1800D0C78 (-BeginClip@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAA-AURect@Fo.c)
 *     ?BeginClip@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEBURect@Foundation@Windows@5@@Z @ 0x1800D0D18 (-BeginClip@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEBURect@.c)
 *     ?EndClip@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEBURect@Foundation@Windows@5@@Z @ 0x1800D0DB4 (-EndClip@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEBURect@Fo.c)
 *     ?EndRect@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAA?AURect@Foundation@Windows@5@XZ @ 0x1800D0E28 (-EndRect@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAA-AURect@Foun.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800D13DC (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper::EnsureSnapshotVisualIsAlive(
        winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper *this)
{
  int v1; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_QWORD *)this + 5) )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xC3,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\transitions.animatedtransitionvisualwrapper.cpp",
      (const char *)0x8007139FLL,
      v1);
}
