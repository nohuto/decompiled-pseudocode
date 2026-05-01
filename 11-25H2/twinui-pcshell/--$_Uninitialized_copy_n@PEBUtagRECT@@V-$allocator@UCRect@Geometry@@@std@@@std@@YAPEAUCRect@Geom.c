/*
 * XREFs of ??$_Uninitialized_copy_n@PEBUtagRECT@@V?$allocator@UCRect@Geometry@@@std@@@std@@YAPEAUCRect@Geometry@@PEBUtagRECT@@_KPEAU12@AEAV?$allocator@UCRect@Geometry@@@0@@Z @ 0x1805820FC
 * Callers:
 *     ??$_Assign_counted_range@PEBUtagRECT@@@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAXPEBUtagRECT@@_K@Z @ 0x180581DF8 (--$_Assign_counted_range@PEBUtagRECT@@@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall std::_Uninitialized_copy_n<tagRECT const *>(__int64 a1, __int64 a2, _DWORD *a3)
{
  _DWORD *result; // rax
  _DWORD *v4; // r8
  char *v5; // r9

  result = a3;
  if ( a2 )
  {
    v4 = (_DWORD *)(a1 + 8);
    v5 = (char *)result - a1;
    do
    {
      *result = *(v4 - 2);
      result += 4;
      *(_DWORD *)((char *)v4 + (_QWORD)v5 - 4) = *(v4 - 1);
      *(_DWORD *)&v5[(_QWORD)v4] = *v4;
      *(_DWORD *)((char *)v4 + (_QWORD)v5 + 4) = v4[1];
      v4 += 4;
      --a2;
    }
    while ( a2 );
  }
  return result;
}
