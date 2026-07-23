/*
 * XREFs of PipFreeBindingId @ 0x140B33E60
 * Callers:
 *     PipDeleteBindingId @ 0x1407A2984 (PipDeleteBindingId.c)
 *     PipDeleteBindingIds @ 0x140B33D88 (PipDeleteBindingIds.c)
 *     PipDeleteDependencyNode @ 0x140B33DCC (PipDeleteDependencyNode.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PipFreeBindingId(UNICODE_STRING *P)
{
  RtlFreeAnsiString(P + 1);
  ExFreePoolWithTag(P, 0x53706E50u);
}
