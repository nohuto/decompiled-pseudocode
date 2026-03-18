/*
 * XREFs of ??$emplace_back@AEA_KPEAVIBitmapRealization@@AEA_NAEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEAVMILMatrix3x2@@@?$list@UTrailPoint@CCursorState@@V?$allocator@UTrailPoint@CCursorState@@@std@@@std@@QEAAAEAUTrailPoint@CCursorState@@AEA_K$$QEAPEAVIBitmapRealization@@AEA_NAEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEAVMILMatrix3x2@@@Z @ 0x180290618
 * Callers:
 *     ?ProcessStateChanges@CCursorState@@QEAA_N_K@Z @ 0x18018A118 (-ProcessStateChanges@CCursorState@@QEAA_N_K@Z.c)
 * Callees:
 *     ??$?0AEA_KPEAVIBitmapRealization@@AEA_NAEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEAVMILMatrix3x2@@@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@UTrailPoint@CCursorState@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@UTrailPoint@CCursorState@@PEAX@std@@@1@AEA_K$$QEAPEAVIBitmapRealization@@AEA_NAEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEAVMILMatrix3x2@@@Z @ 0x18028F6D8 (--$-0AEA_KPEAVIBitmapRealization@@AEA_NAEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDS.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@UTrailPoint@CCursorState@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18029093C (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@UTrailPoint@CCursorState@@PEAX@std@@@std@.c)
 */

_QWORD *__fastcall std::list<CCursorState::TrailPoint>::emplace_back<unsigned __int64 &,IBitmapRealization *,bool &,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> &,MILMatrix3x2 &>(
        __int64 *a1,
        _QWORD *a2,
        __int64 *a3,
        char *a4,
        const __m128i *a5,
        __int128 *a6)
{
  __int64 v6; // rdi
  _QWORD *v8; // rbx
  _QWORD *v9; // rax
  __int64 v11; // [rsp+40h] [rbp-18h] BYREF
  _QWORD *v12; // [rsp+48h] [rbp-10h]

  v6 = *a1;
  if ( a1[1] == 0x333333333333333LL )
    std::_Xlength_error("list too long");
  std::_List_node_emplace_op2<std::allocator<std::_List_node<CCursorState::TrailPoint,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<CCursorState::TrailPoint,void *>>>(
    &v11,
    (__int64)a1,
    a2,
    a3,
    a4,
    a5,
    a6);
  ++a1[1];
  v8 = v12;
  v9 = *(_QWORD **)(v6 + 8);
  v12 = 0LL;
  *v8 = v6;
  v8[1] = v9;
  *(_QWORD *)(v6 + 8) = v8;
  *v9 = v8;
  std::_List_node_emplace_op2<std::allocator<std::_List_node<CCursorState::TrailPoint,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<CCursorState::TrailPoint,void *>>>(&v11);
  return v8 + 2;
}
