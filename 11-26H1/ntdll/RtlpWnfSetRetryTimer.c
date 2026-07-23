/*
 * XREFs of RtlpWnfSetRetryTimer @ 0x180138C88
 * Callers:
 *     RtlpWnfCalculateAndSetNextTimer @ 0x18003ACE8 (RtlpWnfCalculateAndSetNextTimer.c)
 * Callees:
 *     TpSetTimerEx @ 0x180089470 (TpSetTimerEx.c)
 */

NTSTATUS __fastcall RtlpWnfSetRetryTimer(unsigned __int64 a1)
{
  NTSTATUS result; // eax
  unsigned __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  _TP_TIMER *v6; // rcx
  LARGE_INTEGER DueTime; // [rsp+38h] [rbp+10h] BYREF

  result = qword_1801C6200;
  if ( !*(_QWORD *)(qword_1801C6200 + 80) || *(_QWORD *)(qword_1801C6200 + 80) > a1 )
  {
    v3 = MEMORY[0x7FFE0008] - RtlpFreezeTimeBias - MEMORY[0x7FFE03B0];
    if ( v3 <= a1 )
      v4 = a1 - v3;
    else
      v4 = 500000LL;
    v5 = qword_1801C6200;
    *(_QWORD *)(qword_1801C6200 + 80) = v4;
    v6 = *(_TP_TIMER **)(v5 + 72);
    DueTime.QuadPart = -v4;
    return TpSetTimerEx(v6, &DueTime, 0, 0x32u);
  }
  return result;
}
