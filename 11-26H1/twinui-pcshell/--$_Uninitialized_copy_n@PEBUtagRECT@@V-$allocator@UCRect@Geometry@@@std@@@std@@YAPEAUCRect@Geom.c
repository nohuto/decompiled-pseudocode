/*
 * XREFs of ??$_Uninitialized_copy_n@PEBUtagRECT@@V?$allocator@UCRect@Geometry@@@std@@@std@@YAPEAUCRect@Geometry@@PEBUtagRECT@@_KPEAU12@AEAV?$allocator@UCRect@Geometry@@@0@@Z @ 0x1805A5DD4
 * Callers:
 *     ??$_Assign_counted_range@PEBUtagRECT@@@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAXPEBUtagRECT@@_K@Z @ 0x1805A5A7C (--$_Assign_counted_range@PEBUtagRECT@@@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall std::_Uninitialized_copy_n<tagRECT const *>(__int64 a1, __int64 a2, _DWORD *a3)
{
  _DWORD *v4; // r8
  char *v5; // r10

  if ( a2 )
  {
    v4 = (_DWORD *)(a1 + 8);
    v5 = (char *)a3 - a1;
    do
    {
      *a3 = *(v4 - 2);
      a3 += 4;
      *(_DWORD *)((char *)v4 + (_QWORD)v5 - 4) = *(v4 - 1);
      *(_DWORD *)((char *)v4 + (_QWORD)v5) = *v4;
      *(_DWORD *)((char *)v4 + (_QWORD)v5 + 4) = v4[1];
      v4 += 4;
      --a2;
    }
    while ( a2 );
  }
  return a3;
}
