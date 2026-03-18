/*
 * XREFs of CheckOrAcquireDwmStateLock @ 0x1400B2E60
 * Callers:
 *     OpenDwmHandle @ 0x1400B2D14 (OpenDwmHandle.c)
 *     NtDCompositionSendDwmLpcMessage @ 0x140229300 (NtDCompositionSendDwmLpcMessage.c)
 * Callees:
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x140048BE0 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 *     GreIsDwmStateLocked @ 0x1400B3030 (GreIsDwmStateLocked.c)
 *     GreLockDwmState @ 0x1400B3150 (GreLockDwmState.c)
 */

char __fastcall CheckOrAcquireDwmStateLock(__int64 a1, __int64 a2)
{
  char v2; // bl

  v2 = 0;
  if ( !(unsigned int)GET_USERCRIT_DISPOSITION(a1, a2) && !(unsigned int)GreIsDwmStateLocked() )
  {
    GreLockDwmState();
    return 1;
  }
  return v2;
}
