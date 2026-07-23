/*
 * XREFs of RtlEthernetStringToAddressW @ 0x140620F00
 * Callers:
 *     <none>
 * Callees:
 *     iswctype @ 0x14053B358 (iswctype.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

NTSTATUS __stdcall RtlEthernetStringToAddressW(PCWSTR S, LPCWSTR *Terminator, DL_EUI48 *Addr)
{
  int *v4; // rsi
  int v7; // r14d
  char v8; // bl
  WCHAR v9; // bp
  char v10; // bl
  int v12; // [rsp+20h] [rbp-48h] BYREF
  _WORD v13[2]; // [rsp+24h] [rbp-44h] BYREF

  v4 = &v12;
  while ( 1 )
  {
    v7 = 0;
    v8 = 0;
    while ( 1 )
    {
      v9 = *S;
      if ( !*S || v9 >= 0x80u )
        break;
      if ( iswctype(v9, 4u) )
      {
        v10 = 16 * (v8 + 13);
      }
      else
      {
        if ( !iswctype(v9, 0x80u) )
          break;
        v10 = 16 * v8 - (iswctype(v9, 2u) != 0 ? 97 : 65) + 10;
      }
      v8 = v9 + v10;
      if ( v7 == 2 )
        goto LABEL_15;
      ++S;
      ++v7;
    }
    if ( *S != 45 && *S != 58 )
      break;
    if ( v4 < (int *)((char *)v13 + 1) )
    {
      *(_BYTE *)v4 = v8;
      ++S;
      v4 = (int *)((char *)v4 + 1);
      if ( v7 == 2 )
        continue;
    }
LABEL_15:
    *Terminator = S;
    return -1073741811;
  }
  *Terminator = S;
  if ( v7 != 2 )
    return -1073741811;
  *(_BYTE *)v4 = v8;
  if ( v4 != (int *)((char *)v13 + 1) )
    return -1073741811;
  *(_DWORD *)Addr->Byte = v12;
  *(_WORD *)&Addr->Ei48.Byte[1] = v13[0];
  return 0;
}
