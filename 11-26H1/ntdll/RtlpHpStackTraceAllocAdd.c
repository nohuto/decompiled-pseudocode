/*
 * XREFs of RtlpHpStackTraceAllocAdd @ 0x1801156A4
 * Callers:
 *     RtlpHpStackTraceAddStack @ 0x1800BD890 (RtlpHpStackTraceAddStack.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpMetadataAlloc @ 0x18002DB90 (RtlpHpMetadataAlloc.c)
 *     RtlpHpMetadataFree @ 0x18007F268 (RtlpHpMetadataFree.c)
 *     RtlpHpStackDbAllocRoutine @ 0x18014F4A0 (RtlpHpStackDbAllocRoutine.c)
 *     RtlpHpStackDbFreeRoutine @ 0x18014F4D0 (RtlpHpStackDbFreeRoutine.c)
 */

__int64 __fastcall RtlpHpStackTraceAllocAdd(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  _QWORD *v7; // r15
  unsigned int v8; // esi
  __int64 v9; // rbx
  char *v10; // r8
  char v11; // cl
  unsigned __int64 v12; // rcx
  unsigned int v13; // edi
  __int64 v14; // r9
  __int64 v15; // r12
  _QWORD *v16; // r10
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int128 v22[3]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v23; // [rsp+78h] [rbp+20h]
  __int64 v24; // [rsp+78h] [rbp+20h]

  v22[0] = RtlpHpEnvHandle;
  v6 = RtlpHpMetadataAlloc(0x18uLL, 0x18uLL, 0, v22);
  v7 = (_QWORD *)v6;
  if ( !v6 )
    return 0;
  *(_QWORD *)(v6 + 8) = a2;
  *(_QWORD *)(v6 + 16) = a3;
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 8));
  *(_DWORD *)a1 = NtCurrentTeb()->ClientId.UniqueThread;
  v8 = 1;
  v9 = (unsigned int)(2 * (*(_DWORD *)(a1 + 20) >> 5));
  if ( *(_DWORD *)(a1 + 16) < (unsigned int)v9 )
    goto LABEL_24;
  if ( (unsigned int)v9 < 4 )
    v9 = 4LL;
  v10 = (char *)RtlpHpStackDbAllocRoutine(8LL * (unsigned int)v9, 0LL);
  if ( v10 )
  {
    if ( (((_DWORD)v9 - 1) & (unsigned int)v9) != 0 )
    {
      v11 = -1;
      do
      {
        ++v11;
        LODWORD(v9) = (unsigned int)v9 >> 1;
      }
      while ( (_DWORD)v9 );
      v9 = (unsigned int)(1 << v11);
    }
    if ( (unsigned int)v9 > 0x4000000 )
      v9 = 0x4000000LL;
    v12 = (unsigned int)v9;
    if ( v10 > &v10[8 * v9] )
      v12 = 0LL;
    if ( v12 )
      memset64(v10, (a1 + 16) | 1, v12);
    v13 = 0;
    v14 = -1LL << (*(_BYTE *)(a1 + 20) & 0x1F);
    if ( (*(_DWORD *)(a1 + 20) & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v15 = *(_QWORD *)(a1 + 24);
        while ( 1 )
        {
          v16 = *(_QWORD **)(v15 + 8LL * v13);
          if ( ((unsigned __int8)v16 & 1) != 0 )
            break;
          *(_QWORD *)(v15 + 8LL * v13) = *v16;
          v23 = v14 & v16[1];
          v17 = ((_DWORD)v9 - 1) & (HIBYTE(v23)
                                  + 37
                                  * (BYTE6(v23)
                                   + 37
                                   * (BYTE5(v23)
                                    + 37
                                    * (BYTE4(v23)
                                     + 37
                                     * (BYTE3(v23)
                                      + 374026047
                                      + 37 * (BYTE2(v23) + 37 * (BYTE1(v23) + 37 * (unsigned int)(unsigned __int8)v23)))))));
          *v16 = *(_QWORD *)&v10[8 * v17];
          *(_QWORD *)&v10[8 * v17] = v16;
        }
        ++v13;
      }
      while ( v13 < *(_DWORD *)(a1 + 20) >> 5 );
    }
    v18 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 24) = v10;
    *(_DWORD *)(a1 + 20) = (32 * v9) | *(_DWORD *)(a1 + 20) & 0x1F;
    if ( v18 )
      RtlpHpStackDbFreeRoutine(v18, 0LL, v10, v14);
    goto LABEL_24;
  }
  if ( *(_DWORD *)(a1 + 20) >= 0x20u )
  {
LABEL_24:
    v24 = v7[1] & (-1LL << (*(_DWORD *)(a1 + 20) & 0x1F));
    v19 = *(_QWORD *)(a1 + 24);
    v20 = ((*(_DWORD *)(a1 + 20) >> 5) - 1) & (HIBYTE(v24)
                                             + 37
                                             * (BYTE6(v24)
                                              + 37
                                              * (BYTE5(v24)
                                               + 37
                                               * (BYTE4(v24)
                                                + 37
                                                * (BYTE3(v24)
                                                 + 374026047
                                                 + 37
                                                 * (BYTE2(v24)
                                                  + 37 * (BYTE1(v24) + 37 * (unsigned int)(unsigned __int8)v24)))))));
    *v7 = *(_QWORD *)(v19 + 8 * v20);
    *(_QWORD *)(v19 + 8 * v20) = v7;
    v7 = 0LL;
    ++*(_DWORD *)(a1 + 16);
    goto LABEL_25;
  }
  v8 = 0;
LABEL_25:
  *(_DWORD *)a1 = 0;
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 8));
  if ( v7 )
  {
    v22[0] = RtlpHpEnvHandle;
    RtlpHpMetadataFree((__int64)v7, v22);
  }
  return v8;
}
