/*
 * XREFs of ?IsWinstaLessSession@@YA_NXZ @ 0x14004A1F4
 * Callers:
 *     VKFromVSC @ 0x1401174C0 (VKFromVSC.c)
 * Callees:
 *     ApiSetEditionGetProcessWindowStation @ 0x140048E08 (ApiSetEditionGetProcessWindowStation.c)
 */

bool IsWinstaLessSession(void)
{
  return ApiSetEditionGetProcessWindowStation() == 0;
}
