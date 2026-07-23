/*
 * XREFs of RtlpHpTagContextAllocateTag @ 0x1800A0CF4
 * Callers:
 *     RtlpHpTagAllocateHeap @ 0x180096A80 (RtlpHpTagAllocateHeap.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpMetadataAlloc @ 0x18002DB90 (RtlpHpMetadataAlloc.c)
 *     RtlpHpMetadataFree @ 0x18007F268 (RtlpHpMetadataFree.c)
 *     RtlpHpTagContextFindMapping @ 0x1800D4150 (RtlpHpTagContextFindMapping.c)
 *     RtlpHpTagContextFindFreeTag @ 0x180103F5C (RtlpHpTagContextFindFreeTag.c)
 */

__int64 __fastcall RtlpHpTagContextAllocateTag(__int64 a1, __int128 *a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v7; // rax
  signed __int64 v8; // rbx
  unsigned __int16 v9; // di
  __int128 v10; // xmm0
  __int64 Mapping; // rax
  unsigned __int16 FreeTag; // ax
  __int64 v13; // r8
  __int64 v14; // rdx
  signed __int64 *v15; // roff
  signed __int64 v16; // rax
  signed __int64 v17; // rax
  signed __int64 v18; // rtt
  signed __int64 v19; // rcx
  __int128 v21[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v22; // [rsp+50h] [rbp+8h]

  v21[0] = RtlpHpEnvHandle;
  v7 = RtlpHpMetadataAlloc(0x30uLL, 0x30uLL, 0, v21);
  v8 = v7;
  if ( v7 )
  {
    *(_OWORD *)v7 = 0LL;
    *(_OWORD *)(v7 + 16) = 0LL;
    *(_OWORD *)(v7 + 32) = 0LL;
    v10 = *a2;
    *(_QWORD *)(v7 + 32) = a4;
    *(_QWORD *)(v7 + 8) = a3;
    *(_OWORD *)(v7 + 16) = v10;
    RtlAcquireSRWLockExclusive(&RtlpHpTagContext);
    Mapping = RtlpHpTagContextFindMapping(&RtlpHpTagContext, a2, a3);
    if ( Mapping )
    {
      _InterlockedAdd64((volatile signed __int64 *)(Mapping + 32), a4);
      v9 = *(_WORD *)(Mapping + 40);
    }
    else
    {
      FreeTag = RtlpHpTagContextFindFreeTag();
      v9 = FreeTag;
      if ( FreeTag )
      {
        *(_WORD *)(v8 + 40) = FreeTag;
        *(_QWORD *)(qword_1801CBC38 + 8LL * FreeTag - 8) = v8;
        v22 = *(_QWORD *)(v8 + 8) & (-1LL << (dword_1801CBC2C & 0x1F));
        v13 = qword_1801CBC30;
        v14 = (((unsigned int)dword_1801CBC2C >> 5) - 1) & (HIBYTE(v22)
                                                          + 37
                                                          * (BYTE6(v22)
                                                           + 37
                                                           * (BYTE5(v22)
                                                            + 37
                                                            * (BYTE4(v22)
                                                             + 37
                                                             * (BYTE3(v22)
                                                              + 374026047
                                                              + 37
                                                              * (BYTE2(v22)
                                                               + 37 * (BYTE1(v22) + 37 * (unsigned __int8)v22)))))));
        v15 = (signed __int64 *)(qword_1801CBC30 + 8 * v14);
        _m_prefetchw(v15);
        v16 = *v15;
        *(_QWORD *)v8 = *v15;
        v18 = v16;
        v17 = _InterlockedCompareExchange64(v15, v8, v16);
        if ( v18 != v17 )
        {
          do
          {
            v19 = v17;
            *(_QWORD *)v8 = v17;
            v17 = _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 8 * v14), v8, v17);
          }
          while ( v17 != v19 );
        }
        v8 = 0LL;
        word_1801CBC40 = v9;
        ++word_1801CBC42;
        ++dword_1801CBC28;
      }
    }
    RtlReleaseSRWLockExclusive(&RtlpHpTagContext);
    if ( v8 )
    {
      v21[0] = RtlpHpEnvHandle;
      RtlpHpMetadataFree(v8, v21);
    }
  }
  else
  {
    return 0;
  }
  return v9;
}
