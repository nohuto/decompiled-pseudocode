/*
 * XREFs of RtlpHpFreeHeap @ 0x140349090
 * Callers:
 *     ExpFreeHeapSpecialPool @ 0x140347BA8 (ExpFreeHeapSpecialPool.c)
 *     ExFreeHeapPages @ 0x1403483D8 (ExFreeHeapPages.c)
 *     ExpHpCompactHeapCallback @ 0x140348F70 (ExpHpCompactHeapCallback.c)
 *     ExAllocateContiguousHeapPool @ 0x14034CAE0 (ExAllocateContiguousHeapPool.c)
 *     ExAllocateHeapPool @ 0x14039A530 (ExAllocateHeapPool.c)
 *     ExFreeHeapPool @ 0x1403A9910 (ExFreeHeapPool.c)
 * Callees:
 *     RtlCSparseBitmapBitmaskRead @ 0x14025019C (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpEnvCompactionSchedule @ 0x14034F6D0 (RtlpHpEnvCompactionSchedule.c)
 *     RtlpHpSegFreeInternal @ 0x140354B48 (RtlpHpSegFreeInternal.c)
 *     RtlpHpLargeFree @ 0x14035645C (RtlpHpLargeFree.c)
 *     RtlpLogHeapFailure @ 0x140524308 (RtlpLogHeapFailure.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x140529D0C (RtlpHpLfhThreadDataInitializeSet.c)
 */

