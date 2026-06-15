/*
 * XREFs of sub_1400383F4 @ 0x1400383F4
 * Callers:
 *     sub_14003EDD0 @ 0x14003EDD0 (sub_14003EDD0.c)
 *     sub_140045B10 @ 0x140045B10 (sub_140045B10.c)
 *     sub_14007B320 @ 0x14007B320 (sub_14007B320.c)
 *     sub_14007DE90 @ 0x14007DE90 (sub_14007DE90.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall sub_1400383F4(HSTRING_HEADER *hstringHeader, PCWSTR sourceString, UINT32 a3, UINT32 a4)
{
  UINT32 v4; // eax
  HRESULT result; // eax

  v4 = a4;
  if ( a4 >= a3 )
    v4 = a3 - 1;
  result = WindowsCreateStringReference(sourceString, v4, hstringHeader, (HSTRING *)&hstringHeader[1]);
  if ( result < 0 )
  {
    RaiseException(result, 1u, 0, 0LL);
    __debugbreak();
    JUMPOUT(0x140038444LL);
  }
  return result;
}
