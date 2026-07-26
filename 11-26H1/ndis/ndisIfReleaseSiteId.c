/*
 * XREFs of ndisIfReleaseSiteId @ 0x1400D3090
 * Callers:
 *     ndisNsiChangeNetworkInfo @ 0x1400D30C4 (ndisNsiChangeNetworkInfo.c)
 *     ?ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1400D3970 (-ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1400D3EE0 (-ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisIfReleaseSiteId(unsigned int a1)
{
  __int64 result; // rax

  if ( byte_14011F660 )
  {
    if ( a1 > 0x7FFFFFF )
    {
      result = dword_14011CE70 & 0xF0000000;
      dword_14011CE70 = result | (a1 - 1) & 0xFFFFFFF;
    }
  }
  return result;
}
