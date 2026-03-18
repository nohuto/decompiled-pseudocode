/*
 * XREFs of ??$?0AEA_KPEAVIBitmapRealization@@AEA_NAEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEAVMILMatrix3x2@@@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@UTrailPoint@CCursorState@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@UTrailPoint@CCursorState@@PEAX@std@@@1@AEA_K$$QEAPEAVIBitmapRealization@@AEA_NAEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEAVMILMatrix3x2@@@Z @ 0x18028F6D8
 * Callers:
 *     ??$emplace_back@AEA_KPEAVIBitmapRealization@@AEA_NAEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEAVMILMatrix3x2@@@?$list@UTrailPoint@CCursorState@@V?$allocator@UTrailPoint@CCursorState@@@std@@@std@@QEAAAEAUTrailPoint@CCursorState@@AEA_K$$QEAPEAVIBitmapRealization@@AEA_NAEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEAVMILMatrix3x2@@@Z @ 0x180290618 (--$emplace_back@AEA_KPEAVIBitmapRealization@@AEA_NAEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??0?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedTexture@@@Z @ 0x1800F80BC (--0-$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedTexture@@@Z.c)
 */

__int64 *__fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<CCursorState::TrailPoint,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<CCursorState::TrailPoint,void *>>>(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3,
        __int64 *a4,
        char *a5,
        const __m128i *a6,
        __int128 *a7)
{
  char *v10; // rbp
  __int128 v11; // xmm8
  __m128i v12; // xmm6
  __int64 v13; // xmm7_8
  __int64 v14; // rdx
  char v15; // bl
  __int64 *result; // rax

  *a1 = a2;
  a1[1] = 0LL;
  v10 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(0x50uLL, a2);
  a1[1] = (__int64)v10;
  v11 = *a7;
  v12 = _mm_loadu_si128(a6);
  v13 = *((_QWORD *)a7 + 2);
  v14 = *a4;
  v15 = *a5;
  *((_QWORD *)v10 + 2) = *a3;
  wil::com_ptr_t<CCachedTexture,wil::err_returncode_policy>::com_ptr_t<CCachedTexture,wil::err_returncode_policy>(
    (_QWORD *)v10 + 3,
    v14);
  v10[32] = v15;
  result = a1;
  *(_OWORD *)(v10 + 52) = v11;
  *(__m128i *)(v10 + 36) = v12;
  *(_QWORD *)(v10 + 68) = v13;
  return result;
}
