/*
 * XREFs of RtlDereferenceAtomTable @ 0x14061C6CC
 * Callers:
 *     SepDereferenceLowBoxNumberEntry @ 0x140A9F480 (SepDereferenceLowBoxNumberEntry.c)
 * Callees:
 *     RtlDestroyAtomTable @ 0x1409B8CD0 (RtlDestroyAtomTable.c)
 */

NTSTATUS __fastcall RtlDereferenceAtomTable(void *a1)
{
  return RtlDestroyAtomTable(a1);
}
