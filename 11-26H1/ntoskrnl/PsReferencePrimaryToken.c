/*
 * XREFs of PsReferencePrimaryToken @ 0x140A48F30
 * Callers:
 *     MiCreateSystemSection @ 0x14038A4C0 (MiCreateSystemSection.c)
 * Callees:
 *     PsReferencePrimaryTokenWithTag @ 0x140279DC0 (PsReferencePrimaryTokenWithTag.c)
 */

PACCESS_TOKEN __stdcall PsReferencePrimaryToken(PEPROCESS Process)
{
  __int64 v1; // r8
  struct _KLOCK_ENTRIES *v2; // r9

  return (PACCESS_TOKEN)PsReferencePrimaryTokenWithTag((__int64)Process, 0x746C6644u, v1, v2);
}
