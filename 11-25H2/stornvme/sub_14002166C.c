/*
 * XREFs of sub_14002166C @ 0x14002166C
 * Callers:
 *     sub_140001810 @ 0x140001810 (sub_140001810.c)
 * Callees:
 *     sub_1400012C0 @ 0x1400012C0 (sub_1400012C0.c)
 *     sub_140002330 @ 0x140002330 (sub_140002330.c)
 *     sub_14000B900 @ 0x14000B900 (sub_14000B900.c)
 */

__int64 __fastcall sub_14002166C(__int64 a1, __int64 a2)
{
  __int64 v3; // r9
  __int64 v4; // r10
  unsigned __int8 v5; // bl
  unsigned int v6; // r8d
  char v7; // dl
  bool v8; // al
  __int64 v9; // r9
  __int64 v10; // r10
  _DWORD *v11; // r11
  char v12; // dl
  char v13; // cl
  char v14; // dl
  char v15; // dl
  char v16; // dl
  _DWORD *v18; // [rsp+48h] [rbp+10h] BYREF

  v18 = 0LL;
  v3 = sub_14000B900(a2, &v18);
  if ( *(_BYTE *)(v4 + 2) == 40 )
    v5 = *(_BYTE *)(*(unsigned int *)(v4 + 52) + v4 + 10);
  else
    v5 = *(_BYTE *)(v4 + 7);
  if ( *v18 >= 8u )
  {
    *(_BYTE *)(v3 + 3) = 4;
    v7 = *(_BYTE *)(v3 + 5) & 0x98;
    *(_WORD *)v3 = -19968;
    *(_BYTE *)(v3 + 5) = v7;
    v8 = sub_1400012C0(a1);
    v13 = v12 & 0x7F | (v8 ? 0x80 : 0);
    v14 = *(_BYTE *)(v9 + 6);
    *(_BYTE *)(v9 + 5) = v13;
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 8LL * v5 + 1672) + 65LL) == (_BYTE)v6 )
    {
      if ( sub_1400012C0(a1) )
        v15 = v16 & 0xF8 | 1;
      else
        v15 = v16 & 0xF8;
    }
    else
    {
      v15 = v14 & 0xF8 | 2;
    }
    *(_BYTE *)(v9 + 6) = v15;
    *v11 = 8;
    *(_BYTE *)(v10 + 3) = 1;
  }
  else
  {
    sub_140002330(v4, 6, 5, 0x24u);
    return (unsigned int)-1056964602;
  }
  return v6;
}
