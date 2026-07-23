/*
 * XREFs of SeReleaseAcl @ 0x1409E439C
 * Callers:
 *     NtSetInformationToken @ 0x140816660 (NtSetInformationToken.c)
 *     NtCreateTokenEx @ 0x1409E2210 (NtCreateTokenEx.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseAcl(void *a1, unsigned __int8 a2)
{
  if ( a2 <= 1u )
    ExFreePoolWithTag(a1, 0);
}
