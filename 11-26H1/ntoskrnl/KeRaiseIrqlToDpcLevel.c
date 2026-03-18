/*
 * XREFs of KeRaiseIrqlToDpcLevel @ 0x14042D9A0
 * Callers:
 *     <none>
 * Callees:
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
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
