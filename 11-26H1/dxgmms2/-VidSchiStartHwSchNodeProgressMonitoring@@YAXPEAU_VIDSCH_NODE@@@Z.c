/*
 * XREFs of ?VidSchiStartHwSchNodeProgressMonitoring@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x140038604
 * Callers:
 *     VidSchiCheckNodeTimeout @ 0x1400C5470 (VidSchiCheckNodeTimeout.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiStartHwSchNodeProgressMonitoring(struct _VIDSCH_NODE *a1)
{
  int v2; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-30h] BYREF
  __int16 v4; // [rsp+40h] [rbp-18h]

  v4 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*((_QWORD *)a1 + 3) + 2016LL), &LockHandle);
  v2 = *((_DWORD *)a1 + 432);
  LOBYTE(v4) = 1;
  if ( v2 || *((_DWORD *)a1 + 434) )
    *((_DWORD *)a1 + 110) = 1;
  if ( HIBYTE(v4) )
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  else
    KeReleaseInStackQueuedSpinLock(&LockHandle);
}
