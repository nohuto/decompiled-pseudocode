/*
 * XREFs of ??1?$com_ptr_t@VXamlGamingTaskViewHost@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1806A0778
 * Callers:
 *     WindowsInternal::ComposableShell::Experiences::Switcher::AnimationCompletedEventHandler::AnimationCompletedEventHandler__lambda_d0a1935d0729a9f12d8e79c8432e6d28___ @ 0x18069F980 (WindowsInternal--ComposableShell--Experiences--Switcher--AnimationCompletedEventHan_ea_18069F980.c)
 *     _lambda_d0a1935d0729a9f12d8e79c8432e6d28_::__lambda_d0a1935d0729a9f12d8e79c8432e6d28_ @ 0x1806A0690 (_lambda_d0a1935d0729a9f12d8e79c8432e6d28_--__lambda_d0a1935d0729a9f12d8e79c8432e6d28_.c)
 *     Platform::Details::__abi_FunctorCapture__lambda_d0a1935d0729a9f12d8e79c8432e6d28__void_::___abi_FunctorCapture__lambda_d0a1935d0729a9f12d8e79c8432e6d28__void_ @ 0x1806A072C (Platform--Details--__abi_FunctorCapture__lambda_d0a1935d0729a9f12d8e79c8432e6d28__void_--___abi_.c)
 *     ?DismissViewAnimated@XamlGamingTaskViewHost@@UEAAJXZ @ 0x1806A1390 (-DismissViewAnimated@XamlGamingTaskViewHost@@UEAAJXZ.c)
 *     _XamlGamingTaskViewHost::DismissViewAnimated_::_1_::dtor$1 @ 0x1807067FB (_XamlGamingTaskViewHost--DismissViewAnimated_--_1_--dtor$1.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLExecuteCommandBase@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180455790 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLExecuteComma.c)
 */

__int64 __fastcall wil::com_ptr_t<XamlGamingTaskViewHost,wil::err_exception_policy>::~com_ptr_t<XamlGamingTaskViewHost,wil::err_exception_policy>(
        __int64 *a1,
        volatile int *a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLExecuteCommandBase>::Release(
             v2,
             a2);
  return result;
}
