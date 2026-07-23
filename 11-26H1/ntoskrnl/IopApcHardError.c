/*
 * XREFs of IopApcHardError @ 0x140B08B20
 * Callers:
 *     <none>
 * Callees:
 *     IopRaiseHardError @ 0x140B08B60 (IopRaiseHardError.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall IopApcHardError(PIRP *P)
{
  IopRaiseHardError(P[4]);
  ExFreePoolWithTag(P, 0);
}
