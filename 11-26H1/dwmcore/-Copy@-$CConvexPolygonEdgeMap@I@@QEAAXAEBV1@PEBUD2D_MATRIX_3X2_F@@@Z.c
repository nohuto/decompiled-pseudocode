/*
 * XREFs of ?Copy@?$CConvexPolygonEdgeMap@I@@QEAAXAEBV1@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18025DAD8
 * Callers:
 *     ?Copy@CEdgeFlagsMap@@QEAAXAEBV1@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801A1DB4 (-Copy@CEdgeFlagsMap@@QEAAXAEBV1@PEBUD2D_MATRIX_3X2_F@@@Z.c)
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@PEAX@2@PEAU32@@Z @ 0x1800316A0 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@-$CConvexPolygonEd.c)
 *     ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x180036DA0 (-IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ.c)
 *     ??$_Emplace_hint@UD2D_VECTOR_2F@@AEAUEdgeData@?$CConvexPolygonEdgeMap@I@@@?$_Tree@V?$_Tmap_traits@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@UCompareEdgeDirection@3@V?$allocator@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@@std@@@std@@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@@std@@PEAX@1@QEAU21@$$QEAUD2D_VECTOR_2F@@AEAUEdgeData@?$CConvexPolygonEdgeMap@I@@@Z @ 0x180144238 (--$_Emplace_hint@UD2D_VECTOR_2F@@AEAUEdgeData@-$CConvexPolygonEdgeMap@I@@@-$_Tree@V-$_Tmap_trait.c)
 *     ?DecomposeMatrixIntoScaleAndRemaining@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z @ 0x180196F78 (-DecomposeMatrixIntoScaleAndRemaining@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z.c)
 *     ??F?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1801D3F14 (--F-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUD2D_VECTOR_2.c)
 *     ??$_Copy_nodes@$0A@@?$_Tree@V?$_Tmap_traits@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@UCompareEdgeDirection@3@V?$allocator@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@@std@@@std@@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@@std@@PEAX@1@PEAU21@0@Z @ 0x1801E3780 (--$_Copy_nodes@$0A@@-$_Tree@V-$_Tmap_traits@$$CBUD2D_VECTOR_2F@@UEdgeData@-$CConvexPolygonEdgeMa.c)
 *     ??C?$reverse_iterator@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@@std@@@std@@@std@@@std@@@std@@QEBAPEBU?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@@1@XZ @ 0x18020CCF8 (--C-$reverse_iterator@V-$_Tree_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUD2.c)
 *     ?_Max@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@PEAX@2@PEAU32@@Z @ 0x18021C594 (-_Max@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@-$CConvexPolygonEd.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@UCompareEdgeDirection@3@V?$allocator@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@@std@@@std@@$0A@@std@@@std@@QEAAXXZ @ 0x18025DC6C (-clear@-$_Tree@V-$_Tmap_traits@$$CBUD2D_VECTOR_2F@@UEdgeData@-$CConvexPolygonEdgeMap@I@@UCompare.c)
 */

