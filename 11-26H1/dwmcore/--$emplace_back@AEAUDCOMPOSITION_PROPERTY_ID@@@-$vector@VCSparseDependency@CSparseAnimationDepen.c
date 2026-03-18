/*
 * XREFs of ??$emplace_back@AEAUDCOMPOSITION_PROPERTY_ID@@@?$vector@VCSparseDependency@CSparseAnimationDependencySet@@V?$allocator@VCSparseDependency@CSparseAnimationDependencySet@@@std@@@std@@QEAAAEAVCSparseDependency@CSparseAnimationDependencySet@@AEAUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x18022BD44
 * Callers:
 *     ?AddAnimationProducer@CResource@@QEAAXPEAVCBaseExpression@@@Z @ 0x18010E554 (-AddAnimationProducer@CResource@@QEAAXPEAVCBaseExpression@@@Z.c)
 *     ?AddAnimationConsumer@CResource@@QEAAXPEAVCBaseExpression@@UDCOMPOSITION_PROPERTY_ID@@@Z @ 0x18018F990 (-AddAnimationConsumer@CResource@@QEAAXPEAVCBaseExpression@@UDCOMPOSITION_PROPERTY_ID@@@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEAUDCOMPOSITION_PROPERTY_ID@@@?$vector@VCSparseDependency@CSparseAnimationDependencySet@@V?$allocator@VCSparseDependency@CSparseAnimationDependencySet@@@std@@@std@@AEAAPEAVCSparseDependency@CSparseAnimationDependencySet@@QEAV23@AEAUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x1801B83BC (--$_Emplace_reallocate@AEAUDCOMPOSITION_PROPERTY_ID@@@-$vector@VCSparseDependency@CSparseAnimati.c)
 */

CAnimationDependency *__fastcall std::vector<CSparseAnimationDependencySet::CSparseDependency>::emplace_back<DCOMPOSITION_PROPERTY_ID &>(
        __int64 a1,
        int *a2)
{
  __int64 v3; // rdx
  int v4; // eax
  __int64 v5; // rdx

  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 == *(_QWORD *)(a1 + 16) )
    return std::vector<CSparseAnimationDependencySet::CSparseDependency>::_Emplace_reallocate<DCOMPOSITION_PROPERTY_ID &>(
             a1,
             (struct CAnimationDependency *)v3,
             a2);
  v4 = *a2;
  *(_QWORD *)v3 = 2LL;
  *(_QWORD *)(v3 + 8) = 2LL;
  *(_DWORD *)(v3 + 16) = v4;
  v5 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v5 + 24;
  return (CAnimationDependency *)v5;
}
