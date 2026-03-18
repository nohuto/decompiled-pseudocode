/*
 * XREFs of PopActiveLockScreenPowerRequest @ 0x1407DDA10
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireAdaptiveLock @ 0x140A3AFDC (PopAcquireAdaptiveLock.c)
 *     PopReleaseAdaptiveLock @ 0x140A3D6E4 (PopReleaseAdaptiveLock.c)
 */

__int64 __fastcall PopActiveLockScreenPowerRequest(__int64 a1, __int64 a2, char a3)
{
  PopAcquireAdaptiveLock(0LL);
  BYTE2(PopAdaptiveStandbyLock.ThreadListEntry.Blink) = a3 != 0;
  return PopReleaseAdaptiveLock();
}
