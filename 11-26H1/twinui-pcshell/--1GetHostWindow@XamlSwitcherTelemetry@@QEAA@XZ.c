/*
 * XREFs of ??1GetHostWindow@XamlSwitcherTelemetry@@QEAA@XZ @ 0x1802C4EFC
 * Callers:
 *     ?GetHostWindow@XamlAltTabViewHost@@AEAA?AUXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@PEAUIImmersiveMonitor@@@Z @ 0x18009AF64 (-GetHostWindow@XamlAltTabViewHost@@AEAA-AUXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal.c)
 *     _XamlAltTabViewHost::GetHostWindow_::_1_::dtor$1 @ 0x1806D115C (_XamlAltTabViewHost--GetHostWindow_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18009E034 (-Destroy@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 */

void __fastcall XamlSwitcherTelemetry::GetHostWindow::~GetHostWindow(XamlSwitcherTelemetry::GetHostWindow *this)
{
  *(_QWORD *)this = &XamlSwitcherTelemetry::GetHostWindow::`vftable';
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
