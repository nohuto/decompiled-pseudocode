/*
 * XREFs of SHBindToParent_0 @ 0x1802D311D
 * Callers:
 *     SHGetUIObjectFromFullPIDL @ 0x1806CB2B0 (SHGetUIObjectFromFullPIDL.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall SHBindToParent_0(LPCITEMIDLIST pidl, const IID *const riid, void **ppv, LPCITEMIDLIST *ppidlLast)
{
  return SHBindToParent(pidl, riid, ppv, ppidlLast);
}
