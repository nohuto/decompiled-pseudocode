/*
 * XREFs of RtlEthernetStringToAddressA @ 0x180146FD0
 * Callers:
 *     <none>
 * Callees:
 *     __isascii @ 0x1801277C0 (__isascii.c)
 *     isdigit @ 0x180127900 (isdigit.c)
 *     islower @ 0x180127960 (islower.c)
 *     isxdigit @ 0x180127A50 (isxdigit.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

LONG __stdcall RtlEthernetStringToAddressA(PCSTR S, PCSTR *Terminator, DL_EUI48 *Addr)
{
  int *v4; // rsi
  int v7; // ebp
  char v8; // bl
  int v9; // r12d
  char v10; // bl
  bool v11; // zf
  char v12; // al
  int v14; // [rsp+20h] [rbp-48h] BYREF
  _WORD v15[2]; // [rsp+24h] [rbp-44h] BYREF

  v4 = &v14;
  while ( 1 )
  {
    v7 = 0;
    v8 = 0;
    while ( 1 )
    {
      v9 = *S;
      if ( !*S )
        break;
      if ( _isascii(v9) && isdigit(v9) )
      {
        v10 = 16 * (v8 + 13);
      }
      else
      {
        if ( !_isascii(v9) || !isxdigit(v9) )
          break;
        if ( !_isascii(v9) || (v11 = islower(v9) == 0, v12 = 97, v11) )
          v12 = 65;
        v10 = 16 * v8 - v12 + 10;
      }
      v8 = v9 + v10;
      if ( v7 == 2 )
        goto LABEL_19;
      ++S;
      ++v7;
    }
    if ( *S != 45 && *S != 58 )
      break;
    if ( v4 < (int *)((char *)v15 + 1) )
    {
      *(_BYTE *)v4 = v8;
      ++S;
      v4 = (int *)((char *)v4 + 1);
      if ( v7 == 2 )
        continue;
    }
LABEL_19:
    *Terminator = S;
    return -1073741811;
  }
  *Terminator = S;
  if ( v7 != 2 )
    return -1073741811;
  *(_BYTE *)v4 = v8;
  if ( v4 != (int *)((char *)v15 + 1) )
    return -1073741811;
  *(_DWORD *)Addr->Byte = v14;
  *(_WORD *)&Addr->Ei48.Byte[1] = v15[0];
  return 0;
}
