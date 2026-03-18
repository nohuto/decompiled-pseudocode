/*
 * XREFs of IopUserRundown @ 0x140AAFB70
 * Callers:
 *     <none>
 * Callees:
 *     IoFreeIrp @ 0x140268860 (IoFreeIrp.c)
 */

void __fastcall IopUserRundown(__int64 a1)
{
  IoFreeIrp((PIRP)(a1 - 120));
}
