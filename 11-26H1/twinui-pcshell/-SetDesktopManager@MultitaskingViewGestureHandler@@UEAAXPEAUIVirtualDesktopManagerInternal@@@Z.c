/*
 * XREFs of ?SetDesktopManager@MultitaskingViewGestureHandler@@UEAAXPEAUIVirtualDesktopManagerInternal@@@Z @ 0x1802BA250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MultitaskingViewGestureHandler::SetDesktopManager(
        MultitaskingViewGestureHandler *this,
        struct IVirtualDesktopManagerInternal *a2)
{
  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_exception_policy>::operator=(
    (__int64 *)this + 15,
    (__int64)a2);
}
