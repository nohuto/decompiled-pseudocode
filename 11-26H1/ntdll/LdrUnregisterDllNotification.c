/*
 * XREFs of LdrUnregisterDllNotification @ 0x18010DFE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 */

__int64 __fastcall LdrUnregisterDllNotification(_UNKNOWN **a1)
{
  int v2; // ebx
  _UNKNOWN **i; // rax
  _UNKNOWN **v4; // rcx
  void **v5; // rdx

  v2 = -1073741515;
  RtlEnterCriticalSection((__int64)&LdrpDllNotificationLock);
  for ( i = (_UNKNOWN **)LdrpDllNotificationList; i != &LdrpDllNotificationList; i = (_UNKNOWN **)*i )
  {
    v4 = (_UNKNOWN **)*i;
    if ( i == a1 )
    {
      if ( v4[1] != (_UNKNOWN *)i || (v5 = (void **)i[1], *v5 != i) )
        __fastfail(3u);
      *v5 = v4;
      v2 = 0;
      v4[1] = v5;
      break;
    }
  }
  RtlLeaveCriticalSection((__int64)&LdrpDllNotificationLock);
  if ( v2 >= 0 )
    RtlFreeHeap_0();
  return (unsigned int)v2;
}
