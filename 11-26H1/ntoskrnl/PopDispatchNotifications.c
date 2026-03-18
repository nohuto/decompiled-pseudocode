/*
 * XREFs of PopDispatchNotifications @ 0x140A3C8C0
 * Callers:
 *     <none>
 * Callees:
 *     PopDispatchNotificationsToList @ 0x140A3C908 (PopDispatchNotificationsToList.c)
 */

__int64 PopDispatchNotifications()
{
  unsigned int *p_ReservedPreviousReadyTimeValue; // rbx
  __int64 v1; // rdi
  __int64 result; // rax

  PopDispatchNotificationsToList(&stru_140F10828.ThreadTimerDelay);
  p_ReservedPreviousReadyTimeValue = &stru_140F10828.ReservedPreviousReadyTimeValue;
  v1 = 2LL;
  do
  {
    result = PopDispatchNotificationsToList(p_ReservedPreviousReadyTimeValue);
    p_ReservedPreviousReadyTimeValue += 4;
    --v1;
  }
  while ( v1 );
  return result;
}
