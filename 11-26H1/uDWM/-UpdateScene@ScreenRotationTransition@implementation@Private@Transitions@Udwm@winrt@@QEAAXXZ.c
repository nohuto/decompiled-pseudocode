/*
 * XREFs of ?UpdateScene@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x180042130
 * Callers:
 *     ?UpdateScene@?$produce@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@UITransition@456@@impl@winrt@@UEAAHXZ @ 0x180042100 (-UpdateScene@-$produce@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@.c)
 * Callees:
 *     ?UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z @ 0x18001EA70 (-UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z.c)
 *     ?Captured@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAA_NXZ @ 0x180042170 (-Captured@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAA_NXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800D13DC (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::UpdateScene(
        winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition *this)
{
  struct CVisual **v1; // rcx
  int updated; // eax
  int v3; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::Captured(this) )
  {
    updated = CDesktopManager::UpdateSceneImpl((CDesktopManager *)v1, v1[7]);
    if ( updated < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5A,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\transitions.screenrotationtransition.cpp",
        (const char *)(unsigned int)updated,
        v3);
  }
}
