/*
 * XREFs of AsiPopulateHashes @ 0x1406DDEF0
 * Callers:
 *     ApiSetComposeSchema @ 0x1406DD768 (ApiSetComposeSchema.c)
 * Callees:
 *     qsort @ 0x140539380 (qsort.c)
 */

__int64 __fastcall AsiPopulateHashes(unsigned int *a1)
{
  size_t v1; // rdi
  __int64 *v2; // r14
  unsigned int v4; // esi
  unsigned int v5; // r12d
  unsigned int v6; // r8d
  __int64 v7; // r9
  __int64 v8; // r10
  int v9; // ebp
  __int64 v10; // rax
  __int64 v11; // r11
  unsigned __int16 *v12; // r15
  unsigned int v13; // ecx
  __int64 v14; // r13
  unsigned __int16 v15; // dx
  unsigned __int16 v16; // cx
  char *v17; // r15
  unsigned int i; // r8d

  v1 = a1[3];
  v2 = AsiPrimeArray;
  v4 = 0;
  while ( 2 )
  {
    v5 = *(_DWORD *)v2;
    v6 = 0;
    if ( (_DWORD)v1 )
    {
      v7 = 0LL;
      v8 = 0LL;
      do
      {
        v9 = 0;
        v10 = v8 + a1[4];
        v11 = v7 + a1[5];
        v12 = (unsigned __int16 *)((char *)a1 + *(unsigned int *)((char *)a1 + v10 + 4));
        v13 = *(unsigned int *)((char *)a1 + v10 + 12) >> 1;
        if ( v13 )
        {
          v14 = v13;
          do
          {
            v15 = *v12++;
            v16 = v15 + 32;
            if ( (unsigned __int16)(v15 - 65) > 0x19u )
              v16 = v15;
            v9 = v16 + v5 * v9;
            --v14;
          }
          while ( v14 );
        }
        *(unsigned int *)((char *)a1 + v11 + 4) = v6;
        v8 += 24LL;
        ++v6;
        *(unsigned int *)((char *)a1 + v11) = v9;
        v7 += 8LL;
      }
      while ( v6 < (unsigned int)v1 );
    }
    v17 = (char *)a1 + a1[5];
    qsort(v17, v1, 8uLL, AsiSortHashTableHelper);
    for ( i = 1; ; ++i )
    {
      if ( i >= (unsigned int)v1 )
      {
        a1[6] = v5;
        return 1LL;
      }
      if ( *(_DWORD *)&v17[8 * i - 8] == *(_DWORD *)&v17[8 * i] )
        break;
    }
    ++v4;
    v2 = (__int64 *)((char *)v2 + 4);
    if ( v4 < 0x64 )
      continue;
    break;
  }
  return 0LL;
}
