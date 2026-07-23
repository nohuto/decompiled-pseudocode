/*
 * XREFs of LdrUnregisterDllNotification @ 0x18010DB30
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlEnterCriticalSection @ 0x1800332F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 */

NTSTATUS __cdecl LdrUnregisterDllNotification(PVOID Cookie)
{
  void *v2; // rdi
  NTSTATUS v3; // ebx
  _QWORD *i; // rax
  _QWORD *v5; // rcx
  _QWORD *v6; // rdx

  v2 = 0LL;
  v3 = -1073741515;
  RtlEnterCriticalSection(&LdrpDllNotificationLock);
  for ( i = LdrpDllNotificationList; i != &LdrpDllNotificationList; i = (_QWORD *)*i )
  {
    v5 = (_QWORD *)*i;
    v2 = i;
    if ( i == Cookie )
    {
      if ( (_QWORD *)v5[1] != i || (v6 = (_QWORD *)i[1], (_QWORD *)*v6 != i) )
        __fastfail(3u);
      *v6 = v5;
      v3 = 0;
      v5[1] = v6;
      break;
    }
  }
  RtlLeaveCriticalSection(&LdrpDllNotificationLock);
  if ( v3 >= 0 )
    RtlFreeHeap_0(LdrpHeap, 0, v2);
  return v3;
}
