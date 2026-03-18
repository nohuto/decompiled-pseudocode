/*
 * XREFs of ??$_Uninitialized_move@PEAVCSparseDependency@CSparseAnimationDependencySet@@V?$allocator@VCSparseDependency@CSparseAnimationDependencySet@@@std@@@std@@YAPEAVCSparseDependency@CSparseAnimationDependencySet@@QEAV12@0PEAV12@AEAV?$allocator@VCSparseDependency@CSparseAnimationDependencySet@@@0@@Z @ 0x18022BCBC
 * Callers:
 *     ??$_Emplace_reallocate@AEAUDCOMPOSITION_PROPERTY_ID@@@?$vector@VCSparseDependency@CSparseAnimationDependencySet@@V?$allocator@VCSparseDependency@CSparseAnimationDependencySet@@@std@@@std@@AEAAPEAVCSparseDependency@CSparseAnimationDependencySet@@QEAV23@AEAUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x1801B83BC (--$_Emplace_reallocate@AEAUDCOMPOSITION_PROPERTY_ID@@@-$vector@VCSparseDependency@CSparseAnimati.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@VCSparseDependency@CSparseAnimationDependencySet@@@std@@@std@@YAXPEAVCSparseDependency@CSparseAnimationDependencySet@@QEAV12@AEAV?$allocator@VCSparseDependency@CSparseAnimationDependencySet@@@0@@Z @ 0x18004F968 (--$_Destroy_range@V-$allocator@VCSparseDependency@CSparseAnimationDependencySet@@@std@@@std@@YAX.c)
 *     ??0?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@QEAA@$$QEAV01@@Z @ 0x18022BF54 (--0-$vector_facade@PEAVCBaseExpression@@V-$pointer_buffer_impl@PEAVCBaseExpression@_ea_18022BF54.c)
 */

CAnimationDependency *__fastcall std::_Uninitialized_move<CSparseAnimationDependencySet::CSparseDependency *>(
        _DWORD *a1,
        _DWORD *a2,
        CAnimationDependency *a3)
{
  CAnimationDependency *v3; // rbx
  _DWORD *v5; // rdi
  char *v6; // rsi

  v3 = a3;
  if ( a1 != a2 )
  {
    v5 = a1 + 4;
    v6 = (char *)(a3 - (CAnimationDependency *)a1);
    do
    {
      detail::vector_facade<CBaseExpression *,detail::pointer_buffer_impl<CBaseExpression *,0>>::vector_facade<CBaseExpression *,detail::pointer_buffer_impl<CBaseExpression *,0>>(
        v3,
        v5 - 4);
      detail::vector_facade<CBaseExpression *,detail::pointer_buffer_impl<CBaseExpression *,0>>::vector_facade<CBaseExpression *,detail::pointer_buffer_impl<CBaseExpression *,0>>(
        &v6[(_QWORD)v5 - 8],
        v5 - 2);
      v3 = (CAnimationDependency *)((char *)v3 + 24);
      *(_DWORD *)&v6[(_QWORD)v5] = *v5;
      v5 += 6;
    }
    while ( v5 - 4 != a2 );
  }
  std::_Destroy_range<std::allocator<CSparseAnimationDependencySet::CSparseDependency>>(v3, v3);
  return v3;
}
