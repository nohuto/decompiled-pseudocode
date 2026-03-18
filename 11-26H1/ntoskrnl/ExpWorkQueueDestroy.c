/*
 * XREFs of ExpWorkQueueDestroy @ 0x14083FEE0
 * Callers:
 *     ExpPartitionDestroy @ 0x14083FAC8 (ExpPartitionDestroy.c)
 *     ExpPartitionCreatePoolInternal @ 0x140B6C40C (ExpPartitionCreatePoolInternal.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140466F30 (KeInitializeEvent.c)
 *     KeRundownPriQueue @ 0x1405F9688 (KeRundownPriQueue.c)
 */

void __fastcall ExpWorkQueueDestroy(unsigned __int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  signed __int32 v4; // eax
  signed __int32 v5; // ett
  __int16 v6; // bx
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  KeInitializeEvent(&Event, NotificationEvent, 0);
  *(_QWORD *)(a1 + 736) = &Event;
  _m_prefetchw((const void *)(a1 + 712));
  v4 = *(_DWORD *)(a1 + 712);
  do
  {
    v5 = v4;
    v4 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 712), v4 | 0x8000, v4);
  }
  while ( v5 != v4 );
  v6 = v4;
  KeRundownPriQueue(a1, v2, v3);
  if ( (v6 & 0x3FFF) != 0 )
    KeWaitForSingleObject(*(PVOID *)(a1 + 736), Executive, 0, 0, 0LL);
}
