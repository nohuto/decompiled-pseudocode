/*
 * XREFs of SHGetIDListFromObject_0 @ 0x1802CFA5E
 * Callers:
 *     SimpleToRealIDListWithContext @ 0x1806CC11C (SimpleToRealIDListWithContext.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall SHGetIDListFromObject_0(IUnknown *punk, LPITEMIDLIST *ppidl)
{
  return SHGetIDListFromObject(punk, ppidl);
}
