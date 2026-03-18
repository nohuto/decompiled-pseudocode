/*
 * XREFs of ?ForEachActivatableQueue@CActivationObjectManager@@QEBAXA6AXPEAUtagQ@@PEAX@Z1@Z @ 0x1401A9CB8
 * Callers:
 *     MarkQueuesForKeyStateUpdate @ 0x140216850 (MarkQueuesForKeyStateUpdate.c)
 * Callees:
 *     RIMLockShared @ 0x14000D340 (RIMLockShared.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140065280 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?MarkQueuesForKeyStateUpdateWorker@KeyboardProcessing@@YAXPEAUtagQ@@QEAX@Z @ 0x140215B88 (-MarkQueuesForKeyStateUpdateWorker@KeyboardProcessing@@YAXPEAUtagQ@@QEAX@Z.c)
 */

void __fastcall CActivationObjectManager::ForEachActivatableQueue(
        CActivationObjectManager *this,
        void (*a2)(struct tagQ *, void *),
        struct tagQ *a3)
{
  _QWORD *v5; // rsi
  _QWORD *v6; // rdi
  __int64 *ThreadWin32Thread; // rax
  void *v8; // r8
  __int64 v9; // rax
  KeyboardProcessing *v10; // rcx

  RIMLockShared((__int64)this + 16);
  v5 = (_QWORD *)*((_QWORD *)this + 1);
  v6 = v5;
  while ( v6 )
  {
    v6 = (_QWORD *)*v6;
    if ( ((unsigned __int8)v6 & 1) != 0 )
      break;
LABEL_8:
    if ( !v6 )
      goto LABEL_13;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(v6[3]);
    if ( ThreadWin32Thread )
    {
      v9 = *ThreadWin32Thread;
      if ( v9 )
      {
        v10 = *(KeyboardProcessing **)(v9 + 472);
        if ( v10 )
          KeyboardProcessing::MarkQueuesForKeyStateUpdateWorker(v10, a3, v8);
      }
    }
  }
  for ( ++v5; (unsigned __int64)v5 < *((_QWORD *)this + 1) + 8 * ((unsigned __int64)*((unsigned int *)this + 1) >> 5); ++v5 )
  {
    v6 = (_QWORD *)*v5;
    if ( (*v5 & 1) == 0 )
      goto LABEL_8;
  }
LABEL_13:
  CPushLock::ReleaseLock((CActivationObjectManager *)((char *)this + 16));
}
