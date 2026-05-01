/*
 * XREFs of ?SetVirtualDesktopSwitcherInvoker@MultitaskingViewGestureHandler@@UEAAXPEAUIVirtualDesktopSwitcherInvoker@@@Z @ 0x18048C700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MultitaskingViewGestureHandler::SetVirtualDesktopSwitcherInvoker(
        MultitaskingViewGestureHandler *this,
        struct IVirtualDesktopSwitcherInvoker *a2)
{
  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_exception_policy>::operator=(
    (__int64 *)this + 6,
    (__int64)a2);
}
