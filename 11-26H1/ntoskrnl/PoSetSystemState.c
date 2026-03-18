/*
 * XREFs of PoSetSystemState @ 0x140438370
 * Callers:
 *     PoRegisterSystemState @ 0x140436880 (PoRegisterSystemState.c)
 * Callees:
 *     PopSetSystemState @ 0x1404383B4 (PopSetSystemState.c)
 *     PopAcquirePolicyLock @ 0x140C04BF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C04C40 (PopReleasePolicyLock.c)
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
