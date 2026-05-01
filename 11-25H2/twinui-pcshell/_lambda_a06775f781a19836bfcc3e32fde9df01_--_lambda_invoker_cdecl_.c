/*
 * XREFs of _lambda_a06775f781a19836bfcc3e32fde9df01_::_lambda_invoker_cdecl_ @ 0x180359C60
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?lock@?$weak_ptr@UNexusPolicyManager@@@std@@QEBA?AV?$shared_ptr@UNexusPolicyManager@@@2@XZ @ 0x18035356C (-lock@-$weak_ptr@UNexusPolicyManager@@@std@@QEBA-AV-$shared_ptr@UNexusPolicyManager@@@2@XZ.c)
 *     ?OnGamingFullScreenExperienceChanged@NexusPolicyManager@@AEAAXXZ @ 0x18035AE4C (-OnGamingFullScreenExperienceChanged@NexusPolicyManager@@AEAAXXZ.c)
 */

void lambda_a06775f781a19836bfcc3e32fde9df01_::_lambda_invoker_cdecl_()
{
  std::_Ref_count_base *v0[2]; // [rsp+20h] [rbp-28h] BYREF

  *(_OWORD *)v0 = 0LL;
  std::weak_ptr<NexusPolicyManager>::lock((__int64)&NexusPolicyManager::s_weakThis, v0);
  if ( v0[0] )
    NexusPolicyManager::OnGamingFullScreenExperienceChanged(v0[0]);
  if ( v0[1] )
    std::_Ref_count_base::_Decref(v0[1]);
}
