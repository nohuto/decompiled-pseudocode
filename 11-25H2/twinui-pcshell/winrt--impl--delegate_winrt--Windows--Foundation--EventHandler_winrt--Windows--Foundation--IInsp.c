/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::Foundation::IInspectable___lambda_3fbd826b401420cff0a83bf4ce7975f8___::Invoke @ 0x18035AC50
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?lock@?$weak_ptr@UNexusPolicyManager@@@std@@QEBA?AV?$shared_ptr@UNexusPolicyManager@@@2@XZ @ 0x18035356C (-lock@-$weak_ptr@UNexusPolicyManager@@@std@@QEBA-AV-$shared_ptr@UNexusPolicyManager@@@2@XZ.c)
 *     ?OnGamingFullScreenAppChanged@NexusPolicyManager@@AEAAXXZ @ 0x18035AE20 (-OnGamingFullScreenAppChanged@NexusPolicyManager@@AEAAXXZ.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::Foundation::IInspectable___lambda_3fbd826b401420cff0a83bf4ce7975f8___::Invoke(
        __int64 a1)
{
  __int64 result; // rax
  unsigned int v2; // [rsp+20h] [rbp-28h] BYREF
  std::_Ref_count_base *v3[2]; // [rsp+28h] [rbp-20h] BYREF

  *(_OWORD *)v3 = 0LL;
  std::weak_ptr<NexusPolicyManager>::lock(a1 + 16, v3);
  if ( v3[0] )
    NexusPolicyManager::OnGamingFullScreenAppChanged(v3[0]);
  if ( v3[1] )
    std::_Ref_count_base::_Decref(v3[1]);
  result = 0LL;
  while ( 2 )
  {
    try
    {
    }
    catch ( ... )
    {
      v2 = *winrt::to_hresult(&v2);
      result = v2;
      continue;
    }
    break;
  }
  return result;
}
