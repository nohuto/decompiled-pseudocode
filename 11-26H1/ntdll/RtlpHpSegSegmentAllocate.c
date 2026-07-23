/*
 * XREFs of RtlpHpSegSegmentAllocate @ 0x18006DF50
 * Callers:
 *     RtlpHpSegPageRangeAllocate @ 0x1800715F0 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegContextReserve @ 0x1800E1F08 (RtlpHpSegContextReserve.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHpSegSegmentFree @ 0x18006DAE4 (RtlpHpSegSegmentFree.c)
 *     RtlCSparseBitmapBitmaskWrite @ 0x18006E0B8 (RtlCSparseBitmapBitmaskWrite.c)
 *     RtlpHpSegMgrAllocate @ 0x18006E9CC (RtlpHpSegMgrAllocate.c)
 *     RtlpLogHeapCommit @ 0x1800956B0 (RtlpLogHeapCommit.c)
 *     RtlpHpTlLogMemStats @ 0x180106E58 (RtlpHpTlLogMemStats.c)
 *     RtlpHeapLogRangeReserve @ 0x180113B10 (RtlpHeapLogRangeReserve.c)
 */

__int64 __fastcall RtlpHpSegSegmentAllocate(__int64 a1, int a2)
{
  unsigned int v2; // esi
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // rbp
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // r13
  __int64 v11; // rcx
  __int64 v12; // rcx

  v2 = a2 + 2;
  v4 = 0LL;
  v5 = RtlpHpSegMgrAllocate(a1, (unsigned int)(a2 + 2));
  v7 = v5;
  if ( v5 )
  {
    v8 = (unsigned int)-*(_DWORD *)a1;
    _InterlockedAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1), v8 >> 12);
    _InterlockedAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 8), v2);
    v9 = 2 * ((unsigned __int64)(v5 - qword_1801C6908) >> 20);
    v10 = v9 + 2 * ((unsigned __int64)(unsigned int)v8 >> 20);
    while ( v9 < v10 )
    {
      if ( (int)RtlCSparseBitmapBitmaskWrite(&BaseAddress, v9, v6, ((_DWORD)v8 != 0x100000) + 1LL) < 0 )
      {
        RtlpHpSegSegmentFree(a1, v7, v2, 0);
        return v4;
      }
      v9 += 2LL;
    }
    v11 = *(_QWORD *)(a1 + 56);
    if ( *(char *)(v11 + 20) < 0 )
      RtlpLogHeapCommit(v11, v7, v2 << 12, 12LL);
    if ( RtlGetCurrentServiceSessionId() )
      v12 = (__int64)NtCurrentPeb()->SharedData + 558;
    else
      v12 = 2147353480LL;
    if ( *(_BYTE *)v12 )
      RtlpHeapLogRangeReserve(*(_QWORD *)(a1 + 56), v7, v8);
    if ( (RtlpHpHeapFeatures & 0x10) != 0 )
      RtlpHpTlLogMemStats(*(_QWORD *)(a1 + 56), a1 + *(__int16 *)(a1 + 22));
    return v7;
  }
  return v4;
}
