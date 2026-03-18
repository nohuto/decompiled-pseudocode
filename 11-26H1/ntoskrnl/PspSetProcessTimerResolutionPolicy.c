/*
 * XREFs of PspSetProcessTimerResolutionPolicy @ 0x140A66760
 * Callers:
 *     <none>
 * Callees:
 *     ExUpdateTimerResolutionPolicy @ 0x140A6677C (ExUpdateTimerResolutionPolicy.c)
 */

__int64 __fastcall PspSetProcessTimerResolutionPolicy(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = (_DWORD)a2 == 0;
  return ExUpdateTimerResolutionPolicy(a1, a2);
}
