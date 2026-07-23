/*
 * XREFs of MiMarkZeroedPageCold @ 0x1407132E0
 * Callers:
 *     MiBackgroundZeroPage @ 0x140456DB4 (MiBackgroundZeroPage.c)
 * Callees:
 *     MiFlushZeroPageHeatBatch @ 0x14048697C (MiFlushZeroPageHeatBatch.c)
 *     MiAddPageToHeatRanges @ 0x14048AFA8 (MiAddPageToHeatRanges.c)
 */

__int64 __fastcall MiMarkZeroedPageCold(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbx
  int v3; // eax
  unsigned __int64 v4; // r8
  __int64 v5; // r9
  __int64 result; // rax
  _QWORD *v7; // r9
  __int64 v8; // r10
  __int64 v9; // rdx

  v2 = *(_QWORD *)(a1 + 32);
  v3 = MiAddPageToHeatRanges(*(unsigned int **)(v2 + 416), (*a2 >> 12) & 0x3FFFFFFFFFLL, *(_DWORD *)(a1 + 4));
  v4 = 0LL;
  if ( v3 )
    return MiFlushZeroPageHeatBatch(v2);
  v5 = *(_QWORD *)(v2 + 416);
  result = *(unsigned int *)(v5 + 4);
  if ( (_DWORD)result )
  {
    v7 = (_QWORD *)(v5 + 16);
    v8 = (unsigned int)result;
    do
    {
      result = (*v7 & 0x3FFLL) + 1;
      v9 = (*v7 >> 10) & 3LL;
      if ( ((*v7 >> 10) & 3) != 0 )
      {
        do
        {
          result <<= 9;
          LODWORD(v9) = v9 - 1;
        }
        while ( (_DWORD)v9 );
      }
      v4 += result;
      ++v7;
      --v8;
    }
    while ( v8 );
    if ( v4 >= 0x200 )
      return MiFlushZeroPageHeatBatch(v2);
  }
  return result;
}
