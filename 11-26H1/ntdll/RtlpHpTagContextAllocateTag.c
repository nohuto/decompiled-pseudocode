/*
 * XREFs of RtlpHpTagContextAllocateTag @ 0x1800A1BC4
 * Callers:
 *     RtlpHpTagAllocateHeap @ 0x180097930 (RtlpHpTagAllocateHeap.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpMetadataAlloc @ 0x180043620 (RtlpHpMetadataAlloc.c)
 *     RtlpHpMetadataFree @ 0x180087EE8 (RtlpHpMetadataFree.c)
 *     RtlpHpTagContextFindMapping @ 0x1800D7190 (RtlpHpTagContextFindMapping.c)
 *     RtlpHpTagContextFindFreeTag @ 0x180104BDC (RtlpHpTagContextFindFreeTag.c)
 */

__int64 __fastcall RtlpHpTagContextAllocateTag(__int64 a1, __int128 *a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // rdx
  signed __int64 v9; // rbx
  unsigned __int16 v10; // di
  __int128 v11; // xmm0
  __int64 Mapping; // rax
  unsigned __int16 FreeTag; // ax
  __int64 v14; // r8
  __int64 v15; // rdx
  signed __int64 *v16; // roff
  signed __int64 v17; // rax
  signed __int64 v18; // rax
  signed __int64 v19; // rtt
  signed __int64 v20; // rcx
  __int128 v22[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v23; // [rsp+50h] [rbp+8h]

  v22[0] = RtlpHpEnvHandle;
  v7 = RtlpHpMetadataAlloc(0x30uLL, 0x30uLL, 0, v22);
  v9 = v7;
  if ( v7 )
  {
    *(_OWORD *)v7 = 0LL;
    *(_OWORD *)(v7 + 16) = 0LL;
    *(_OWORD *)(v7 + 32) = 0LL;
    v11 = *a2;
    *(_QWORD *)(v7 + 32) = a4;
    *(_QWORD *)(v7 + 8) = a3;
    *(_OWORD *)(v7 + 16) = v11;
    RtlAcquireSRWLockExclusive(&RtlpHpTagContext, v8);
    Mapping = RtlpHpTagContextFindMapping(&RtlpHpTagContext, a2, a3);
    if ( Mapping )
    {
      _InterlockedAdd64((volatile signed __int64 *)(Mapping + 32), a4);
      v10 = *(_WORD *)(Mapping + 40);
    }
    else
    {
      FreeTag = RtlpHpTagContextFindFreeTag();
      v10 = FreeTag;
      if ( FreeTag )
      {
        *(_WORD *)(v9 + 40) = FreeTag;
        *(_QWORD *)(qword_1801CCBF8 + 8LL * FreeTag - 8) = v9;
        v23 = *(_QWORD *)(v9 + 8) & (-1LL << (dword_1801CCBEC & 0x1F));
        v14 = qword_1801CCBF0;
        v15 = (((unsigned int)dword_1801CCBEC >> 5) - 1) & (HIBYTE(v23)
                                                          + 37
                                                          * (BYTE6(v23)
                                                           + 37
                                                           * (BYTE5(v23)
                                                            + 37
                                                            * (BYTE4(v23)
                                                             + 37
                                                             * (BYTE3(v23)
                                                              + 374026047
                                                              + 37
                                                              * (BYTE2(v23)
                                                               + 37 * (BYTE1(v23) + 37 * (unsigned __int8)v23)))))));
        v16 = (signed __int64 *)(qword_1801CCBF0 + 8 * v15);
        _m_prefetchw(v16);
        v17 = *v16;
        *(_QWORD *)v9 = *v16;
        v19 = v17;
        v18 = _InterlockedCompareExchange64(v16, v9, v17);
        if ( v19 != v18 )
        {
          do
          {
            v20 = v18;
            *(_QWORD *)v9 = v18;
            v18 = _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 8 * v15), v9, v18);
          }
          while ( v18 != v20 );
        }
        v9 = 0LL;
        word_1801CCC00 = v10;
        ++word_1801CCC02;
        ++dword_1801CCBE8;
      }
    }
    RtlReleaseSRWLockExclusive(&RtlpHpTagContext);
    if ( v9 )
    {
      v22[0] = RtlpHpEnvHandle;
      RtlpHpMetadataFree(v9, v22);
    }
  }
  else
  {
    return 0;
  }
  return v10;
}
