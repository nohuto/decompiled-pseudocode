/*
 * XREFs of ?HasInteraction@InteractionRecord@SnapInteraction@@QEAA_NXZ @ 0x180034D90
 * Callers:
 *     ?OnViewFocused@InteractionTracker@SnapInteraction@@AEAAXAEBU?$com_ptr@UIApplicationView@@@winrt@@@Z @ 0x180035520 (-OnViewFocused@InteractionTracker@SnapInteraction@@AEAAXAEBU-$com_ptr@UIApplicationView@@@winrt@.c)
 *     ?OnViewSnapped@InteractionTracker@SnapInteraction@@AEAAXAEBU?$com_ptr@UIApplicationView@@@winrt@@@Z @ 0x1805AA5E4 (-OnViewSnapped@InteractionTracker@SnapInteraction@@AEAAXAEBU-$com_ptr@UIApplicationView@@@winrt@.c)
 *     ?UpdateTelemetry@InteractionTracker@SnapInteraction@@AEAAXXZ @ 0x1805AA7A8 (-UpdateTelemetry@InteractionTracker@SnapInteraction@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall SnapInteraction::InteractionRecord::HasInteraction(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rdi
  bool v3; // bl

  v1 = this + 5;
  AcquireSRWLockShared(this + 5);
  v3 = LOBYTE(this[3].Ptr) || (__int64)this[4].Ptr > 1000000000;
  if ( v1 )
    ReleaseSRWLockShared(v1);
  return v3;
}
