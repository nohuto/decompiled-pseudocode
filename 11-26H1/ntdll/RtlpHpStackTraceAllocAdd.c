/*
 * XREFs of RtlpHpStackTraceAllocAdd @ 0x180115EC4
 * Callers:
 *     RtlpHpStackTraceAddStack @ 0x1800C0100 (RtlpHpStackTraceAddStack.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpMetadataAlloc @ 0x180043620 (RtlpHpMetadataAlloc.c)
 *     RtlpHpMetadataFree @ 0x180087EE8 (RtlpHpMetadataFree.c)
 *     RtlpHpStackDbAllocRoutine @ 0x18014F5F0 (RtlpHpStackDbAllocRoutine.c)
 *     RtlpHpStackDbFreeRoutine @ 0x18014F620 (RtlpHpStackDbFreeRoutine.c)
 */

__int64 __fastcall RtlpHpStackTraceAllocAdd(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // r15
  unsigned int v9; // esi
  __int64 v10; // rbx
  char *v11; // r8
  char v12; // cl
  unsigned __int64 v13; // rcx
  unsigned int v14; // edi
  __int64 v15; // r9
  __int64 v16; // r12
  _QWORD *v17; // r10
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int128 v23[3]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v24; // [rsp+78h] [rbp+20h]
  __int64 v25; // [rsp+78h] [rbp+20h]

  v23[0] = RtlpHpEnvHandle;
  v6 = RtlpHpMetadataAlloc(0x18uLL, 0x18uLL, 0, v23);
  v8 = (_QWORD *)v6;
  if ( !v6 )
    return 0;
  *(_QWORD *)(v6 + 8) = a2;
  *(_QWORD *)(v6 + 16) = a3;
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 8), v7);
  *(_DWORD *)a1 = NtCurrentTeb()->ClientId.UniqueThread;
  v9 = 1;
  v10 = (unsigned int)(2 * (*(_DWORD *)(a1 + 20) >> 5));
  if ( *(_DWORD *)(a1 + 16) < (unsigned int)v10 )
    goto LABEL_24;
  if ( (unsigned int)v10 < 4 )
    v10 = 4LL;
  v11 = (char *)RtlpHpStackDbAllocRoutine(8LL * (unsigned int)v10, 0LL);
  if ( v11 )
  {
    if ( (((_DWORD)v10 - 1) & (unsigned int)v10) != 0 )
    {
      v12 = -1;
      do
      {
        ++v12;
        LODWORD(v10) = (unsigned int)v10 >> 1;
      }
      while ( (_DWORD)v10 );
      v10 = (unsigned int)(1 << v12);
    }
    if ( (unsigned int)v10 > 0x4000000 )
      v10 = 0x4000000LL;
    v13 = (unsigned int)v10;
    if ( v11 > &v11[8 * v10] )
      v13 = 0LL;
    if ( v13 )
      memset64(v11, (a1 + 16) | 1, v13);
    v14 = 0;
    v15 = -1LL << (*(_BYTE *)(a1 + 20) & 0x1F);
    if ( (*(_DWORD *)(a1 + 20) & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v16 = *(_QWORD *)(a1 + 24);
        while ( 1 )
        {
          v17 = *(_QWORD **)(v16 + 8LL * v14);
          if ( ((unsigned __int8)v17 & 1) != 0 )
            break;
          *(_QWORD *)(v16 + 8LL * v14) = *v17;
          v24 = v15 & v17[1];
          v18 = ((_DWORD)v10 - 1) & (HIBYTE(v24)
                                   + 37
                                   * (BYTE6(v24)
                                    + 37
                                    * (BYTE5(v24)
                                     + 37
                                     * (BYTE4(v24)
                                      + 37
                                      * (BYTE3(v24)
                                       + 374026047
                                       + 37 * (BYTE2(v24) + 37 * (BYTE1(v24) + 37 * (unsigned int)(unsigned __int8)v24)))))));
          *v17 = *(_QWORD *)&v11[8 * v18];
          *(_QWORD *)&v11[8 * v18] = v17;
        }
        ++v14;
      }
      while ( v14 < *(_DWORD *)(a1 + 20) >> 5 );
    }
    v19 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 24) = v11;
    *(_DWORD *)(a1 + 20) = (32 * v10) | *(_DWORD *)(a1 + 20) & 0x1F;
    if ( v19 )
      RtlpHpStackDbFreeRoutine(v19, 0LL, v11, v15);
    goto LABEL_24;
  }
  if ( *(_DWORD *)(a1 + 20) >= 0x20u )
  {
LABEL_24:
    v25 = v8[1] & (-1LL << (*(_DWORD *)(a1 + 20) & 0x1F));
    v20 = *(_QWORD *)(a1 + 24);
    v21 = ((*(_DWORD *)(a1 + 20) >> 5) - 1) & (HIBYTE(v25)
                                             + 37
                                             * (BYTE6(v25)
                                              + 37
                                              * (BYTE5(v25)
                                               + 37
                                               * (BYTE4(v25)
                                                + 37
                                                * (BYTE3(v25)
                                                 + 374026047
                                                 + 37
                                                 * (BYTE2(v25)
                                                  + 37 * (BYTE1(v25) + 37 * (unsigned int)(unsigned __int8)v25)))))));
    *v8 = *(_QWORD *)(v20 + 8 * v21);
    *(_QWORD *)(v20 + 8 * v21) = v8;
    v8 = 0LL;
    ++*(_DWORD *)(a1 + 16);
    goto LABEL_25;
  }
  v9 = 0;
LABEL_25:
  *(_DWORD *)a1 = 0;
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 8));
  if ( v8 )
  {
    v23[0] = RtlpHpEnvHandle;
    RtlpHpMetadataFree((__int64)v8, v23);
  }
  return v9;
}
