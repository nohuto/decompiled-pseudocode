/*
 * XREFs of Control_WdfDpcForCanceledOnQueueTransferCompletion @ 0x14004C500
 * Callers:
 *     <none>
 * Callees:
 *     Control_ProcessCanceledOnQueueTransferCompletion @ 0x14004C414 (Control_ProcessCanceledOnQueueTransferCompletion.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

void __fastcall Control_WdfDpcForCanceledOnQueueTransferCompletion(__int64 a1)
{
  __int64 v1; // rax

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 912))(WdfDriverGlobals, a1);
  Control_ProcessCanceledOnQueueTransferCompletion(v1);
}
