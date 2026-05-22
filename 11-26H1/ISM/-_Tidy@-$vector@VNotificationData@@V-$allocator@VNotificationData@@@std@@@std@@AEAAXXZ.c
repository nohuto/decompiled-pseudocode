/*
 * XREFs of ?_Tidy@?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@AEAAXXZ @ 0x18004FB14
 * Callers:
 *     _InputSiteHierarchyManager::UpdateHierarchyFromInputSinkDataCache_::_1_::dtor$0 @ 0x1801D5D80 (_InputSiteHierarchyManager--UpdateHierarchyFromInputSinkDataCache_--_1_--dtor$0.c)
 *     _InputSinkDataCache::GetInstance_::_2_::_dynamic_atexit_destructor_for__instance__ @ 0x1801DDC90 (_InputSinkDataCache--GetInstance_--_2_--_dynamic_atexit_destructor_for__instance__.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<NotificationData>::_Tidy(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rsi
  __int64 v4; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 )
  {
    v3 = a1[1];
    while ( v1 != v3 )
    {
      v4 = *(_QWORD *)(v1 + 16);
      if ( v4 )
      {
        if ( v4 != -1 )
          NtCloseCompositionInputSink(v4);
      }
      v1 += 96LL;
    }
    result = std::_Deallocate<16>(*a1, 32 * ((__int64)(a1[2] - *a1) >> 5));
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return result;
}
