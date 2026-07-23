/*
 * XREFs of RtlStackDbStackAdd @ 0x18011FA2C
 * Callers:
 *     RtlpHpStackTraceAddStack @ 0x1800BD890 (RtlpHpStackTraceAddStack.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180018AF0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockShared @ 0x180036B90 (RtlAcquireSRWLockShared.c)
 *     RtlpStackDbRefCountIncrement @ 0x180121624 (RtlpStackDbRefCountIncrement.c)
 *     RtlpStackDbEntryCleanup @ 0x18015B124 (RtlpStackDbEntryCleanup.c)
 *     RtlpStackDbEntryCreate @ 0x18015B1A4 (RtlpStackDbEntryCreate.c)
 *     RtlpStackDbEntryIsEqual @ 0x18015B2BC (RtlpStackDbEntryIsEqual.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlStackDbStackAdd(__int64 a1, unsigned __int8 *a2, unsigned int a3)
{
  __int64 v3; // rbx
  unsigned __int8 *v4; // r9
  __int64 v6; // r10
  __int64 v7; // rdi
  unsigned __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // r8
  __int64 v17; // rsi
  __int64 v18; // r12
  __int64 v19; // r14
  int v20; // r8d
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // r12
  __int64 v24; // r14
  int v25; // edi
  __int64 v26; // rdx
  __int64 v27; // r12
  __int64 v28; // rsi
  char *v29; // r8
  char v30; // cl
  unsigned __int64 v31; // rcx
  unsigned int v32; // edi
  __int64 v33; // r9
  __int64 v34; // r12
  _QWORD *v35; // r10
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v41; // [rsp+20h] [rbp-20h]
  _QWORD v42[3]; // [rsp+28h] [rbp-18h] BYREF
  __int64 v43; // [rsp+80h] [rbp+40h]
  __int64 v44; // [rsp+80h] [rbp+40h]
  __int64 v45; // [rsp+80h] [rbp+40h]
  __int64 v46; // [rsp+80h] [rbp+40h]
  _QWORD *v47; // [rsp+98h] [rbp+58h]

  v3 = 0LL;
  v4 = a2;
  HIDWORD(v42[0]) = 0;
  if ( !a1 || !a3 || !a2 )
    return v3;
  v6 = a3;
  v7 = 314159LL;
  LODWORD(v42[0]) = a3;
  v42[1] = a2;
  v8 = 8LL * a3;
  if ( v8 >= 8 )
  {
    v8 -= 8LL * (unsigned int)v6;
    do
    {
      v9 = v4[6] + 37 * (v4[5] + 37 * (v4[4] + 37 * (v4[3] + 37 * (v4[2] + 37 * (v4[1] + 37 * (*v4 + 37 * v7))))));
      v10 = v4[7];
      v4 += 8;
      v7 = v10 + 37 * v9;
      --v6;
    }
    while ( v6 );
  }
  v11 = v8 - 1;
  if ( !v11 )
    goto LABEL_20;
  v12 = v11 - 1;
  if ( !v12 )
  {
LABEL_19:
    v7 = *v4++ + 37 * v7;
LABEL_20:
    v7 = *v4 + 37 * v7;
    goto LABEL_21;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
LABEL_18:
    v7 = *v4++ + 37 * v7;
    goto LABEL_19;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
LABEL_17:
    v7 = *v4++ + 37 * v7;
    goto LABEL_18;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
LABEL_16:
    v7 = *v4++ + 37 * v7;
    goto LABEL_17;
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
LABEL_15:
    v7 = *v4++ + 37 * v7;
    goto LABEL_16;
  }
  if ( v16 == 1 )
  {
    v7 = *v4++ + 37 * v7;
    goto LABEL_15;
  }
LABEL_21:
  RtlAcquireSRWLockShared((PRTL_SRWLOCK)(a1 + 32));
  v17 = 0LL;
  v18 = -1LL << (*(_BYTE *)(a1 + 20) & 0x1F);
  v19 = v7 & v18;
LABEL_22:
  if ( v17 )
    goto LABEL_25;
  v20 = *(_DWORD *)(a1 + 20) >> 5;
  if ( v20 )
  {
    v43 = v7 & v18;
    v17 = *(_QWORD *)(a1 + 24)
        + 8LL
        * ((v20 - 1) & (HIBYTE(v43)
                      - 877075889
                      + 442596621 * (unsigned __int8)v19
                      + 37
                      * (BYTE6(v43)
                       + 37
                       * (BYTE5(v43)
                        + 37 * (BYTE4(v43) + 37 * (BYTE3(v43) + 37 * (BYTE2(v43) + 37 * (unsigned int)BYTE1(v43))))))));
LABEL_25:
    while ( 1 )
    {
      v17 = *(_QWORD *)v17;
      if ( (v17 & 1) != 0 )
        break;
      if ( v19 == (v18 & *(_QWORD *)(v17 + 8)) )
      {
        if ( !v17 )
          break;
        if ( (unsigned int)RtlpStackDbEntryIsEqual(v17, v42) )
        {
          v3 = v17 & -(__int64)((unsigned int)RtlpStackDbRefCountIncrement(v17 + 16, v21) != 0);
          RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a1 + 32));
          return v3;
        }
        goto LABEL_22;
      }
    }
  }
  RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a1 + 32));
  v47 = (_QWORD *)RtlpStackDbEntryCreate(a1, v42, v7);
  if ( v47 )
  {
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 32));
    v22 = 0LL;
    v23 = -1LL << (*(_BYTE *)(a1 + 20) & 0x1F);
    v24 = v7 & v23;
    v44 = v7 & v23;
LABEL_32:
    if ( v22 )
      goto LABEL_35;
    v25 = *(_DWORD *)(a1 + 20) >> 5;
    if ( v25 )
    {
      v22 = *(_QWORD *)(a1 + 24)
          + 8LL
          * ((v25 - 1) & (HIBYTE(v44)
                        - 877075889
                        + 442596621 * (unsigned __int8)v24
                        + 37
                        * (BYTE6(v44)
                         + 37
                         * (BYTE5(v44)
                          + 37 * (BYTE4(v44) + 37 * (BYTE3(v44) + 37 * (BYTE2(v44) + 37 * (unsigned int)BYTE1(v44))))))));
LABEL_35:
      while ( 1 )
      {
        v22 = *(_QWORD *)v22;
        if ( (v22 & 1) != 0 )
          break;
        if ( v24 == (v23 & *(_QWORD *)(v22 + 8)) )
        {
          if ( !v22 )
            break;
          if ( (unsigned int)RtlpStackDbEntryIsEqual(v22, v42) )
          {
            v3 = v22 & -(__int64)((unsigned int)RtlpStackDbRefCountIncrement(v22 + 16, v26) != 0);
            goto LABEL_65;
          }
          goto LABEL_32;
        }
      }
    }
    v27 = *(_QWORD *)(a1 + 64);
    v28 = (unsigned int)(2 * (*(_DWORD *)(a1 + 20) >> 5));
    v41 = v27;
    v42[0] = *(_QWORD *)(a1 + 56);
    if ( *(_DWORD *)(a1 + 16) >= (unsigned int)v28 )
    {
      if ( (unsigned int)v28 < 4 )
        v28 = 4LL;
      v29 = (char *)(*(__int64 (__fastcall **)(__int64, __int64))(a1 + 48))(8LL * (unsigned int)v28, v27);
      if ( v29 )
      {
        if ( (((_DWORD)v28 - 1) & (unsigned int)v28) != 0 )
        {
          v30 = -1;
          do
          {
            ++v30;
            LODWORD(v28) = (unsigned int)v28 >> 1;
          }
          while ( (_DWORD)v28 );
          v28 = (unsigned int)(1 << v30);
        }
        if ( (unsigned int)v28 > 0x4000000 )
          v28 = 0x4000000LL;
        v31 = (unsigned int)v28;
        if ( v29 > &v29[8 * v28] )
          v31 = 0LL;
        if ( v31 )
          memset64(v29, (a1 + 16) | 1, v31);
        v32 = 0;
        v33 = -1LL << (*(_BYTE *)(a1 + 20) & 0x1F);
        if ( (*(_DWORD *)(a1 + 20) & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v34 = *(_QWORD *)(a1 + 24);
            while ( 1 )
            {
              v35 = *(_QWORD **)(v34 + 8LL * v32);
              if ( ((unsigned __int8)v35 & 1) != 0 )
                break;
              *(_QWORD *)(v34 + 8LL * v32) = *v35;
              v45 = v33 & v35[1];
              v36 = ((_DWORD)v28 - 1) & (HIBYTE(v45)
                                       + 37
                                       * (BYTE6(v45)
                                        + 37
                                        * (BYTE5(v45)
                                         + 37
                                         * (BYTE4(v45)
                                          + 37
                                          * (BYTE3(v45)
                                           + 374026047
                                           + 37
                                           * (BYTE2(v45) + 37 * (BYTE1(v45) + 37 * (unsigned int)(unsigned __int8)v45)))))));
              *v35 = *(_QWORD *)&v29[8 * v36];
              *(_QWORD *)&v29[8 * v36] = v35;
            }
            ++v32;
          }
          while ( v32 < *(_DWORD *)(a1 + 20) >> 5 );
          v27 = v41;
        }
        v37 = *(_QWORD *)(a1 + 24);
        *(_QWORD *)(a1 + 24) = v29;
        *(_DWORD *)(a1 + 20) = (32 * v28) | *(_DWORD *)(a1 + 20) & 0x1F;
        if ( v37 )
          ((void (__fastcall *)(__int64, __int64, char *, __int64))v42[0])(v37, v27, v29, v33);
      }
      else if ( *(_DWORD *)(a1 + 20) < 0x20u )
      {
LABEL_65:
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 32));
        RtlpStackDbEntryCleanup(a1, v47);
        return v3;
      }
    }
    v3 = (__int64)v47;
    v46 = v47[1] & (-1LL << (*(_DWORD *)(a1 + 20) & 0x1F));
    v38 = *(_QWORD *)(a1 + 24);
    v39 = ((*(_DWORD *)(a1 + 20) >> 5) - 1) & (HIBYTE(v46)
                                             + 37
                                             * (BYTE6(v46)
                                              + 37
                                              * (BYTE5(v46)
                                               + 37
                                               * (BYTE4(v46)
                                                + 37
                                                * (BYTE3(v46)
                                                 + 374026047
                                                 + 37
                                                 * (BYTE2(v46)
                                                  + 37 * (BYTE1(v46) + 37 * (unsigned int)(unsigned __int8)v46)))))));
    *v47 = *(_QWORD *)(v38 + 8 * v39);
    *(_QWORD *)(v38 + 8 * v39) = v47;
    ++*(_DWORD *)(a1 + 16);
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 32));
  }
  return v3;
}
