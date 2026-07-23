/*
 * XREFs of RtlIpv6StringToAddressExW @ 0x1800ABC40
 * Callers:
 *     RtlCanonicalizeDomainName @ 0x1800AB600 (RtlCanonicalizeDomainName.c)
 * Callees:
 *     RtlIpv6StringToAddressW @ 0x1800ABF20 (RtlIpv6StringToAddressW.c)
 *     iswctype @ 0x18012AB80 (iswctype.c)
 */

LONG __stdcall RtlIpv6StringToAddressExW(PCWSTR AddressString, struct in6_addr *Address, PULONG ScopeId, PUSHORT Port)
{
  unsigned __int16 v4; // si
  WCHAR v8; // bp
  const WCHAR *v9; // rcx
  ULONG v10; // r14d
  bool v11; // r13
  PCWSTR v12; // rdi
  wint_t v13; // bx
  wint_t v14; // ax
  wint_t *v15; // rdi
  unsigned __int16 v16; // bp
  wint_t v17; // ax
  wint_t v18; // bx
  int v19; // eax
  int v20; // edx
  __int16 v21; // si
  int v22; // eax
  __int16 v23; // cx
  LONG result; // eax
  int v25; // eax
  PCWSTR Terminator; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  Terminator = 0LL;
  if ( !AddressString || !Address || !ScopeId || !Port )
    return -1073741811;
  v8 = *AddressString;
  v9 = AddressString + 1;
  v10 = 0;
  if ( v8 != 91 )
    v9 = AddressString;
  v11 = v8 == 91;
  if ( RtlIpv6StringToAddressW(v9, &Terminator, Address) < 0 )
    return -1073741811;
  v12 = Terminator;
  if ( *Terminator == 37 )
  {
    v13 = Terminator[1];
    v12 = Terminator + 1;
    if ( v13 >= 0x80u || !iswctype(v13, 4u) )
      return -1073741811;
    while ( v13 && v13 != 93 )
    {
      if ( v13 >= 0x80u || !iswctype(v13, 4u) || v13 + 2 * (5 * (unsigned __int64)v10 - 24) > 0xFFFFFFFF )
        return -1073741811;
      v25 = v13;
      v13 = v12[1];
      ++v12;
      v10 = v25 + 2 * (5 * v10 - 24);
    }
  }
  v14 = *v12;
  if ( *v12 == 93 )
  {
    if ( v8 != 91 )
      return -1073741811;
    v14 = v12[1];
    v11 = 0;
    if ( v14 == 58 )
    {
      v15 = (wint_t *)(v12 + 2);
      v16 = 10;
      if ( *v15 == 48 )
      {
        v17 = v15[1];
        ++v15;
        v16 = 8;
        if ( v17 == 120 || v17 == 88 )
        {
          v16 = 16;
LABEL_29:
          ++v15;
          goto LABEL_18;
        }
      }
      while ( 1 )
      {
LABEL_18:
        v14 = *v15;
        v18 = *v15;
        if ( !*v15 )
          goto LABEL_30;
        if ( v14 >= 0x80u || !iswctype(v14, 4u) || v18 - 48 >= v16 )
          break;
        if ( v18 + v16 * (unsigned int)v4 - 48 > 0xFFFF )
          return -1073741811;
        v4 = v18 + v4 * v16 - 48;
        ++v15;
      }
      if ( v16 == 16 && v18 < 0x80u && iswctype(v18, 0x80u) )
      {
        v19 = iswctype(v18, 2u);
        v20 = 65;
        if ( v19 )
          v20 = 97;
        if ( v18 + 16 * (unsigned int)v4 - v20 + 10 <= 0xFFFF )
        {
          v21 = 16 * v4;
          v22 = iswctype(v18, 2u);
          v23 = 65;
          if ( v22 )
            v23 = 97;
          v4 = v18 - v23 + 10 + v21;
          goto LABEL_29;
        }
      }
      return -1073741811;
    }
  }
LABEL_30:
  if ( !v14 && !v11 )
  {
    *Port = __ROR2__(v4, 8);
    result = 0;
    *ScopeId = v10;
    return result;
  }
  return -1073741811;
}
