/*
 * XREFs of RtlIpv6StringToAddressA @ 0x1404B5690
 * Callers:
 *     RtlIpv6StringToAddressExA @ 0x140620C60 (RtlIpv6StringToAddressExA.c)
 * Callees:
 *     strtol @ 0x140537C6C (strtol.c)
 *     __isascii @ 0x140539008 (__isascii.c)
 *     isdigit @ 0x140539020 (isdigit.c)
 *     isxdigit @ 0x140539110 (isxdigit.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

NTSTATUS __stdcall RtlIpv6StringToAddressA(PCSTR S, PCSTR *Terminator, struct in6_addr *Addr)
{
  struct in6_addr *v3; // rbx
  char v4; // r11
  int v6; // r13d
  const char *v7; // r9
  unsigned int v8; // edi
  unsigned int v9; // r14d
  unsigned int v10; // r12d
  unsigned int v11; // r15d
  unsigned int v12; // r10d
  int v13; // ebp
  __int64 v14; // rax
  __int16 v15; // ax
  struct in6_addr *v16; // r9
  char *v17; // rbx
  unsigned int v19; // eax
  unsigned int v20; // eax
  char v21; // [rsp+20h] [rbp-58h]
  char *Str; // [rsp+28h] [rbp-50h]
  char v23; // [rsp+80h] [rbp+8h]
  unsigned int v26; // [rsp+98h] [rbp+20h]

  v3 = Addr;
  v4 = 0;
  Str = 0LL;
  v21 = 0;
  v6 = 0;
  v23 = 0;
  v7 = 0LL;
  v26 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  while ( 1 )
  {
    v13 = *S;
    if ( !*S )
    {
LABEL_43:
      *Terminator = S;
      if ( v9 )
        goto LABEL_56;
      goto LABEL_44;
    }
    if ( !v6 )
    {
      if ( (_BYTE)v13 != 58 )
      {
LABEL_15:
        if ( v8 > 7 && (v8 > 8 || !v4) )
          goto LABEL_43;
        if ( _isascii(v13) && isdigit(v13) )
        {
          v23 = 0;
        }
        else
        {
          if ( !_isascii(v13) || !isxdigit(v13) || v9 )
            goto LABEL_43;
          v23 = 1;
        }
        v10 = 1;
        Str = (char *)S;
        v6 = 1;
        v7 = S;
        goto LABEL_9;
      }
      if ( v9 )
        goto LABEL_55;
      if ( v8 || S[1] != 58 )
        goto LABEL_43;
      v14 = v12;
      v11 = 1;
      if ( !v12 )
        v4 = 1;
      v21 = v4;
      v26 = ++v12;
      v8 = 2;
      *((_WORD *)v3 + v14) = 0;
      v6 = 2;
      goto LABEL_54;
    }
    if ( v6 != 1 )
      goto LABEL_15;
    if ( _isascii(v13) && isdigit(v13) )
    {
      ++v10;
      goto LABEL_8;
    }
    if ( _isascii(v13) && isxdigit(v13) )
      break;
    if ( (_BYTE)v13 != 58 )
    {
      if ( (_BYTE)v13 != 46 || v23 )
        goto LABEL_43;
      if ( v9 > 2 )
      {
LABEL_55:
        *Terminator = S;
        goto LABEL_56;
      }
      if ( v8 > 6 && !v21 || v8 > 7 )
        goto LABEL_43;
      ++v9;
      goto LABEL_30;
    }
    if ( v9 )
      goto LABEL_55;
    if ( v8 > 6 && !v21 || v8 > 7 )
      goto LABEL_43;
    if ( S[1] != 58 )
    {
      ++v8;
LABEL_30:
      v3 = Addr;
      v6 = 0;
      v7 = Str;
      v12 = v26;
      goto LABEL_31;
    }
    if ( v11 )
      goto LABEL_43;
    v11 = v8 + 1;
    v3 = Addr;
    v6 = 2;
    v7 = Str;
    v8 += 2;
    v12 = v26;
LABEL_54:
    ++S;
LABEL_31:
    if ( v7 )
    {
      if ( v9 )
      {
        if ( v10 > 3 )
          return -1073741811;
        v19 = strtol(v7, 0LL, 10);
        if ( v19 > 0xFF )
          return -1073741811;
        v12 = v26;
        *((_BYTE *)v3 + 2 * v26 + v9 - 1) = v19;
      }
      else
      {
        if ( v10 > 4 )
          return -1073741811;
        *((_WORD *)v3 + v26) = __ROR2__(strtol(v7, 0LL, 16), 8);
        v12 = ++v26;
      }
      v7 = Str;
    }
LABEL_10:
    v3 = Addr;
    ++S;
    v4 = v21;
  }
  ++v10;
  if ( !v9 )
  {
    v23 = 1;
LABEL_8:
    v7 = Str;
LABEL_9:
    v12 = v26;
    goto LABEL_10;
  }
  *Terminator = S;
LABEL_56:
  if ( v9 != 3 )
    return -1073741811;
  ++v8;
LABEL_44:
  if ( !v11 && v8 != 7 )
    return -1073741811;
  if ( v6 == 1 )
  {
    if ( v9 )
    {
      if ( v10 > 3 )
        return -1073741811;
      v20 = strtol(Str, 0LL, 10);
      if ( v20 > 0xFF )
        return -1073741811;
      v16 = Addr;
      *((_BYTE *)Addr + 2 * v26 + v9) = v20;
    }
    else
    {
      if ( v10 > 4 )
        return -1073741811;
      v15 = strtol(Str, 0LL, 16);
      v16 = Addr;
      *((_WORD *)Addr + v26) = __ROR2__(v15, 8);
    }
  }
  else
  {
    if ( v6 != 2 )
      return -1073741811;
    v16 = Addr;
    *((_WORD *)Addr + v26) = 0;
  }
  if ( v11 )
  {
    v17 = (char *)v16 + 2 * v11;
    memmove((char *)v16 + 2 * (v11 - v8) + 16, v17, 2LL * (v8 - v11));
    memset_0(v17, 0, 2LL * (8 - v8));
  }
  return 0;
}
