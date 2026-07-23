/*
 * XREFs of RtlpStackDbSegmentFindOrCreate @ 0x1800FF554
 * Callers:
 *     RtlpStackDbEntryCreate @ 0x18015B1A4 (RtlpStackDbEntryCreate.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180018AF0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockShared @ 0x180036B90 (RtlAcquireSRWLockShared.c)
 *     RtlpStackDbRefCountIncrement @ 0x180121624 (RtlpStackDbRefCountIncrement.c)
 *     RtlpStackDbSegmentComparitor @ 0x18015B36C (RtlpStackDbSegmentComparitor.c)
 *     memmove @ 0x180164600 (memmove.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpStackDbSegmentFindOrCreate(__int64 a1, unsigned int *a2)
{
  __int64 v2; // r10
  unsigned __int8 *v4; // r8
  __int64 v6; // rdi
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // r9
  __int64 v12; // r9
  __int64 v13; // r9
  __int64 v14; // r9
  __int64 v15; // r9
  __int64 v16; // r15
  __int64 v17; // rbx
  __int64 v18; // r14
  int v19; // r8d
  __int64 v20; // rdx
  __int64 v21; // rdi
  __int64 v22; // rax
  _QWORD *v23; // r15
  unsigned int v24; // ebx
  __int64 v25; // r14
  __int64 v26; // rdx
  __int64 v27; // r12
  int v28; // eax
  __int64 v29; // rbp
  void (__fastcall *v30)(__int64, __int64, char *, __int64); // r12
  __int64 v31; // rbx
  char *v32; // r8
  char v33; // cl
  unsigned __int64 v34; // rcx
  unsigned int v35; // edi
  __int64 v36; // r9
  __int64 v37; // r14
  _QWORD *v38; // r10
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v44; // [rsp+60h] [rbp+8h]
  __int64 v45; // [rsp+60h] [rbp+8h]
  __int64 v46; // [rsp+60h] [rbp+8h]
  __int64 v47; // [rsp+60h] [rbp+8h]
  __int64 v48; // [rsp+68h] [rbp+10h]

  v2 = *a2;
  v4 = (unsigned __int8 *)*((_QWORD *)a2 + 1);
  v6 = 314159LL;
  v7 = 8 * v2;
  if ( (unsigned __int64)(8 * v2) >= 8 )
  {
    v7 -= 8LL * (unsigned int)v2;
    do
    {
      v8 = v4[6] + 37 * (v4[5] + 37 * (v4[4] + 37 * (v4[3] + 37 * (v4[2] + 37 * (v4[1] + 37 * (*v4 + 37 * v6))))));
      v9 = v4[7];
      v4 += 8;
      v6 = v9 + 37 * v8;
      --v2;
    }
    while ( v2 );
  }
  v10 = v7 - 1;
  if ( !v10 )
    goto LABEL_17;
  v11 = v10 - 1;
  if ( !v11 )
  {
LABEL_16:
    v6 = *v4++ + 37 * v6;
LABEL_17:
    v6 = *v4 + 37 * v6;
    goto LABEL_18;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
LABEL_15:
    v6 = *v4++ + 37 * v6;
    goto LABEL_16;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
LABEL_14:
    v6 = *v4++ + 37 * v6;
    goto LABEL_15;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
LABEL_13:
    v6 = *v4++ + 37 * v6;
    goto LABEL_14;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
LABEL_12:
    v6 = *v4++ + 37 * v6;
    goto LABEL_13;
  }
  if ( v15 == 1 )
  {
    v6 = *v4++ + 37 * v6;
    goto LABEL_12;
  }
LABEL_18:
  RtlAcquireSRWLockShared((PRTL_SRWLOCK)(a1 + 40));
  v16 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
  v17 = 0LL;
  v18 = v6 & v16;
LABEL_19:
  if ( v17 )
    goto LABEL_22;
  v19 = *(_DWORD *)(a1 + 4) >> 5;
  if ( v19 )
  {
    v44 = v6 & v16;
    v17 = *(_QWORD *)(a1 + 8)
        + 8LL
        * ((v19 - 1) & (HIBYTE(v44)
                      - 877075889
                      + 442596621 * (unsigned __int8)v18
                      + 37
                      * (BYTE6(v44)
                       + 37
                       * (BYTE5(v44)
                        + 37 * (BYTE4(v44) + 37 * (BYTE3(v44) + 37 * (BYTE2(v44) + 37 * (unsigned int)BYTE1(v44))))))));
LABEL_22:
    while ( 1 )
    {
      v17 = *(_QWORD *)v17;
      if ( (v17 & 1) != 0 )
        break;
      if ( v18 == (v16 & *(_QWORD *)(v17 + 8)) )
      {
        if ( !v17 )
          break;
        if ( (unsigned int)RtlpStackDbSegmentComparitor(v17, a2) )
        {
          v21 = v17 & -(__int64)((unsigned int)RtlpStackDbRefCountIncrement(v17 + 16, v20) != 0);
          RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a1 + 40));
          return v21;
        }
        goto LABEL_19;
      }
    }
  }
  RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a1 + 40));
  v22 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 48))(8 * *a2 + 24, *(_QWORD *)(a1 + 64));
  v23 = (_QWORD *)v22;
  if ( !v22 )
    return 0LL;
  *(_OWORD *)v22 = 0LL;
  *(_QWORD *)(v22 + 16) = 0LL;
  *(_QWORD *)(v22 + 16) &= 0xFF00000000000001uLL;
  *(_QWORD *)(v22 + 16) |= 1uLL;
  *(_BYTE *)(v22 + 23) = *(_BYTE *)a2;
  *(_QWORD *)(v22 + 8) = v6;
  memmove((void *)(v22 + 24), *((const void **)a2 + 1), 8LL * *a2);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 40));
  v24 = *(_DWORD *)(a1 + 4);
  v25 = 0LL;
  v26 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
  v48 = v26;
  v27 = v6 & v26;
  v45 = v6 & v26;
LABEL_30:
  if ( v25 )
    goto LABEL_33;
  if ( v24 >> 5 )
  {
    v25 = *(_QWORD *)(a1 + 8)
        + 8LL
        * (((v24 >> 5) - 1) & (HIBYTE(v45)
                             - 877075889
                             + 442596621 * (unsigned __int8)v27
                             + 37
                             * (BYTE6(v45)
                              + 37
                              * (BYTE5(v45) + 37
                                            * (BYTE4(v45) + 37 * (BYTE3(v45) + 37 * (BYTE2(v45) + 37 * BYTE1(v45))))))));
    v26 = v48;
LABEL_33:
    while ( 1 )
    {
      v25 = *(_QWORD *)v25;
      if ( (v25 & 1) != 0 )
        break;
      if ( v27 == (v26 & *(_QWORD *)(v25 + 8)) )
      {
        if ( !v25 )
          break;
        v28 = RtlpStackDbSegmentComparitor(v25, a2);
        v26 = v48;
        if ( v28 )
        {
          v21 = v25 & -(__int64)((unsigned int)RtlpStackDbRefCountIncrement(v25 + 16, v48) != 0);
          goto LABEL_60;
        }
        goto LABEL_30;
      }
    }
  }
  v29 = *(_QWORD *)(a1 + 64);
  v30 = *(void (__fastcall **)(__int64, __int64, char *, __int64))(a1 + 56);
  v31 = 2 * (v24 >> 5);
  if ( *(_DWORD *)a1 < (unsigned int)v31 )
    goto LABEL_59;
  if ( (unsigned int)v31 < 4 )
    v31 = 4LL;
  v32 = (char *)(*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 48))(8LL * (unsigned int)v31, *(_QWORD *)(a1 + 64));
  if ( v32 )
  {
    if ( (((_DWORD)v31 - 1) & (unsigned int)v31) != 0 )
    {
      v33 = -1;
      do
      {
        ++v33;
        LODWORD(v31) = (unsigned int)v31 >> 1;
      }
      while ( (_DWORD)v31 );
      v31 = (unsigned int)(1 << v33);
    }
    if ( (unsigned int)v31 > 0x4000000 )
      v31 = 0x4000000LL;
    v34 = (unsigned int)v31;
    if ( v32 > &v32[8 * v31] )
      v34 = 0LL;
    if ( v34 )
      memset64(v32, a1 | 1, v34);
    v35 = 0;
    v36 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
    if ( (*(_DWORD *)(a1 + 4) & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v37 = *(_QWORD *)(a1 + 8);
        while ( 1 )
        {
          v38 = *(_QWORD **)(v37 + 8LL * v35);
          if ( ((unsigned __int8)v38 & 1) != 0 )
            break;
          *(_QWORD *)(v37 + 8LL * v35) = *v38;
          v46 = v36 & v38[1];
          v39 = ((_DWORD)v31 - 1) & (HIBYTE(v46)
                                   + 37
                                   * (BYTE6(v46)
                                    + 37
                                    * (BYTE5(v46)
                                     + 37
                                     * (BYTE4(v46)
                                      + 37
                                      * (BYTE3(v46)
                                       + 374026047
                                       + 37 * (BYTE2(v46) + 37 * (BYTE1(v46) + 37 * (unsigned int)(unsigned __int8)v46)))))));
          *v38 = *(_QWORD *)&v32[8 * v39];
          *(_QWORD *)&v32[8 * v39] = v38;
        }
        ++v35;
      }
      while ( v35 < *(_DWORD *)(a1 + 4) >> 5 );
    }
    v40 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 8) = v32;
    *(_DWORD *)(a1 + 4) = (32 * v31) | *(_DWORD *)(a1 + 4) & 0x1F;
    if ( v40 )
      v30(v40, v29, v32, v36);
    goto LABEL_59;
  }
  if ( *(_DWORD *)(a1 + 4) >= 0x20u )
  {
LABEL_59:
    v47 = v23[1] & (-1LL << (*(_DWORD *)(a1 + 4) & 0x1F));
    v41 = *(_QWORD *)(a1 + 8);
    v42 = ((*(_DWORD *)(a1 + 4) >> 5) - 1) & (HIBYTE(v47)
                                            + 37
                                            * (BYTE6(v47)
                                             + 37
                                             * (BYTE5(v47)
                                              + 37
                                              * (BYTE4(v47)
                                               + 37
                                               * (BYTE3(v47)
                                                + 374026047
                                                + 37
                                                * (BYTE2(v47)
                                                 + 37 * (BYTE1(v47) + 37 * (unsigned int)(unsigned __int8)v47)))))));
    v21 = (__int64)v23;
    *v23 = *(_QWORD *)(v41 + 8 * v42);
    *(_QWORD *)(v41 + 8 * v42) = v23;
    v23 = 0LL;
    ++*(_DWORD *)a1;
    goto LABEL_60;
  }
  v21 = 0LL;
LABEL_60:
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 40));
  if ( v23 )
    (*(void (__fastcall **)(_QWORD *, _QWORD))(a1 + 56))(v23, *(_QWORD *)(a1 + 64));
  return v21;
}
