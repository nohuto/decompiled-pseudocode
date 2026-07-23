/*
 * XREFs of RtlIpv4StringToAddressA @ 0x1800D7A90
 * Callers:
 *     RtlIpv4StringToAddressExA @ 0x1800D7890 (RtlIpv4StringToAddressExA.c)
 * Callees:
 *     __isascii @ 0x1801277C0 (__isascii.c)
 *     isdigit @ 0x180127900 (isdigit.c)
 *     islower @ 0x180127960 (islower.c)
 *     isxdigit @ 0x180127A50 (isxdigit.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

LONG __stdcall RtlIpv4StringToAddressA(PCSTR S, BOOLEAN Strict, PCSTR *Terminator, struct in_addr *Addr)
{
  unsigned int *v4; // rsi
  char v8; // r15
  unsigned int v9; // ebp
  int v10; // r14d
  int v11; // edi
  int v12; // ecx
  unsigned int v13; // ecx
  int v15; // ecx
  __int64 v16; // rsi
  int v17; // eax
  int v18; // ecx
  unsigned int v19; // ecx
  int v20; // esi
  int v21; // esi
  int v22; // ecx
  int v23; // eax
  unsigned int v25; // [rsp+28h] [rbp-50h] BYREF
  unsigned int v26; // [rsp+2Ch] [rbp-4Ch]
  unsigned int v27; // [rsp+30h] [rbp-48h]
  unsigned int v28; // [rsp+34h] [rbp-44h] BYREF

  v4 = &v25;
  while ( 1 )
  {
    v8 = 0;
    v9 = 0;
    v10 = 10;
    if ( *S == 48 )
    {
      v15 = *++S;
      if ( _isascii(v15) && isdigit(*S) )
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
      goto LABEL_15;
    while ( *S )
    {
      v11 = *S;
      if ( _isascii(v11) && isdigit(v11) && v11 - 48 < v10 )
      {
        v12 = v9 * v10 - 48;
      }
      else
      {
        if ( v10 != 16 || !_isascii(v11) || !isxdigit(v11) )
          break;
        if ( !_isascii(v11) || (v23 = islower(v11), v22 = 97, !v23) )
          v22 = 65;
        v12 = 16 * v9 - v22 + 10;
      }
      v13 = v11 + v12;
      if ( v13 < v9 )
        goto LABEL_15;
      ++S;
      v8 = 1;
      v9 = v13;
    }
    if ( *S != 46 )
      break;
    if ( v4 < &v28 )
    {
      *v4 = v9;
      ++S;
      ++v4;
      if ( v8 )
        continue;
    }
    goto LABEL_15;
  }
  if ( !v8 )
    goto LABEL_15;
  *v4 = v9;
  v16 = ((char *)v4 - (char *)&v25 + 4) >> 2;
  if ( !Strict )
  {
    if ( (_DWORD)v16 != 4 )
    {
      v20 = v16 - 1;
      if ( !v20 )
      {
        v19 = v25;
        goto LABEL_30;
      }
      v21 = v20 - 1;
      if ( v21 )
      {
        if ( v21 == 1 && v25 <= 0xFF && v26 <= 0xFF && v27 <= 0xFFFF )
        {
          v17 = (unsigned __int16)v27;
          v18 = ((v25 << 8) | (unsigned __int8)v26) << 16;
          goto LABEL_29;
        }
      }
      else if ( v25 <= 0xFF && v26 <= 0xFFFFFF )
      {
        v18 = v25 << 24;
        v17 = v26 & 0xFFFFFF;
        goto LABEL_29;
      }
LABEL_15:
      *Terminator = S;
      return -1073741811;
    }
LABEL_24:
    if ( v25 <= 0xFF && v26 <= 0xFF && v27 <= 0xFF && v28 <= 0xFF )
    {
      v17 = (unsigned __int8)v28;
      v18 = ((unsigned __int8)v27 | (((v25 << 8) | (unsigned __int8)v26) << 8)) << 8;
LABEL_29:
      v19 = v17 | v18;
LABEL_30:
      *Terminator = S;
      *(_DWORD *)Addr = _byteswap_ulong(v19);
      return 0;
    }
    goto LABEL_15;
  }
  if ( (_DWORD)v16 == 4 )
    goto LABEL_24;
  *Terminator = S;
  return -1073741811;
}
