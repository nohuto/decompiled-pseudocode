/*
 * XREFs of ?ClearQueueServerEvent@@YAXG@Z @ 0x1400211C4
 * Callers:
 *     xxxDesktopThreadWaiter @ 0x140020F14 (xxxDesktopThreadWaiter.c)
 *     ?xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z @ 0x14002B4FC (-xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z.c)
 * Callees:
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 */

void __fastcall ClearQueueServerEvent(__int64 a1, __int64 a2)
{
  __int32 v2; // ebx
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v4; // rcx

  v2 = (unsigned __int16)a1;
  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(a1, a2);
  v4 = 0LL;
  if ( CurrentThreadNonPaged )
    v4 = *CurrentThreadNonPaged;
  _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(v4 + 488) + 16LL), v2);
  KeClearEvent(*(PRKEVENT *)(v4 + 768));
}
