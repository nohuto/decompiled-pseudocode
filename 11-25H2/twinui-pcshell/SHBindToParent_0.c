/*
 * XREFs of SHBindToParent_0 @ 0x1802DA9AD
 * Callers:
 *     SHGetUIObjectFromFullPIDL @ 0x1806A320C (SHGetUIObjectFromFullPIDL.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall SHBindToParent_0(LPCITEMIDLIST pidl, const IID *const riid, void **ppv, LPCITEMIDLIST *ppidlLast)
{
  return SHBindToParent(pidl, riid, ppv, ppidlLast);
}
