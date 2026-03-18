/*
 * XREFs of ??$_Emplace_reallocate@AEAV?$shared_ptr@UShapeData@CCursorState@@@std@@@?$vector@V?$shared_ptr@UShapeData@CCursorState@@@std@@V?$allocator@V?$shared_ptr@UShapeData@CCursorState@@@std@@@2@@std@@AEAAPEAV?$shared_ptr@UShapeData@CCursorState@@@1@QEAV21@AEAV21@@Z @ 0x18028F904
 * Callers:
 *     ??$emplace_back@AEAV?$shared_ptr@UShapeData@CCursorState@@@std@@@?$vector@V?$shared_ptr@UShapeData@CCursorState@@@std@@V?$allocator@V?$shared_ptr@UShapeData@CCursorState@@@std@@@2@@std@@QEAAAEAV?$shared_ptr@UShapeData@CCursorState@@@1@AEAV21@@Z @ 0x1802905D4 (--$emplace_back@AEAV-$shared_ptr@UShapeData@CCursorState@@@std@@@-$vector@V-$shared_ptr@UShapeDa.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x1800E8734 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength@?$vector@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@CAXXZ @ 0x1801C2418 (-_Xlength@-$vector@V-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ??0?$shared_ptr@UShapeData@CCursorState@@@std@@QEAA@AEBV01@@Z @ 0x1801DBDF0 (--0-$shared_ptr@UShapeData@CCursorState@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Uninitialized_move@PEAV?$shared_ptr@UShapeData@CCursorState@@@std@@V?$allocator@V?$shared_ptr@UShapeData@CCursorState@@@std@@@2@@std@@YAPEAV?$shared_ptr@UShapeData@CCursorState@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$shared_ptr@UShapeData@CCursorState@@@std@@@0@@Z @ 0x180290574 (--$_Uninitialized_move@PEAV-$shared_ptr@UShapeData@CCursorState@@@std@@V-$allocator@V-$shared_pt.c)
 *     ??1_Reallocation_guard@?$vector@V?$shared_ptr@UShapeData@CCursorState@@@std@@V?$allocator@V?$shared_ptr@UShapeData@CCursorState@@@std@@@2@@std@@QEAA@XZ @ 0x180290B38 (--1_Reallocation_guard@-$vector@V-$shared_ptr@UShapeData@CCursorState@@@std@@V-$allocator@V-$sha.c)
 *     ?_Change_array@?$vector@V?$shared_ptr@UShapeData@CCursorState@@@std@@V?$allocator@V?$shared_ptr@UShapeData@CCursorState@@@std@@@2@@std@@AEAAXQEAV?$shared_ptr@UShapeData@CCursorState@@@2@_K1@Z @ 0x180292640 (-_Change_array@-$vector@V-$shared_ptr@UShapeData@CCursorState@@@std@@V-$allocator@V-$shared_ptr@.c)
 */

char *__fastcall std::vector<std::shared_ptr<CCursorState::ShapeData>>::_Emplace_reallocate<std::shared_ptr<CCursorState::ShapeData> &>(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v6; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  __int64 v13; // rdx
  char *v14; // rax
  char *v15; // r14
  char *v16; // rsi
  __int64 v17; // rdx
  _QWORD *v18; // r8
  __int64 v19; // rcx
  _QWORD *v21; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v22; // [rsp+30h] [rbp-48h]
  char *v23; // [rsp+38h] [rbp-40h]
  _QWORD *v24; // [rsp+40h] [rbp-38h]

  v3 = 0xFFFFFFFFFFFFFFFLL;
  v4 = a2 - *a1;
  v6 = (__int64)(a1[1] - *a1) >> 4;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    std::vector<TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Xlength();
  v9 = v6 + 1;
  v10 = (__int64)(a1[2] - *a1) >> 4;
  v11 = v10 >> 1;
  if ( v10 <= 0xFFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v6 + 1;
  }
  size_of = std::_Get_size_of_n<16>(v3);
  v14 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of, v13);
  v21 = a1;
  v15 = &v14[v4 & 0xFFFFFFFFFFFFFFF0uLL];
  v22 = v3;
  v16 = v14;
  v24 = v15 + 16;
  std::shared_ptr<CCursorState::ShapeData>::shared_ptr<CCursorState::ShapeData>(v15, a3);
  v17 = a1[1];
  v18 = v16;
  v19 = *a1;
  v23 = v15;
  if ( a2 != v17 )
  {
    std::_Uninitialized_move<std::shared_ptr<CCursorState::ShapeData> *,std::allocator<std::shared_ptr<CCursorState::ShapeData>>>(
      v19,
      a2,
      v16);
    v17 = a1[1];
    v18 = v15 + 16;
    v19 = a2;
    v23 = v16;
  }
  std::_Uninitialized_move<std::shared_ptr<CCursorState::ShapeData> *,std::allocator<std::shared_ptr<CCursorState::ShapeData>>>(
    v19,
    v17,
    v18);
  std::vector<std::shared_ptr<CCursorState::ShapeData>>::_Change_array(a1, v16, v9, v3, v21, 0LL, v22, v23, v24);
  std::vector<std::shared_ptr<CCursorState::ShapeData>>::_Reallocation_guard::~_Reallocation_guard(&v21);
  return v15;
}
