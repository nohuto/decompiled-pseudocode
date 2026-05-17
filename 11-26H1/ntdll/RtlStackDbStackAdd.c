/*
 * XREFs of RtlStackDbStackAdd @ 0x18011FC7C
 * Callers:
 *     RtlpHpStackTraceAddStack @ 0x1800C0100 (RtlpHpStackTraceAddStack.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x18002D9F0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockShared @ 0x18004C610 (RtlAcquireSRWLockShared.c)
 *     RtlpStackDbRefCountIncrement @ 0x180121888 (RtlpStackDbRefCountIncrement.c)
 *     RtlpStackDbEntryCleanup @ 0x18015B258 (RtlpStackDbEntryCleanup.c)
 *     RtlpStackDbEntryCreate @ 0x18015B2D8 (RtlpStackDbEntryCreate.c)
 *     RtlpStackDbEntryIsEqual @ 0x18015B3F0 (RtlpStackDbEntryIsEqual.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // r12
  __int64 v25; // r14
  int v26; // edi
  __int64 v27; // rdx
  __int64 v28; // r12
  __int64 v29; // rsi
  char *v30; // r8
  char v31; // cl
  unsigned __int64 v32; // rcx
  unsigned int v33; // edi
  __int64 v34; // r9
  __int64 v35; // r12
  _QWORD *v36; // r10
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v42; // [rsp+20h] [rbp-20h]
  _QWORD v43[3]; // [rsp+28h] [rbp-18h] BYREF
  __int64 v44; // [rsp+80h] [rbp+40h]
  __int64 v45; // [rsp+80h] [rbp+40h]
  __int64 v46; // [rsp+80h] [rbp+40h]
  __int64 v47; // [rsp+80h] [rbp+40h]
  _QWORD *v48; // [rsp+98h] [rbp+58h]

  v3 = 0LL;
  v4 = a2;
  HIDWORD(v43[0]) = 0;
  if ( !a1 || !a3 || !a2 )
    return v3;
  v6 = a3;
  v7 = 314159LL;
  LODWORD(v43[0]) = a3;
  v43[1] = a2;
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
  RtlAcquireSRWLockShared((volatile signed __int64 *)(a1 + 32));
  v17 = 0LL;
  v18 = -1LL << (*(_BYTE *)(a1 + 20) & 0x1F);
  v19 = v7 & v18;
LABEL_22:
  if ( v17 )
    goto LABEL_25;
  v20 = *(_DWORD *)(a1 + 20) >> 5;
  if ( v20 )
  {
    v44 = v7 & v18;
    v17 = *(_QWORD *)(a1 + 24)
        + 8LL
        * ((v20 - 1) & (HIBYTE(v44)
                      - 877075889
                      + 442596621 * (unsigned __int8)v19
                      + 37
                      * (BYTE6(v44)
                       + 37
                       * (BYTE5(v44)
                        + 37 * (BYTE4(v44) + 37 * (BYTE3(v44) + 37 * (BYTE2(v44) + 37 * (unsigned int)BYTE1(v44))))))));
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
        if ( (unsigned int)RtlpStackDbEntryIsEqual(v17, v43) )
        {
          v3 = v17 & -(__int64)((unsigned int)RtlpStackDbRefCountIncrement(v17 + 16, v21) != 0);
          RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 32));
          return v3;
        }
        goto LABEL_22;
      }
    }
  }
  RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 32));
  v48 = (_QWORD *)RtlpStackDbEntryCreate(a1, v43, v7);
  if ( v48 )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 32), v22);
    v23 = 0LL;
    v24 = -1LL << (*(_BYTE *)(a1 + 20) & 0x1F);
    v25 = v7 & v24;
    v45 = v7 & v24;
LABEL_32:
    if ( v23 )
      goto LABEL_35;
    v26 = *(_DWORD *)(a1 + 20) >> 5;
    if ( v26 )
    {
      v23 = *(_QWORD *)(a1 + 24)
          + 8LL
          * ((v26 - 1) & (HIBYTE(v45)
                        - 877075889
                        + 442596621 * (unsigned __int8)v25
                        + 37
                        * (BYTE6(v45)
                         + 37
                         * (BYTE5(v45)
                          + 37 * (BYTE4(v45) + 37 * (BYTE3(v45) + 37 * (BYTE2(v45) + 37 * (unsigned int)BYTE1(v45))))))));
LABEL_35:
      while ( 1 )
      {
        v23 = *(_QWORD *)v23;
        if ( (v23 & 1) != 0 )
          break;
        if ( v25 == (v24 & *(_QWORD *)(v23 + 8)) )
        {
          if ( !v23 )
            break;
          if ( (unsigned int)RtlpStackDbEntryIsEqual(v23, v43) )
          {
            v3 = v23 & -(__int64)((unsigned int)RtlpStackDbRefCountIncrement(v23 + 16, v27) != 0);
            goto LABEL_65;
          }
          goto LABEL_32;
        }
      }
    }
    v28 = *(_QWORD *)(a1 + 64);
    v29 = (unsigned int)(2 * (*(_DWORD *)(a1 + 20) >> 5));
    v42 = v28;
    v43[0] = *(_QWORD *)(a1 + 56);
    if ( *(_DWORD *)(a1 + 16) >= (unsigned int)v29 )
    {
      if ( (unsigned int)v29 < 4 )
        v29 = 4LL;
      v30 = (char *)(*(__int64 (__fastcall **)(__int64, __int64))(a1 + 48))(8LL * (unsigned int)v29, v28);
      if ( v30 )
      {
        if ( (((_DWORD)v29 - 1) & (unsigned int)v29) != 0 )
        {
          v31 = -1;
          do
          {
            ++v31;
            LODWORD(v29) = (unsigned int)v29 >> 1;
          }
          while ( (_DWORD)v29 );
          v29 = (unsigned int)(1 << v31);
        }
        if ( (unsigned int)v29 > 0x4000000 )
          v29 = 0x4000000LL;
        v32 = (unsigned int)v29;
        if ( v30 > &v30[8 * v29] )
          v32 = 0LL;
        if ( v32 )
          memset64(v30, (a1 + 16) | 1, v32);
        v33 = 0;
        v34 = -1LL << (*(_BYTE *)(a1 + 20) & 0x1F);
        if ( (*(_DWORD *)(a1 + 20) & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v35 = *(_QWORD *)(a1 + 24);
            while ( 1 )
            {
              v36 = *(_QWORD **)(v35 + 8LL * v33);
              if ( ((unsigned __int8)v36 & 1) != 0 )
                break;
              *(_QWORD *)(v35 + 8LL * v33) = *v36;
              v46 = v34 & v36[1];
              v37 = ((_DWORD)v29 - 1) & (HIBYTE(v46)
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
                                           * (BYTE2(v46) + 37 * (BYTE1(v46) + 37 * (unsigned int)(unsigned __int8)v46)))))));
              *v36 = *(_QWORD *)&v30[8 * v37];
              *(_QWORD *)&v30[8 * v37] = v36;
            }
            ++v33;
          }
          while ( v33 < *(_DWORD *)(a1 + 20) >> 5 );
          v28 = v42;
        }
        v38 = *(_QWORD *)(a1 + 24);
        *(_QWORD *)(a1 + 24) = v30;
        *(_DWORD *)(a1 + 20) = (32 * v29) | *(_DWORD *)(a1 + 20) & 0x1F;
        if ( v38 )
          ((void (__fastcall *)(__int64, __int64, char *, __int64))v43[0])(v38, v28, v30, v34);
      }
      else if ( *(_DWORD *)(a1 + 20) < 0x20u )
      {
LABEL_65:
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 32));
        RtlpStackDbEntryCleanup(a1, v48);
        return v3;
      }
    }
    v3 = (__int64)v48;
    v47 = v48[1] & (-1LL << (*(_DWORD *)(a1 + 20) & 0x1F));
    v39 = *(_QWORD *)(a1 + 24);
    v40 = ((*(_DWORD *)(a1 + 20) >> 5) - 1) & (HIBYTE(v47)
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
    *v48 = *(_QWORD *)(v39 + 8 * v40);
    *(_QWORD *)(v39 + 8 * v40) = v48;
    ++*(_DWORD *)(a1 + 16);
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 32));
  }
  return v3;
}
