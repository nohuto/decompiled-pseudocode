/*
 * XREFs of ??1CreateGamingTaskViewControl@XamlSwitcherTelemetry@@QEAA@XZ @ 0x180679D24
 * Callers:
 *     ?CreateGamingTaskViewControl@XamlGamingTaskViewHost@@AEAAPE$AAVGamingTaskView@Switcher@Experiences@ComposableShell@WindowsInternal@@XZ @ 0x18067A5D0 (-CreateGamingTaskViewControl@XamlGamingTaskViewHost@@AEAAPE$AAVGamingTaskView@Switcher@Experienc.c)
 *     _XamlGamingTaskViewHost::CreateGamingTaskViewControl_::_1_::dtor$0 @ 0x1806DDB9C (_XamlGamingTaskViewHost--CreateGamingTaskViewControl_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180021980 (-Destroy@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 */

void __fastcall XamlSwitcherTelemetry::CreateGamingTaskViewControl::~CreateGamingTaskViewControl(
        XamlSwitcherTelemetry::CreateGamingTaskViewControl *this)
{
  *(_QWORD *)this = &XamlSwitcherTelemetry::CreateGamingTaskViewControl::`vftable';
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
