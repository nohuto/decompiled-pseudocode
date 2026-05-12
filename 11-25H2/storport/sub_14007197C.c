/*
 * XREFs of sub_14007197C @ 0x14007197C
 * Callers:
 *     sub_140071930 @ 0x140071930 (sub_140071930.c)
 *     sub_1400D7168 @ 0x1400D7168 (sub_1400D7168.c)
 *     sub_1400D7410 @ 0x1400D7410 (sub_1400D7410.c)
 *     sub_14012A2CC @ 0x14012A2CC (sub_14012A2CC.c)
 *     sub_14018D660 @ 0x14018D660 (sub_14018D660.c)
 *     sub_1401942EC @ 0x1401942EC (sub_1401942EC.c)
 * Callees:
 *     sub_140042400 @ 0x140042400 (sub_140042400.c)
 *     sub_1400718DC @ 0x1400718DC (sub_1400718DC.c)
 */

char __fastcall sub_14007197C(__int64 a1, int a2)
{
  __int64 v3; // rsi
  char v4; // di
  __int64 v5; // rcx
  _DWORD *v6; // r9
  __int64 v7; // rcx
  _DWORD *v8; // r9
  __int64 v9; // rcx
  _DWORD *v10; // r9
  __int64 v11; // rcx
  _DWORD *v12; // r9
  __int64 v13; // rcx
  _DWORD *v14; // r9
  __int64 v15; // rcx
  _DWORD *v16; // r9
  __int64 v17; // rcx
  _DWORD *v18; // r9
  __int64 v19; // rcx
  _DWORD *v20; // r9
  __int64 v21; // rcx
  _DWORD *v22; // r9
  __int64 v23; // rcx
  _DWORD *v24; // r9
  __int64 v25; // rcx
  _DWORD *v26; // r9

  v3 = a2;
  if ( (*(_BYTE *)(a1 + 248) & 0x20) != 0 )
    return *(_BYTE *)(a2 + a1 + 292);
  v4 = 0;
  *(_QWORD *)(a1 + 292) = 0LL;
  *(_QWORD *)(a1 + 300) = 0LL;
  *(_QWORD *)(a1 + 308) = 0LL;
  *(_QWORD *)(a1 + 316) = 0LL;
  *(_DWORD *)(a1 + 288) = 19;
  if ( sub_140042400(a1, 2) )
    *v6 = 20;
  if ( sub_140042400(v5, 3) )
    *v8 = 21;
  if ( sub_140042400(v7, 5) )
    *v10 = 22;
  if ( sub_140042400(v9, 6) )
    *v12 = 23;
  if ( sub_140042400(v11, 7) )
    *v14 = 24;
  if ( sub_140042400(v13, 8) )
    *v16 = 25;
  if ( sub_140042400(v15, 9) )
    *v18 = 26;
  if ( sub_140042400(v17, 10) )
    *v20 = 27;
  if ( sub_140042400(v19, 12) )
    *v22 = 28;
  if ( sub_140042400(v21, 13) )
    *v24 = 29;
  if ( sub_140042400(v23, 15) )
    *v26 = 30;
  if ( (int)sub_1400718DC(v25) >= 0 )
  {
    *(_BYTE *)(a1 + 248) |= 0x20u;
    return *(_BYTE *)(v3 + a1 + 292);
  }
  return v4;
}
