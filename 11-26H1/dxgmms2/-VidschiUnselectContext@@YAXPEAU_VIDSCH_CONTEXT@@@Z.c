/*
 * XREFs of ?VidschiUnselectContext@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x140035CE0
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1400E8CE0 (VidSchiRun_PriorityTable.c)
 * Callees:
 *     VidSchiUpdateContextStatus @ 0x140020F00 (VidSchiUpdateContextStatus.c)
 */

void __fastcall VidschiUnselectContext(struct _VIDSCH_CONTEXT *a1)
{
  KSPIN_LOCK *v2; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = (KSPIN_LOCK *)(*(_QWORD *)(*((_QWORD *)a1 + 13) + 40LL) + 2016LL);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(v2, &LockHandle);
  if ( (*((_DWORD *)a1 + 48) & 0x400) != 0 )
  {
    *((_DWORD *)a1 + 48) &= ~0x400u;
    if ( (*((_DWORD *)a1 + 48) & 0x200) != 0 && (*((_DWORD *)a1 + 48) & 2) == 0 )
      VidSchiUpdateContextStatus((__int64)a1, 10, 507LL);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
