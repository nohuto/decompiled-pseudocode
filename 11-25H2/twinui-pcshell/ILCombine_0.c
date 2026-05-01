/*
 * XREFs of ILCombine_0 @ 0x1802DAA13
 * Callers:
 *     SimpleToRealIDListWithContext @ 0x1806A405C (SimpleToRealIDListWithContext.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
LPITEMIDLIST __stdcall ILCombine_0(LPCITEMIDLIST pidl1, LPCITEMIDLIST pidl2)
{
  return ILCombine(pidl1, pidl2);
}
