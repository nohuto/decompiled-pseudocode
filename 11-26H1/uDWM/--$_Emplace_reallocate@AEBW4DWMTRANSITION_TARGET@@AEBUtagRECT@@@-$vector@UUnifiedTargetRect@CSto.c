/*
 * XREFs of ??$_Emplace_reallocate@AEBW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@?$vector@UUnifiedTargetRect@CStoryboard@@V?$allocator@UUnifiedTargetRect@CStoryboard@@@std@@@std@@AEAAPEAUUnifiedTargetRect@CStoryboard@@QEAU23@AEBW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z @ 0x1800BFCD0
 * Callers:
 *     ??$emplace_back@AEBW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@?$vector@UUnifiedTargetRect@CStoryboard@@V?$allocator@UUnifiedTargetRect@CStoryboard@@@std@@@std@@QEAAAEAUUnifiedTargetRect@CStoryboard@@AEBW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z @ 0x1800BFF64 (--$emplace_back@AEBW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@-$vector@UUnifiedTargetRect@CStoryboard.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x18000D1E0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength@?$vector@PEAVCVisualProxy@@V?$allocator@PEAVCVisualProxy@@@std@@@std@@CAXXZ @ 0x180085AA8 (-_Xlength@-$vector@PEAVCVisualProxy@@V-$allocator@PEAVCVisualProxy@@@std@@@std@@CAXXZ.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18008726C (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??$_Emplace_reallocate@AEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMILSurfaceRect_@RectUniqueness@@@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAPEAUtagRECT@@QEAU2@AEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x1800B1DF4 (--$_Emplace_reallocate@AEBV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMILSurfac.c)
 *     ??$_Uninitialized_move@PEAUUnifiedTargetRect@CStoryboard@@V?$allocator@UUnifiedTargetRect@CStoryboard@@@std@@@std@@YAPEAUUnifiedTargetRect@CStoryboard@@QEAU12@0PEAU12@AEAV?$allocator@UUnifiedTargetRect@CStoryboard@@@0@@Z @ 0x1800BFED8 (--$_Uninitialized_move@PEAUUnifiedTargetRect@CStoryboard@@V-$allocator@UUnifiedTargetRect@CStory.c)
 *     ??1_Reallocation_guard@?$vector@UUnifiedTargetRect@CStoryboard@@V?$allocator@UUnifiedTargetRect@CStoryboard@@@std@@@std@@QEAA@XZ @ 0x1800C04C4 (--1_Reallocation_guard@-$vector@UUnifiedTargetRect@CStoryboard@@V-$allocator@UUnifiedTargetRect@.c)
 *     ?_Change_array@?$vector@UUnifiedTargetRect@CStoryboard@@V?$allocator@UUnifiedTargetRect@CStoryboard@@@std@@@std@@AEAAXQEAUUnifiedTargetRect@CStoryboard@@_K1@Z @ 0x1800C2FB4 (-_Change_array@-$vector@UUnifiedTargetRect@CStoryboard@@V-$allocator@UUnifiedTargetRect@CStorybo.c)
 */

// Hidden C++ exception states: #wind=2
char *__fastcall std::vector<CStoryboard::UnifiedTargetRect>::_Emplace_reallocate<enum DWMTRANSITION_TARGET const &,tagRECT const &>(
        const char *a1,
        __int64 a2,
        int *a3,
        __int128 *a4)
{
  __int64 v7; // r14
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rbx
  char *v13; // rsi
  char *v14; // r14
  int v15; // eax
  __int128 *v16; // rdx
  __int64 v17; // rdx
  char *v18; // r8
  __int64 v19; // rcx
  _QWORD v21[2]; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v22; // [rsp+30h] [rbp-58h]
  char *v23; // [rsp+38h] [rbp-50h]
  char *v24; // [rsp+40h] [rbp-48h]

  v7 = (a2 - *(_QWORD *)a1) / 48;
  v8 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*((_QWORD *)a1 + 1) - *(_QWORD *)a1) >> 4);
  if ( v8 == 0x555555555555555LL )
    std::vector<CVisualProxy *>::_Xlength(a1);
  v9 = v8 + 1;
  v10 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*((_QWORD *)a1 + 2) - *(_QWORD *)a1) >> 4);
  v11 = v10 >> 1;
  if ( v10 <= 0x555555555555555LL - (v10 >> 1) )
  {
    v12 = v9;
    if ( v11 + v10 >= v9 )
      v12 = v11 + v10;
    if ( v12 > 0x555555555555555LL )
      std::_Throw_bad_array_new_length();
  }
  else
  {
    v12 = 0x555555555555555LL;
  }
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(48 * v12);
  v14 = &v13[48 * v7];
  v21[0] = a1;
  v21[1] = v13;
  v22 = v12;
  v23 = v14 + 48;
  v24 = v14 + 48;
  v15 = *a3;
  *((_QWORD *)v14 + 3) = 0LL;
  *((_QWORD *)v14 + 4) = 0LL;
  *((_QWORD *)v14 + 5) = 0LL;
  *(_DWORD *)v14 = v15 & 0xFFF;
  *(_OWORD *)(v14 + 4) = *a4;
  v16 = (__int128 *)*((_QWORD *)v14 + 4);
  if ( v16 == *((__int128 **)v14 + 5) )
  {
    std::vector<tagRECT>::_Emplace_reallocate<TMilRect_<int,tagRECT,Mil3DRectL,D2D_POINTANDSIZE_L,RectUniqueness::_CMILSurfaceRect_> const &>(
      (_QWORD *)v14 + 3,
      (__int64)v16,
      a4);
  }
  else
  {
    *v16 = *a4;
    *((_QWORD *)v14 + 4) += 16LL;
  }
  v23 = v14;
  v17 = *((_QWORD *)a1 + 1);
  v18 = v13;
  v19 = *(_QWORD *)a1;
  if ( a2 != v17 )
  {
    std::_Uninitialized_move<CStoryboard::UnifiedTargetRect *>(v19, a2, v13);
    v23 = v13;
    v18 = v14 + 48;
    v17 = *((_QWORD *)a1 + 1);
    v19 = a2;
  }
  std::_Uninitialized_move<CStoryboard::UnifiedTargetRect *>(v19, v17, v18);
  std::vector<CStoryboard::UnifiedTargetRect>::_Change_array(a1, v13, v9, v12, v21[0], 0LL, v22, v23, v24);
  std::vector<CStoryboard::UnifiedTargetRect>::_Reallocation_guard::~_Reallocation_guard(v21);
  return v14;
}
