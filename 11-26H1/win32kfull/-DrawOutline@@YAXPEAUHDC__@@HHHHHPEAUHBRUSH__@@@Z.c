/*
 * XREFs of ?DrawOutline@@YAXPEAUHDC__@@HHHHHPEAUHBRUSH__@@@Z @ 0x14024FB04
 * Callers:
 *     xxxDrawMenuItem @ 0x14000B428 (xxxDrawMenuItem.c)
 *     MNDrawEdge @ 0x14024FA0C (MNDrawEdge.c)
 * Callees:
 *     GrePolyPatBlt @ 0x140126C64 (GrePolyPatBlt.c)
 */

void __fastcall DrawOutline(HDC a1, int a2, int a3, int a4, int a5, int a6, HBRUSH a7)
{
  _DWORD v7[4]; // [rsp+30h] [rbp-21h] BYREF
  HBRUSH v8; // [rsp+40h] [rbp-11h]
  int v9; // [rsp+48h] [rbp-9h]
  int v10; // [rsp+4Ch] [rbp-5h]
  int v11; // [rsp+50h] [rbp-1h]
  int v12; // [rsp+54h] [rbp+3h]
  HBRUSH v13; // [rsp+58h] [rbp+7h]
  int v14; // [rsp+60h] [rbp+Fh]
  int v15; // [rsp+64h] [rbp+13h]
  int v16; // [rsp+68h] [rbp+17h]
  int v17; // [rsp+6Ch] [rbp+1Bh]
  HBRUSH v18; // [rsp+70h] [rbp+1Fh]
  int v19; // [rsp+78h] [rbp+27h]
  int v20; // [rsp+7Ch] [rbp+2Bh]
  int v21; // [rsp+80h] [rbp+2Fh]
  int v22; // [rsp+84h] [rbp+33h]
  HBRUSH v23; // [rsp+88h] [rbp+37h]

  v7[1] = a3;
  v10 = a3;
  v15 = a3;
  v7[0] = a2;
  v20 = a5 + a3 - a6;
  v9 = a2;
  v11 = a4;
  v19 = a2;
  v21 = a4;
  v7[2] = a6;
  v7[3] = a5;
  v8 = a7;
  v12 = a6;
  v13 = a7;
  v14 = a4 + a2 - a6;
  v16 = a6;
  v17 = a5;
  v18 = a7;
  v22 = a6;
  v23 = a7;
  GrePolyPatBlt(a1, 15728673, (struct _POLYPATBLT *)v7, 4);
}
