/*
 * XREFs of ?ClearQueueServerEvent@@YAXG@Z @ 0x140025944
 * Callers:
 *     xxxDesktopThreadWaiter @ 0x14002565C (xxxDesktopThreadWaiter.c)
 *     ?xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z @ 0x1402157B8 (-xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ClearQueueServerEvent(__int64 a1)
{
  __int32 v1; // ebx
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v3; // rcx

  v1 = (unsigned __int16)a1;
  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(a1);
  v3 = 0LL;
  if ( CurrentThreadWin32Thread )
    v3 = *CurrentThreadWin32Thread;
  _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(v3 + 480) + 16LL), v1);
  KeClearEvent(*(PRKEVENT *)(v3 + 760));
}
