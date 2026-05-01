/*
 * XREFs of CoInitializeEx_0 @ 0x1802CA8F3
 * Callers:
 *     ?init_apartment@winrt@@YAXW4apartment_type@1@@Z @ 0x180453CFC (-init_apartment@winrt@@YAXW4apartment_type@1@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall CoInitializeEx_0(LPVOID pvReserved, DWORD dwCoInit)
{
  return CoInitializeEx(pvReserved, dwCoInit);
}
