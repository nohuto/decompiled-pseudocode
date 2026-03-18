/*
 * XREFs of TR_ReclaimTransfers @ 0x14002FB2C
 * Callers:
 *     ESM_ReclaimingTransfersAfterEndpointStop @ 0x14002FAB0 (ESM_ReclaimingTransfersAfterEndpointStop.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall TR_ReclaimTransfers(__int64 a1)
{
  __int64 v2; // rax

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 1632))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 56));
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01033 + 1640))(
    WdfDriverGlobals,
    v2,
    "Transfer Ring Tag",
    1272LL,
    "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\tr.c");
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 32) + 72LL))(a1);
}
