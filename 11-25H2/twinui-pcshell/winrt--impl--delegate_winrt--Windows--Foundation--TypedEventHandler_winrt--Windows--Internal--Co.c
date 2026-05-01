/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs___lambda_d61b288df26b99e0330e99e4b6525b65___::Invoke @ 0x18028E640
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_d61b288df26b99e0330e99e4b6525b65_::operator() @ 0x18028E66C (_lambda_d61b288df26b99e0330e99e4b6525b65_--operator().c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs___lambda_d61b288df26b99e0330e99e4b6525b65___::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax
  int v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+40h] [rbp+18h]

  v5 = a3;
  try
  {
    lambda_d61b288df26b99e0330e99e4b6525b65_::operator()();
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v4);
  }
  return result;
}
