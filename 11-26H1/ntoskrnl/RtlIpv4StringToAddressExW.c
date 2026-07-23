/*
 * XREFs of RtlIpv4StringToAddressExW @ 0x1404AD980
 * Callers:
 *     <none>
 * Callees:
 *     RtlIpv4StringToAddressW @ 0x1404ADAE0 (RtlIpv4StringToAddressW.c)
 *     iswctype @ 0x14053B358 (iswctype.c)
 */

NTSTATUS __stdcall RtlIpv4StringToAddressExW(
        PCWSTR AddressString,
        BOOLEAN Strict,
        struct in_addr *Address,
        PUSHORT Port)
{
  LPCWSTR v6; // rsi
  unsigned __int16 v7; // bp
  unsigned __int16 v8; // bx
  WCHAR v9; // r15
  int v10; // edi
  __int16 v11; // bx
  LPCWSTR v12; // [rsp+50h] [rbp+8h] BYREF

  v12 = 0LL;
  if ( !AddressString || !Address || !Port || RtlIpv4StringToAddressW(AddressString, Strict, &v12, Address) < 0 )
    return -1073741811;
  if ( *v12 == 58 )
  {
    v6 = v12 + 1;
    v7 = 10;
    v8 = 0;
    if ( v12[1] == 48 )
    {
      v6 = v12 + 2;
      v7 = 8;
      if ( v12[2] == 120 || *v6 == 88 )
      {
        v7 = 16;
        v6 = v12 + 3;
      }
    }
    v9 = *v6;
    while ( 1 )
    {
      v10 = *v6++;
      if ( !(_WORD)v10 )
        break;
      if ( (unsigned __int16)v10 < 0x80u && iswctype(v10, 4u) && (unsigned __int16)(v10 - 48) < v7 )
      {
        if ( v10 + v8 * (unsigned int)v7 - 48 > 0xFFFF )
          return -1073741811;
        v11 = v8 * v7 - 48;
      }
      else
      {
        if ( v7 != 16
          || (unsigned __int16)v10 >= 0x80u
          || !iswctype(v10, 0x80u)
          || v10 + 16 * v8 - (iswctype(v10, 2u) != 0 ? 97 : 65) + 10 > 0xFFFFu )
        {
          return -1073741811;
        }
        v11 = 16 * v8;
        LOWORD(v10) = v10 - (iswctype(v10, 2u) != 0 ? 97 : 65) + 10;
      }
      v8 = v10 + v11;
    }
    if ( !v9 )
      return -1073741811;
  }
  else
  {
    if ( *v12 )
      return -1073741811;
    v8 = 0;
  }
  *Port = __ROR2__(v8, 8);
  return 0;
}
