/*
 * XREFs of PopDiagComputeEarlyHiberStats @ 0x140C0A60C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140C0B0A0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021C3F0 (KeQueryPerformanceCounter.c)
 *     KeGetPrcb @ 0x1402916D0 (KeGetPrcb.c)
 *     PpmConvertTime @ 0x1403E63D0 (PpmConvertTime.c)
 */

signed __int64 PopDiagComputeEarlyHiberStats()
{
  __int64 Prcb; // rax
  __int64 *v1; // r11
  __int64 v2; // rbx
  __int64 v3; // rdi
  unsigned __int64 v4; // rcx
  signed __int64 result; // rax

  stru_140F10070.SavedApcState.ApcListHead[0].Blink = (struct _LIST_ENTRY *)(*(_QWORD *)&KeQueryPerformanceCounter(0LL)
                                                                           - qword_140F0B0D0);
  Prcb = KeGetPrcb(0);
  v1 = &qword_140004D68;
  v2 = 59LL;
  stru_140F10070.UserAffinity = (_KAFFINITY_EX *)(1000LL * *(unsigned int *)(Prcb + 68));
  do
  {
    if ( (v1[1] & 0x20000000) != 0 )
    {
      v4 = *(unsigned __int64 *)((char *)&stru_140F10070.WaitBlock[0].WaitListEntry.Blink + *v1);
      if ( v4 > qword_140F0B0C0 )
        v4 -= qword_140F0B0C8;
      v3 = *v1;
      *(struct _LIST_ENTRY **)((char *)&stru_140F10070.WaitBlock[0].WaitListEntry.Blink + v3) = (struct _LIST_ENTRY *)PpmConvertTime(v4, 1000000LL * KeGetCurrentPrcb()->MHz, PopQpcFrequency);
    }
    v1 += 3;
    --v2;
  }
  while ( v2 );
  result = (char *)stru_140F10070.Process - (char *)stru_140F10070.WaitBlock[2].Thread;
  *(_QWORD *)&stru_140F10070.WaitBlockFill11[112] = (char *)stru_140F10070.Process
                                                  - (char *)stru_140F10070.WaitBlock[2].Thread;
  return result;
}
