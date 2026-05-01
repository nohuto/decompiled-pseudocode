/*
 * XREFs of ??1CreateAltTabControl@XamlSwitcherTelemetry@@QEAA@XZ @ 0x18009F498
 * Callers:
 *     _XamlAltTabViewHost::CreateAltTabControl_::_1_::dtor$0 @ 0x1806D1792 (_XamlAltTabViewHost--CreateAltTabControl_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18009E034 (-Destroy@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 */

void __fastcall XamlSwitcherTelemetry::CreateAltTabControl::~CreateAltTabControl(
        XamlSwitcherTelemetry::CreateAltTabControl *this)
{
  *(_QWORD *)this = &XamlSwitcherTelemetry::CreateAltTabControl::`vftable';
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
