/*
 * XREFs of sub_140029740 @ 0x140029740
 * Callers:
 *     sub_140012E9C @ 0x140012E9C (sub_140012E9C.c)
 *     sub_14001A620 @ 0x14001A620 (sub_14001A620.c)
 *     ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_0 @ 0x1400317D8 (-get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_0.c)
 *     StorPortNotification @ 0x14004C160 (StorPortNotification.c)
 * Callees:
 *     sub_140029830 @ 0x140029830 (sub_140029830.c)
 */

void __fastcall sub_140029740(__int64 a1, struct _KLOCK_QUEUE_HANDLE *a2)
{
  if ( *(_DWORD *)(a1 + 872) )
    KeReleaseInStackQueuedSpinLock(a2);
  else
    sub_140029830(a1, LOBYTE(a2->LockQueue.Next));
}
