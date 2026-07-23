/*
 * XREFs of ?KeAbCrossThreadDeleteDpcRoutine@LegacyAutoBoost@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1406000D0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeAbMarkCrossThreadReleasable @ 0x14052C0B0 (KeAbMarkCrossThreadReleasable.c)
 */

void __fastcall LegacyAutoBoost::KeAbCrossThreadDeleteDpcRoutine(
        LegacyAutoBoost *this,
        struct _KEVENT *a2,
        void *a3,
        struct AutoBoost::_AB_BOOST_CONTEXT *a4)
{
  if ( KeGetCurrentThread() == (struct _KTHREAD *)a2[1].Header.WaitListHead.Blink )
    KeAbMarkCrossThreadReleasable(this, (struct _KTHREAD *)a2[1].Header.WaitListHead.Flink, a3, a4);
  else
    LOBYTE(a2[1].Header.WaitListHead.Flink->Flink) |= 1u;
  KeSetEvent(a2, 0, 0);
}
