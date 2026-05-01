/*
 * XREFs of ??1WeakReference@Platform@@QEAA@XZ @ 0x18009C130
 * Callers:
 *     _XamlAltTabViewController::[XamlBaseViewController]::RegisterForEvents_::_1_::dtor$0 @ 0x1806D16AE (_XamlAltTabViewController--[XamlBaseViewController]--RegisterForEvents_--_1_--dtor$0.c)
 *     _XamlBaseViewController::RegisterActivationChanged_::_1_::dtor$0 @ 0x1806D18B3 (_XamlBaseViewController--RegisterActivationChanged_--_1_--dtor$0.c)
 *     _GuidedSnapAssistViewController::[XamlBaseViewController]::RegisterForEvents_::_1_::dtor$17 @ 0x1806D8E76 (_GuidedSnapAssistViewController--[XamlBaseViewController]--RegisterForEvents_--_1_--dtor$17.c)
 *     _XamlSnapAssistViewHost::AnimateDismissView_::_1_::dtor$3 @ 0x1806DEA17 (_XamlSnapAssistViewHost--AnimateDismissView_--_1_--dtor$3.c)
 * Callees:
 *     ?InternalRelease@WeakReference@Platform@@AEAAXXZ @ 0x18009D9D0 (-InternalRelease@WeakReference@Platform@@AEAAXXZ.c)
 */

void __fastcall Platform::WeakReference::~WeakReference(Platform::WeakReference *this)
{
  Platform::WeakReference::InternalRelease(this);
}
