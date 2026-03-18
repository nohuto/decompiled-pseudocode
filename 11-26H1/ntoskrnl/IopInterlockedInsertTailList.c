/*
 * XREFs of IopInterlockedInsertTailList @ 0x1405CA9EC
 * Callers:
 *     IoRegisterDriverReinitialization @ 0x1407965B0 (IoRegisterDriverReinitialization.c)
 *     IoRegisterBootDriverReinitialization @ 0x140B51D30 (IoRegisterBootDriverReinitialization.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1402B4690 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402E2650 (KeReleaseQueuedSpinLock.c)
 */

void __fastcall IopInterlockedInsertTailList(__int64 a1, _QWORD *a2)
{
  KIRQL v4; // al
  _QWORD *v5; // rcx

  v4 = KeAcquireQueuedSpinLock(0xAuLL);
  v5 = *(_QWORD **)(a1 + 8);
  if ( *v5 != a1 )
    __fastfail(3u);
  a2[1] = v5;
  *a2 = a1;
  *v5 = a2;
  *(_QWORD *)(a1 + 8) = a2;
  KeReleaseQueuedSpinLock(0xAuLL, v4);
}
