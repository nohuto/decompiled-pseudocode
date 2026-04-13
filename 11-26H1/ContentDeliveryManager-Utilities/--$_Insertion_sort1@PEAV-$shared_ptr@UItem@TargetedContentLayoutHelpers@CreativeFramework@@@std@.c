/*
 * XREFs of ??$_Insertion_sort1@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@V12@@std@@YAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@0Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@0@Z @ 0x1800B2FF8
 * Callers:
 *     ??$_Buffered_merge_sort@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@_JV12@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@0_JAEAV?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800B2764 (--$_Buffered_merge_sort@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@.c)
 *     ??$_Stable_sort@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@_JV12@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@0_JAEAV?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800B3DF8 (--$_Stable_sort@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramewo_ea_1800B3DF8.c)
 * Callees:
 *     ??0?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAA@$$QEAV01@@Z @ 0x18004B7AC (--0-$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAA@$$QEAV01.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18005A5D4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800854FC (--4-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAAAEAV01@$$QEAV01@.c)
 *     ??$_Move_backward@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@PEAV12@@std@@YAPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@PEAV10@00@Z @ 0x1800B3984 (--$_Move_backward@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@P.c)
 *     ??Rless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@QEAA_NAEBV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@0@Z @ 0x1800B4534 (--Rless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@QEAA_NAEBV-$shared_ptr@UItem@T.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Insertion_sort1<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,CreativeFramework::TargetedContentLayoutHelpers::less_than_rank,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *v4; // rbx
  __int64 *v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 *v8; // rcx
  __int64 *v9; // r14
  __int64 *i; // r8
  char v11; // al
  __int64 *v12; // r9
  __int64 v13; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v14; // [rsp+28h] [rbp-10h]

  if ( a1 != a2 )
  {
    v4 = a1 + 2;
    if ( a1 + 2 != a2 )
    {
      v5 = a1;
      do
      {
        std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>(
          &v13,
          v4);
        if ( (unsigned __int8)CreativeFramework::TargetedContentLayoutHelpers::less_than_rank::operator()(v6, &v13, a1) )
        {
          std::_Move_backward<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *>(
            a1,
            v4,
            v5 + 4);
          v8 = a1;
        }
        else
        {
          v9 = v5;
          for ( i = v5; ; i = v9 )
          {
            v11 = CreativeFramework::TargetedContentLayoutHelpers::less_than_rank::operator()(v7, &v13, i);
            v8 = v12;
            if ( !v11 )
              break;
            std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::operator=(v12, v9);
            v9 -= 2;
          }
        }
        std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::operator=(v8, &v13);
        if ( v14 )
          std::_Ref_count_base::_Decref(v14);
        v4 += 2;
        v5 += 2;
      }
      while ( v4 != a2 );
    }
  }
}
