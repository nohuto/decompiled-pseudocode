/*
 * XREFs of PsIsWin32KFilterEnabledForProcess @ 0x1404A2520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall PsIsWin32KFilterEnabledForProcess(__int64 a1)
{
  return (*(_DWORD *)(a1 + 1872) & 0x4000) != 0;
}
