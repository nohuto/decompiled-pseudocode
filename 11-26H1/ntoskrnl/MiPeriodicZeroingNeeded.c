/*
 * XREFs of MiPeriodicZeroingNeeded @ 0x1402A58F4
 * Callers:
 *     MiWakePageZeroing @ 0x14028DC7C (MiWakePageZeroing.c)
 *     MiPartitionPeriodicTick @ 0x1402A6458 (MiPartitionPeriodicTick.c)
 *     MiBackgroundZeroTimerExpired @ 0x140712F84 (MiBackgroundZeroTimerExpired.c)
 * Callees:
 *     MiGetZeroingCandidateCount @ 0x140481224 (MiGetZeroingCandidateCount.c)
 *     MiEstimatedTimeToZeroPages @ 0x14048A0E0 (MiEstimatedTimeToZeroPages.c)
 *     MiSuitableZeroingProcessorAvailable @ 0x14052A72C (MiSuitableZeroingProcessorAvailable.c)
 *     Feature_Servicing_Mm_RestrictZeroingOnParkedCores__private_IsEnabledDeviceUsageNoInline @ 0x140712E5C (Feature_Servicing_Mm_RestrictZeroingOnParkedCores__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall MiPeriodicZeroingNeeded(__int64 a1)
{
  BOOL v1; // ebx
  __int64 ZeroingCandidateCount; // rax
  unsigned __int64 v5; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // rsi
  __int64 v8; // rax

  v1 = 1;
  ZeroingCandidateCount = MiGetZeroingCandidateCount(a1, 1LL);
  if ( !ZeroingCandidateCount )
    return 2LL;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 13896) + 4LL) & 0x80u) != 0 )
    return 0LL;
  v5 = MiEstimatedTimeToZeroPages(a1, ZeroingCandidateCount);
  v6 = *(_QWORD *)(a1 + 14192);
  v7 = v5;
  if ( v6 && *(_BYTE *)(v6 + 161) )
    goto LABEL_12;
  if ( v5 >= 0x7A120 )
  {
    if ( *(_BYTE *)(a1 + 14216) )
      return MiSuitableZeroingProcessorAvailable(a1, v1, 0LL);
    if ( (unsigned int)Feature_Servicing_Mm_RestrictZeroingOnParkedCores__private_IsEnabledDeviceUsageNoInline() )
    {
      v1 = v7 <= 0x4C4B40;
      return MiSuitableZeroingProcessorAvailable(a1, v1, 0LL);
    }
LABEL_12:
    v1 = 0;
    return MiSuitableZeroingProcessorAvailable(a1, v1, 0LL);
  }
  v8 = MiGetZeroingCandidateCount(a1, 0LL);
  if ( (unsigned __int64)MiEstimatedTimeToZeroPages(a1, v8) >= 0xF4240 )
    return 2LL;
  return MiSuitableZeroingProcessorAvailable(a1, v1, 0LL);
}
