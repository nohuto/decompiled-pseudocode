/*
 * XREFs of sub_140022C1C @ 0x140022C1C
 * Callers:
 *     sub_140003520 @ 0x140003520 (sub_140003520.c)
 * Callees:
 *     sub_1400042C0 @ 0x1400042C0 (sub_1400042C0.c)
 *     sub_140005000 @ 0x140005000 (sub_140005000.c)
 *     sub_14000B900 @ 0x14000B900 (sub_14000B900.c)
 */

__int64 __fastcall sub_140022C1C(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdi
  __int64 v4; // r8
  __int64 v5; // rsi
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int16 v8; // ax
  __int16 v9; // bp
  __int16 v10; // bp
  char v11; // dl
  int v12; // ecx
  int v13; // r8d
  int v14; // r8d
  unsigned int v15; // r8d
  _DWORD *v17; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v17 = 0LL;
  v3 = sub_140005000(a2);
  v5 = sub_14000B900(v4, &v17);
  if ( *v17 < 0x2Cu )
  {
    *(_BYTE *)(v6 + 3) = 21;
    return (unsigned int)-1056964602;
  }
  if ( (*(_BYTE *)(v5 + 36) & 1) == 0
    || (v8 = *(_WORD *)(v5 + 38), v8 > 8u)
    || !v8 && !*(_BYTE *)(v5 + 42) && !*(_WORD *)(*(_QWORD *)(v7 + 1560) + 266LL)
    || (v9 = *(_WORD *)(v5 + 40), v9 < -273) )
  {
    *(_BYTE *)(v6 + 3) = 6;
    return (unsigned int)-1056964602;
  }
  v10 = v9 + 273;
  *(_BYTE *)(v3 + 4225) = *(_BYTE *)(v3 + 4225) & 0xFC | 1;
  sub_1400042C0(v7, v6);
  v11 = *(_BYTE *)(v5 + 42);
  v12 = *(_DWORD *)(v3 + 4140);
  v13 = v12 ^ (*(unsigned __int8 *)(v5 + 38) << 16);
  *(_BYTE *)(v3 + 4096) = 9;
  *(_BYTE *)(v3 + 4136) = 4;
  v14 = v12 ^ v13 & 0xF0000;
  if ( v11 )
    v15 = v14 & 0xFFCFFFFF;
  else
    v15 = v14 & 0xFFCFFFFF | 0x100000;
  *(_DWORD *)(v3 + 4140) = v15;
  *(_WORD *)(v3 + 4140) = v10;
  *(_BYTE *)(v3 + 4225) &= ~4u;
  return v2;
}
