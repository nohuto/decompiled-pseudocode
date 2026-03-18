/*
 * XREFs of PopPowerRequestCallbackAwayModeRequired @ 0x140B3ABD0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseAwaymodeLock @ 0x140C087E0 (PopReleaseAwaymodeLock.c)
 *     PopAcquireAwaymodeLock @ 0x140C0887C (PopAcquireAwaymodeLock.c)
 */

__int64 __fastcall PopPowerRequestCallbackAwayModeRequired(__int64 a1, __int64 a2, char a3)
{
  PopAcquireAwaymodeLock();
  byte_140F106D0 = a3;
  return PopReleaseAwaymodeLock();
}
