/*
 * XREFs of RtlIpv4StringToAddressW @ 0x1800AB300
 * Callers:
 *     RtlIpv4StringToAddressExW @ 0x1800AB120 (RtlIpv4StringToAddressExW.c)
 *     RtlCanonicalizeDomainName @ 0x1800AB600 (RtlCanonicalizeDomainName.c)
 * Callees:
 *     iswctype @ 0x18012AB80 (iswctype.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

LONG __stdcall RtlIpv4StringToAddressW(PCWSTR S, BOOLEAN Strict, LPCWSTR *Terminator, struct in_addr *Addr)
{
  unsigned int *v4; // rbx
  char v8; // r14
  unsigned int v9; // ebp
  int v10; // r12d
  wint_t v11; // cx
  int v12; // esi
  __int64 v13; // rbx
  int v14; // ebx
  int v15; // ebx
  int v16; // ebx
  bool v17; // zf
  unsigned int v18; // ecx
  int v20; // eax
  int v21; // edx
  unsigned int v22; // ecx
  unsigned int v24; // [rsp+28h] [rbp-50h] BYREF
  unsigned int v25; // [rsp+2Ch] [rbp-4Ch]
  unsigned int v26; // [rsp+30h] [rbp-48h]
  unsigned int v27; // [rsp+34h] [rbp-44h] BYREF

  v4 = &v24;
  while ( 1 )
  {
    v8 = 0;
    v9 = 0;
    v10 = 10;
    if ( *S == 48 )
    {
      v11 = S[1];
      ++S;
      if ( v11 < 0x80u && iswctype(v11, 4u) )
      {
        v10 = 8;
      }
      else if ( *S == 120 || *S == 88 )
      {
        v10 = 16;
        ++S;
      }
      else
      {
        v8 = 1;
      }
    }
    if ( Strict && v10 != 10 )
      goto LABEL_37;
    while ( 1 )
    {
      v12 = *S;
      if ( !(_WORD)v12 )
        break;
      if ( (unsigned __int16)v12 < 0x80u && iswctype(v12, 4u) && v12 - 48 < v10 )
      {
        v22 = v9 * v10 + v12 - 48;
      }
      else
      {
        if ( v10 != 16 || (unsigned __int16)v12 >= 0x80u || !iswctype(v12, 0x80u) )
          break;
        v20 = iswctype(v12, 2u);
        v21 = 65;
        if ( v20 )
          v21 = 97;
        v22 = v12 + 16 * v9 - v21 + 10;
      }
      if ( v22 < v9 )
        goto LABEL_37;
      ++S;
      v8 = 1;
      v9 = v22;
    }
    if ( *S != 46 )
      break;
    if ( v4 < &v27 )
    {
      *v4 = v9;
      ++S;
      ++v4;
      if ( v8 )
        continue;
    }
    goto LABEL_37;
  }
  if ( !v8 )
    goto LABEL_37;
  *v4 = v9;
  v13 = ((char *)v4 - (char *)&v24 + 4) >> 2;
  if ( Strict )
  {
    v17 = (_DWORD)v13 == 4;
  }
  else
  {
    v14 = v13 - 1;
    if ( !v14 )
    {
      v18 = v24;
      goto LABEL_22;
    }
    v15 = v14 - 1;
    if ( !v15 )
    {
      if ( v24 <= 0xFF && v25 <= 0xFFFFFF )
      {
        v18 = v25 & 0xFFFFFF | (v24 << 24);
        goto LABEL_22;
      }
      goto LABEL_37;
    }
    v16 = v15 - 1;
    if ( !v16 )
    {
      if ( v24 <= 0xFF && v25 <= 0xFF && v26 <= 0xFFFF )
      {
        v18 = (unsigned __int16)v26 | (((v24 << 8) | (unsigned __int8)v25) << 16);
        goto LABEL_22;
      }
      goto LABEL_37;
    }
    v17 = v16 == 1;
  }
  if ( v17 && v24 <= 0xFF && v25 <= 0xFF && v26 <= 0xFF && v27 <= 0xFF )
  {
    v18 = (unsigned __int8)v27 | (((unsigned __int8)v26 | (((v24 << 8) | (unsigned __int8)v25) << 8)) << 8);
LABEL_22:
    *Terminator = S;
    *(_DWORD *)Addr = _byteswap_ulong(v18);
    return 0;
  }
LABEL_37:
  *Terminator = S;
  return -1073741811;
}
