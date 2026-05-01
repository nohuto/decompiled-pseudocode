/*
 * XREFs of ??1?$com_ptr_t@VXamlGamingTaskViewHost@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180679C20
 * Callers:
 *     WindowsInternal::ComposableShell::Experiences::Switcher::AnimationCompletedEventHandler::AnimationCompletedEventHandler__lambda_382bf80ec225943cc46d0801556c31b2___ @ 0x180678E70 (WindowsInternal--ComposableShell--Experiences--Switcher--AnimationCompletedEventHan_ea_180678E70.c)
 *     _lambda_382bf80ec225943cc46d0801556c31b2_::__lambda_382bf80ec225943cc46d0801556c31b2_ @ 0x180679B60 (_lambda_382bf80ec225943cc46d0801556c31b2_--__lambda_382bf80ec225943cc46d0801556c31b2_.c)
 *     Platform::Details::__abi_FunctorCapture__lambda_382bf80ec225943cc46d0801556c31b2__void_::___abi_FunctorCapture__lambda_382bf80ec225943cc46d0801556c31b2__void_ @ 0x180679BD4 (Platform--Details--__abi_FunctorCapture__lambda_382bf80ec225943cc46d0801556c31b2__void_--___abi_.c)
 *     ?DismissViewAnimated@XamlGamingTaskViewHost@@UEAAJXZ @ 0x18067A8B0 (-DismissViewAnimated@XamlGamingTaskViewHost@@UEAAJXZ.c)
 *     _XamlGamingTaskViewHost::DismissViewAnimated_::_1_::dtor$1 @ 0x1806DDC11 (_XamlGamingTaskViewHost--DismissViewAnimated_--_1_--dtor$1.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLExecuteCommandBase@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1804490B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLExecuteComma.c)
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
