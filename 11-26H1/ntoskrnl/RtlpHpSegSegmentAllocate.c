/*
 * XREFs of RtlpHpSegSegmentAllocate @ 0x140351E7C
 * Callers:
 *     RtlpHpSegPageRangeAllocate @ 0x14034D918 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegContextReserve @ 0x14063C2D4 (RtlpHpSegContextReserve.c)
 * Callees:
 *     RtlpHpSegSegmentFree @ 0x1403517EC (RtlpHpSegSegmentFree.c)
 *     RtlCSparseBitmapBitmaskWrite @ 0x1403518C8 (RtlCSparseBitmapBitmaskWrite.c)
 *     RtlpHpSegMgrAllocate @ 0x1403519C8 (RtlpHpSegMgrAllocate.c)
 *     RtlpLogHeapCommit @ 0x14052FFE4 (RtlpLogHeapCommit.c)
 */

__int64 __fastcall RtlpHpSegSegmentAllocate(__int64 a1, int a2, int a3)
{
  unsigned int v3; // edi
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // r8
  unsigned __int64 v8; // rdx
  _BOOL8 v9; // r15
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // r12
  __int64 v12; // rcx

  v3 = a2 + 2;
  v5 = 0LL;
  v6 = RtlpHpSegMgrAllocate((int *)a1, a2 + 2, a3);
  if ( v6 )
  {
    v8 = (unsigned int)-*(_DWORD *)a1;
    _InterlockedAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1), v8 >> 12);
    _InterlockedAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 8), v3);
    v9 = (_DWORD)v8 != 0x100000;
    v10 = 2 * ((v6 - ExpUuidLock.ThreadLock) >> 20);
    v11 = v10 + 2 * (v8 >> 20);
    while ( v10 < v11 )
    {
      if ( (int)RtlCSparseBitmapBitmaskWrite((__int64)&ExpUuidLock.CycleTime, v10, v7, v9 + 1) < 0 )
      {
        RtlpHpSegSegmentFree(a1, v6, v3, 0);
        return v5;
      }
      v10 += 2LL;
    }
    v12 = *(_QWORD *)(a1 + 56);
    if ( (*(_DWORD *)(v12 + 20) & 0x80u) != 0 )
      RtlpLogHeapCommit(v12, v6, v3 << 12, 12LL);
    return v6;
  }
  return v5;
}
