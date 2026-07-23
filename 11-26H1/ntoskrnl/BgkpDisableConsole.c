/*
 * XREFs of BgkpDisableConsole @ 0x14045C580
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14045C380 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkDestroy @ 0x140C55454 (BgkDestroy.c)
 * Callees:
 *     ExfWaitForRundownProtectionRelease @ 0x14045CD8C (ExfWaitForRundownProtectionRelease.c)
 */

unsigned __int64 BgkpDisableConsole()
{
  unsigned __int64 result; // rax

  result = _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140E0AA10, 1LL, 0LL);
  if ( result >= 2 )
    result = ExfWaitForRundownProtectionRelease(&stru_140E0AA10, result);
  _InterlockedExchange64((volatile __int64 *)&stru_140E0AA10, 1LL);
  return result;
}
