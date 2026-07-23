/*
 * XREFs of RtlpHpSegContextReserve @ 0x1800E1F08
 * Callers:
 *     RtlpHpHeapCreate @ 0x180104964 (RtlpHpHeapCreate.c)
 * Callees:
 *     RtlpHpSegSegmentAllocate @ 0x18006DF50 (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpSegFreeRangeInsert @ 0x18008B1C8 (RtlpHpSegFreeRangeInsert.c)
 *     RtlpHpSegHeapAddSegment @ 0x1800E1FF8 (RtlpHpSegHeapAddSegment.c)
 *     RtlpHpSegSegmentInitialize @ 0x1800E2038 (RtlpHpSegSegmentInitialize.c)
 */

__int64 __fastcall RtlpHpSegContextReserve(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rdi
  unsigned int v5; // ebp
  unsigned __int64 v6; // r12
  unsigned int v7; // ebx
  unsigned int v9; // esi
  __int64 v10; // rax
  __int64 v11; // r15

  v3 = (unsigned __int64)(a3 + 4095) >> 12;
  v5 = (256 - *(unsigned __int8 *)(a1 + 10)) << *(_BYTE *)(a1 + 9);
  v6 = ((unsigned __int64)(unsigned int)-*(_DWORD *)a1 + a2 - 1) / (unsigned int)-*(_DWORD *)a1;
  v7 = 0;
  while ( v6 )
  {
    v9 = v3;
    if ( v3 > v5 )
      v9 = v5;
    v10 = RtlpHpSegSegmentAllocate(a1, v9);
    v11 = v10;
    if ( !v10 )
      return (unsigned int)-1073741670;
    RtlpHpSegSegmentInitialize(a1, v10, v9);
    RtlpHpSegFreeRangeInsert(a1, v11 + 32LL * *(unsigned __int8 *)(a1 + 10), 1);
    RtlpHpSegHeapAddSegment(a1, v11);
    --v6;
    v3 = (v3 - v5) & -(__int64)(v5 < v3);
  }
  return v7;
}
