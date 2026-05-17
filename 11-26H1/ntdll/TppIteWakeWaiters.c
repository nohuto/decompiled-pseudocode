/*
 * XREFs of TppIteWakeWaiters @ 0x180067C70
 * Callers:
 *     TppSingleTimerExpiration @ 0x180068DF0 (TppSingleTimerExpiration.c)
 * Callees:
 *     ZwAlertThreadByThreadId @ 0x18015FD50 (ZwAlertThreadByThreadId.c)
 */

__int64 __fastcall TppIteWakeWaiters(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbx
  __int64 result; // rax

  if ( a1 )
  {
    do
    {
      v3 = (_QWORD *)*a1;
      result = ZwAlertThreadByThreadId(a1[1], a2, a3);
      a1 = v3;
    }
    while ( v3 );
  }
  return result;
}
