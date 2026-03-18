/*
 * XREFs of MiDeleteSubsection @ 0x1404DE398
 * Callers:
 *     MiDeleteControlArea @ 0x1404881E0 (MiDeleteControlArea.c)
 *     MiDeleteExtendSubsections @ 0x140778B40 (MiDeleteExtendSubsections.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteSubsection(void *a1)
{
  ExFreePoolWithTag(a1, 0);
}
