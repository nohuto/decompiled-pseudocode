/*
 * XREFs of PopEtAggregateGet @ 0x1409CD378
 * Callers:
 *     PopEtEnergyTrackerUpdateAggregate @ 0x1409CCC6C (PopEtEnergyTrackerUpdateAggregate.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PopEtBucketsFree @ 0x1407DFDE4 (PopEtBucketsFree.c)
 *     PopEtAggregateKeyCleanup @ 0x1409CC898 (PopEtAggregateKeyCleanup.c)
 *     PopEtAggregateKeyCopy @ 0x1409CC8E4 (PopEtAggregateKeyCopy.c)
 *     PopEtAggregateFind @ 0x1409CD65C (PopEtAggregateFind.c)
 *     PopEtAllocate @ 0x140AFDD70 (PopEtAllocate.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopEtAggregateGet(__int64 a1, _OWORD *a2, __int64 *a3)
{
  __int64 result; // rax
  unsigned __int64 v7; // rbp
  __int64 *Pool2; // rax
  __int64 *v9; // r14
  __int64 v10; // rbx
  int v11; // edi
  __int16 v12; // r15
  __int64 v13; // rcx
  __int64 v14; // rdx
  char *v15; // r8
  char v16; // cl
  unsigned __int64 v17; // rcx
  unsigned int v18; // edi
  __int64 v19; // r9
  __int64 v20; // r13
  _QWORD *v21; // r10
  __int64 v22; // rdx
  void *v23; // rcx
  _QWORD *v24; // r8
  int v25; // edi
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // [rsp+68h] [rbp+20h] BYREF

  v28 = 0LL;
  result = PopEtAggregateFind(a1, a2, &v28);
  if ( result )
  {
    *a3 = result;
    return result;
  }
  v7 = a1 + 48;
  if ( *(_DWORD *)(a1 + 48) >= *(_DWORD *)(a1 + 32) )
  {
    ++*(_DWORD *)(a1 + 624);
  }
  else
  {
    Pool2 = (__int64 *)ExAllocatePool2(0x100uLL);
    v9 = Pool2;
    if ( Pool2 )
    {
      memset_0(Pool2, 0, 0x208uLL);
      PopEtAggregateKeyCopy(v9 + 2, a2);
      v9[1] = v28;
      v10 = (unsigned int)(2 * (*(_DWORD *)(a1 + 52) >> 5));
      if ( *(_DWORD *)v7 < (unsigned int)v10 )
        goto LABEL_5;
      if ( (unsigned int)v10 < 4 )
        v10 = 4LL;
      v15 = (char *)PopEtAllocate(8LL * (unsigned int)v10, 0LL);
      if ( v15 )
      {
        if ( (((_DWORD)v10 - 1) & (unsigned int)v10) != 0 )
        {
          v16 = -1;
          do
          {
            ++v16;
            LODWORD(v10) = (unsigned int)v10 >> 1;
          }
          while ( (_DWORD)v10 );
          v10 = (unsigned int)(1 << v16);
        }
        if ( (unsigned int)v10 > 0x4000000 )
          v10 = 0x4000000LL;
        v17 = (unsigned int)v10;
        if ( v15 > &v15[8 * v10] )
          v17 = 0LL;
        if ( v17 )
          memset64(v15, v7 | 1, v17);
        v18 = 0;
        v19 = -1LL << (*(_BYTE *)(a1 + 52) & 0x1F);
        if ( (*(_DWORD *)(a1 + 52) & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v20 = *(_QWORD *)(a1 + 56);
            while ( 1 )
            {
              v21 = *(_QWORD **)(v20 + 8LL * v18);
              if ( ((unsigned __int8)v21 & 1) != 0 )
                break;
              *(_QWORD *)(v20 + 8LL * v18) = *v21;
              v28 = v19 & v21[1];
              v22 = ((_DWORD)v10 - 1) & (HIBYTE(v28)
                                       + 37
                                       * (BYTE6(v28)
                                        + 37
                                        * (BYTE5(v28)
                                         + 37
                                         * (BYTE4(v28)
                                          + 37
                                          * (BYTE3(v28)
                                           + 374026047
                                           + 37
                                           * (BYTE2(v28) + 37 * (BYTE1(v28) + 37 * (unsigned int)(unsigned __int8)v28)))))));
              *v21 = *(_QWORD *)&v15[8 * v22];
              *(_QWORD *)&v15[8 * v22] = v21;
            }
            ++v18;
          }
          while ( v18 < *(_DWORD *)(a1 + 52) >> 5 );
        }
        v23 = *(void **)(a1 + 56);
        *(_QWORD *)(a1 + 56) = v15;
        *(_DWORD *)(a1 + 52) = (32 * v10) | *(_DWORD *)(a1 + 52) & 0x1F;
        if ( v23 )
          PopEtBucketsFree(v23);
        goto LABEL_5;
      }
      if ( *(_DWORD *)(a1 + 52) >= 0x20u )
      {
LABEL_5:
        v11 = *(_DWORD *)(a1 + 52) >> 5;
        v28 = v9[1] & (-1LL << (*(_DWORD *)(a1 + 52) & 0x1F));
        v12 = v28;
        *a3 = (__int64)v9;
        v13 = *(_QWORD *)(a1 + 56);
        v14 = (v11 - 1) & (HIBYTE(v28)
                         + 37
                         * (BYTE6(v28)
                          + 37
                          * (BYTE5(v28)
                           + 37
                           * (BYTE4(v28)
                            + 37
                            * (BYTE3(v28)
                             + 374026047
                             + 37 * (BYTE2(v28) + 37 * (HIBYTE(v12) + 37 * (unsigned int)(unsigned __int8)v12)))))));
        *v9 = *(_QWORD *)(v13 + 8 * v14);
        *(_QWORD *)(v13 + 8 * v14) = v9;
LABEL_6:
        result = (unsigned int)(*(_DWORD *)(a1 + 48) + 1);
        *(_DWORD *)(a1 + 48) = result;
        return result;
      }
      PopEtAggregateKeyCleanup(v9 + 2);
      ExFreePoolWithTag(v9, 0x54456F50u);
    }
  }
  ++*(_DWORD *)(a1 + 612);
  v24 = (_QWORD *)(a1 + 80);
  result = *(unsigned int *)(a1 + 644);
  *a3 = a1 + 80;
  if ( (result & 4) == 0 )
  {
    *(_DWORD *)(a1 + 644) = result | 4;
    v25 = *(_DWORD *)(a1 + 52) >> 5;
    v28 = *(_QWORD *)(a1 + 88) & (-1LL << (*(_DWORD *)(a1 + 52) & 0x1F));
    v26 = *(_QWORD *)(a1 + 56);
    v27 = (v25 - 1) & (HIBYTE(v28)
                     + 37
                     * (BYTE6(v28)
                      + 37
                      * (BYTE5(v28)
                       + 37
                       * (BYTE4(v28)
                        + 37
                        * (BYTE3(v28)
                         + 374026047
                         + 37 * (BYTE2(v28) + 37 * (BYTE1(v28) + 37 * (unsigned int)(unsigned __int8)v28)))))));
    *v24 = *(_QWORD *)(v26 + 8 * v27);
    *(_QWORD *)(v26 + 8 * v27) = v24;
    goto LABEL_6;
  }
  return result;
}
