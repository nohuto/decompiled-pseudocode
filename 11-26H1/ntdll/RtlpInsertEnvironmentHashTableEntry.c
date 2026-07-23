/*
 * XREFs of RtlpInsertEnvironmentHashTableEntry @ 0x18009CF90
 * Callers:
 *     RtlpScanEnvironment @ 0x18009CB40 (RtlpScanEnvironment.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180001CD0 (RtlpSysVolFree.c)
 *     RtlpAllocateEnvironmentHashTable @ 0x18009F7CC (RtlpAllocateEnvironmentHashTable.c)
 *     RtlpFindEnvironmentHashEntry @ 0x1800BC8B0 (RtlpFindEnvironmentHashEntry.c)
 */

__int64 __fastcall RtlpInsertEnvironmentHashTableEntry(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v5; // rbx
  char *EnvironmentHashTable; // r11
  char v7; // cl
  unsigned __int64 v8; // rcx
  unsigned int v9; // r10d
  __int64 v10; // rbp
  __int64 *v11; // r9
  __int64 v12; // r8
  unsigned __int64 v13; // rdx
  void *v14; // rcx
  unsigned int v15; // r8d
  unsigned __int64 v16; // r14
  _QWORD *v17; // rdx

  if ( RtlpFindEnvironmentHashEntry(a1, a2[2], a2[4]) )
    return 3221225525LL;
  v5 = (unsigned int)(2 * (*(_DWORD *)(a1 + 4) >> 5));
  if ( *(_DWORD *)a1 >= (unsigned int)v5 )
  {
    if ( (unsigned int)v5 < 4 )
      v5 = 4LL;
    EnvironmentHashTable = (char *)RtlpAllocateEnvironmentHashTable(8LL * (unsigned int)v5);
    if ( EnvironmentHashTable )
    {
      if ( (((_DWORD)v5 - 1) & (unsigned int)v5) != 0 )
      {
        v7 = -1;
        do
        {
          ++v7;
          LODWORD(v5) = (unsigned int)v5 >> 1;
        }
        while ( (_DWORD)v5 );
        v5 = (unsigned int)(1 << v7);
      }
      if ( (unsigned int)v5 > 0x4000000 )
        v5 = 0x4000000LL;
      v8 = (unsigned int)v5;
      if ( EnvironmentHashTable > &EnvironmentHashTable[8 * v5] )
        v8 = 0LL;
      if ( v8 )
        memset64(EnvironmentHashTable, a1 | 1, v8);
      v9 = 0;
      v10 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
      if ( (*(_DWORD *)(a1 + 4) & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v11 = (__int64 *)(*(_QWORD *)(a1 + 8) + 8LL * v9);
          while ( 1 )
          {
            v12 = *v11;
            if ( (*v11 & 1) != 0 )
              break;
            *v11 = *(_QWORD *)v12;
            v13 = ((int)v5 - 1) & (442596621 * (unsigned __int8)(*(_BYTE *)(v12 + 8) & v10)
                                 - 877075889
                                 + ((*(_QWORD *)(v12 + 8) & (unsigned __int64)v10) >> 56)
                                 + 37
                                 * ((unsigned __int8)((*(_QWORD *)(v12 + 8) & (unsigned __int64)v10) >> 48)
                                  + 37
                                  * ((unsigned __int8)((unsigned __int16)((*(_QWORD *)(v12 + 8) & (unsigned __int64)v10) >> 32) >> 8)
                                   + 37
                                   * ((unsigned __int8)((*(_QWORD *)(v12 + 8) & (unsigned __int64)v10) >> 32)
                                    + 37
                                    * (((*(_DWORD *)(v12 + 8) & (unsigned int)v10) >> 24)
                                     + 37
                                     * ((unsigned __int8)((*(_DWORD *)(v12 + 8) & (unsigned int)v10) >> 16)
                                      + 37 * (unsigned __int8)((unsigned __int16)(*(_WORD *)(v12 + 8) & v10) >> 8)))))));
            *(_QWORD *)v12 = *(_QWORD *)&EnvironmentHashTable[8 * v13];
            *(_QWORD *)&EnvironmentHashTable[8 * v13] = v12;
          }
          ++v9;
        }
        while ( v9 < *(_DWORD *)(a1 + 4) >> 5 );
      }
      v14 = *(void **)(a1 + 8);
      *(_QWORD *)(a1 + 8) = EnvironmentHashTable;
      *(_DWORD *)(a1 + 4) = (32 * v5) | *(_DWORD *)(a1 + 4) & 0x1F;
      if ( v14 )
        RtlpSysVolFree(v14);
    }
  }
  v15 = *(_DWORD *)(a1 + 4);
  v16 = a2[1] & (-1LL << (v15 & 0x1F));
  result = 0LL;
  v17 = (_QWORD *)(*(_QWORD *)(a1 + 8)
                 + 8
                 * (((v15 >> 5) - 1) & (442596621 * (unsigned __int8)v16
                                      + 37
                                      * (BYTE6(v16)
                                       + 37
                                       * (BYTE5(v16)
                                        + 37 * (BYTE4(v16) + 37 * (BYTE3(v16) + 37 * (BYTE2(v16) + 37 * BYTE1(v16))))))
                                      + HIBYTE(v16)
                                      - 877075889)));
  *a2 = *v17;
  *v17 = a2;
  ++*(_DWORD *)a1;
  return result;
}
