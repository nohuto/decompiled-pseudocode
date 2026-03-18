/*
 * XREFs of Interrupter_WdfEvtInterruptWorkItem @ 0x14002A450
 * Callers:
 *     <none>
 * Callees:
 *     Controller_RaiseAndTrackIrql @ 0x14000FCC0 (Controller_RaiseAndTrackIrql.c)
 *     Controller_LowerAndTrackIrql @ 0x14000FED0 (Controller_LowerAndTrackIrql.c)
 *     Interrupter_DeferredWorkProcessor @ 0x14002A518 (Interrupter_DeferredWorkProcessor.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

void __fastcall Interrupter_WdfEvtInterruptWorkItem(__int64 a1, __int64 a2)
{
  char v4; // di
  __int64 *v5; // rbx
  __int64 v6; // r8

  v4 = 0;
  v5 = (__int64 *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_14006B178)
                 + 8);
  if ( KeGetCurrentIrql() != 2 )
    v4 = Controller_RaiseAndTrackIrql(*v5);
  LOBYTE(v6) = 1;
  Interrupter_DeferredWorkProcessor(a1, a2, v6);
  if ( v4 )
  {
    if ( KeGetCurrentIrql() == 2 )
      Controller_LowerAndTrackIrql((_QWORD *)*v5);
  }
}
