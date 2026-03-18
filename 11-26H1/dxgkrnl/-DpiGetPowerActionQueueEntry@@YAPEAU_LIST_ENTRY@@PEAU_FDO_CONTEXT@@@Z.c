/*
 * XREFs of ?DpiGetPowerActionQueueEntry@@YAPEAU_LIST_ENTRY@@PEAU_FDO_CONTEXT@@@Z @ 0x14004D6F0
 * Callers:
 *     DpiPowerArbiterThread @ 0x14030C2C0 (DpiPowerArbiterThread.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *__fastcall DpiGetPowerActionQueueEntry(KSPIN_LOCK *a1)
{
  _QWORD **v2; // rbx
  _QWORD *v3; // rdi
  _QWORD *v4; // rax
  _QWORD *v5; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(a1 + 528, &LockHandle);
  v2 = (_QWORD **)(a1 + 513);
  v3 = 0LL;
  v4 = *v2;
  if ( *v2 != v2 )
  {
    if ( (_QWORD **)v4[1] != v2 || (v5 = (_QWORD *)*v4, *(_QWORD **)(*v4 + 8LL) != v4) )
      __fastfail(3u);
    *v2 = v5;
    v3 = v4;
    v5[1] = v2;
    *v4 = 0LL;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return (struct _LIST_ENTRY *)v3;
}
