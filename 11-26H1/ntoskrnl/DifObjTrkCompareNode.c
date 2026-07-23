/*
 * XREFs of DifObjTrkCompareNode @ 0x14064EA40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DifObjTrkCompareNode(__int64 a1, __int64 a2, __int64 a3)
{
  if ( *(_QWORD *)(a2 + 16) > *(_QWORD *)(a3 + 8) )
    return (unsigned int)(*(_QWORD *)(a2 + 8) < *(_QWORD *)(a3 + 16)) + 1;
  else
    return 0LL;
}
