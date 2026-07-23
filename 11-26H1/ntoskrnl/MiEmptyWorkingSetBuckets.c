/*
 * XREFs of MiEmptyWorkingSetBuckets @ 0x1403C4D5C
 * Callers:
 *     MiEmptyWorkingSetConverge @ 0x1403C4BA8 (MiEmptyWorkingSetConverge.c)
 * Callees:
 *     MiFastTrimWorkingSet @ 0x1403216C0 (MiFastTrimWorkingSet.c)
 */

__int64 __fastcall MiEmptyWorkingSetBuckets(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned int v3; // ebx
  unsigned int v4; // r12d
  int v6; // esi
  unsigned __int8 v7; // di
  __int64 v8; // r15
  __int64 v9; // rax

  v2 = *(_QWORD *)(a1 + 32);
  v3 = 0;
  v4 = a2;
  v6 = (unsigned __int8)HIBYTE(*(_WORD *)(a1 + 4)) >> 4;
  v7 = 8;
  v8 = *(_QWORD *)(v2 + 16);
  while ( v7 != v6 )
  {
    if ( *(_QWORD *)(v2 + 8LL * --v7 + 56) )
    {
      LOBYTE(a2) = v7;
      MiFastTrimWorkingSet(a1, a2, v4);
      v9 = *(_QWORD *)(v2 + 136);
      if ( !v9 || v9 == *(_QWORD *)(v8 + 32) )
        return 1;
    }
  }
  return v3;
}
