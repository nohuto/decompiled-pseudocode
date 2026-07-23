/*
 * XREFs of ComputeEventEntryHash @ 0x140451A50
 * Callers:
 *     InsertEventEntryInLookUpTable @ 0x140451644 (InsertEventEntryInLookUpTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ComputeEventEntryHash(char a1, unsigned __int8 a2, unsigned __int8 *a3)
{
  unsigned __int8 v3; // r11
  unsigned int v4; // r10d
  unsigned int v5; // r9d
  unsigned int v6; // eax
  unsigned int v7; // et2
  unsigned int v8; // eax
  unsigned __int8 *v9; // rbx
  __int64 v10; // r11
  unsigned __int64 i; // r8
  int v12; // ecx

  v3 = a1 + 2;
  v4 = a3[17] + ((1025 * a3[16]) ^ ((1025 * (unsigned int)a3[16]) >> 6));
  v5 = a3[18] + ((1025 * v4) ^ ((1025 * v4) >> 6));
  v6 = 1025
     * (a3[22]
      + ((1025
        * (a3[21]
         + ((1025
           * (a3[20]
            + ((1025 * (a3[19] + ((1025 * v5) ^ ((1025 * v5) >> 6)))) ^ ((1025
                                                                        * (a3[19] + ((1025 * v5) ^ ((1025 * v5) >> 6)))) >> 6)))) ^ ((1025 * (a3[20] + ((1025 * (a3[19] + ((1025 * v5) ^ ((1025 * v5) >> 6)))) ^ ((1025 * (a3[19] + ((1025 * v5) ^ ((1025 * v5) >> 6)))) >> 6)))) >> 6)))) ^ ((1025 * (a3[21] + ((1025 * (a3[20] + ((1025 * (a3[19] + ((1025 * v5) ^ ((1025 * v5) >> 6)))) ^ ((1025 * (a3[19] + ((1025 * v5) ^ ((1025 * v5) >> 6)))) >> 6)))) ^ ((1025 * (a3[20] + ((1025 * (a3[19] + ((1025 * v5) ^ ((1025 * v5) >> 6)))) ^ ((1025 * (a3[19] + ((1025 * v5) ^ ((1025 * v5) >> 6)))) >> 6)))) >> 6)))) >> 6)));
  v7 = 1025 * (a3[23] + (v6 ^ (v6 >> 6)));
  v8 = v7 ^ (v7 >> 6);
  if ( (unsigned __int8)(a1 + 2) < a2 )
  {
    v9 = &a3[16 * v3];
    v10 = (unsigned __int8)(a2 - v3);
    do
    {
      for ( i = 0LL; i < *((unsigned int *)v9 + 2); v8 = (1025 * (v8 + v12)) ^ ((1025 * (v8 + v12)) >> 6) )
        v12 = *(unsigned __int8 *)(*(_QWORD *)v9 + i++);
      v9 += 16;
      --v10;
    }
    while ( v10 );
  }
  return 32769 * ((9 * v8) ^ ((9 * v8) >> 11));
}
