/*
 * XREFs of KzRaiseIrql @ 0x14041BC90
 * Callers:
 *     KiVirtualizationException @ 0x140739380 (KiVirtualizationException.c)
 * Callees:
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
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
