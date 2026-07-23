/*
 * XREFs of PoSetSystemState @ 0x140427290
 * Callers:
 *     PoRegisterSystemState @ 0x140425810 (PoRegisterSystemState.c)
 * Callees:
 *     PopSetSystemState @ 0x1404272D4 (PopSetSystemState.c)
 *     PopAcquirePolicyLock @ 0x140C0AE00 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C0AE50 (PopReleasePolicyLock.c)
 */

void __stdcall PoSetSystemState(EXECUTION_STATE Flags)
{
  char v2; // bl

  v2 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    PopAcquirePolicyLock();
    v2 = 1;
  }
  PopSetSystemState(Flags, 7LL);
  if ( v2 )
    PopReleasePolicyLock();
}
