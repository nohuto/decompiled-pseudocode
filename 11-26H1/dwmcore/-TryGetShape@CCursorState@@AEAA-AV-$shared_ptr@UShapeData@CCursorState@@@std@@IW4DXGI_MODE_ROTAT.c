/*
 * XREFs of ?TryGetShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@IW4DXGI_MODE_ROTATION@@_N@Z @ 0x1802923D8
 * Callers:
 *     ?TryEnableHardwareCursor@CCursorState@@QEAA_NU_LUID@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@VCMILMatrix@@_N@Z @ 0x18015E0DC (-TryEnableHardwareCursor@CCursorState@@QEAA_NU_LUID@@IAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UN.c)
 *     ?EnsureCompositionResources@CCursorState@@QEAAXXZ @ 0x180291690 (-EnsureCompositionResources@CCursorState@@QEAAXXZ.c)
 * Callees:
 *     ??4?$shared_ptr@VCRegion@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180125C94 (--4-$shared_ptr@VCRegion@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180126C50 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     std::_Sort_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__CCursorState::SortShapeCache_::_2_::_lambda_1_____ @ 0x180290438 (std--_Sort_unchecked_std--shared_ptr_CCursorState--ShapeData____std--_Ref_fn__CCursorState--Sort.c)
 *     ??$emplace_back@AEAV?$shared_ptr@UShapeData@CCursorState@@@std@@@?$vector@V?$shared_ptr@UShapeData@CCursorState@@@std@@V?$allocator@V?$shared_ptr@UShapeData@CCursorState@@@std@@@2@@std@@QEAAAEAV?$shared_ptr@UShapeData@CCursorState@@@1@AEAV21@@Z @ 0x1802905D4 (--$emplace_back@AEAV-$shared_ptr@UShapeData@CCursorState@@@std@@@-$vector@V-$shared_ptr@UShapeDa.c)
 *     ??4?$shared_ptr@UShapeData@CCursorState@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x180290B74 (--4-$shared_ptr@UShapeData@CCursorState@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?AddShadowToShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@@Z @ 0x180290C5C (-AddShadowToShape@CCursorState@@AEAA-AV-$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@@Z.c)
 *     ?RotateShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@W4DXGI_MODE_ROTATION@@@Z @ 0x18029196C (-RotateShape@CCursorState@@AEAA-AV-$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@W4DXGI_MODE.c)
 *     ?ScaleShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@I@Z @ 0x180291BD4 (-ScaleShape@CCursorState@@AEAA-AV-$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@I@Z.c)
 */

__int64 __fastcall CCursorState::TryGetShape(__int64 a1, __int64 a2, int a3, int a4, char a5)
{
  _QWORD *v5; // rdi
  _QWORD *v7; // rdx
  std::_Ref_count_base *v11; // rax
  char v12; // r12
  char *v13; // rdx
  __int64 *v14; // rcx
  __int64 v15; // r8
  __int64 *v16; // rax
  __int64 v17; // r12
  __int64 *v18; // rax
  __int64 v19; // r14
  __int64 *v20; // rax
  __int64 v21; // rsi
  std::_Ref_count_base *v22; // rcx
  int v24; // [rsp+20h] [rbp-40h] BYREF
  int v25; // [rsp+28h] [rbp-38h] BYREF
  std::_Ref_count_base *v26[2]; // [rsp+30h] [rbp-30h] BYREF
  char *v27; // [rsp+40h] [rbp-20h] BYREF
  std::_Ref_count_base *v28; // [rsp+48h] [rbp-18h]
  int *v29; // [rsp+50h] [rbp-10h]
  char v30; // [rsp+90h] [rbp+30h] BYREF

  v5 = (_QWORD *)(a1 + 224);
  v7 = *(_QWORD **)(a1 + 224);
  *(_OWORD *)v26 = 0LL;
  if ( v7 == *(_QWORD **)(a1 + 232) )
    goto LABEL_22;
  std::shared_ptr<CCursorState::ShapeData>::operator=((__int64 *)v26, v7);
  v11 = v26[0];
  v12 = a5;
  if ( *((_BYTE *)v26[0] + 17) == a5 && *((_DWORD *)v26[0] + 2) == a4 && *((_DWORD *)v26[0] + 3) == a3 )
    goto LABEL_23;
  v13 = *(char **)(a1 + 232);
  v14 = (__int64 *)*v5;
  v27 = &v30;
  v15 = (__int64)&v13[-*v5];
  v28 = (std::_Ref_count_base *)&v24;
  v29 = &v25;
  v30 = a5;
  v25 = a4;
  v24 = a3;
  std::_Sort_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__CCursorState::SortShapeCache_::_2_::_lambda_1_____(
    v14,
    v13,
    v15 >> 4,
    (__int64)&v27);
  std::shared_ptr<CCursorState::ShapeData>::operator=((__int64 *)v26, (_QWORD *)*v5);
  v11 = v26[0];
  if ( *((_BYTE *)v26[0] + 17) != v12 )
  {
    v16 = CCursorState::AddShadowToShape(a1, &v27, (_QWORD **)(a1 + 176));
    v17 = *std::shared_ptr<CRegion>::operator=(v26, v16);
    if ( v28 )
      std::_Ref_count_base::_Decref(v28);
    if ( !v17 )
      goto LABEL_19;
    std::vector<std::shared_ptr<CCursorState::ShapeData>>::emplace_back<std::shared_ptr<CCursorState::ShapeData> &>(
      v5,
      v26);
    v11 = v26[0];
  }
  if ( *((_DWORD *)v11 + 2) != a4 )
  {
    v18 = CCursorState::RotateShape(a1, &v27, (int **)v26, a4);
    v19 = *std::shared_ptr<CRegion>::operator=(v26, v18);
    if ( v28 )
      std::_Ref_count_base::_Decref(v28);
    if ( !v19 )
      goto LABEL_19;
    std::vector<std::shared_ptr<CCursorState::ShapeData>>::emplace_back<std::shared_ptr<CCursorState::ShapeData> &>(
      v5,
      v26);
    v11 = v26[0];
  }
  if ( *((_DWORD *)v11 + 3) == a3 )
  {
LABEL_23:
    *(_QWORD *)a2 = v11;
    *(std::_Ref_count_base **)(a2 + 8) = v26[1];
    return a2;
  }
  v20 = CCursorState::ScaleShape(a1, &v27, (__int64 *)v26, a3);
  v21 = *std::shared_ptr<CRegion>::operator=(v26, v20);
  if ( v28 )
    std::_Ref_count_base::_Decref(v28);
  if ( v21 )
  {
    std::vector<std::shared_ptr<CCursorState::ShapeData>>::emplace_back<std::shared_ptr<CCursorState::ShapeData> &>(
      v5,
      v26);
LABEL_22:
    v11 = v26[0];
    goto LABEL_23;
  }
LABEL_19:
  v22 = v26[1];
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  if ( v22 )
    std::_Ref_count_base::_Decref(v22);
  return a2;
}
