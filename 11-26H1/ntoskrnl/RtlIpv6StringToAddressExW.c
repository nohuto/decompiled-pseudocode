/*
 * XREFs of RtlIpv6StringToAddressExW @ 0x1404A76B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlIpv6StringToAddressW @ 0x1404A78D0 (RtlIpv6StringToAddressW.c)
 *     iswctype @ 0x14053B358 (iswctype.c)
 */

NTSTATUS __stdcall RtlIpv6StringToAddressExW(
        PCWSTR AddressString,
        struct in6_addr *Address,
        PULONG ScopeId,
        PUSHORT Port)
{
  WCHAR v7; // bp
  const WCHAR *v8; // rcx
  unsigned __int16 v9; // si
  ULONG v10; // r14d
  bool v11; // r13
  NTSTATUS result; // eax
  PCWSTR v13; // rbx
  wint_t v14; // di
  wint_t v15; // ax
  unsigned __int16 v16; // bp
  wint_t *v17; // rdi
  wint_t v18; // bx
  __int16 v19; // si
  WCHAR v20; // ax
  PCWSTR v21; // [rsp+50h] [rbp+8h] BYREF

  v21 = 0LL;
  if ( !AddressString || !Address || !ScopeId || !Port )
    return -1073741811;
  v7 = *AddressString;
  v8 = AddressString + 1;
  v9 = 0;
  if ( v7 != 91 )
    v8 = AddressString;
  v10 = 0;
  v11 = v7 == 91;
  if ( RtlIpv6StringToAddressW(v8, &v21, Address) < 0 )
    return -1073741811;
  v13 = v21;
  if ( *v21 == 37 )
  {
    v13 = v21 + 1;
    v14 = v21[1];
    if ( v14 >= 0x80u || !iswctype(v14, 4u) )
      return -1073741811;
    while ( v14 && v14 != 93 )
    {
      if ( v14 >= 0x80u || !iswctype(v14, 4u) || v14 + 2 * (5 * (unsigned __int64)v10 - 24) > 0xFFFFFFFF )
        return -1073741811;
      ++v13;
      v10 = v14 + 2 * (v10 + 4 * (v10 - 6));
      v14 = *v13;
    }
  }
  v15 = *v13;
  if ( *v13 == 93 )
  {
    if ( v7 != 91 )
      return -1073741811;
    v15 = v13[1];
    v11 = 0;
    if ( v15 == 58 )
    {
      v16 = 10;
      v17 = (wint_t *)(v13 + 2);
      if ( v13[2] != 48 )
        goto LABEL_22;
      v17 = (wint_t *)(v13 + 3);
      v16 = 8;
      v20 = v13[3];
      if ( v20 != 120 && v20 != 88 )
        goto LABEL_22;
      v16 = 16;
      while ( 1 )
      {
        ++v17;
LABEL_22:
        v15 = *v17;
        v18 = *v17;
        if ( !*v17 )
          break;
        if ( v15 < 0x80u && iswctype(v15, 4u) && v18 - 48 < v16 )
        {
          if ( v18 + v16 * (unsigned int)v9 - 48 > 0xFFFF )
            return -1073741811;
          v19 = v9 * v16 - 48;
        }
        else
        {
          if ( v16 != 16
            || v18 >= 0x80u
            || !iswctype(v18, 0x80u)
            || v18 + 16 * v9 - (iswctype(v18, 2u) != 0 ? 97 : 65) + 10 > 0xFFFFu )
          {
            return -1073741811;
          }
          v19 = 16 * v9;
          v18 = v18 - (iswctype(v18, 2u) != 0 ? 97 : 65) + 10;
        }
        v9 = v18 + v19;
      }
    }
  }
  if ( v15 || v11 )
    return -1073741811;
  *Port = __ROR2__(v9, 8);
  result = 0;
  *ScopeId = v10;
  return result;
}
