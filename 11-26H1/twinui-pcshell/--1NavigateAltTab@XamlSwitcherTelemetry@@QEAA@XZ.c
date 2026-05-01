/*
 * XREFs of ??1NavigateAltTab@XamlSwitcherTelemetry@@QEAA@XZ @ 0x1802C4718
 * Callers:
 *     _XamlAltTabViewHost::Navigate_::_1_::dtor$1 @ 0x1806DC2D1 (_XamlAltTabViewHost--Navigate_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18009E034 (-Destroy@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 */

void __fastcall XamlSwitcherTelemetry::NavigateAltTab::~NavigateAltTab(XamlSwitcherTelemetry::NavigateAltTab *this)
{
  *(_QWORD *)this = &XamlSwitcherTelemetry::NavigateAltTab::`vftable';
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
