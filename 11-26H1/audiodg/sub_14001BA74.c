/*
 * XREFs of sub_14001BA74 @ 0x14001BA74
 * Callers:
 *     sub_14001A1A8 @ 0x14001A1A8 (sub_14001A1A8.c)
 *     sub_14001B838 @ 0x14001B838 (sub_14001B838.c)
 *     sub_14007EE2C @ 0x14007EE2C (sub_14007EE2C.c)
 * Callees:
 *     <none>
 */

HSTRING_HEADER *__fastcall sub_14001BA74(HSTRING_HEADER *hstringHeader, const WCHAR **a2)
{
  HSTRING *v2; // r9
  const WCHAR *v4; // rcx
  unsigned __int64 v5; // rdx
  HRESULT StringReference; // eax

  v2 = (HSTRING *)&hstringHeader[1];
  hstringHeader[1].Reserved.Reserved1 = 0LL;
  v4 = *a2;
  v5 = -1LL;
  do
    ++v5;
  while ( v4[v5] );
  if ( v5 > 0xFFFFFFFF || (int)v5 + 1 < (unsigned int)v5 )
  {
    RaiseException(0x80070216, 1u, 0, 0LL);
    __debugbreak();
  }
  StringReference = WindowsCreateStringReference(v4, v5, hstringHeader, v2);
  if ( StringReference < 0 )
  {
    RaiseException(StringReference, 1u, 0, 0LL);
    __debugbreak();
    JUMPOUT(0x14001BB02LL);
  }
  return hstringHeader;
}
