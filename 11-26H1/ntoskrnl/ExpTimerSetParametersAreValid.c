/*
 * XREFs of ExpTimerSetParametersAreValid @ 0x1403A97B8
 * Callers:
 *     RtlpHpEnvCompactionSchedule @ 0x14034D650 (RtlpHpEnvCompactionSchedule.c)
 *     ExpSetTimerObject2 @ 0x1403A9988 (ExpSetTimerObject2.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExpTimerSetParametersAreValid(__int64 a1)
{
  return !*(_DWORD *)a1 && *(_QWORD *)(a1 + 8) >= -1LL;
}
