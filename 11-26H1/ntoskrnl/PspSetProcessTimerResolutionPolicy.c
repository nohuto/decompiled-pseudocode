/*
 * XREFs of PspSetProcessTimerResolutionPolicy @ 0x140A73730
 * Callers:
 *     <none>
 * Callees:
 *     ExUpdateTimerResolutionPolicy @ 0x140A7374C (ExUpdateTimerResolutionPolicy.c)
 */

__int64 __fastcall PspSetProcessTimerResolutionPolicy(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = (_DWORD)a2 == 0;
  return ExUpdateTimerResolutionPolicy(a1, a2);
}
