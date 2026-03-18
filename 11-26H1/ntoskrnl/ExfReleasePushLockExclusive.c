/*
 * XREFs of ExfReleasePushLockExclusive @ 0x1402E3150
 * Callers:
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140449B6C (ExfAcquireReleasePushLockExclusive.c)
 * Callees:
 *     ExpWakePushLock @ 0x140433394 (ExpWakePushLock.c)
 */

signed __int64 __fastcall ExfReleasePushLockExclusive(volatile signed __int64 *a1)
{
  signed __int64 result; // rax
  __int64 v2; // r8
  __int64 v3; // rdx
  signed __int64 v4; // rtt

  result = _InterlockedCompareExchange64(a1, 0LL, 1LL);
  if ( result != 1 )
  {
    do
    {
      if ( (result & 4) != 0 || (result & 2) == 0 )
        v2 = -1LL;
      else
        v2 = 3LL;
      v3 = v2 + result;
      v4 = result;
      result = _InterlockedCompareExchange64(a1, v2 + result, result);
    }
    while ( v4 != result );
    if ( v2 == 3 )
      return ExpWakePushLock(a1, v3, 3LL);
  }
  return result;
}
