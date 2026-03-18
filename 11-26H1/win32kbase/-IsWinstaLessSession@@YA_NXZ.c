/*
 * XREFs of ?IsWinstaLessSession@@YA_NXZ @ 0x14003AE7C
 * Callers:
 *     VKFromVSC @ 0x14008ABB0 (VKFromVSC.c)
 * Callees:
 *     ApiSetEditionGetProcessWindowStation @ 0x14003B90C (ApiSetEditionGetProcessWindowStation.c)
 */

bool IsWinstaLessSession(void)
{
  return ApiSetEditionGetProcessWindowStation() == 0;
}
