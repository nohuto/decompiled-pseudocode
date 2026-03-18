/*
 * XREFs of RtlpHpHeapEnableLFH @ 0x140638888
 * Callers:
 *     ExpHeapInitLfhStartCallback @ 0x1406D2FD0 (ExpHeapInitLfhStartCallback.c)
 *     ExpPoolPhase1Init @ 0x1406D3A9C (ExpPoolPhase1Init.c)
 * Callees:
 *     RtlpHpLfhContextEnable @ 0x1406396AC (RtlpHpLfhContextEnable.c)
 */

__int64 __fastcall RtlpHpHeapEnableLFH(__int64 a1)
{
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 20) & 0x400000) == 0 )
    NT_ASSERT("Heap->GlobalFlags & 0x00400000");
  result = RtlpHpLfhContextEnable(a1 + 896, &unk_140E6BC58);
  if ( (int)result >= 0 )
    _InterlockedAnd((volatile signed __int32 *)(a1 + 20), 0xFFBFFFFF);
  return result;
}
