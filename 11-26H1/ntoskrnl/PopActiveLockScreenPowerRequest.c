/*
 * XREFs of PopActiveLockScreenPowerRequest @ 0x1407E2040
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseAdaptiveLock @ 0x1409F9104 (PopReleaseAdaptiveLock.c)
 *     PopAcquireAdaptiveLock @ 0x140ABAFAC (PopAcquireAdaptiveLock.c)
 */

__int64 __fastcall PopActiveLockScreenPowerRequest(__int64 a1, __int64 a2, char a3)
{
  PopAcquireAdaptiveLock(0LL);
  byte_140F0C062 = a3 != 0;
  return PopReleaseAdaptiveLock();
}
