/*
 * XREFs of ??1WeakReference@Platform@@QEAA@XZ @ 0x180020730
 * Callers:
 *     _GuidedSnapAssistViewController::[XamlBaseViewController]::RegisterForEvents_::_1_::dtor$17 @ 0x1806ACEA7 (_GuidedSnapAssistViewController--[XamlBaseViewController]--RegisterForEvents_--_1_--dtor$17.c)
 *     _XamlAltTabViewController::[XamlBaseViewController]::RegisterForEvents_::_1_::dtor$0 @ 0x1806AD01E (_XamlAltTabViewController--[XamlBaseViewController]--RegisterForEvents_--_1_--dtor$0.c)
 *     _XamlBaseViewController::RegisterActivationChanged_::_1_::dtor$0 @ 0x1806AD126 (_XamlBaseViewController--RegisterActivationChanged_--_1_--dtor$0.c)
 *     _XamlSnapAssistViewHost::AnimateDismissView_::_1_::dtor$3 @ 0x1806B7677 (_XamlSnapAssistViewHost--AnimateDismissView_--_1_--dtor$3.c)
 * Callees:
 *     ?InternalRelease@WeakReference@Platform@@AEAAXXZ @ 0x180021088 (-InternalRelease@WeakReference@Platform@@AEAAXXZ.c)
 */

void __fastcall Platform::WeakReference::~WeakReference(Platform::WeakReference *this)
{
  Platform::WeakReference::InternalRelease(this);
}
