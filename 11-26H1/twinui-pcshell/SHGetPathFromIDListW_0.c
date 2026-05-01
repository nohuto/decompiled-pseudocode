/*
 * XREFs of SHGetPathFromIDListW_0 @ 0x1802D320D
 * Callers:
 *     ILIsEqualByPath @ 0x1801F2708 (ILIsEqualByPath.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall SHGetPathFromIDListW_0(LPCITEMIDLIST pidl, LPWSTR pszPath)
{
  return SHGetPathFromIDListW(pidl, pszPath);
}
