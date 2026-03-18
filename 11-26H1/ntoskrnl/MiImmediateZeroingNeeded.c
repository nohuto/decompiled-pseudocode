/*
 * XREFs of MiImmediateZeroingNeeded @ 0x1402DEC2C
 * Callers:
 *     MiWakePageZeroing @ 0x14028E71C (MiWakePageZeroing.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402DCDD0 (MiInsertPageInFreeOrZeroedList.c)
 * Callees:
 *     MiGetZeroingCandidateCount @ 0x1402A5B44 (MiGetZeroingCandidateCount.c)
 *     MiEstimatedTimeToZeroPages @ 0x1402A5BF8 (MiEstimatedTimeToZeroPages.c)
 *     MiSuitableZeroingProcessorAvailable @ 0x1405280BC (MiSuitableZeroingProcessorAvailable.c)
 */

__int64 __fastcall MiImmediateZeroingNeeded(__int64 a1)
{
  unsigned __int64 ZeroingCandidateCount; // rax
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  bool v6; // cf

  ZeroingCandidateCount = MiGetZeroingCandidateCount(a1, 1);
  if ( !ZeroingCandidateCount )
    return 2LL;
  if ( ZeroingCandidateCount >= 0x40000 && (*(_DWORD *)(*(_QWORD *)(a1 + 13896) + 4LL) & 0x80u) != 0 )
    return 0LL;
  v3 = MiEstimatedTimeToZeroPages(a1, ZeroingCandidateCount);
  v4 = MiGetZeroingCandidateCount(a1, 0);
  v5 = MiEstimatedTimeToZeroPages(a1, v4);
  if ( v3 < 0xF4240 )
    v6 = v5 < 0x7A120;
  else
    v6 = v5 < 0x989680;
  if ( !v6 || stru_140E36558.SystemCallNumber )
    return 2LL;
  return MiSuitableZeroingProcessorAvailable(a1, 0LL, 1LL);
}
