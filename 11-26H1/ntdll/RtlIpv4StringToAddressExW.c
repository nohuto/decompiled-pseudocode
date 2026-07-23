/*
 * XREFs of RtlIpv4StringToAddressExW @ 0x1800AB120
 * Callers:
 *     <none>
 * Callees:
 *     RtlIpv4StringToAddressW @ 0x1800AB300 (RtlIpv4StringToAddressW.c)
 *     iswctype @ 0x18012AB80 (iswctype.c)
 */

LONG __stdcall RtlIpv4StringToAddressExW(PCWSTR AddressString, BOOLEAN Strict, struct in_addr *Address, PUSHORT Port)
{
  unsigned __int16 v4; // si
  LPCWSTR v6; // rdi
  unsigned __int16 v7; // bp
  WCHAR v8; // ax
  WCHAR v9; // r15
  int v10; // ebx
  int v11; // eax
  int v12; // edx
  __int16 v13; // si
  int v14; // eax
  __int16 v15; // cx
  LPCWSTR Terminator; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  Terminator = 0LL;
  if ( !AddressString || !Address || !Port || RtlIpv4StringToAddressW(AddressString, Strict, &Terminator, Address) < 0 )
    return -1073741811;
  if ( *Terminator != 58 )
  {
    if ( !*Terminator )
      goto LABEL_28;
    return -1073741811;
  }
  v6 = Terminator + 1;
  v7 = 10;
  if ( Terminator[1] == 48 )
  {
    v8 = Terminator[2];
    v6 = Terminator + 2;
    v7 = 8;
    if ( v8 == 120 || v8 == 88 )
    {
      v7 = 16;
      v6 = Terminator + 3;
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
      if ( v10 + v4 * (unsigned int)v7 - 48 > 0xFFFF )
        return -1073741811;
      v4 = v10 + v4 * v7 - 48;
    }
    else
    {
      if ( v7 != 16 || (unsigned __int16)v10 >= 0x80u || !iswctype(v10, 0x80u) )
        return -1073741811;
      v11 = iswctype(v10, 2u);
      v12 = 65;
      if ( v11 )
        v12 = 97;
      if ( v10 + 16 * (unsigned int)v4 - v12 + 10 > 0xFFFF )
        return -1073741811;
      v13 = 16 * v4;
      v14 = iswctype(v10, 2u);
      v15 = 65;
      if ( v14 )
        v15 = 97;
      v4 = v10 - v15 + 10 + v13;
    }
  }
  if ( !v9 )
    return -1073741811;
LABEL_28:
  *Port = __ROR2__(v4, 8);
  return 0;
}
