/*
 * XREFs of PopPowerRequestStatsCreate @ 0x140A90038
 * Callers:
 *     PopPowerRequestCreateCommon @ 0x140425F6C (PopPowerRequestCreateCommon.c)
 * Callees:
 *     PopPowerRequestStatsFreeId @ 0x140A900B0 (PopPowerRequestStatsFreeId.c)
 *     PopPowerRequestStatsGetIdForRequest @ 0x140A900E8 (PopPowerRequestStatsGetIdForRequest.c)
 *     PopPowerRequestStatsCreateSleepstudyBlocker @ 0x140A90314 (PopPowerRequestStatsCreateSleepstudyBlocker.c)
 */

void __fastcall PopPowerRequestStatsCreate(__int64 a1)
{
  PVOID P; // [rsp+38h] [rbp+10h] BYREF
  __int64 v3; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0LL;
  P = 0LL;
  if ( PopDirectedDripsDiagLock.SavedApcState.ApcListHead[1].Flink )
  {
    if ( (int)PopPowerRequestStatsGetIdForRequest(a1, &P) >= 0
      && (int)PopPowerRequestStatsCreateSleepstudyBlocker(P, 7LL, &v3) >= 0 )
    {
      *(_QWORD *)(a1 + 160) = v3;
    }
    if ( P )
      PopPowerRequestStatsFreeId(P);
  }
}
