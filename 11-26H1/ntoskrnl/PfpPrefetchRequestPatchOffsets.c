/*
 * XREFs of PfpPrefetchRequestPatchOffsets @ 0x1409808E8
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x14098034C (PfpPrefetchRequestPerform.c)
 * Callees:
 *     <none>
 */

char *__fastcall PfpPrefetchRequestPatchOffsets(_DWORD *a1)
{
  __int64 v1; // r8
  char *result; // rax
  __int64 v3; // rbx
  __int64 v4; // r11
  __int64 v5; // r10
  bool v6; // zf
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // r9
  char *v10; // r8
  char *v11; // r10

  v1 = 0LL;
  result = (char *)a1 + (unsigned int)a1[8];
  for ( *((_QWORD *)a1 + 4) = result; (unsigned int)v1 < a1[2]; v1 = (unsigned int)(v1 + 1) )
  {
    v3 = *((_QWORD *)a1 + 4);
    v4 = 5 * v1;
    v5 = 0LL;
    *(_QWORD *)(v3 + 8 * v4 + 32) = (char *)a1 + *(unsigned int *)(v3 + 40 * v1 + 32);
    result = (char *)a1 + *(unsigned int *)(v3 + 40 * v1 + 16);
    v6 = (*(_DWORD *)(v3 + 40 * v1 + 12) & 0xFFFFFFFE) == 0;
    *(_QWORD *)(v3 + 8 * v4 + 16) = result;
    if ( !v6 )
    {
      do
      {
        v7 = *(_QWORD *)(v3 + 40 * v1 + 16);
        v8 = *(unsigned int *)(v7 + 48 * v5 + 32);
        if ( (_DWORD)v8 )
          *(_QWORD *)(v7 + 48 * v5 + 32) = (char *)a1 + v8;
        if ( *(_DWORD *)(v7 + 48 * v5 + 16) )
          *(_QWORD *)(v7 + 48 * v5 + 24) = (char *)a1 + *(unsigned int *)(v7 + 48 * v5 + 24);
        v5 = (unsigned int)(v5 + 1);
        result = (char *)(*(_DWORD *)(v3 + 40 * v1 + 12) >> 1);
      }
      while ( (unsigned int)v5 < (unsigned int)result );
    }
  }
  v9 = 0LL;
  v10 = (char *)a1 + (unsigned int)a1[14];
  for ( *((_QWORD *)a1 + 7) = v10; (unsigned int)v9 < a1[5]; v9 = (unsigned int)(v9 + 1) )
  {
    v11 = &v10[40 * v9];
    if ( *((_DWORD *)v11 + 6) )
    {
      result = (char *)a1 + *((unsigned int *)v11 + 8);
      *((_QWORD *)v11 + 4) = result;
      v10 = (char *)*((_QWORD *)a1 + 7);
    }
  }
  return result;
}
