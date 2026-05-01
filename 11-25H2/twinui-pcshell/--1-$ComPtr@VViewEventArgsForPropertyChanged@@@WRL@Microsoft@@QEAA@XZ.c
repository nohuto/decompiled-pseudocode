/*
 * XREFs of ??1?$ComPtr@VViewEventArgsForPropertyChanged@@@WRL@Microsoft@@QEAA@XZ @ 0x1802C6D74
 * Callers:
 *     _UwpWindowEventDispatcher::UwpWindowUniversalPropertyChanged_::_1_::dtor$13 @ 0x1806A578C (_UwpWindowEventDispatcher--UwpWindowUniversalPropertyChanged_--_1_--dtor$13.c)
 *     _UwpWindowEventDispatcher::WindowIdChangedEventHelper::FireEvents_::_1_::dtor$4 @ 0x1806ACAAF (_UwpWindowEventDispatcher--WindowIdChangedEventHelper--FireEvents_--_1_--dtor$4.c)
 *     _wil::MakeAndInitializeOrThrow_ViewEventArgsForPropertyChanged_unsigned_short_const_(&)[18]__::_1_::dtor$0 @ 0x1806B44EC (_wil--MakeAndInitializeOrThrow_ViewEventArgsForPropertyChanged_unsigned_short_const_(-)[18]__--_.c)
 *     _wil::MakeAndInitializeOrThrow_ViewEventArgsForPropertyChanged_unsigned_short_const___const_&__::_1_::dtor$0 @ 0x1806C1D91 (_wil--MakeAndInitializeOrThrow_ViewEventArgsForPropertyChanged_unsigned_short_const___const_-__-.c)
 *     _WindowEventDispatcher::AppViewUniversalPropertyChanged_::_1_::dtor$14 @ 0x1806C227E (_WindowEventDispatcher--AppViewUniversalPropertyChanged_--_1_--dtor$14.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<ViewEventArgsForPropertyChanged>::~ComPtr<ViewEventArgsForPropertyChanged>(
        __int64 *a1)
{
  return Microsoft::WRL::ComPtr<ViewEventArgsForPropertyChanged>::InternalRelease(a1);
}
