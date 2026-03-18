/*
 * XREFs of PipFreeBindingId @ 0x140B31C60
 * Callers:
 *     PipDeleteBindingId @ 0x14079FE44 (PipDeleteBindingId.c)
 *     PipDeleteBindingIds @ 0x140B31B88 (PipDeleteBindingIds.c)
 *     PipDeleteDependencyNode @ 0x140B31BCC (PipDeleteDependencyNode.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x140A007C0 (RtlFreeAnsiString.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall PipFreeBindingId(UNICODE_STRING *P)
{
  RtlFreeAnsiString(P + 1);
  ExFreePoolWithTag(P, 0x53706E50u);
}
