/*
 * XREFs of KzLowerIrql @ 0x14041C6E0
 * Callers:
 *     KiVirtualizationException @ 0x14073DF80 (KiVirtualizationException.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 */

void __stdcall KzLowerIrql(KIRQL NewIrql)
{
  unsigned __int64 v1; // rbx

  v1 = NewIrql;
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), NewIrql);
  __writecr8(v1);
}
