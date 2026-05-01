/*
 * XREFs of SHGetPathFromIDListW_0 @ 0x1802DAA9D
 * Callers:
 *     ILIsEqualByPath @ 0x1801FE2EC (ILIsEqualByPath.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall SHGetPathFromIDListW_0(LPCITEMIDLIST pidl, LPWSTR pszPath)
{
  return SHGetPathFromIDListW(pidl, pszPath);
}
