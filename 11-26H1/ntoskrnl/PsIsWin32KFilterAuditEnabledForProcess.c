/*
 * XREFs of PsIsWin32KFilterAuditEnabledForProcess @ 0x1404BFB50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall PsIsWin32KFilterAuditEnabledForProcess(__int64 a1)
{
  return (*(_DWORD *)(a1 + 1872) & 0x8000) != 0;
}
