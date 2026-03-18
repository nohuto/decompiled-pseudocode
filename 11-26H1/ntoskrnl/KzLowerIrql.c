/*
 * XREFs of KzLowerIrql @ 0x14042F7D0
 * Callers:
 *     KiVirtualizationException @ 0x140739380 (KiVirtualizationException.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 */

void __stdcall KzLowerIrql(KIRQL NewIrql)
{
  unsigned __int64 v1; // rbx

  v1 = NewIrql;
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), NewIrql);
  __writecr8(v1);
}
