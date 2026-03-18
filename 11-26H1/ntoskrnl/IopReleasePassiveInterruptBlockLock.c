/*
 * XREFs of IopReleasePassiveInterruptBlockLock @ 0x1402C4F6C
 * Callers:
 *     IoProcessPassiveInterrupts @ 0x1402C36B8 (IoProcessPassiveInterrupts.c)
 *     IopPassiveInterruptWorker @ 0x1402C4E20 (IopPassiveInterruptWorker.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x1402BDEF0 (KxReleaseSpinLock.c)
 */

void __fastcall IopReleasePassiveInterruptBlockLock(__int64 a1, unsigned __int8 a2)
{
  unsigned __int64 v2; // rbx

  v2 = a2;
  KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 56));
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v2);
  __writecr8(v2);
}
