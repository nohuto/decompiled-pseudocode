/*
 * XREFs of PopPowerRequestCallbackAwayModeRequired @ 0x140B3CE50
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseAwaymodeLock @ 0x140C0E9F0 (PopReleaseAwaymodeLock.c)
 *     PopAcquireAwaymodeLock @ 0x140C0EA8C (PopAcquireAwaymodeLock.c)
 */

__int64 __fastcall PopPowerRequestCallbackAwayModeRequired(__int64 a1, __int64 a2, char a3)
{
  PopAcquireAwaymodeLock();
  LOBYTE(PpmIdlePolicyLock.IoSelfBoostsEntry.Next) = a3;
  return PopReleaseAwaymodeLock();
}
