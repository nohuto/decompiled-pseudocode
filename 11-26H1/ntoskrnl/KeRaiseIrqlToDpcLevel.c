/*
 * XREFs of KeRaiseIrqlToDpcLevel @ 0x14041A8B0
 * Callers:
 *     <none>
 * Callees:
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

KIRQL KeRaiseIrqlToDpcLevel(void)
{
  KIRQL CurrentIrql; // bl
  char v1; // dl

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    v1 = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v1);
  }
  return CurrentIrql;
}
