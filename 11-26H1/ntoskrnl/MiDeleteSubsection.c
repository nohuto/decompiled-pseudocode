/*
 * XREFs of MiDeleteSubsection @ 0x1404D7A78
 * Callers:
 *     MiDeleteControlArea @ 0x140481D20 (MiDeleteControlArea.c)
 *     MiDeleteExtendSubsections @ 0x14077B9E0 (MiDeleteExtendSubsections.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteSubsection(void *a1)
{
  ExFreePoolWithTag(a1, 0);
}
