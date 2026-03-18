/*
 * XREFs of EvalPackageElement @ 0x140015D4C
 * Callers:
 *     AMLIEvalPkgDataElement @ 0x140015D90 (AMLIEvalPkgDataElement.c)
 *     AMLIEvalPackageElement @ 0x14006C2F0 (AMLIEvalPackageElement.c)
 * Callees:
 *     DupObjData @ 0x140014650 (DupObjData.c)
 */

__int64 __fastcall EvalPackageElement(unsigned int *a1, unsigned int a2, __int64 a3)
{
  if ( a2 >= *a1 )
    return 3222536196LL;
  else
    return DupObjData((_QWORD *)gpheapGlobal, a3, (__int64)&a1[8 * a2 + 2 + 2 * a2]);
}
