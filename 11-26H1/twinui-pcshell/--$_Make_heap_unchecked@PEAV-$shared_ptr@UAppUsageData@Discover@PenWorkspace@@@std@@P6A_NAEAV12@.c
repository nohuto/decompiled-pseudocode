/*
 * XREFs of ??$_Make_heap_unchecked@PEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@P6A_NAEAV12@0@Z@std@@YAXPEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@0P6A_NAEAV10@1@Z@Z @ 0x1803EAC3C
 * Callers:
 *     ??$_Sort_unchecked@PEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@P6A_NAEAV12@0@Z@std@@YAXPEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@0_JP6A_NAEAV10@2@Z@Z @ 0x1802B2518 (--$_Sort_unchecked@PEAV-$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@P6A_NAEAV12@0@Z@s.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Pop_heap_hole_by_index@PEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@V12@P6A_NAEAV12@0@Z@std@@YAXPEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@_J1$$QEAV10@P6A_NAEAV10@3@Z@Z @ 0x1803EB038 (--$_Pop_heap_hole_by_index@PEAV-$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@V12@P6A_N.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Make_heap_unchecked<std::shared_ptr<PenWorkspace::Discover::AppUsageData> *,bool (*)(std::shared_ptr<PenWorkspace::Discover::AppUsageData> &,std::shared_ptr<PenWorkspace::Discover::AppUsageData> &)>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  int v4; // ebp
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 *v7; // rbx
  __int64 v8; // [rsp+30h] [rbp-18h] BYREF
  std::_Ref_count_base *v9; // [rsp+38h] [rbp-10h]

  v4 = a1;
  v5 = (a2 - a1) >> 4;
  v6 = (a2 - a1) >> 5;
  if ( v6 > 0 )
  {
    v7 = (__int64 *)(a1 + 16 * v6);
    do
    {
      --v6;
      v7 -= 2;
      v8 = *v7;
      v9 = (std::_Ref_count_base *)v7[1];
      *v7 = 0LL;
      v7[1] = 0LL;
      std::_Pop_heap_hole_by_index<std::shared_ptr<PenWorkspace::Discover::AppUsageData> *,std::shared_ptr<PenWorkspace::Discover::AppUsageData>,bool (*)(std::shared_ptr<PenWorkspace::Discover::AppUsageData> &,std::shared_ptr<PenWorkspace::Discover::AppUsageData> &)>(
        v4,
        v6,
        v5,
        (unsigned int)&v8,
        a3);
      if ( v9 )
        std::_Ref_count_base::_Decref(v9);
    }
    while ( v6 > 0 );
  }
}
