/*
 * XREFs of TtmiCreateEventQueue @ 0x1407F2878
 * Callers:
 *     TtmpDispatchCreateEventQueue @ 0x1407ED894 (TtmpDispatchCreateEventQueue.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x14021A0F0 (ExInitializeResourceLite.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     TtmiLogQueueCreated @ 0x1407EF8D4 (TtmiLogQueueCreated.c)
 *     ObCreateObjectEx @ 0x14092D760 (ObCreateObjectEx.c)
 *     TtmiLogError @ 0x1409F66D8 (TtmiLogError.c)
 */

__int64 __fastcall TtmiCreateEventQueue(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // r9
  int Object; // eax
  unsigned int v6; // ebx
  _QWORD *v7; // rcx
  _QWORD v9[4]; // [rsp+50h] [rbp-30h] BYREF
  __int128 v10; // [rsp+70h] [rbp-10h]

  v9[0] = 48LL;
  v9[1] = 0LL;
  v9[2] = 0LL;
  v10 = 0LL;
  v9[3] = 32LL;
  CurrentThread = KeGetCurrentThread();
  *a2 = 0LL;
  LOBYTE(CurrentThread) = CurrentThread->PreviousMode;
  Object = ObCreateObjectEx(
             0,
             *(_DWORD *)&PspSiloMonitorLock.PriorityFloorCounts[8],
             (unsigned int)v9,
             (_DWORD)CurrentThread);
  v6 = Object;
  if ( Object >= 0 )
  {
    memset_0(0LL, 0, 0xB0uLL);
    MEMORY[0xA0] = 152LL;
    MEMORY[0x98] = 152LL;
    ExInitializeResourceLite((PERESOURCE)0x18);
    KeInitializeEvent((PRKEVENT)0x80, NotificationEvent, 0);
    MEMORY[0xA8] = 1;
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
    MEMORY[0x10] = a1;
    v7 = *(_QWORD **)(a1 + 88);
    if ( *v7 != a1 + 80 )
      __fastfail(3u);
    MEMORY[8] = *(_QWORD *)(a1 + 88);
    MEMORY[0] = a1 + 80;
    *v7 = 0LL;
    *(_QWORD *)(a1 + 88) = 0LL;
    TtmiLogQueueCreated(0LL);
    *a2 = 0LL;
    return 0;
  }
  else
  {
    TtmiLogError("TtmiCreateEventQueue", 564LL, (unsigned int)Object, (unsigned int)Object);
  }
  return v6;
}
