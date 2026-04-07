/*
 * XREFs of ?UpdateAngle@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXHH@Z @ 0x1800D41AC
 * Callers:
 *     ?UpdateAngle@?$produce@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@UITransition@456@@impl@winrt@@UEAAHHH@Z @ 0x1800D4180 (-UpdateAngle@-$produce@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@.c)
 * Callees:
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180014BFC (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?SetRotationState@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXW4RotationState@Rotation@3456@@Z @ 0x18004207C (-SetRotationState@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXW.c)
 *     ?Captured@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAA_NXZ @ 0x180042170 (-Captured@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAA_NXZ.c)
 *     ?DelayNextAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXAEBW4RotationTimelineReason@23456@@Z @ 0x1800D2C08 (-DelayNextAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAA.c)
 *     ?DrawBackground@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800D2D38 (-DrawBackground@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ.c)
 *     ?ResponsiveRotationUpdateAngle@UDwmTrace@@SAXXZ @ 0x1800D37D8 (-ResponsiveRotationUpdateAngle@UDwmTrace@@SAXXZ.c)
 *     ?UpdateParentVisual@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800D42B8 (-UpdateParentVisual@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAA.c)
 *     ?log@?$tip_test@V?$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U12345@@details@tip2@@@tip2@@QEAAXPEBG@Z @ 0x1800D4C3C (-log@-$tip_test@V-$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitio.c)
 *     ?SetRotation@CVisual@@QEAAXN@Z @ 0x1800DE430 (-SetRotation@CVisual@@QEAAXN@Z.c)
 */

void __fastcall winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::UpdateAngle(
        CVisual **this,
        int a2,
        int a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // eax
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  struct tagPOINT *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r8
  const char *v14; // r9
  struct tagPOINT v15; // [rsp+30h] [rbp+8h] BYREF
  int v16; // [rsp+40h] [rbp+18h] BYREF

  v16 = a3;
  tip2::tip_test<tip2::details::merged_data<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest,Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>>::log(
    this + 13,
    L"Receive updated angle signal");
  UDwmTrace::ResponsiveRotationUpdateAngle(v6, v5);
  if ( !winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::Captured((winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition *)this) )
    return;
  *((_DWORD *)this + 11) = a2;
  if ( a2 == -270 || a2 == -360 )
  {
    v7 = a2 + 360;
    goto LABEL_8;
  }
  if ( a2 == 270 || a2 == 360 )
  {
    v7 = a2 - 360;
LABEL_8:
    *((_DWORD *)this + 11) = v7;
  }
  v8 = *((_DWORD *)this + 10);
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        if ( (unsigned int)(v10 - 1) <= 1 )
        {
          winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::DrawBackground((winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition *)this);
          winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::UpdateParentVisual((winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition *)this);
          *((_BYTE *)this + 81) = 1;
        }
      }
      else
      {
        *((_BYTE *)this + 80) = 1;
      }
    }
    else
    {
      CVisual::SetRotation(this[7], 0.0);
      v11 = (struct tagPOINT *)this[7];
      v15 = 0LL;
      CVisual::SetOffset(v11, &v15, v12);
    }
  }
  else
  {
    winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::UpdateParentVisual((winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition *)this);
    if ( !*((_BYTE *)this + 82) )
    {
      v16 = 1;
      winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::DelayNextAnimation(
        (winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition *)this,
        (const enum winrt::Udwm::Transitions::Private::implementation::RotationTimelineReason *)&v16,
        v13,
        v14);
    }
    winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::SetRotationState((__int64)this, 1);
  }
}
