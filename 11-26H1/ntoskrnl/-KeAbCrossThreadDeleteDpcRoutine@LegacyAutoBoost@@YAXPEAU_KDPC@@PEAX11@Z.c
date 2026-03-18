/*
 * XREFs of ?KeAbCrossThreadDeleteDpcRoutine@LegacyAutoBoost@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1405FD680
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     KeAbMarkCrossThreadReleasable @ 0x140529B94 (KeAbMarkCrossThreadReleasable.c)
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
