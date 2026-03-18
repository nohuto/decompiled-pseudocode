/*
 * XREFs of sub_140005260 @ 0x140005260
 * Callers:
 *     sub_140004AF0 @ 0x140004AF0 (sub_140004AF0.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_140005260(_BYTE *a1, int a2)
{
  unsigned __int8 v2; // r11
  unsigned __int8 v3; // al
  unsigned __int8 v4; // bl
  unsigned __int8 v5; // r8
  unsigned __int8 v6; // di
  unsigned __int8 v7; // r9
  unsigned __int8 v8; // si
  unsigned __int8 v9; // r10

  if ( a2 == 16 )
  {
    v3 = a1[2];
    v5 = a1[3];
    v7 = a1[4];
    v9 = a1[5];
    v2 = a1[6];
    v4 = a1[7];
    v6 = a1[8];
    v8 = a1[9];
  }
  else
  {
    v2 = a1[2];
    v3 = 0;
    v4 = a1[3];
    v5 = 0;
    v6 = a1[4];
    v7 = 0;
    v8 = a1[5];
    v9 = 0;
  }
  return v8 | ((v6 | ((v4 | ((((v9 | ((v7 | ((v5 | ((unsigned __int64)v3 << 8)) << 8)) << 8)) << 8) | v2) << 8)) << 8)) << 8);
}
