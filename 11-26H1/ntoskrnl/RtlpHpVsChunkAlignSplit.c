/*
 * XREFs of RtlpHpVsChunkAlignSplit @ 0x14024C900
 * Callers:
 *     RtlpHpVsContextAllocate @ 0x14024B710 (RtlpHpVsContextAllocate.c)
 *     RtlpHpVsSlotAllocate @ 0x14024BEE0 (RtlpHpVsSlotAllocate.c)
 *     RtlpHpVsChunkFree @ 0x140355330 (RtlpHpVsChunkFree.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlpHpVsChunkAlignSplit(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v6; // r9
  __int64 v7; // rcx
  unsigned int v8; // r11d
  unsigned __int64 v9; // r8

  v4 = (a3 + 4111) & 0xFFFFFFFFFFFFF000uLL;
  if ( v4 - a3 >= 16
                * (unsigned __int64)(WORD1(a3) ^ WORD1(*(_QWORD *)a3) ^ *(unsigned __int16 *)&PspTlsContext.Timer.TimerType) )
    return 0LL;
  v6 = v4 - 32;
  v7 = (__int64)(v4 - 32 - a3) >> 4;
  v8 = (WORD1(a3) ^ WORD1(*(_QWORD *)a3) ^ *(unsigned __int16 *)&PspTlsContext.Timer.TimerType) - v7;
  *(_WORD *)(a3 + 2) = WORD1(a3) ^ v7 ^ *(_WORD *)&PspTlsContext.Timer.TimerType;
  *(_OWORD *)v6 = 0LL;
  *(_WORD *)(v6 + 2) = v8;
  *(_WORD *)(v6 + 4) = v7;
  *(_QWORD *)v6 ^= *(_QWORD *)&PspTlsContext.Timer.Processor ^ v6;
  v9 = v4 - 32 + 16LL * v8;
  result = v4 - 32;
  if ( v9 < a2 + 16 * ((unsigned __int64)*(unsigned __int16 *)(a2 + 32) + 3) )
    *(_WORD *)(v9 + 4) = WORD2(v9) ^ v8 ^ LOWORD(PspTlsContext.Timer.Period);
  return result;
}
