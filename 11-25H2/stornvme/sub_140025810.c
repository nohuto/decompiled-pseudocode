/*
 * XREFs of sub_140025810 @ 0x140025810
 * Callers:
 *     <none>
 * Callees:
 *     sub_140005000 @ 0x140005000 (sub_140005000.c)
 *     sub_14000B900 @ 0x14000B900 (sub_14000B900.c)
 */

char __fastcall sub_140025810(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r10
  __int64 v7; // r9
  char v8; // dl
  __int64 v9; // r8
  char v10; // cl
  char v11; // cl
  char v12; // dl
  char v13; // cl
  __int64 v14; // r10
  __int64 v15; // r11
  __int64 v17; // [rsp+40h] [rbp+18h] BYREF

  v4 = sub_140005000(a2);
  if ( a3 )
  {
    v7 = sub_14000B900(v6, &v17);
    v8 = *(_BYTE *)(v7 + 2);
    *(_WORD *)v7 = 2048;
    v10 = *(_BYTE *)(v7 + 3) & 0xE;
    *(_BYTE *)(v7 + 2) = *(_BYTE *)(v9 + 112) & 1 ^ v8 & 0x62 | 4;
    LOBYTE(v4) = *(_BYTE *)(v7 + 4);
    *(_BYTE *)(v7 + 3) = *a3 & 1 ^ v10 | 0x80;
    v11 = v4 ^ (*(_BYTE *)(v9 + 112) ^ v4) & 2;
    *(_BYTE *)(v7 + 4) = v11;
    LOBYTE(v4) = v11 ^ (v11 ^ (2 * *(_BYTE *)(v9 + 112))) & 8;
    *(_BYTE *)(v7 + 4) = v4;
    v12 = v4 ^ (v4 ^ (4 * *(_BYTE *)(v9 + 112))) & 0x20;
    *(_BYTE *)(v7 + 4) = v12;
    v13 = v12 ^ (v12 ^ (4 * *(_BYTE *)(v9 + 112))) & 0x40;
    *(_BYTE *)(v7 + 4) = v13;
    *(_BYTE *)(v7 + 4) = v13 & 0x7F | (4 * (*(_BYTE *)(v9 + 112) & 0xE0));
    LOBYTE(v4) = *(_BYTE *)(v7 + 5);
    *(_BYTE *)(v7 + 5) = v4 ^ (v4 ^ (*(_BYTE *)(v9 + 112) >> 6)) & 1;
    *(_BYTE *)(v14 + 3) = 1;
    *(_BYTE *)(v15 + 4225) |= 8u;
  }
  else
  {
    *(_BYTE *)(v5 + 3) = 4;
    *(_BYTE *)(v4 + 4225) |= 8u;
  }
  return v4;
}
