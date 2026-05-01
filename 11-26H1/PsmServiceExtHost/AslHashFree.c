/*
 * XREFs of AslHashFree @ 0x1800A1148
 * Callers:
 *     SdbCloseDatabaseRead @ 0x18008D3D4 (SdbCloseDatabaseRead.c)
 * Callees:
 *     AslFree @ 0x180098D34 (AslFree.c)
 */

BOOLEAN __fastcall AslHashFree(void *a1)
{
  int v2; // esi
  __int64 v3; // r14
  _QWORD *v4; // rdx
  _QWORD *v5; // rbx
  BOOLEAN result; // al

  if ( a1 )
  {
    if ( *((_QWORD *)a1 + 1) )
    {
      v2 = 0;
      if ( *(int *)a1 > 0 )
      {
        v3 = 0LL;
        do
        {
          v4 = *(_QWORD **)(v3 + *((_QWORD *)a1 + 1));
          if ( v4 )
          {
            do
            {
              v5 = (_QWORD *)v4[2];
              AslFree(NtCurrentPeb()->ProcessHeap, v4);
              v4 = v5;
            }
            while ( v5 );
          }
          ++v2;
          v3 += 8LL;
        }
        while ( v2 < *(_DWORD *)a1 );
      }
      AslFree(NtCurrentPeb()->ProcessHeap, *((void **)a1 + 1));
    }
    return AslFree(NtCurrentPeb()->ProcessHeap, a1);
  }
  return result;
}
