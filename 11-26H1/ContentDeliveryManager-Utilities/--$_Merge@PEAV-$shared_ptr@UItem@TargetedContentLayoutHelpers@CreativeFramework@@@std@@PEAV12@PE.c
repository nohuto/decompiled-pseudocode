/*
 * XREFs of ??$_Merge@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@PEAV12@PEAV12@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@PEAV10@0000Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800B33A8
 * Callers:
 *     ??$_Buffered_merge@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@_JV12@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@00_J1AEAV?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800B21C8 (--$_Buffered_merge@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@.c)
 *     ??$_Chunked_merge@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@PEAV12@_JUless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@00_J1Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800B2AC0 (--$_Chunked_merge@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@P.c)
 * Callees:
 *     ??4?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800854FC (--4-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAAAEAV01@$$QEAV01@.c)
 *     ??$_Move@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@PEAV12@@std@@YAPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@PEAV10@00@Z @ 0x1800B3890 (--$_Move@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@PEAV12@@st.c)
 *     ??Rless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@QEAA_NAEBV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@0@Z @ 0x1800B4534 (--Rless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@QEAA_NAEBV-$shared_ptr@UItem@T.c)
 */

__int64 __fastcall std::_Merge<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,CreativeFramework::TargetedContentLayoutHelpers::less_than_rank>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4,
        __int64 *a5)
{
  __int64 *v9; // r10
  char v10; // al
  __int64 *v11; // r10
  __int64 *v12; // rdi
  __int64 *v13; // rdx
  char v14; // bl
  __int64 *v15; // rax
  __int64 v16; // rax

  v9 = a1;
  if ( a1 != a2 )
  {
    do
    {
      if ( a3 == a4 )
        break;
      v10 = CreativeFramework::TargetedContentLayoutHelpers::less_than_rank::operator()(a1, a3, v9);
      v12 = v11;
      v13 = a3;
      if ( !v10 )
      {
        v12 = v11 + 2;
        v13 = v11;
      }
      v14 = v10;
      std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::operator=(a5, v13);
      a5 += 2;
      v15 = a3 + 2;
      v9 = v12;
      if ( !v14 )
        v15 = a3;
      a3 = v15;
    }
    while ( v12 != a2 );
  }
  v16 = std::_Move<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *>(
          v9,
          a2,
          a5);
  return std::_Move<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *>(
           a3,
           a4,
           v16);
}
