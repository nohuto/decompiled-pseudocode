/*
 * XREFs of TppIteWakeWaiters @ 0x1800880C0
 * Callers:
 *     TppSingleTimerExpiration @ 0x180089240 (TppSingleTimerExpiration.c)
 * Callees:
 *     ZwAlertThreadByThreadId @ 0x18015FC50 (ZwAlertThreadByThreadId.c)
 */

NTSTATUS __fastcall TppIteWakeWaiters(__int64 **a1)
{
  __int64 *v1; // rbx
  NTSTATUS result; // eax

  if ( a1 )
  {
    do
    {
      v1 = *a1;
      result = ZwAlertThreadByThreadId(a1[1]);
      a1 = (__int64 **)v1;
    }
    while ( v1 );
  }
  return result;
}
