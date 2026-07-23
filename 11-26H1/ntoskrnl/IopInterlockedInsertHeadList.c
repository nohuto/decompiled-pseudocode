/*
 * XREFs of IopInterlockedInsertHeadList @ 0x14050A914
 * Callers:
 *     IoRegisterLastChanceShutdownNotification @ 0x140799560 (IoRegisterLastChanceShutdownNotification.c)
 *     IoRegisterShutdownNotification @ 0x140B4CC50 (IoRegisterShutdownNotification.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x1402C4710 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1402FF360 (KeAcquireQueuedSpinLock.c)
 */

void __fastcall IopInterlockedInsertHeadList(__int64 *a1, _QWORD *a2)
{
  KIRQL v4; // al
  __int64 v5; // rcx

  v4 = KeAcquireQueuedSpinLock(0xAuLL);
  v5 = *a1;
  if ( *(__int64 **)(*a1 + 8) != a1 )
    __fastfail(3u);
  *a2 = v5;
  a2[1] = a1;
  *(_QWORD *)(v5 + 8) = a2;
  *a1 = (__int64)a2;
  KeReleaseQueuedSpinLock(0xAuLL, v4);
}
