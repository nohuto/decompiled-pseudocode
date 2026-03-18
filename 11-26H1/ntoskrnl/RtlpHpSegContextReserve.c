/*
 * XREFs of RtlpHpSegContextReserve @ 0x1406392C4
 * Callers:
 *     RtlpHpHeapCreate @ 0x140638298 (RtlpHpHeapCreate.c)
 * Callees:
 *     RtlpHpSegFreeRangeInsert @ 0x14034B28C (RtlpHpSegFreeRangeInsert.c)
 *     RtlpHpSegSegmentAllocate @ 0x14034FDFC (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpSegSegmentInitialize @ 0x1403503FC (RtlpHpSegSegmentInitialize.c)
 *     RtlpHpSegHeapAddSegment @ 0x1404BE45C (RtlpHpSegHeapAddSegment.c)
 */

__int64 __fastcall RtlpHpSegContextReserve(_BYTE *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rdi
  unsigned int v5; // ebp
  unsigned __int64 v6; // r12
  unsigned int v7; // ebx
  unsigned int v8; // esi
  __int64 v9; // rax
  unsigned __int64 v10; // r15

  v3 = (unsigned __int64)(a3 + 4095) >> 12;
  v5 = (256 - (unsigned __int8)a1[10]) << a1[9];
  v6 = ((unsigned __int64)(unsigned int)-*(_DWORD *)a1 + a2 - 1) / (unsigned int)-*(_DWORD *)a1;
  v7 = 0;
  while ( v6 )
  {
    v8 = v3;
    if ( v3 > v5 )
      v8 = v5;
    v9 = RtlpHpSegSegmentAllocate((__int64)a1, v8, 0);
    v10 = v9;
    if ( !v9 )
      return (unsigned int)-1073741670;
    RtlpHpSegSegmentInitialize(a1, v9, v8);
    RtlpHpSegFreeRangeInsert((__int64)a1, v10 + 32LL * (unsigned __int8)a1[10], 1LL);
    RtlpHpSegHeapAddSegment((__int64)a1, v10);
    --v6;
    v3 = (v3 - v5) & -(__int64)(v5 < v3);
  }
  return v7;
}
