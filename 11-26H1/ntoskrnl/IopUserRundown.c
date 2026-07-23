/*
 * XREFs of IopUserRundown @ 0x140AAD7C0
 * Callers:
 *     <none>
 * Callees:
 *     IoFreeIrp @ 0x140267DD0 (IoFreeIrp.c)
 */

void __fastcall IopUserRundown(__int64 a1)
{
  IoFreeIrp((PIRP)(a1 - 120));
}
