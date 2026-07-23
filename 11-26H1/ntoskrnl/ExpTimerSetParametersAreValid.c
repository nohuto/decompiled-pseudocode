/*
 * XREFs of ExpTimerSetParametersAreValid @ 0x1403B33C8
 * Callers:
 *     RtlpHpEnvCompactionSchedule @ 0x14034F6D0 (RtlpHpEnvCompactionSchedule.c)
 *     ExpSetTimerObject2 @ 0x1403B3598 (ExpSetTimerObject2.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExpTimerSetParametersAreValid(__int64 a1)
{
  return !*(_DWORD *)a1 && *(_QWORD *)(a1 + 8) >= -1LL;
}
