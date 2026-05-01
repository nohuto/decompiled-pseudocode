/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::Foundation::IInspectable___lambda_f626797b4729018c6c4cb46d87a4371f___::Invoke @ 0x1803615C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?lock@?$weak_ptr@UNexusPolicyManager@@@std@@QEBA?AV?$shared_ptr@UNexusPolicyManager@@@2@XZ @ 0x180359980 (-lock@-$weak_ptr@UNexusPolicyManager@@@std@@QEBA-AV-$shared_ptr@UNexusPolicyManager@@@2@XZ.c)
 *     ?OnGamingFullScreenAppChanged@NexusPolicyManager@@AEAAXXZ @ 0x180361790 (-OnGamingFullScreenAppChanged@NexusPolicyManager@@AEAAXXZ.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::Foundation::IInspectable___lambda_f626797b4729018c6c4cb46d87a4371f___::Invoke(
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
