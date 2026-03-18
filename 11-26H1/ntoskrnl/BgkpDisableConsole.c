/*
 * XREFs of BgkpDisableConsole @ 0x1404635C0
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x1404633C0 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkDestroy @ 0x140C4F454 (BgkDestroy.c)
 * Callees:
 *     ExfWaitForRundownProtectionRelease @ 0x140463DCC (ExfWaitForRundownProtectionRelease.c)
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
