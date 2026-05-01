/*
 * XREFs of CoInitializeEx_0 @ 0x1802D39D3
 * Callers:
 *     ?init_apartment@winrt@@YAXW4apartment_type@1@@Z @ 0x18044760C (-init_apartment@winrt@@YAXW4apartment_type@1@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall CoInitializeEx_0(LPVOID pvReserved, DWORD dwCoInit)
{
  return CoInitializeEx(pvReserved, dwCoInit);
}
