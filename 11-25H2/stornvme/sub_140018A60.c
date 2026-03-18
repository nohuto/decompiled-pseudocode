/*
 * XREFs of sub_140018A60 @ 0x140018A60
 * Callers:
 *     sub_14000DBA0 @ 0x14000DBA0 (sub_14000DBA0.c)
 *     sub_140010C10 @ 0x140010C10 (sub_140010C10.c)
 * Callees:
 *     sub_14000CF50 @ 0x14000CF50 (sub_14000CF50.c)
 *     sub_14001F48C @ 0x14001F48C (sub_14001F48C.c)
 *     sub_140032C80 @ 0x140032C80 (sub_140032C80.c)
 */

__int64 __fastcall sub_140018A60(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *i; // rdi
  __int64 v6; // r9
  _QWORD *j; // rdi
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 result; // rax
  __int64 v11; // rcx
  __int64 *v12; // rdi
  __int64 v13; // rbp
  _BYTE *v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // r9
  __int64 v17; // r9

  if ( !*(_BYTE *)(a1 + 20) )
  {
    for ( i = *(_QWORD **)(a1 + 528); i; i = *(_QWORD **)(a1 + 528) )
    {
      *(_QWORD *)(a1 + 528) = i[3];
      StorPortExtendedFunction(1LL, a1, *i, a4);
      StorPortExtendedFunction(1LL, a1, i, v6);
    }
    for ( j = *(_QWORD **)(a1 + 536); j; j = *(_QWORD **)(a1 + 536) )
    {
      *(_QWORD *)(a1 + 536) = j[3];
      StorPortExtendedFunction(1LL, a1, *j, a4);
      StorPortExtendedFunction(1LL, a1, j, v8);
    }
    sub_14001F48C(a1, *(_QWORD *)(a1 + 360));
    v9 = *(_QWORD *)(a1 + 368);
    *(_QWORD *)(a1 + 360) = 0LL;
    result = sub_14001F48C(a1, v9);
    v11 = *(_QWORD *)(a1 + 1104);
    *(_QWORD *)(a1 + 368) = 0LL;
    *(_BYTE *)(a1 + 1008) = 0;
    if ( v11 )
      result = sub_140032C80(v11, 0LL, 4232LL);
    v12 = (__int64 *)(a1 + 1232);
    v13 = 2LL;
    v14 = (_BYTE *)(a1 + 1136);
    do
    {
      v15 = *v12;
      *v14 = 0;
      if ( v15 )
        result = sub_140032C80(v15, 0LL, 4232LL);
      v14 += 128;
      v12 += 16;
      --v13;
    }
    while ( v13 );
    v16 = *(_QWORD *)(a1 + 1392);
    if ( v16 )
    {
      if ( *(_QWORD *)(v16 + 96) && *(_WORD *)(a1 + 1552) )
        sub_14000CF50(
          a1,
          (unsigned __int64)*(unsigned __int16 *)(a1 + 1552) << 13,
          (__int64 *)(v16 + 96),
          *(_QWORD *)(v16 + 104));
      result = StorPortExtendedFunction(1LL, a1, *(_QWORD *)(a1 + 1392), v16);
      *(_QWORD *)(a1 + 1392) = 0LL;
      *(_WORD *)(a1 + 1552) = 0;
    }
    v17 = *(_QWORD *)(a1 + 1400);
    if ( v17 )
    {
      if ( *(_QWORD *)(v17 + 96) )
      {
        if ( *(_WORD *)(a1 + 1554) )
          sub_14000CF50(
            a1,
            (unsigned __int64)*(unsigned __int16 *)(a1 + 1554) << 13,
            (__int64 *)(v17 + 96),
            *(_QWORD *)(v17 + 104));
      }
      result = StorPortExtendedFunction(1LL, a1, *(_QWORD *)(a1 + 1400), v17);
      *(_QWORD *)(a1 + 1400) = 0LL;
      *(_WORD *)(a1 + 1554) = 0;
    }
  }
  return result;
}
