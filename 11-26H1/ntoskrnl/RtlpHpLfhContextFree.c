/*
 * XREFs of RtlpHpLfhContextFree @ 0x140355DF0
 * Callers:
 *     RtlpHpMetadataFree @ 0x140354540 (RtlpHpMetadataFree.c)
 *     RtlpHpAllocateHeapSlow @ 0x1403546B4 (RtlpHpAllocateHeapSlow.c)
 * Callees:
 *     RtlpHpEnvCompactionSchedule @ 0x14034F6D0 (RtlpHpEnvCompactionSchedule.c)
 *     RtlpLogHeapFailure @ 0x140524308 (RtlpLogHeapFailure.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x140529D0C (RtlpHpLfhThreadDataInitializeSet.c)
 */

__int64 __fastcall RtlpHpLfhContextFree(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned int v5; // ebp
  unsigned int v6; // r9d
  unsigned int v8; // edx
  unsigned __int64 v9; // r14
  __int64 v10; // r9
  unsigned int v11; // ecx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  signed __int64 v18; // rax
  char v19; // dl
  __int64 v20; // r8
  unsigned __int64 v21; // rdx
  signed __int64 v22; // rtt
  __int64 v24; // r9
  signed __int64 v25; // rax
  __int64 v26; // r10
  signed __int64 v27; // rax
  signed __int64 v28; // rtt
  signed __int64 v29; // rdx
  signed __int64 v30; // [rsp+50h] [rbp+8h]
  int v31; // [rsp+5Ch] [rbp+14h]

  v5 = 0;
  v6 = LODWORD(PspTlsContext.WaitBlock[0].WaitListEntry.Flink) ^ *(_DWORD *)(a2 + 40) ^ (a2 >> 12);
  v8 = a3 - HIWORD(v6) - a2;
  v9 = (v8 * (unsigned __int64)*(unsigned int *)(((unsigned __int64)*(unsigned __int16 *)(a2 + 44) << 6) + a1 + 72)) >> 32;
  if ( v8 != (_DWORD)v9 * (unsigned __int16)v6 )
    return v5;
  v10 = (*(_DWORD *)(a1 + 84) >> 13) & 0x3FFFF;
  _BitScanReverse(&v11, v10);
  v12 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb()->ExSaPageArray + v11 - 2)
                              + 8 * (v10 ^ (unsigned int)(1 << v11))
                              + 8)
                  + 8LL * ((*(_DWORD *)(a1 + 84) >> 4) & 0x1FF));
  if ( !v12 )
    LOWORD(v12) = RtlpHpLfhThreadDataInitializeSet(a1);
  if ( (_WORD)v12 != *(_WORD *)(a2 + 46) || *(_BYTE *)(a2 + 22) == 1 )
  {
    v15 = v9;
    v16 = *(_QWORD *)(a2 + 8 * (v9 >> 6) + 64);
    if ( _bittest64(&v16, v9 & 0x3F) )
    {
      v18 = *(_QWORD *)(a2 + 16);
      do
      {
        v30 = v18;
        v19 = BYTE6(v18);
        v31 = HIDWORD(v18);
        if ( BYTE6(v18) == 1 )
          v19 = 2;
        BYTE6(v30) = v19;
        if ( a3 )
        {
          v20 = *(_QWORD *)(a1 + 88);
          *(_WORD *)a3 = v18;
          LOWORD(v30) = v9 + 1;
          *(_DWORD *)(a3 + 8) = a3 ^ HIDWORD(v20) ^ __ROL4__(*(_DWORD *)a3 ^ v20, v18);
        }
        WORD1(v30) = WORD1(v18) + 1;
        v21 = (unsigned __int64)*(unsigned __int16 *)(a2 + 44) << 6;
        v22 = v18;
        v18 = _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 16), v30, v18);
      }
      while ( v22 != v18 );
      if ( !*(_BYTE *)(v21 + a1 + 92) )
      {
        *(_BYTE *)(v21 + a1 + 92) = 1;
        if ( !(BYTE1(**(_QWORD **)(*(_QWORD *)a1 + 56LL)) == 1
             ? HIDWORD(ExSaPageGroupDescriptorArrayLock.StackBase)
             : LODWORD(ExSaPageGroupDescriptorArrayLock.ThreadLock)) )
          RtlpHpEnvCompactionSchedule(*(_QWORD **)(*(_QWORD *)a1 + 56LL));
      }
      if ( BYTE2(v31) == 1 )
      {
        v24 = a1 + ((unsigned __int64)(unsigned __int16)v31 << 6);
        _m_prefetchw((const void *)(v24 + 8));
        v25 = *(_QWORD *)(v24 + 8);
        v26 = *(_QWORD *)(a2 + 24);
        *(_QWORD *)(a2 + 24) = v26 & 0xFFF | (v25 - (v25 & 0xFFF));
        v28 = v25;
        v27 = _InterlockedCompareExchange64((volatile signed __int64 *)(v24 + 8), a2 | v25 & 0xFFF, v25);
        if ( v28 != v27 )
        {
          do
          {
            v29 = v27;
            *(_QWORD *)(a2 + 24) = v26 ^ (v27 ^ v26) & 0xFFFFFFFFFFFFF000uLL;
            v27 = _InterlockedCompareExchange64((volatile signed __int64 *)(v24 + 8), a2 | v27 & 0xFFF, v27);
          }
          while ( v27 != v29 );
        }
      }
      return 1;
    }
LABEL_9:
    RtlpLogHeapFailure(17, *(_QWORD *)a1, a3, a2, v15, 0LL);
    return 0LL;
  }
  v13 = *(_QWORD *)(a2 + 8 * (v9 >> 6) + 64);
  v14 = __ROL8__(-2LL, v9 & 0x3F);
  v15 = v9;
  *(_QWORD *)(a2 + 8 * (v9 >> 6) + 64) = v13 & v14;
  if ( (~v14 & v13) == 0 )
    goto LABEL_9;
  ++*(_WORD *)(a2 + 32);
  return 1;
}
