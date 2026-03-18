/*
 * XREFs of IopApcHardError @ 0x140B069F0
 * Callers:
 *     <none>
 * Callees:
 *     IopRaiseHardError @ 0x140B06A30 (IopRaiseHardError.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall IopApcHardError(PIRP *P)
{
  IopRaiseHardError(P[4]);
  ExFreePoolWithTag(P, 0);
}