void __fastcall CConvexPolygonEdgeMap<unsigned int>::Copy(__int64 a1, __int64 *a2, float *a3)
{
  D2DMatrixHelper *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  float v9; // xmm3_4
  __int64 v10; // rax
  char *v11; // rdx
  __m128 v12; // xmm3
  __m128 v13; // xmm1
  char *v14; // r8
  __int64 v15; // rcx
  _QWORD *v16; // rax
  _QWORD *v17; // r8
  __int64 v18; // rax
  __int64 v19; // rdx
  float v20[4]; // [rsp+20h] [rbp-30h] BYREF
  __int128 v21; // [rsp+30h] [rbp-20h] BYREF
  __int64 v22; // [rsp+40h] [rbp-10h]
  __int64 v23; // [rsp+80h] [rbp+30h] BYREF
  unsigned __int64 v24; // [rsp+88h] [rbp+38h] BYREF

  if ( !a3 || D2D1::Matrix3x2F::IsIdentity((D2D1::Matrix3x2F *)a3) )
  {
    if ( (__int64 *)a1 != a2 )
    {
      std::_Tree<std::_Tmap_traits<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<unsigned int>::EdgeData,CConvexPolygonEdgeMap<unsigned int>::CompareEdgeDirection,std::allocator<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<unsigned int>::EdgeData>>,0>>::clear(a1);
      *(_QWORD *)(*(_QWORD *)a1 + 8LL) = std::_Tree<std::_Tmap_traits<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<unsigned int>::EdgeData,CConvexPolygonEdgeMap<unsigned int>::CompareEdgeDirection,std::allocator<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<unsigned int>::EdgeData>>,0>>::_Copy_nodes<0>(
                                           (char **)a1,
                                           *(_QWORD *)(*a2 + 8),
                                           *(_QWORD *)a1);
      v14 = *(char **)a1;
      *(_QWORD *)(a1 + 8) = a2[1];
      v15 = *((_QWORD *)v14 + 1);
      if ( *(_BYTE *)(v15 + 25) )
      {
        *(_QWORD *)v14 = v14;
        *(_QWORD *)(*(_QWORD *)a1 + 16LL) = *(_QWORD *)a1;
      }
      else
      {
        v16 = std::_Tree_val<std::_Tree_simple_types<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::EdgeData>>>::_Min((_QWORD *)v15);
        *v17 = v16;
        v18 = std::_Tree_val<std::_Tree_simple_types<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::EdgeData>>>::_Max(*(_QWORD *)(*(_QWORD *)a1 + 8LL));
        *(_QWORD *)(v19 + 16) = v18;
      }
    }
  }
  else
  {
    v22 = 0LL;
    LODWORD(v24) = 0;
    LODWORD(v23) = 0;
    v21 = 0LL;
    D2DMatrixHelper::DecomposeMatrixIntoScaleAndRemaining(
      v6,
      (const struct D2D_MATRIX_3X2_F *)&v24,
      (float *)&v23,
      (float *)&v21);
    v7 = *a2;
    v23 = *a2;
    while ( v7 != *(_QWORD *)*a2 )
    {
      v8 = std::reverse_iterator<std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<unsigned int>::EdgeData>>>>>::operator->(&v23);
      v9 = (float)((float)(*(float *)(v8 + 12) * a3[3]) + (float)(*(float *)(v8 + 8) * a3[1])) + a3[5];
      v20[0] = (float)((float)(*(float *)(v8 + 12) * a3[2]) + (float)(*(float *)(v8 + 8) * *a3)) + a3[4];
      v20[1] = v9;
      v20[2] = *(float *)(std::reverse_iterator<std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<unsigned int>::EdgeData>>>>>::operator->(&v23)
                        + 16);
      v10 = std::reverse_iterator<std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<unsigned int>::EdgeData>>>>>::operator->(&v23);
      v11 = *(char **)a1;
      v12 = (__m128)*(unsigned int *)(v10 + 4);
      v13 = v12;
      v13.m128_f32[0] = (float)(v12.m128_f32[0] * *((float *)&v21 + 2)) + (float)(*(float *)v10 * *(float *)&v21);
      v12.m128_f32[0] = (float)(v12.m128_f32[0] * *((float *)&v21 + 3)) + (float)(*(float *)v10 * *((float *)&v21 + 1));
      v24 = _mm_unpacklo_ps(v13, v12).m128_u64[0];
      std::_Tree<std::_Tmap_traits<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<unsigned int>::EdgeData,CConvexPolygonEdgeMap<unsigned int>::CompareEdgeDirection,std::allocator<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<unsigned int>::EdgeData>>,0>>::_Emplace_hint<D2D_VECTOR_2F,CConvexPolygonEdgeMap<unsigned int>::EdgeData &>(
        (unsigned __int64 *)a1,
        (__int64)v11,
        (__int64)&v24,
        (__int64)v20);
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<unsigned int>::EdgeData>>>,std::_Iterator_base0>::operator--(&v23);
      v7 = v23;
    }
  }
}
