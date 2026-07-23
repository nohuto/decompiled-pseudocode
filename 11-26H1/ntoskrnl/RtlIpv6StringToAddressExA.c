/*
 * XREFs of RtlIpv6StringToAddressExA @ 0x140620C60
 * Callers:
 *     <none>
 * Callees:
 *     RtlIpv6StringToAddressA @ 0x1404B5690 (RtlIpv6StringToAddressA.c)
 *     __isascii @ 0x140539008 (__isascii.c)
 *     isdigit @ 0x140539020 (isdigit.c)
 *     islower @ 0x140539050 (islower.c)
 *     isxdigit @ 0x140539110 (isxdigit.c)
 */

NTSTATUS __stdcall RtlIpv6StringToAddressExA(
        PCSTR AddressString,
        struct in6_addr *Address,
        PULONG ScopeId,
        PUSHORT Port)
{
  CHAR v7; // r14
  bool v8; // zf
  const CHAR *v9; // rcx
  unsigned __int16 v10; // si
  ULONG v11; // r15d
  PCSTR v12; // rbx
  int v13; // edi
  CHAR v14; // al
  bool v15; // cl
  unsigned __int16 v16; // bp
  CHAR *v17; // rdi
  CHAR v18; // r14
  int v19; // ebx
  __int16 v20; // ax
  __int16 v21; // si
  int v22; // eax
  int v23; // ecx
  int v24; // eax
  __int16 v25; // cx
  NTSTATUS result; // eax
  PCSTR v27; // [rsp+20h] [rbp-38h] BYREF
  bool v28; // [rsp+60h] [rbp+8h]

  v27 = 0LL;
  if ( !AddressString || !Address || !ScopeId || !Port )
    return -1073741811;
  v7 = *AddressString;
  v8 = *AddressString == 91;
  v9 = AddressString + 1;
  v10 = 0;
  if ( !v8 )
    v9 = AddressString;
  v11 = 0;
  v28 = v8;
  if ( RtlIpv6StringToAddressA(v9, &v27, Address) < 0 )
    return -1073741811;
  v12 = v27;
  if ( *v27 == 37 )
  {
    v12 = v27 + 1;
    v13 = v27[1];
    if ( !_isascii(v13) || !isdigit(v13) )
      return -1073741811;
    while ( (_BYTE)v13 && (_BYTE)v13 != 93 )
    {
      if ( !_isascii((char)v13) || !isdigit((char)v13) || (char)v13 + 2 * (5 * (unsigned __int64)v11 - 24) > 0xFFFFFFFF )
        return -1073741811;
      ++v12;
      v11 = (char)v13 - 48 + 10 * v11;
      LOBYTE(v13) = *v12;
    }
  }
  v14 = *v12;
  if ( *v12 != 93 )
    goto LABEL_42;
  if ( v7 != 91 )
    return -1073741811;
  v14 = v12[1];
  v15 = 0;
  v28 = 0;
  if ( v14 == 58 )
  {
    v16 = 10;
    v17 = (CHAR *)(v12 + 2);
    if ( v12[2] == 48 )
    {
      v17 = (CHAR *)(v12 + 3);
      v16 = 8;
      if ( v12[3] == 120 || v12[3] == 88 )
      {
        v16 = 16;
        v17 = (CHAR *)(v12 + 4);
      }
    }
    while ( 1 )
    {
      v14 = *v17;
      v18 = *v17;
      if ( !*v17 )
        break;
      v19 = v14;
      if ( _isascii(v14) && isdigit(v19) && v19 - 48 < v16 )
      {
        if ( v19 + v16 * (unsigned int)v10 - 48 > 0xFFFF )
          return -1073741811;
        v20 = v18;
        v21 = v10 * v16 - 48;
      }
      else
      {
        if ( v16 != 16 || !_isascii(v19) || !isxdigit(v19) )
          return -1073741811;
        if ( !_isascii(v19) || (v22 = islower(v19), v23 = 97, !v22) )
          v23 = 65;
        if ( v19 + 16 * (unsigned int)v10 - v23 + 10 > 0xFFFF )
          return -1073741811;
        v21 = 16 * v10;
        if ( !_isascii(v19) || (v24 = islower(v19), v25 = 97, !v24) )
          v25 = 65;
        v20 = v18 - v25 + 10;
      }
      v10 = v20 + v21;
      ++v17;
    }
LABEL_42:
    v15 = v28;
  }
  if ( !v14 && !v15 )
  {
    *Port = __ROR2__(v10, 8);
    result = 0;
    *ScopeId = v11;
    return result;
  }
  return -1073741811;
}
