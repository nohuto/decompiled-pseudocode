/*
 * XREFs of MxUpdateBootNodeFreePageCount @ 0x140CFE958
 * Callers:
 *     MxGetFreePageDescriptor @ 0x140CFD020 (MxGetFreePageDescriptor.c)
 *     MxGetPage @ 0x140CFD0F0 (MxGetPage.c)
 *     MxInsertFreeZeroMemoryDescriptor @ 0x140CFD8DC (MxInsertFreeZeroMemoryDescriptor.c)
 *     MxRemoveFreeZeroMemoryDescriptor @ 0x140CFE650 (MxRemoveFreeZeroMemoryDescriptor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MxUpdateBootNodeFreePageCount(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 176);
  if ( a3 )
  {
    result = a2 + v3;
    *(_QWORD *)(a1 + 176) = result;
    qword_14101FBF0 += a2;
  }
  else
  {
    result = v3 - a2;
    *(_QWORD *)(a1 + 176) = result;
    qword_14101FBF0 -= a2;
  }
  return result;
}
