/*
 * XREFs of sub_140014B80 @ 0x140014B80
 * Callers:
 *     sub_14000EBE0 @ 0x14000EBE0 (sub_14000EBE0.c)
 * Callees:
 *     sub_14000B750 @ 0x14000B750 (sub_14000B750.c)
 *     sub_140014D70 @ 0x140014D70 (sub_140014D70.c)
 */

__int64 __fastcall sub_140014B80(__int64 a1, __int64 *a2)
{
  unsigned int v2; // r9d
  __int64 v4; // rsi
  __int64 v6; // r14
  int v7; // ecx
  __int64 v8; // r8
  __int64 v9; // r10
  unsigned __int64 v10; // r11
  unsigned __int128 v11; // rax
  unsigned __int16 v12; // r8
  __int64 v13; // rax
  int v14; // edx
  int v15; // r9d
  int v16; // eax
  __int64 v18; // [rsp+20h] [rbp-28h]

  v2 = *((_DWORD *)a2 + 4);
  v4 = a2[3];
  v6 = *a2;
  if ( !v2 )
    return StorPortNotification(0x2000LL, a1, v4);
  v7 = *(_DWORD *)(a1 + 4056);
  if ( (v7 & 0x100) != 0 )
    return StorPortNotification(0x2000LL, a1, v4);
  if ( (*(_DWORD *)(a1 + 24) & 1) == 0 )
  {
    if ( byte_140042130 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(v6 + 10) + 1672) + 20LL) & 0x200) != 0 )
        goto LABEL_6;
    }
    else if ( (v7 & 0x200) != 0 )
    {
      goto LABEL_6;
    }
    return StorPortNotification(0x2000LL, a1, v4);
  }
LABEL_6:
  v8 = *(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(v6 + 10) + 1672);
  v9 = *(unsigned int *)(v8 + 52);
  v10 = *(_QWORD *)(v8 + 56);
  if ( *(_BYTE *)(v8 + 66) )
    return StorPortNotification(0x2000LL, a1, v4);
  if ( *(_WORD *)(v8 + 48) )
    return StorPortNotification(0x2000LL, a1, v4);
  if ( (_DWORD)v9 )
  {
    if ( v2 % (unsigned int)v9 )
      return StorPortNotification(0x2000LL, a1, v4);
    *(_QWORD *)&v11 = a2[1] / v9;
    *((_QWORD *)&v11 + 1) = a2[1] % v9;
    if ( v11 >= v10 || v10 - a2[1] / v9 < (unsigned int)(__PAIR64__(DWORD2(v11), v2) / (unsigned int)v9) )
      return StorPortNotification(0x2000LL, a1, v4);
  }
  if ( byte_140042130 && (*(_DWORD *)(v8 + 20) & 0x200) != 0 )
    v12 = 1;
  else
    v12 = sub_14000B750(a1, *((_DWORD *)a2 + 12), *((unsigned __int16 *)a2 + 26), v2, 0, 0, (a2[7] & 0x10) != 0);
  v13 = *(unsigned __int8 *)(v6 + 10);
  *(_BYTE *)(v4 + 3) = v13;
  *(_WORD *)v4 = 1;
  v14 = *((_DWORD *)a2 + 4);
  *(_DWORD *)(v4 + 4) = v14;
  *(_DWORD *)(v4 + 16) = 1;
  v15 = *(_DWORD *)(a1 + 120);
  if ( v15 )
  {
    if ( a2[1] )
    {
      v16 = *(_DWORD *)(*(_QWORD *)(a1 + 8 * v13 + 1672) + 52LL);
      *(_DWORD *)(v4 + 4) = v14 - (-v16 & (v16 + v15 - 1));
    }
  }
  return sub_140014D70(a1, 208LL * v12 + *(_QWORD *)(a1 + 936) - 208LL, v4, a2, v18);
}
