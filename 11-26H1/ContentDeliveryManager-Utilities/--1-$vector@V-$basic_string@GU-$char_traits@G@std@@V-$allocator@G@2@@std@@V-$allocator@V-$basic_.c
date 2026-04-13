/*
 * XREFs of ??1?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAA@XZ @ 0x18004CF74
 * Callers:
 *     __anonymous_namespace_::DecodeBatchIdFromCreativeId_::_1_::dtor$1 @ 0x1800BAD09 (__anonymous_namespace_--DecodeBatchIdFromCreativeId_--_1_--dtor$1.c)
 *     _ContentManagement::GetEventNameFromToken_::_1_::dtor$1 @ 0x1800BADB7 (_ContentManagement--GetEventNameFromToken_--_1_--dtor$1.c)
 *     _ContentManagement::GetEventNameFromToken_::_1_::dtor$2 @ 0x1800BADC9 (_ContentManagement--GetEventNameFromToken_--_1_--dtor$2.c)
 *     __anonymous_namespace_::GetImpressionEventExpirationTime_::_1_::dtor$1 @ 0x1800BADED (__anonymous_namespace_--GetImpressionEventExpirationTime_--_1_--dtor$1.c)
 *     _CreativeFramework::SubscribedContentStore::Details::SplitString_::_1_::dtor$0 @ 0x1800BB0A2 (_CreativeFramework--SubscribedContentStore--Details--SplitString_--_1_--dtor$0.c)
 *     _CreativeFramework::SubscribedContentStore::GetSubscriptionContext_::_1_::dtor$3 @ 0x1800BB70C (_CreativeFramework--SubscribedContentStore--GetSubscriptionContext_--_1_--dtor$3.c)
 *     _CreativeFramework::SubscribedContentStore::GetSubscriptionContext_::_1_::dtor$7 @ 0x1800BB71E (_CreativeFramework--SubscribedContentStore--GetSubscriptionContext_--_1_--dtor$7.c)
 * Callees:
 *     ?_Destroy@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@IEAAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@0@Z @ 0x18005A6F0 (-_Destroy@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V-.c)
 */

void __fastcall std::vector<std::wstring>::~vector<std::wstring>(_QWORD *a1)
{
  if ( *a1 )
  {
    std::vector<std::wstring>::_Destroy(a1, *a1, a1[1]);
    operator delete((void *)*a1);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
}
