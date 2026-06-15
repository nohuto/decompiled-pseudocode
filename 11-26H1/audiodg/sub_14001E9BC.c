/*
 * XREFs of sub_14001E9BC @ 0x14001E9BC
 * Callers:
 *     sub_14006B498 @ 0x14006B498 (sub_14006B498.c)
 *     sub_14006B61C @ 0x14006B61C (sub_14006B61C.c)
 * Callees:
 *     sub_14001EB30 @ 0x14001EB30 (sub_14001EB30.c)
 *     sub_14001EBA4 @ 0x14001EBA4 (sub_14001EBA4.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14001E9BC(HKEY hKey, GUID *rguid)
{
  __int64 v3; // rdx
  OLECHAR *v4; // rax
  signed int v5; // ebx
  HKEY hKeya; // [rsp+30h] [rbp-138h] BYREF
  OLECHAR sz[40]; // [rsp+40h] [rbp-128h] BYREF
  WCHAR SubKey[80]; // [rsp+90h] [rbp-D8h] BYREF

  if ( StringFromGUID2(rguid, sz, 39) <= 0 )
  {
    return (unsigned int)-2147024809;
  }
  else
  {
    v3 = 39LL;
    v4 = sz;
    do
    {
      if ( !*v4 )
        break;
      ++v4;
      --v3;
    }
    while ( v3 );
    v5 = v3 == 0 ? 0x80070057 : 0;
    if ( v3 )
    {
      if ( ((39 - v3) & -(__int64)(v3 != 0)) == 0x26 )
      {
        v5 = sub_14001EB30(SubKey, 75LL, L"%s\\%s", L"AudioEngine\\AudioProcessingObjects", sz);
        if ( v5 >= 0 )
        {
          hKeya = 0LL;
          if ( RegOpenKeyExW(hKey, SubKey, 0, 0x20019u, &hKeya) )
          {
            return (unsigned int)-2005139398;
          }
          else
          {
            v5 = sub_14001EBA4(hKeya);
            RegCloseKey(hKeya);
          }
        }
      }
      else
      {
        return (unsigned int)-2147418113;
      }
    }
  }
  return (unsigned int)v5;
}
