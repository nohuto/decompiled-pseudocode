/*
 * XREFs of RtlInitUTF8StringEx @ 0x140617E50
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitAnsiStringEx @ 0x1404ED1B0 (RtlInitAnsiStringEx.c)
 */

NTSTATUS __fastcall RtlInitUTF8StringEx(STRING *a1, const char *a2)
{
  return RtlInitAnsiStringEx(a1, a2);
}
