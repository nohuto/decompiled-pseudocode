/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMILSurfaceRect_@RectUniqueness@@@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAPEAUtagRECT@@QEAU2@AEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x1800B1DF4
 * Callers:
 *     ??$emplace_back@AEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMILSurfaceRect_@RectUniqueness@@@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAAAEAUtagRECT@@AEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x1800B1F48 (--$emplace_back@AEBV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMILSurfaceRect_@.c)
 *     ??$_Emplace_reallocate@AEBW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@?$vector@UUnifiedTargetRect@CStoryboard@@V?$allocator@UUnifiedTargetRect@CStoryboard@@@std@@@std@@AEAAPEAUUnifiedTargetRect@CStoryboard@@QEAU23@AEBW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z @ 0x1800BFCD0 (--$_Emplace_reallocate@AEBW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@-$vector@UUnifiedTargetRect@CSto.c)
 *     ??$emplace_back@AEBW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@?$vector@UUnifiedTargetRect@CStoryboard@@V?$allocator@UUnifiedTargetRect@CStoryboard@@@std@@@std@@QEAAAEAUUnifiedTargetRect@CStoryboard@@AEBW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z @ 0x1800BFF64 (--$emplace_back@AEBW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@-$vector@UUnifiedTargetRect@CStoryboard.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x18000D1E0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength@?$vector@PEAVCVisualProxy@@V?$allocator@PEAVCVisualProxy@@@std@@@std@@CAXXZ @ 0x180085AA8 (-_Xlength@-$vector@PEAVCVisualProxy@@V-$allocator@PEAVCVisualProxy@@@std@@@std@@CAXXZ.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x18008C7C8 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAUtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@YAPEAUtagRECT@@QEAU1@0PEAU1@AEAV?$allocator@UtagRECT@@@0@@Z @ 0x1800B1F08 (--$_Uninitialized_move@PEAUtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@YAPEAUtagRECT@@QEAU1@0PEA.c)
 *     ??1_Reallocation_guard@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAA@XZ @ 0x1800B21B8 (--1_Reallocation_guard@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAA@XZ.c)
 *     ?_Calculate_growth@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEBA_K_K@Z @ 0x1800B28E4 (-_Calculate_growth@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@AEBA_K_K@Z.c)
 *     ?_Change_array@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAXQEAUtagRECT@@_K1@Z @ 0x1800B2920 (-_Change_array@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@AEAAXQEAUtagRECT@@_K1@Z.c)
 */

char *__fastcall std::vector<tagRECT>::_Emplace_reallocate<TMilRect_<int,tagRECT,Mil3DRectL,D2D_POINTANDSIZE_L,RectUniqueness::_CMILSurfaceRect_> const &>(
        _QWORD *a1,
        __int64 a2,
        __int128 *a3)
{
  __int64 v4; // rsi
  __int64 v6; // rax
  __int64 v8; // r15
  unsigned __int64 v9; // r14
  unsigned __int64 size_of; // rax
  char *v11; // rax
  __int128 v12; // xmm0
  char *v13; // rsi
  char *v14; // rdi
  _OWORD *v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD *v19; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v20; // [rsp+30h] [rbp-48h]
  char *v21; // [rsp+38h] [rbp-40h]
  _OWORD *v22; // [rsp+40h] [rbp-38h]

  v4 = a2 - *a1;
  v6 = (__int64)(a1[1] - *a1) >> 4;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    std::vector<CVisualProxy *>::_Xlength((const char *)0xFFFFFFFFFFFFFFFLL);
  v8 = v6 + 1;
  v9 = std::vector<tagRECT>::_Calculate_growth(a1, v6 + 1);
  size_of = std::_Get_size_of_n<16>(v9);
  v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v12 = *a3;
  v19 = a1;
  v13 = &v11[v4 & 0xFFFFFFFFFFFFFFF0uLL];
  v20 = v9;
  v14 = v11;
  v21 = v13;
  v15 = v11;
  *(_OWORD *)v13 = v12;
  v16 = a1[1];
  v17 = *a1;
  v22 = v13 + 16;
  if ( a2 != v16 )
  {
    std::_Uninitialized_move<tagRECT *>(v17, a2, v11);
    v16 = a1[1];
    v15 = v13 + 16;
    v17 = a2;
    v21 = v14;
  }
  std::_Uninitialized_move<tagRECT *>(v17, v16, v15);
  std::vector<tagRECT>::_Change_array(a1, v14, v8, v9, v19, 0LL, v20, v21, v22);
  std::vector<tagRECT>::_Reallocation_guard::~_Reallocation_guard(&v19);
  return v13;
}