__int64 __fastcall RtlpHpFreeHeap(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  int v5; // eax
  __int64 v6; // r10
  __int64 v8; // r9
  unsigned __int64 v9; // r11
  unsigned __int64 v10; // r11
  unsigned __int64 v11; // rbx
  unsigned int v12; // edi
  __int64 v13; // r14
  unsigned int v14; // ecx
  unsigned __int64 v15; // rbp
  __int64 v16; // r9
  unsigned int v17; // ecx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int64 v22; // r8
  signed __int64 v23; // rax
  char v24; // dl
  unsigned __int64 v25; // r8
  int v26; // edx
  unsigned __int64 v27; // rdx
  signed __int64 v28; // rtt
  __int64 v30; // r9
  signed __int64 v31; // rax
  __int64 v32; // r10
  signed __int64 v33; // rax
  signed __int64 v34; // rtt
  signed __int64 v35; // rdx
  int v36; // [rsp+34h] [rbp-24h]
  signed __int64 v37; // [rsp+78h] [rbp+20h]

  if ( (_WORD)a2 )
  {
    v6 = a1 + 320;
  }
  else
  {
    v4 = RtlCSparseBitmapBitmaskRead((__int64)&ExpUuidLock.CycleTime, 2 * ((a2 - ExpUuidLock.ThreadLock) >> 20));
    if ( !v4 )
      return RtlpHpLargeFree(a1, a2) != 0;
    v5 = v4 - 1;
    if ( v5 == 2 )
      return RtlpHpLargeFree(a1, a2) != 0;
    v6 = a1 + 320;
    if ( v5 == 1 )
      v6 = a1 + 512;
  }
  v8 = *(_QWORD *)v6 & a2;
  if ( (*(_QWORD *)&PspTlsContext.Timer.Processor ^ *(_QWORD *)(v8 + 0x10) ^ v8) == v6 )
  {
    v9 = v8 + 32 * ((unsigned __int64)(unsigned int)(a2 - v8) >> *(_BYTE *)(v6 + 8));
    v10 = v9 - 32LL * *(unsigned __int8 *)(v9 + 26);
    v11 = v8 + ((unsigned int)((__int64)(v10 - v8) >> 5) << *(_BYTE *)(v6 + 8));
    if ( *(_BYTE *)(v10 + 24) + (v11 == a2) == 11 )
    {
      v12 = 0;
      v13 = *(_QWORD *)(v6 + 24);
      v14 = a2
          - ((LODWORD(PspTlsContext.WaitBlock[0].WaitListEntry.Flink) ^ *(_DWORD *)(v11 + 40) ^ (unsigned int)(v11 >> 12)) >> 16)
          - v11;
      v15 = (v14
           * (unsigned __int64)*(unsigned int *)(((unsigned __int64)*(unsigned __int16 *)(v11 + 44) << 6) + v13 + 72)) >> 32;
      if ( v14 == (_DWORD)v15
                * (unsigned __int16)(LOWORD(PspTlsContext.WaitBlock[0].WaitListEntry.Flink) ^ *(_WORD *)(v11 + 40) ^ (v11 >> 12)) )
      {
        v16 = (*(_DWORD *)(v13 + 84) >> 13) & 0x3FFFF;
        _BitScanReverse(&v17, v16);
        v18 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb()->ExSaPageArray + v17 - 2)
                                    + 8 * (v16 ^ (unsigned int)(1 << v17))
                                    + 8)
                        + 8LL * ((*(_DWORD *)(v13 + 84) >> 4) & 0x1FF));
        if ( !v18 )
          LOWORD(v18) = RtlpHpLfhThreadDataInitializeSet(v13);
        if ( (_WORD)v18 == *(_WORD *)(v11 + 46) && *(_BYTE *)(v11 + 22) != 1 )
        {
          v19 = *(_QWORD *)(v11 + 8 * (v15 >> 6) + 64);
          v20 = __ROL8__(-2LL, v15 & 0x3F);
          v21 = v15;
          *(_QWORD *)(v11 + 8 * (v15 >> 6) + 64) = v20 & v19;
          if ( (~v20 & v19) != 0 )
          {
            ++*(_WORD *)(v11 + 32);
            return 1LL;
          }
          goto LABEL_18;
        }
        v21 = v15;
        v22 = *(_QWORD *)(v11 + 8 * (v15 >> 6) + 64);
        if ( !_bittest64((const __int64 *)&v22, v15 & 0x3F) )
        {
LABEL_18:
          RtlpLogHeapFailure(17, *(_QWORD *)v13, a2, v11, v21, 0LL);
          return 0LL;
        }
        v23 = *(_QWORD *)(v11 + 16);
        do
        {
          v37 = v23;
          v24 = BYTE6(v23);
          v36 = HIDWORD(v23);
          if ( BYTE6(v23) == 1 )
            v24 = 2;
          BYTE6(v37) = v24;
          if ( a2 )
          {
            v25 = *(_QWORD *)(v13 + 88);
            v26 = v25;
            *(_WORD *)a2 = v23;
            v22 = HIDWORD(v25);
            LOWORD(v37) = v15 + 1;
            *(_DWORD *)(a2 + 8) = a2 ^ v22 ^ __ROL4__(*(_DWORD *)a2 ^ v26, v23);
          }
          WORD1(v37) = WORD1(v23) + 1;
          v27 = (unsigned __int64)*(unsigned __int16 *)(v11 + 44) << 6;
          v28 = v23;
          v23 = _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 16), v37, v23);
        }
        while ( v28 != v23 );
        if ( !*(_BYTE *)(v27 + v13 + 92) )
        {
          *(_BYTE *)(v27 + v13 + 92) = 1;
          if ( !(BYTE1(**(_QWORD **)(*(_QWORD *)v13 + 56LL)) == 1
               ? HIDWORD(ExSaPageGroupDescriptorArrayLock.StackBase)
               : LODWORD(ExSaPageGroupDescriptorArrayLock.ThreadLock)) )
            RtlpHpEnvCompactionSchedule(*(_QWORD *)(*(_QWORD *)v13 + 56LL), v27, v22, 2LL);
        }
        if ( BYTE2(v36) == 1 )
        {
          v30 = v13 + ((unsigned __int64)(unsigned __int16)v36 << 6);
          _m_prefetchw((const void *)(v30 + 8));
          v31 = *(_QWORD *)(v30 + 8);
          v32 = *(_QWORD *)(v11 + 24);
          *(_QWORD *)(v11 + 24) = v32 & 0xFFF | (v31 - (v31 & 0xFFF));
          v34 = v31;
          v33 = _InterlockedCompareExchange64((volatile signed __int64 *)(v30 + 8), v11 | v31 & 0xFFF, v31);
          if ( v34 != v33 )
          {
            do
            {
              v35 = v33;
              *(_QWORD *)(v11 + 24) = v32 ^ (v33 ^ v32) & 0xFFFFFFFFFFFFF000uLL;
              v33 = _InterlockedCompareExchange64((volatile signed __int64 *)(v30 + 8), v11 | v33 & 0xFFF, v33);
            }
            while ( v33 != v35 );
          }
        }
        return 1;
      }
      return v12;
    }
    else
    {
      return RtlpHpSegFreeInternal(v6, a2, v10, 0LL);
    }
  }
  else
  {
    RtlpLogHeapFailure(9, *(_QWORD *)(v6 + 56), a2, 0, 0LL, 0LL);
    return 0LL;
  }
}
