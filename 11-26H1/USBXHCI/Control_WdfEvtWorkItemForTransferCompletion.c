/*
 * XREFs of Control_WdfEvtWorkItemForTransferCompletion @ 0x14004C8D0
 * Callers:
 *     <none>
 * Callees:
 *     Controller_RaiseAndTrackIrql @ 0x14000FCC0 (Controller_RaiseAndTrackIrql.c)
 *     Controller_LowerAndTrackIrql @ 0x14000FED0 (Controller_LowerAndTrackIrql.c)
 *     Control_ProcessTransferCompletion @ 0x14001ED58 (Control_ProcessTransferCompletion.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

void __fastcall Control_WdfEvtWorkItemForTransferCompletion(__int64 a1)
{
  __int64 v2; // rax
  char v3; // di
  __int64 *v4; // rbx
  __int64 v5; // rax

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 3048))(WdfDriverGlobals, a1);
  v3 = 0;
  v4 = (__int64 *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
                     WdfDriverGlobals,
                     v2,
                     off_14006B1F0)
                 + 40);
  if ( KeGetCurrentIrql() != 2 )
    v3 = Controller_RaiseAndTrackIrql(*v4);
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 3048))(WdfDriverGlobals, a1);
  Control_ProcessTransferCompletion(v5);
  if ( v3 )
  {
    if ( KeGetCurrentIrql() == 2 )
      Controller_LowerAndTrackIrql((_QWORD *)*v4);
  }
}
