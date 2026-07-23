/*
 * XREFs of BgpFwReserveAllocate @ 0x14035867C
 * Callers:
 *     BgpFwAllocateMemory @ 0x140357C64 (BgpFwAllocateMemory.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x14035A440 (RtlFindClearBitsAndSet.c)
 */

__int64 __fastcall BgpFwReserveAllocate(__int64 a1)
{
  unsigned __int64 v1; // rbx
  ULONG ClearBitsAndSet; // r8d
  int v3; // eax
  __int64 result; // rax

  v1 = ((a1 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 32;
  ClearBitsAndSet = RtlFindClearBitsAndSet(&stru_140E64FC0, v1, stru_140E3EAA8.ThreadTimerDelay);
  v3 = *(_DWORD *)&stru_140E3EAA8.Spare26;
  if ( ClearBitsAndSet > *(_DWORD *)&stru_140E3EAA8.Spare26 - 16 )
  {
    stru_140E3EAA8.ThreadTimerDelay = 0;
    ClearBitsAndSet = RtlFindClearBitsAndSet(&stru_140E64FC0, v1, 0);
    v3 = *(_DWORD *)&stru_140E3EAA8.Spare26;
  }
  if ( ClearBitsAndSet > v3 - 16 )
    return 0LL;
  stru_140E3EAA8.ThreadTimerDelay = v1 + ClearBitsAndSet;
  result = ClearBitsAndSet + qword_140E64FB0 + 32;
  *(_DWORD *)(result - 24) = 1262700354;
  *(_QWORD *)(result - 16) = v1;
  *(_QWORD *)(result - 8) = 0LL;
  return result;
}
