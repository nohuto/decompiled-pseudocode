/*
 * XREFs of ?Release@kspin_lock_saved_irql@details@wil@@SAXAEBU123@@Z @ 0x1400CE240
 * Callers:
 *     ndisIfCreateInterfaceFromPersistentStore @ 0x140089D40 (ndisIfCreateInterfaceFromPersistentStore.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::kspin_lock_saved_irql::Release(const struct wil::details::kspin_lock_saved_irql *a1)
{
  KeReleaseSpinLock(a1->spinLock, a1->savedIrql);
}
