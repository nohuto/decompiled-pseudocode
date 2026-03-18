/*
 * XREFs of TR_TransferEventHandler @ 0x140029430
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x14002A518 (Interrupter_DeferredWorkProcessor.c)
 * Callees:
 *     Control_EP_TransferEventHandler @ 0x140020300 (Control_EP_TransferEventHandler.c)
 *     Bulk_EP_TransferEventHandler @ 0x140022EC0 (Bulk_EP_TransferEventHandler.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

char __fastcall TR_TransferEventHandler(_DWORD *a1, __int64 a2)
{
  if ( a2 )
    return (*(__int64 (**)(void))(*(_QWORD *)(a2 + 32) + 88LL))();
  if ( (*a1 & 3) == 0 )
    return Control_EP_TransferEventHandler((__int64)a1);
  if ( (*a1 & 3) == 1LL || (unsigned __int64)(*a1 & 3) - 2 > 1 )
    return 0;
  return Bulk_EP_TransferEventHandler((__int64)a1);
}
