/*
 * XREFs of RtlpStackDbSegmentFindOrCreate @ 0x1800FFE04
 * Callers:
 *     RtlpStackDbEntryCreate @ 0x18015B2D8 (RtlpStackDbEntryCreate.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x18002D9F0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockShared @ 0x18004C610 (RtlAcquireSRWLockShared.c)
 *     RtlpStackDbRefCountIncrement @ 0x180121888 (RtlpStackDbRefCountIncrement.c)
 *     RtlpStackDbSegmentComparitor @ 0x18015B4A0 (RtlpStackDbSegmentComparitor.c)
 *     memmove @ 0x180164700 (memmove.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  __int64 v24; // rdx
  unsigned int v25; // ebx
  __int64 v26; // r14
  __int64 v27; // rdx
  __int64 v28; // r12
  int v29; // eax
  __int64 v30; // rbp
  void (__fastcall *v31)(__int64, __int64, char *, __int64); // r12
  __int64 v32; // rbx
  char *v33; // r8
  char v34; // cl
  unsigned __int64 v35; // rcx
  unsigned int v36; // edi
  __int64 v37; // r9
  __int64 v38; // r14
  _QWORD *v39; // r10
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v45; // [rsp+60h] [rbp+8h]
  __int64 v46; // [rsp+60h] [rbp+8h]
  __int64 v47; // [rsp+60h] [rbp+8h]
  __int64 v48; // [rsp+60h] [rbp+8h]
  __int64 v49; // [rsp+68h] [rbp+10h]

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
  RtlAcquireSRWLockShared((volatile signed __int64 *)(a1 + 40));
  v16 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
  v17 = 0LL;
  v18 = v6 & v16;
LABEL_19:
  if ( v17 )
    goto LABEL_22;
  v19 = *(_DWORD *)(a1 + 4) >> 5;
  if ( v19 )
  {
    v45 = v6 & v16;
    v17 = *(_QWORD *)(a1 + 8)
        + 8LL
        * ((v19 - 1) & (HIBYTE(v45)
                      - 877075889
                      + 442596621 * (unsigned __int8)v18
                      + 37
                      * (BYTE6(v45)
                       + 37
                       * (BYTE5(v45)
                        + 37 * (BYTE4(v45) + 37 * (BYTE3(v45) + 37 * (BYTE2(v45) + 37 * (unsigned int)BYTE1(v45))))))));
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
          RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 40));
          return v21;
        }
        goto LABEL_19;
      }
    }
  }
  RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 40));
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
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 40), v24);
  v25 = *(_DWORD *)(a1 + 4);
  v26 = 0LL;
  v27 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
  v49 = v27;
  v28 = v6 & v27;
  v46 = v6 & v27;
LABEL_30:
  if ( v26 )
    goto LABEL_33;
  if ( v25 >> 5 )
  {
    v26 = *(_QWORD *)(a1 + 8)
        + 8LL
        * (((v25 >> 5) - 1) & (HIBYTE(v46)
                             - 877075889
                             + 442596621 * (unsigned __int8)v28
                             + 37
                             * (BYTE6(v46)
                              + 37
                              * (BYTE5(v46) + 37
                                            * (BYTE4(v46) + 37 * (BYTE3(v46) + 37 * (BYTE2(v46) + 37 * BYTE1(v46))))))));
    v27 = v49;
LABEL_33:
    while ( 1 )
    {
      v26 = *(_QWORD *)v26;
      if ( (v26 & 1) != 0 )
        break;
      if ( v28 == (v27 & *(_QWORD *)(v26 + 8)) )
      {
        if ( !v26 )
          break;
        v29 = RtlpStackDbSegmentComparitor(v26, a2);
        v27 = v49;
        if ( v29 )
        {
          v21 = v26 & -(__int64)((unsigned int)RtlpStackDbRefCountIncrement(v26 + 16, v49) != 0);
          goto LABEL_60;
        }
        goto LABEL_30;
      }
    }
  }
  v30 = *(_QWORD *)(a1 + 64);
  v31 = *(void (__fastcall **)(__int64, __int64, char *, __int64))(a1 + 56);
  v32 = 2 * (v25 >> 5);
  if ( *(_DWORD *)a1 < (unsigned int)v32 )
    goto LABEL_59;
  if ( (unsigned int)v32 < 4 )
    v32 = 4LL;
  v33 = (char *)(*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 48))(8LL * (unsigned int)v32, *(_QWORD *)(a1 + 64));
  if ( v33 )
  {
    if ( (((_DWORD)v32 - 1) & (unsigned int)v32) != 0 )
    {
      v34 = -1;
      do
      {
        ++v34;
        LODWORD(v32) = (unsigned int)v32 >> 1;
      }
      while ( (_DWORD)v32 );
      v32 = (unsigned int)(1 << v34);
    }
    if ( (unsigned int)v32 > 0x4000000 )
      v32 = 0x4000000LL;
    v35 = (unsigned int)v32;
    if ( v33 > &v33[8 * v32] )
      v35 = 0LL;
    if ( v35 )
      memset64(v33, a1 | 1, v35);
    v36 = 0;
    v37 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
    if ( (*(_DWORD *)(a1 + 4) & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v38 = *(_QWORD *)(a1 + 8);
        while ( 1 )
        {
          v39 = *(_QWORD **)(v38 + 8LL * v36);
          if ( ((unsigned __int8)v39 & 1) != 0 )
            break;
          *(_QWORD *)(v38 + 8LL * v36) = *v39;
          v47 = v37 & v39[1];
          v40 = ((_DWORD)v32 - 1) & (HIBYTE(v47)
                                   + 37
                                   * (BYTE6(v47)
                                    + 37
                                    * (BYTE5(v47)
                                     + 37
                                     * (BYTE4(v47)
                                      + 37
                                      * (BYTE3(v47)
                                       + 374026047
                                       + 37 * (BYTE2(v47) + 37 * (BYTE1(v47) + 37 * (unsigned int)(unsigned __int8)v47)))))));
          *v39 = *(_QWORD *)&v33[8 * v40];
          *(_QWORD *)&v33[8 * v40] = v39;
        }
        ++v36;
      }
      while ( v36 < *(_DWORD *)(a1 + 4) >> 5 );
    }
    v41 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 8) = v33;
    *(_DWORD *)(a1 + 4) = (32 * v32) | *(_DWORD *)(a1 + 4) & 0x1F;
    if ( v41 )
      v31(v41, v30, v33, v37);
    goto LABEL_59;
  }
  if ( *(_DWORD *)(a1 + 4) >= 0x20u )
  {
LABEL_59:
    v48 = v23[1] & (-1LL << (*(_DWORD *)(a1 + 4) & 0x1F));
    v42 = *(_QWORD *)(a1 + 8);
    v43 = ((*(_DWORD *)(a1 + 4) >> 5) - 1) & (HIBYTE(v48)
                                            + 37
                                            * (BYTE6(v48)
                                             + 37
                                             * (BYTE5(v48)
                                              + 37
                                              * (BYTE4(v48)
                                               + 37
                                               * (BYTE3(v48)
                                                + 374026047
                                                + 37
                                                * (BYTE2(v48)
                                                 + 37 * (BYTE1(v48) + 37 * (unsigned int)(unsigned __int8)v48)))))));
    v21 = (__int64)v23;
    *v23 = *(_QWORD *)(v42 + 8 * v43);
    *(_QWORD *)(v42 + 8 * v43) = v23;
    v23 = 0LL;
    ++*(_DWORD *)a1;
    goto LABEL_60;
  }
  v21 = 0LL;
LABEL_60:
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 40));
  if ( v23 )
    (*(void (__fastcall **)(_QWORD *, _QWORD))(a1 + 56))(v23, *(_QWORD *)(a1 + 64));
  return v21;
}
