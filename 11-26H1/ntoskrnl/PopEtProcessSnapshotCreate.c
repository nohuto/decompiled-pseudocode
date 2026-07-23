/*
 * XREFs of PopEtProcessSnapshotCreate @ 0x1409CD808
 * Callers:
 *     PopEtProcessSnapshotUpdate @ 0x1409CC994 (PopEtProcessSnapshotUpdate.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PopEtBucketsFree @ 0x1407DFDE4 (PopEtBucketsFree.c)
 *     PopEtAggregateKeyCopyFromProcess @ 0x1409CC5C8 (PopEtAggregateKeyCopyFromProcess.c)
 *     PopEtAggregateKeyCleanup @ 0x1409CC898 (PopEtAggregateKeyCleanup.c)
 *     RtlInternEntryDereference @ 0x1409CD1F8 (RtlInternEntryDereference.c)
 *     PopEtAllocate @ 0x140AFDD70 (PopEtAllocate.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopEtProcessSnapshotCreate(__int64 a1, __int64 **a2)
{
  __int64 v2; // rbp
  struct _KPROCESS *v4; // rdi
  __int64 *Pool2; // rax
  __int64 *v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rbx
  int v9; // edi
  __int64 v10; // r12
  __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned int v13; // edi
  char *v15; // r8
  char v16; // cl
  unsigned __int64 v17; // rcx
  unsigned int v18; // edi
  __int64 v19; // r9
  __int64 v20; // r15
  _QWORD *v21; // r10
  __int64 v22; // rdx
  void *v23; // rcx
  __int64 v24; // [rsp+50h] [rbp+8h]

  v2 = *(_QWORD *)(a1 + 16);
  v4 = *(struct _KPROCESS **)(a1 + 8);
  Pool2 = (__int64 *)ExAllocatePool2(0x100uLL);
  v6 = Pool2;
  if ( Pool2 )
  {
    memset_0(Pool2, 0, 0x1F8uLL);
    v6[1] = (__int64)v4;
    PopEtAggregateKeyCopyFromProcess((__int64)(v6 + 2), v4, v2 + 32);
    v7 = v6[3];
    if ( v7 )
      RtlInternEntryDereference(PopEtGlobals + 56, v7);
    v6[3] = 0LL;
    v8 = (unsigned int)(2 * (*(_DWORD *)(v2 + 68) >> 5));
    if ( *(_DWORD *)(v2 + 64) < (unsigned int)v8 )
      goto LABEL_5;
    if ( (unsigned int)v8 < 4 )
      v8 = 4LL;
    v15 = (char *)PopEtAllocate(8LL * (unsigned int)v8, 0LL);
    if ( v15 )
    {
      if ( (((_DWORD)v8 - 1) & (unsigned int)v8) != 0 )
      {
        v16 = -1;
        do
        {
          ++v16;
          LODWORD(v8) = (unsigned int)v8 >> 1;
        }
        while ( (_DWORD)v8 );
        v8 = (unsigned int)(1 << v16);
      }
      if ( (unsigned int)v8 > 0x4000000 )
        v8 = 0x4000000LL;
      v17 = (unsigned int)v8;
      if ( v15 > &v15[8 * v8] )
        v17 = 0LL;
      if ( v17 )
        memset64(v15, (v2 + 64) | 1, v17);
      v18 = 0;
      v19 = -1LL << (*(_BYTE *)(v2 + 68) & 0x1F);
      if ( (*(_DWORD *)(v2 + 68) & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v20 = *(_QWORD *)(v2 + 72);
          while ( 1 )
          {
            v21 = *(_QWORD **)(v20 + 8LL * v18);
            if ( ((unsigned __int8)v21 & 1) != 0 )
              break;
            *(_QWORD *)(v20 + 8LL * v18) = *v21;
            v24 = v19 & v21[1];
            v22 = ((_DWORD)v8 - 1) & (HIBYTE(v24)
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
                                        * (BYTE2(v24) + 37 * (BYTE1(v24) + 37 * (unsigned int)(unsigned __int8)v24)))))));
            *v21 = *(_QWORD *)&v15[8 * v22];
            *(_QWORD *)&v15[8 * v22] = v21;
          }
          ++v18;
        }
        while ( v18 < *(_DWORD *)(v2 + 68) >> 5 );
      }
      v23 = *(void **)(v2 + 72);
      *(_QWORD *)(v2 + 72) = v15;
      *(_DWORD *)(v2 + 68) = (32 * v8) | *(_DWORD *)(v2 + 68) & 0x1F;
      if ( v23 )
        PopEtBucketsFree(v23);
      goto LABEL_5;
    }
    if ( *(_DWORD *)(v2 + 68) >= 0x20u )
    {
LABEL_5:
      v9 = *(_DWORD *)(v2 + 68) >> 5;
      v10 = v6[1] & (-1LL << (*(_DWORD *)(v2 + 68) & 0x1F));
      *a2 = v6;
      v11 = *(_QWORD *)(v2 + 72);
      v12 = (v9 - 1) & (HIBYTE(v10)
                      + 37
                      * (BYTE6(v10)
                       + 37
                       * (BYTE5(v10)
                        + 37
                        * (BYTE4(v10)
                         + 37
                         * (BYTE3(v10)
                          + 374026047
                          + 37 * (BYTE2(v10) + 37 * (BYTE1(v10) + 37 * (unsigned int)(unsigned __int8)v10)))))));
      v13 = 0;
      *v6 = *(_QWORD *)(v11 + 8 * v12);
      *(_QWORD *)(v11 + 8 * v12) = v6;
      ++*(_DWORD *)(v2 + 64);
      return v13;
    }
  }
  ++*(_DWORD *)(v2 + 620);
  v13 = -1073741670;
  if ( v6 )
  {
    PopEtAggregateKeyCleanup(v6 + 2);
    ExFreePoolWithTag(v6, 0x54456F50u);
  }
  return v13;
}
