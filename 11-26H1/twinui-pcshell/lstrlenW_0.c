/*
 * XREFs of lstrlenW_0 @ 0x1802CB1BD
 * Callers:
 *     EncodeRelativePath @ 0x1800AB154 (EncodeRelativePath.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __stdcall lstrlenW_0(LPCWSTR lpString)
{
  return lstrlenW(lpString);
}
