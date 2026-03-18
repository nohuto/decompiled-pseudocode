/*
 * XREFs of sub_1400316E0 @ 0x1400316E0
 * Callers:
 *     sub_140005320 @ 0x140005320 (sub_140005320.c)
 *     sub_14000F840 @ 0x14000F840 (sub_14000F840.c)
 *     sub_140012550 @ 0x140012550 (sub_140012550.c)
 *     sub_140014030 @ 0x140014030 (sub_140014030.c)
 *     sub_14001ED94 @ 0x14001ED94 (sub_14001ED94.c)
 *     sub_140028860 @ 0x140028860 (sub_140028860.c)
 * Callees:
 *     __security_check_cookie @ 0x140032780 (__security_check_cookie.c)
 *     sub_140032980 @ 0x140032980 (sub_140032980.c)
 */

char __fastcall sub_1400316E0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v6; // rsi
  __int128 *v7; // r8
  char result; // al
  int v9; // ebx
  bool v11; // cl
  __int128 v12; // [rsp+38h] [rbp-38h] BYREF
  __int128 v13; // [rsp+48h] [rbp-28h]
  __int64 v14; // [rsp+58h] [rbp-18h]

  v4 = *a2;
  v6 = a2[1];
  v7 = 0LL;
  result = 0;
  v9 = a4;
  v14 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  if ( a3 )
  {
    if ( !(_DWORD)a4 )
      return result;
  }
  else if ( (_DWORD)a4 )
  {
    goto LABEL_20;
  }
  v11 = v4 && ((v4 - 1) & v4) == 0;
  result = v6 && ((v6 - 1) & v6) == 0;
  if ( v11 )
  {
    if ( result )
      goto LABEL_20;
  }
  else if ( !result )
  {
    goto LABEL_20;
  }
  if ( !(_DWORD)a4 )
  {
    LODWORD(v12) = 2621441;
    LODWORD(v14) = a4;
    *((_QWORD *)&v12 + 1) = v4;
    *(_QWORD *)&v13 = v6;
    result = StorPortNotification(32770LL, a1, &v12);
    v7 = &v12;
LABEL_20:
    if ( !v9 )
      return result;
    goto LABEL_21;
  }
  result = StorPortExtendedFunction(0LL, a1, (unsigned __int16)(a4 + 36), 1701672526LL);
  v7 = 0LL;
LABEL_21:
  if ( v7 )
    return StorPortExtendedFunction(1LL, a1, v7, a4);
  return result;
}
