/*
 * XREFs of GetLbaFromCdb @ 0x140004C80
 * Callers:
 *     BuildReadWriteCommand @ 0x140004540 (BuildReadWriteCommand.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall GetLbaFromCdb(_BYTE *a1, int a2)
{
  unsigned __int8 v2; // r8
  unsigned __int8 *v3; // r11
  unsigned __int8 v4; // r9
  unsigned __int8 v5; // r10
  unsigned __int8 v6; // al
  unsigned __int8 v7; // bl
  unsigned __int8 v8; // di
  unsigned __int8 v9; // si

  v2 = a1[2];
  v3 = a1 + 5;
  v4 = a1[3];
  v5 = a1[4];
  if ( a2 == 16 )
  {
    v9 = *v3;
    v6 = a1[2];
    v2 = a1[6];
    v3 = a1 + 9;
    v7 = a1[3];
    v8 = a1[4];
    v4 = a1[7];
    v5 = a1[8];
  }
  else
  {
    v6 = 0;
    v7 = 0;
    v8 = 0;
    v9 = 0;
  }
  return *v3 | ((v5 | ((v4 | ((((v9 | ((v8 | ((v7 | ((unsigned __int64)v6 << 8)) << 8)) << 8)) << 8) | v2) << 8)) << 8)) << 8);
}
