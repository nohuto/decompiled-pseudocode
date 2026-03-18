/*
 * XREFs of MiPeriodicZeroingNeeded @ 0x1402A64FC
 * Callers:
 *     MiWakePageZeroing @ 0x14028E71C (MiWakePageZeroing.c)
 *     MiPartitionPeriodicTick @ 0x1402A703C (MiPartitionPeriodicTick.c)
 *     MiBackgroundZeroTimerExpired @ 0x14070E284 (MiBackgroundZeroTimerExpired.c)
 * Callees:
 *     MiGetZeroingCandidateCount @ 0x1402A5B44 (MiGetZeroingCandidateCount.c)
 *     MiEstimatedTimeToZeroPages @ 0x1402A5BF8 (MiEstimatedTimeToZeroPages.c)
 *     MiSuitableZeroingProcessorAvailable @ 0x1405280BC (MiSuitableZeroingProcessorAvailable.c)
 */

__int64 __fastcall MiPeriodicZeroingNeeded(__int64 a1)
{
  BOOL v1; // edi
  unsigned __int64 ZeroingCandidateCount; // rax
  unsigned __int64 v4; // rax
  __int64 v5; // rcx
  unsigned __int64 v6; // rax

  v1 = 1;
  ZeroingCandidateCount = MiGetZeroingCandidateCount(a1, 1);
  if ( !ZeroingCandidateCount )
    return 2LL;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 13896) + 4LL) & 0x80u) != 0 )
    return 0LL;
  v4 = MiEstimatedTimeToZeroPages(a1, ZeroingCandidateCount);
  v5 = *(_QWORD *)(a1 + 14192);
  if ( v5 && *(_BYTE *)(v5 + 161) )
  {
    v1 = 0;
  }
  else if ( v4 >= 0x7A120 )
  {
    v1 = *(_BYTE *)(a1 + 14216) != 0;
  }
  else
  {
    v6 = MiGetZeroingCandidateCount(a1, 0);
    if ( MiEstimatedTimeToZeroPages(a1, v6) >= 0xF4240 )
      return 2LL;
  }
  return MiSuitableZeroingProcessorAvailable(a1, v1, 0LL);
}
