/*
 * XREFs of _lambda_c4c5c4b54f46ee55e98247dc2d6953d1_::__lambda_c4c5c4b54f46ee55e98247dc2d6953d1_ @ 0x1802B6484
 * Callers:
 *     WindowsInternal::ComposableShell::Experiences::Switcher::AnimationCompletedEventHandler::AnimationCompletedEventHandler__lambda_c4c5c4b54f46ee55e98247dc2d6953d1___ @ 0x1801B6B80 (WindowsInternal--ComposableShell--Experiences--Switcher--AnimationCompletedEventHandler--Animati.c)
 *     Platform::Details::__abi_FunctorCapture__lambda_c4c5c4b54f46ee55e98247dc2d6953d1__void_::___abi_FunctorCapture__lambda_c4c5c4b54f46ee55e98247dc2d6953d1__void_ @ 0x1806BC5B8 (Platform--Details--__abi_FunctorCapture__lambda_c4c5c4b54f46ee55e98247dc2d6953d1__void_--___abi_.c)
 *     _WindowsInternal::ComposableShell::Experiences::Switcher::AnimationCompletedEventHandler::AnimationCompletedEventHandler__lambda_c4c5c4b54f46ee55e98247dc2d6953d1____::_1_::dtor$0 @ 0x1806D9521 (_WindowsInternal--ComposableShell--Experiences--Switcher--AnimationCompletedEventHandler--Animat.c)
 * Callees:
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18009D964 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 */

void __fastcall lambda_c4c5c4b54f46ee55e98247dc2d6953d1_::__lambda_c4c5c4b54f46ee55e98247dc2d6953d1_(__int64 *a1)
{
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(a1[1]);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a1);
}
