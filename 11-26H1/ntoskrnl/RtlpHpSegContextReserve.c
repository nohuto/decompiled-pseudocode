/*
 * XREFs of RtlpHpSegContextReserve @ 0x14063C2D4
 * Callers:
 *     RtlpHpHeapCreate @ 0x14063B29C (RtlpHpHeapCreate.c)
 * Callees:
 *     RtlpHpSegFreeRangeInsert @ 0x14034D30C (RtlpHpSegFreeRangeInsert.c)
 *     RtlpHpSegSegmentAllocate @ 0x140351E7C (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpSegSegmentInitialize @ 0x14035247C (RtlpHpSegSegmentInitialize.c)
 *     RtlpHpSegHeapAddSegment @ 0x1404B7CAC (RtlpHpSegHeapAddSegment.c)
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
    RtlpHpSegFreeRangeInsert((__int64)a1, v10 + 32LL * (unsigned __int8)a1[10], 1);
    RtlpHpSegHeapAddSegment((__int64)a1, v10);
    --v6;
    v3 = (v3 - v5) & -(__int64)(v5 < v3);
  }
  return v7;
}
