/*
 * XREFs of KzRaiseIrql @ 0x1404134E0
 * Callers:
 *     KiVirtualizationException @ 0x14073DF80 (KiVirtualizationException.c)
 * Callees:
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

KIRQL __stdcall KzRaiseIrql(KIRQL NewIrql)
{
  KIRQL CurrentIrql; // bl

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != NewIrql )
    __writecr8(NewIrql);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, NewIrql);
  return CurrentIrql;
}
