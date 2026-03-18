/*
 * XREFs of sub_1400073E0 @ 0x1400073E0
 * Callers:
 *     sub_14000DBA0 @ 0x14000DBA0 (sub_14000DBA0.c)
 *     sub_140019D00 @ 0x140019D00 (sub_140019D00.c)
 *     sub_140019D70 @ 0x140019D70 (sub_140019D70.c)
 *     sub_140028BD4 @ 0x140028BD4 (sub_140028BD4.c)
 * Callees:
 *     sub_140006B50 @ 0x140006B50 (sub_140006B50.c)
 *     sub_140006DE0 @ 0x140006DE0 (sub_140006DE0.c)
 *     sub_140006FB0 @ 0x140006FB0 (sub_140006FB0.c)
 *     sub_140007660 @ 0x140007660 (sub_140007660.c)
 *     sub_140007800 @ 0x140007800 (sub_140007800.c)
 *     sub_14000D400 @ 0x14000D400 (sub_14000D400.c)
 *     sub_1400181B0 @ 0x1400181B0 (sub_1400181B0.c)
 *     sub_1400192CC @ 0x1400192CC (sub_1400192CC.c)
 *     sub_14001B92C @ 0x14001B92C (sub_14001B92C.c)
 *     sub_14001BA90 @ 0x14001BA90 (sub_14001BA90.c)
 *     sub_14001BE44 @ 0x14001BE44 (sub_14001BE44.c)
 *     sub_14001C554 @ 0x14001C554 (sub_14001C554.c)
 *     sub_14001C664 @ 0x14001C664 (sub_14001C664.c)
 *     sub_14001F8F8 @ 0x14001F8F8 (sub_14001F8F8.c)
 *     sub_140028448 @ 0x140028448 (sub_140028448.c)
 *     __security_check_cookie @ 0x140032780 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1400073E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  bool v4; // r14
  bool v5; // zf
  unsigned __int8 v6; // bp
  char v7; // di
  unsigned int v9; // esi
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  _OWORD v16[5]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v17; // [rsp+C0h] [rbp-48h]

  memset(v16, 0, sizeof(v16));
  v4 = 0;
  v5 = (*(_DWORD *)(a1 + 56) & 0x1000000) == 0;
  v6 = a3;
  v17 = 0LL;
  v7 = a2;
  v9 = 0;
  if ( !v5 )
    v4 = *(_DWORD *)(a1 + 212) == 0;
  if ( (_BYTE)a2 )
  {
    if ( !(unsigned __int8)sub_1400181B0() )
    {
      *(_DWORD *)(a1 + 28) = 11;
      goto LABEL_28;
    }
    sub_140028448(a1, v6);
  }
  if ( v4 )
    goto LABEL_21;
  if ( (*(_DWORD *)(a1 + 128) & 0x10) == 0 && (*(_DWORD *)(a1 + 24) & 0x2000) != 0 )
    *(_DWORD *)(a1 + 124) = 0xFFFF;
  LOBYTE(a2) = v7 == 0;
  v10 = sub_140007660(a1, a2, v6);
  v9 = v10;
  if ( v10 || !*(_WORD *)(a1 + 982) && (!*(_WORD *)(a1 + 332) || !*(_WORD *)(a1 + 330)) )
  {
    *(_DWORD *)(a1 + 28) = 12;
    if ( v10 )
      goto LABEL_52;
    goto LABEL_28;
  }
  if ( (*(_DWORD *)(a1 + 56) & 4) == 0 )
    sub_14000D400(a1, v6);
  if ( (*(_DWORD *)(a1 + 56) & 4) == 0 )
    sub_140006FB0(a1, v6);
  if ( v7 )
  {
    if ( *(_WORD *)(a1 + 332) && *(_WORD *)(a1 + 330) )
    {
      if ( (*(_DWORD *)(a1 + 24) & 0x800000) == 0 && !(unsigned __int8)sub_14001B92C(a1) )
      {
        *(_DWORD *)(a1 + 330) = 0;
        *(_DWORD *)(a1 + 28) = 21;
        goto LABEL_28;
      }
      if ( !(unsigned __int8)sub_14001BE44(a1) )
      {
        *(_DWORD *)(a1 + 28) = 13;
        goto LABEL_28;
      }
      sub_14001C664(a1);
    }
    if ( *(_BYTE *)(a1 + 20) || !*(_WORD *)(a1 + 982) || (unsigned __int8)sub_14001C554(a1) )
      goto LABEL_13;
    *(_DWORD *)(a1 + 28) = 17;
LABEL_28:
    v9 = -1056964607;
    goto LABEL_52;
  }
LABEL_13:
  if ( !*(_WORD *)(a1 + 332) || !*(_WORD *)(a1 + 330) )
    goto LABEL_21;
  if ( (*(_DWORD *)(a1 + 128) & 4) == 0 && !v6 )
  {
    if ( !(unsigned __int8)sub_14001BA90(a1, 0LL) )
      goto LABEL_28;
LABEL_21:
    sub_140006B50(a1, a2, a3, a4);
    if ( v4 )
    {
LABEL_22:
      sub_140006DE0(a1);
      goto LABEL_23;
    }
LABEL_38:
    if ( (*(_BYTE *)(a1 + 3728) & 5) == 5 )
    {
      LOBYTE(v14) = -1;
      sub_14001F8F8(a1, v14);
    }
    goto LABEL_22;
  }
  v9 = sub_140007800(a1, v6);
  if ( !v9 )
  {
    sub_140006B50(a1, v11, v12, v13);
    goto LABEL_38;
  }
LABEL_52:
  if ( !*(_BYTE *)(a1 + 20) )
  {
    sub_1400192CC(a1, v16);
    StorPortNotification(4109LL, a1, 0LL);
  }
  if ( v9 )
  {
    ++*(_DWORD *)(a1 + 4196);
    return v9;
  }
LABEL_23:
  ++*(_DWORD *)(a1 + 4192);
  return v9;
}
