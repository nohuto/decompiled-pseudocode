/*
 * XREFs of RtlInternTableIntern @ 0x1409CA278
 * Callers:
 *     PopEtAppIdIntern @ 0x1409C9F6C (PopEtAppIdIntern.c)
 *     PopEtStringIntern @ 0x1409CBCEC (PopEtStringIntern.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlpInternHashBucketsAllocate @ 0x14080F31C (RtlpInternHashBucketsAllocate.c)
 *     RtlpInternHashBucketsFree @ 0x14080F344 (RtlpInternHashBucketsFree.c)
 *     RtlpInternEntryFind @ 0x1409CA648 (RtlpInternEntryFind.c)
 *     RtlpInternEntryHash @ 0x1409CA784 (RtlpInternEntryHash.c)
 *     RtlpInternEntryCreate @ 0x1409CB490 (RtlpInternEntryCreate.c)
 */

__int64 __fastcall RtlInternTableIntern(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rdi
  __int64 v5; // r12
  __int64 v6; // rdx
  __int64 v7; // r13
  __int64 v8; // rsi
  __int64 v9; // rdx
  _QWORD *v11; // r15
  __int64 v12; // rsi
  _QWORD *v13; // r14
  _BYTE *v14; // r12
  unsigned int *v15; // rdi
  __int64 v16; // rsi
  unsigned int v17; // edi
  __int64 v18; // rcx
  __int64 v19; // rdx
  char *v20; // r8
  char v21; // cl
  unsigned __int64 v22; // rcx
  unsigned int v23; // edi
  __int64 v24; // r9
  __int64 v25; // r15
  _QWORD *v26; // r10
  __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // [rsp+50h] [rbp+8h] BYREF

  v3 = (_DWORD *)(a2 + 24);
  v31 = 0LL;
  *(_DWORD *)(a2 + 24) = 0;
  v5 = RtlpInternEntryHash(a2, &v31);
  LOBYTE(v6) = 1;
  guard_dispatch_icall_no_overrides(a1, v6);
  v7 = v31;
  v8 = RtlpInternEntryFind(a1, a2, v5, v31);
  LOBYTE(v9) = 1;
  if ( !v8 )
  {
    v11 = (_QWORD *)(a1 + 24);
    v12 = *(_QWORD *)(a1 + 24);
    guard_dispatch_icall_no_overrides(a1, v9);
    v13 = (_QWORD *)RtlpInternEntryCreate(a1, a2, v5, v7);
    if ( !v13 )
    {
      v8 = 0LL;
      goto LABEL_3;
    }
    guard_dispatch_icall_no_overrides(a1, 0LL);
    if ( v12 != *v11 )
    {
      v8 = RtlpInternEntryFind(a1, a2, v5, v7);
      if ( v8 )
      {
        guard_dispatch_icall_no_overrides(a1, 0LL);
        goto LABEL_15;
      }
      v11 = (_QWORD *)(a1 + 24);
    }
    v14 = (_BYTE *)(a1 + 4);
    v15 = (unsigned int *)(a1 + 4);
    v16 = (unsigned int)(2 * (*(_DWORD *)(a1 + 4) >> 5));
    if ( *(_DWORD *)a1 >= (unsigned int)v16 )
    {
      if ( (unsigned int)v16 < 4 )
        v16 = 4LL;
      v20 = (char *)RtlpInternHashBucketsAllocate(8LL * (unsigned int)v16, a1);
      if ( v20 )
      {
        if ( (((_DWORD)v16 - 1) & (unsigned int)v16) != 0 )
        {
          v21 = -1;
          do
          {
            ++v21;
            LODWORD(v16) = (unsigned int)v16 >> 1;
          }
          while ( (_DWORD)v16 );
          v16 = (unsigned int)(1 << v21);
        }
        if ( (unsigned int)v16 > 0x4000000 )
          v16 = 0x4000000LL;
        v22 = (unsigned int)v16;
        if ( v20 > &v20[8 * v16] )
          v22 = 0LL;
        if ( v22 )
          memset64(v20, a1 | 1, v22);
        v23 = 0;
        v24 = -1LL << (*v14 & 0x1F);
        if ( (*(_DWORD *)v14 & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v25 = *(_QWORD *)(a1 + 8);
            while ( 1 )
            {
              v26 = *(_QWORD **)(v25 + 8LL * v23);
              if ( ((unsigned __int8)v26 & 1) != 0 )
                break;
              *(_QWORD *)(v25 + 8LL * v23) = *v26;
              v31 = v24 & v26[1];
              v27 = ((_DWORD)v16 - 1) & (HIBYTE(v31)
                                       + 37
                                       * (BYTE6(v31)
                                        + 37
                                        * (BYTE5(v31)
                                         + 37
                                         * (BYTE4(v31)
                                          + 37
                                          * (BYTE3(v31)
                                           + 374026047
                                           + 37
                                           * (BYTE2(v31) + 37 * (BYTE1(v31) + 37 * (unsigned int)(unsigned __int8)v31)))))));
              *v26 = *(_QWORD *)&v20[8 * v27];
              *(_QWORD *)&v20[8 * v27] = v26;
            }
            ++v23;
          }
          while ( v23 < *(_DWORD *)v14 >> 5 );
        }
        v28 = *(_QWORD *)(a1 + 8);
        *(_QWORD *)(a1 + 8) = v20;
        *(_DWORD *)(a1 + 4) = (32 * v16) | *(_DWORD *)(a1 + 4) & 0x1F;
        if ( v28 )
          RtlpInternHashBucketsFree(v28, a1);
        v15 = (unsigned int *)(a1 + 4);
        v11 = (_QWORD *)(a1 + 24);
      }
      else if ( *(_DWORD *)v14 < 0x20u )
      {
        v8 = 0LL;
        goto LABEL_11;
      }
    }
    v17 = *v15;
    v31 = v13[1] & (-1LL << (v17 & 0x1F));
    v18 = *(_QWORD *)(a1 + 8);
    v19 = ((v17 >> 5) - 1) & (HIBYTE(v31)
                            + 37
                            * (BYTE6(v31)
                             + 37
                             * (BYTE5(v31)
                              + 37
                              * (BYTE4(v31)
                               + 37
                               * (BYTE3(v31)
                                + 374026047
                                + 37 * (BYTE2(v31) + 37 * (BYTE1(v31) + 37 * (unsigned __int8)v31)))))));
    *v13 = *(_QWORD *)(v18 + 8 * v19);
    *(_QWORD *)(v18 + 8 * v19) = v13;
    ++*(_DWORD *)a1;
    *v11 = *(_QWORD *)(a1 + 24) + 1LL;
    *(_DWORD *)(a2 + 24) |= 2u;
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL) )
      guard_dispatch_icall_no_overrides(a1, (__int64)v13);
    v8 = (__int64)v13;
    v13 = 0LL;
LABEL_11:
    guard_dispatch_icall_no_overrides(a1, 0LL);
    v3 = (_DWORD *)(a2 + 24);
    if ( !v13 )
      goto LABEL_3;
LABEL_15:
    guard_dispatch_icall_no_overrides(a1, (__int64)v13);
    goto LABEL_3;
  }
  guard_dispatch_icall_no_overrides(a1, v9);
LABEL_3:
  if ( (*v3 & 1) != 0 && (*v3 & 2) == 0 )
  {
    v29 = 0LL;
    if ( *(_QWORD *)(a2 + 16) )
    {
      v30 = 0LL;
      do
      {
        v30 += 32LL;
        ++v29;
        *(_QWORD *)(v30 + *(_QWORD *)(a2 + 8) - 24) = 0LL;
      }
      while ( v29 < *(_QWORD *)(a2 + 16) );
      v3 = (_DWORD *)(a2 + 24);
    }
    *v3 &= ~1u;
  }
  return v8;
}
