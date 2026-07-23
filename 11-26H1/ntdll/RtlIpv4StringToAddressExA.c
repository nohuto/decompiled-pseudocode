/*
 * XREFs of RtlIpv4StringToAddressExA @ 0x1800D7890
 * Callers:
 *     <none>
 * Callees:
 *     RtlIpv4StringToAddressA @ 0x1800D7A90 (RtlIpv4StringToAddressA.c)
 *     __isascii @ 0x1801277C0 (__isascii.c)
 *     isdigit @ 0x180127900 (isdigit.c)
 *     islower @ 0x180127960 (islower.c)
 *     isxdigit @ 0x180127A50 (isxdigit.c)
 */

LONG __stdcall RtlIpv4StringToAddressExA(PCSTR AddressString, BOOLEAN Strict, struct in_addr *Address, PUSHORT Port)
{
  unsigned __int16 v6; // bx
  PCSTR v7; // rdi
  unsigned __int16 v8; // bp
  CHAR v9; // r12
  int v10; // r14d
  int v11; // eax
  int v12; // ecx
  __int16 v13; // bx
  int v14; // eax
  __int16 v15; // cx
  PCSTR v16; // [rsp+50h] [rbp+8h] BYREF

  v16 = 0LL;
  if ( !AddressString || !Address || !Port || RtlIpv4StringToAddressA(AddressString, Strict, &v16, Address) < 0 )
    return -1073741811;
  if ( *v16 == 58 )
  {
    v7 = v16 + 1;
    v8 = 10;
    v6 = 0;
    if ( v16[1] == 48 )
    {
      v7 = v16 + 2;
      v8 = 8;
      if ( v16[2] == 88 || *v7 == 120 )
      {
        v8 = 16;
        v7 = v16 + 3;
      }
    }
    v9 = *v7;
    while ( 1 )
    {
      v10 = *v7++;
      if ( !(_BYTE)v10 )
        break;
      if ( _isascii(v10) && isdigit(v10) && (unsigned __int16)(v10 - 48) < v8 )
      {
        if ( v10 + v8 * (unsigned int)v6 - 48 > 0xFFFF )
          return -1073741811;
        v6 = v10 + v6 * v8 - 48;
      }
      else
      {
        if ( v8 != 16 || !_isascii(v10) || !isxdigit(v10) )
          return -1073741811;
        if ( !_isascii(v10) || (v11 = islower(v10), v12 = 97, !v11) )
          v12 = 65;
        if ( v10 + 16 * (unsigned int)v6 - v12 + 10 > 0xFFFF )
          return -1073741811;
        v13 = 16 * v6;
        if ( !_isascii(v10) || (v14 = islower(v10), v15 = 97, !v14) )
          v15 = 65;
        v6 = v10 - v15 + 10 + v13;
      }
    }
    if ( !v9 )
      return -1073741811;
  }
  else
  {
    if ( *v16 )
      return -1073741811;
    v6 = 0;
  }
  *Port = __ROR2__(v6, 8);
  return 0;
}
