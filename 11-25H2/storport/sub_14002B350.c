/*
 * XREFs of sub_14002B350 @ 0x14002B350
 * Callers:
 *     sub_140012E9C @ 0x140012E9C (sub_140012E9C.c)
 *     sub_14001A620 @ 0x14001A620 (sub_14001A620.c)
 *     ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_0 @ 0x1400317D8 (-get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_0.c)
 *     StorPortExtendedFunction @ 0x140046CC0 (StorPortExtendedFunction.c)
 *     StorPortNotification @ 0x14004C160 (StorPortNotification.c)
 * Callees:
 *     sub_14001E1F0 @ 0x14001E1F0 (sub_14001E1F0.c)
 */

void __fastcall sub_14002B350(__int64 a1, struct _KLOCK_QUEUE_HANDLE *a2)
{
  if ( *(_DWORD *)(a1 + 872) )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 864), a2);
  else
    LOBYTE(a2->LockQueue.Next) = sub_14001E1F0(a1);
}
