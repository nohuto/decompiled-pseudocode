/*
 * XREFs of CreateBindCtx_0 @ 0x1802D1012
 * Callers:
 *     BindCtx_RegisterObjectParam @ 0x1806CB614 (BindCtx_RegisterObjectParam.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall CreateBindCtx_0(DWORD reserved, LPBC *ppbc)
{
  return CreateBindCtx(reserved, ppbc);
}
