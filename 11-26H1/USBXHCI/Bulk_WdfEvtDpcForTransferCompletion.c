/*
 * XREFs of Bulk_WdfEvtDpcForTransferCompletion @ 0x14001F8E0
 * Callers:
 *     <none>
 * Callees:
 *     Bulk_ProcessTransferCompletion @ 0x14001F918 (Bulk_ProcessTransferCompletion.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Bulk_WdfEvtDpcForTransferCompletion(__int64 a1)
{
  __int64 v1; // rax

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 912))(WdfDriverGlobals, a1);
  return Bulk_ProcessTransferCompletion(v1);
}
