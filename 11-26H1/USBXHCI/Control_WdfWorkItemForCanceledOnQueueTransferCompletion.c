/*
 * XREFs of Control_WdfWorkItemForCanceledOnQueueTransferCompletion @ 0x14004C9B0
 * Callers:
 *     <none>
 * Callees:
 *     Controller_RaiseAndTrackIrql @ 0x14000FCC0 (Controller_RaiseAndTrackIrql.c)
 *     Controller_LowerAndTrackIrql @ 0x14000FED0 (Controller_LowerAndTrackIrql.c)
 *     Control_ProcessCanceledOnQueueTransferCompletion @ 0x14004C414 (Control_ProcessCanceledOnQueueTransferCompletion.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

void __fastcall Control_WdfWorkItemForCanceledOnQueueTransferCompletion(__int64 a1)
{
  __int64 v1; // rsi
  char v2; // di
  __int64 *v3; // rbx

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 3048))(WdfDriverGlobals, a1);
  v2 = 0;
  v3 = (__int64 *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
                     WdfDriverGlobals,
                     v1,
                     off_14006B1F0)
                 + 40);
  if ( KeGetCurrentIrql() != 2 )
    v2 = Controller_RaiseAndTrackIrql(*v3);
  Control_ProcessCanceledOnQueueTransferCompletion(v1);
  if ( v2 )
  {
    if ( KeGetCurrentIrql() == 2 )
      Controller_LowerAndTrackIrql((_QWORD *)*v3);
  }
}
