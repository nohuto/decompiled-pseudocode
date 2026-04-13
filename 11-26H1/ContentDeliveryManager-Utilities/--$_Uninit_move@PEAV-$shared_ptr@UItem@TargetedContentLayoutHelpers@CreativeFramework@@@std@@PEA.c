/*
 * XREFs of ??$_Uninit_move@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@PEAV12@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@V12@@std@@YAPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@PEAV10@00AEAU?$_Wrap_alloc@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@@0@0U_Nonscalar_ptr_iterator_tag@0@@Z @ 0x1800AD810
 * Callers:
 *     ?_Reallocate@?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@IEAAX_K@Z @ 0x1800B1C5C (-_Reallocate@-$vector@V-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@.c)
 * Callees:
 *     ??0?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAA@$$QEAV01@@Z @ 0x18004B7AC (--0-$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAA@$$QEAV01.c)
 */

__int64 *__fastcall std::_Uninit_move<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::allocator<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 *v4; // r10
  __int64 v5; // r9
  __int64 v6; // r10
  __int64 *v7; // r11

  v4 = a1;
  if ( a1 != a2 )
  {
    do
    {
      std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>(
        a3,
        v4);
      a3 = (__int64 *)(v5 + 16);
      v4 = (__int64 *)(v6 + 16);
    }
    while ( v4 != v7 );
  }
  return a3;
}
