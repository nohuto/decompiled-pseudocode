/*
 * XREFs of RtlInitUTF8String @ 0x140617E70
 * Callers:
 *     PiGetDefaultMessageString @ 0x140A26864 (PiGetDefaultMessageString.c)
 * Callees:
 *     RtlInitAnsiString @ 0x14046C9A0 (RtlInitAnsiString.c)
 */

void __fastcall RtlInitUTF8String(STRING *a1, const char *a2)
{
  RtlInitAnsiString(a1, a2);
}
