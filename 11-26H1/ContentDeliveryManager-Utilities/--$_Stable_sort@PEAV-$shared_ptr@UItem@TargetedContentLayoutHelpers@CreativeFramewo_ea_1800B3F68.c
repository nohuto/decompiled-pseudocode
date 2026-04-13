/*
 * XREFs of ??$_Stable_sort@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@_JV12@Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@0_JAEAV?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800B3F68
 * Callers:
 *     ??$_Stable_sort@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@_JV12@Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@0PEA_J0Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800B3EF8 (--$_Stable_sort@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramewo_ea_1800B3EF8.c)
 *     ??$_Stable_sort@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@_JV12@Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@0_JAEAV?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800B3F68 (--$_Stable_sort@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramewo_ea_1800B3F68.c)
 * Callees:
 *     ??$_Buffered_merge@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@_JV12@Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@00_J1AEAV?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800B2498 (--$_Buffered_merge@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFram_ea_1800B2498.c)
 *     ??$_Buffered_merge_sort@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@_JV12@Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@0_JAEAV?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800B2860 (--$_Buffered_merge_sort@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@Creativ_ea_1800B2860.c)
 *     ??$_Insertion_sort1@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@V12@@std@@YAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@0Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@0@Z @ 0x1800B30E0 (--$_Insertion_sort1@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFra_ea_1800B30E0.c)
 *     ??$_Stable_sort@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@_JV12@Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@0_JAEAV?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800B3F68 (--$_Stable_sort@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramewo_ea_1800B3F68.c)
 *     ?_Maxlen@?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@QEAA_JXZ @ 0x1800B4B30 (-_Maxlen@-$_Temp_iterator@V-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@s.c)
 */

void __fastcall std::_Stable_sort<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,__int64,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>,CreativeFramework::TargetedContentLayoutHelpers::less_than_special_bindings>(
        char *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        char a5)
{
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // rdi
  char *v11; // rbp

  if ( a3 > 32 )
  {
    v8 = (a3 + 1) / 2;
    v9 = v8;
    v10 = a3 - v8;
    v11 = &a1[16 * v8];
    if ( v8 > std::_Temp_iterator<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::_Maxlen(a4) )
    {
      std::_Stable_sort<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,__int64,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>,CreativeFramework::TargetedContentLayoutHelpers::less_than_special_bindings>(
        (_DWORD)a1,
        (_DWORD)v11,
        v9,
        a4,
        a5);
      std::_Stable_sort<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,__int64,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>,CreativeFramework::TargetedContentLayoutHelpers::less_than_special_bindings>(
        (_DWORD)v11,
        (_DWORD)a2,
        v10,
        a4,
        a5);
    }
    else
    {
      std::_Buffered_merge_sort<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,__int64,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>,CreativeFramework::TargetedContentLayoutHelpers::less_than_special_bindings>(
        (__int64)a1,
        (__int64)v11,
        v9,
        a4,
        a5);
      std::_Buffered_merge_sort<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,__int64,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>,CreativeFramework::TargetedContentLayoutHelpers::less_than_special_bindings>(
        (__int64)v11,
        (__int64)a2,
        v10,
        a4,
        a5);
    }
    std::_Buffered_merge<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,__int64,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>,CreativeFramework::TargetedContentLayoutHelpers::less_than_special_bindings>(
      a1,
      v11,
      (__int64)a2,
      v9,
      v10,
      a4,
      a5);
  }
  else
  {
    std::_Insertion_sort1<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,CreativeFramework::TargetedContentLayoutHelpers::less_than_special_bindings,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>(
      (__int64 *)a1,
      a2);
  }
}
