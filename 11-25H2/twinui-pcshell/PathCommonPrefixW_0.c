/*
 * XREFs of PathCommonPrefixW_0 @ 0x1802D4206
 * Callers:
 *     EncodeRelativePath @ 0x18009C028 (EncodeRelativePath.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __stdcall PathCommonPrefixW_0(LPCWSTR pszFile1, LPCWSTR pszFile2, LPWSTR achPath)
{
  return PathCommonPrefixW(pszFile1, pszFile2, achPath);
}
