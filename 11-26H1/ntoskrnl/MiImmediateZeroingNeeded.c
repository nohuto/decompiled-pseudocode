/*
 * XREFs of MiImmediateZeroingNeeded @ 0x1402C09EC
 * Callers:
 *     MiWakePageZeroing @ 0x14028DC7C (MiWakePageZeroing.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402BEB90 (MiInsertPageInFreeOrZeroedList.c)
 * Callees:
 *     MiGetZeroingCandidateCount @ 0x140481224 (MiGetZeroingCandidateCount.c)
 *     MiEstimatedTimeToZeroPages @ 0x14048A0E0 (MiEstimatedTimeToZeroPages.c)
 *     MiSuitableZeroingProcessorAvailable @ 0x14052A72C (MiSuitableZeroingProcessorAvailable.c)
 *     Feature_Servicing_Mm_RestrictZeroingOnParkedCores__private_IsEnabledDeviceUsageNoInline @ 0x140712E5C (Feature_Servicing_Mm_RestrictZeroingOnParkedCores__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall MiImmediateZeroingNeeded(__int64 a1)
{
  unsigned __int64 ZeroingCandidateCount; // rax
  unsigned __int64 v3; // rsi
  int IsEnabledDeviceUsageNoInline; // ebp
  BOOL v6; // ebx
  unsigned __int64 v7; // rsi
  __int64 v8; // rax
  unsigned __int64 v9; // rax

  ZeroingCandidateCount = MiGetZeroingCandidateCount(a1, 1LL);
  v3 = ZeroingCandidateCount;
  if ( !ZeroingCandidateCount )
    return 2LL;
  if ( ZeroingCandidateCount >= 0x40000 && (*(_DWORD *)(*(_QWORD *)(a1 + 13896) + 4LL) & 0x80u) != 0 )
    return 0LL;
  IsEnabledDeviceUsageNoInline = Feature_Servicing_Mm_RestrictZeroingOnParkedCores__private_IsEnabledDeviceUsageNoInline();
  v6 = 1;
  v7 = MiEstimatedTimeToZeroPages(a1, v3);
  v8 = MiGetZeroingCandidateCount(a1, 0LL);
  v9 = MiEstimatedTimeToZeroPages(a1, v8);
  if ( v7 >= 0xF4240 )
  {
    if ( v9 >= 0x989680 )
      return 2LL;
    if ( IsEnabledDeviceUsageNoInline )
      v6 = v7 <= 0x4C4B40;
  }
  else if ( v9 >= 0x7A120 )
  {
    return 2LL;
  }
  if ( stru_140E366D8.SystemCallNumber )
    return 2LL;
  return MiSuitableZeroingProcessorAvailable(a1, v6 & (unsigned int)-(IsEnabledDeviceUsageNoInline != 0), 1LL);
}
