/*
 * XREFs of ??1?$ComPtr@VKernelContextProvider@@@WRL@Microsoft@@QEAA@XZ @ 0x180098EB4
 * Callers:
 *     _GestureServices::GestureServices_::_1_::dtor$5 @ 0x1801D56E4 (_GestureServices--GestureServices_--_1_--dtor$5.c)
 *     _GestureServices::GestureServices_::_1_::dtor$6 @ 0x1801D56FA (_GestureServices--GestureServices_--_1_--dtor$6.c)
 *     _InjectionRawInputProvider::Create_::_1_::dtor$0 @ 0x1801DA129 (_InjectionRawInputProvider--Create_--_1_--dtor$0.c)
 *     _InputInjectionClientProxy::InjectTouchInput_::_1_::dtor$0 @ 0x1801DCAF4 (_InputInjectionClientProxy--InjectTouchInput_--_1_--dtor$0.c)
 *     _InputInjectionClientProxy::OnDisconnected_::_1_::dtor$0 @ 0x1801DCB18 (_InputInjectionClientProxy--OnDisconnected_--_1_--dtor$0.c)
 *     _ShellGesturesProcessor::ShellGesturesProcessor_::_1_::dtor$1 @ 0x1801DCB60 (_ShellGesturesProcessor--ShellGesturesProcessor_--_1_--dtor$1.c)
 * Callees:
 *     ?Release@InputContext@@UEAAKXZ @ 0x180021CF0 (-Release@InputContext@@UEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::ComPtr<KernelContextProvider>::~ComPtr<KernelContextProvider>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return InputContext::Release((InputContext *)(result + 8));
  }
  return result;
}
