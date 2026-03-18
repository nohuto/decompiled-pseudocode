/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@UTrailPoint@CCursorState@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18029093C
 * Callers:
 *     ??$emplace_back@AEA_KPEAVIBitmapRealization@@AEA_NAEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEAVMILMatrix3x2@@@?$list@UTrailPoint@CCursorState@@V?$allocator@UTrailPoint@CCursorState@@@std@@@std@@QEAAAEAUTrailPoint@CCursorState@@AEA_K$$QEAPEAVIBitmapRealization@@AEA_NAEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEAVMILMatrix3x2@@@Z @ 0x180290618 (--$emplace_back@AEA_KPEAVIBitmapRealization@@AEA_NAEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<CCursorState::TrailPoint,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<CCursorState::TrailPoint,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)(v2 + 24));
  std::_Alloc_construct_ptr<std::allocator<std::_List_node<CCursorState::TrailPoint,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<CCursorState::TrailPoint,void *>>>(a1);
}
