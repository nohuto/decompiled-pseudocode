/*
 * XREFs of NtSetEvent @ 0x140A52C00
 * Callers:
 *     DifNtSetEventWrapper @ 0x14068B2E0 (DifNtSetEventWrapper.c)
 *     SepAdtInitializeAuditingOptions @ 0x140CDE828 (SepAdtInitializeAuditingOptions.c)
 * Callees:
 *     NtSetEventEx @ 0x140A52C20 (NtSetEventEx.c)
 */

__int64 __fastcall NtSetEvent(void *a1)
{
  return NtSetEventEx(a1);
}
