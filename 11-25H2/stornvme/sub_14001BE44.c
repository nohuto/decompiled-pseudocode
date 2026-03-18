/*
 * XREFs of sub_14001BE44 @ 0x14001BE44
 * Callers:
 *     sub_1400073E0 @ 0x1400073E0 (sub_1400073E0.c)
 * Callees:
 *     sub_140006100 @ 0x140006100 (sub_140006100.c)
 *     sub_14000CF50 @ 0x14000CF50 (sub_14000CF50.c)
 *     sub_14000D500 @ 0x14000D500 (sub_14000D500.c)
 *     sub_14001B750 @ 0x14001B750 (sub_14001B750.c)
 *     sub_14001DB6C @ 0x14001DB6C (sub_14001DB6C.c)
 *     sub_14001F48C @ 0x14001F48C (sub_14001F48C.c)
 *     sub_140020410 @ 0x140020410 (sub_140020410.c)
 *     sub_140032C80 @ 0x140032C80 (sub_140032C80.c)
 */

char __fastcall sub_14001BE44(__int64 a1)
{
  __int64 v2; // r9
  __int64 v3; // r8
  _QWORD *v4; // r14
  unsigned int v5; // esi
  unsigned int v6; // r13d
  __int64 v7; // rcx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int k; // esi
  __int64 *v12; // r9
  __int64 v13; // r14
  unsigned int i; // edi
  __int64 *v15; // r8
  unsigned int j; // edi
  __int64 *v17; // r8
  __int64 v19; // r9
  unsigned int m; // edi
  __int64 *v21; // r9
  unsigned int v22; // r14d
  __int64 v23; // r9
  __int64 v24; // [rsp+40h] [rbp-38h]
  __int64 v25; // [rsp+50h] [rbp-28h]
  int v26; // [rsp+50h] [rbp-28h]
  unsigned int v27; // [rsp+C0h] [rbp+48h]
  __int64 v28; // [rsp+D0h] [rbp+58h]
  __int64 v29; // [rsp+D8h] [rbp+60h]

  v24 = 0LL;
  v29 = 0LL;
  v28 = 0LL;
  if ( !*(_WORD *)(a1 + 332) )
    return 0;
  v2 = *(unsigned __int16 *)(a1 + 330);
  if ( !(_WORD)v2 )
    return 0;
  v3 = *(unsigned __int16 *)(a1 + 326);
  v4 = (_QWORD *)(a1 + 944);
  v5 = *(unsigned __int16 *)(a1 + 326) << 6;
  v6 = 16 * v3;
  v27 = v5;
  if ( !*(_BYTE *)(a1 + 20) )
  {
    sub_140020410();
    StorPortExtendedFunction(0LL, a1, 392 * (unsigned int)*(unsigned __int16 *)(v7 + 332), 1701672526LL);
    StorPortExtendedFunction(0LL, a1, 208 * (unsigned int)*(unsigned __int16 *)(a1 + 330), 1701672526LL);
    if ( *v4 && *(_QWORD *)(a1 + 936) )
      StorPortExtendedFunction(
        0LL,
        a1,
        16 * *(unsigned __int16 *)(a1 + 326) * (unsigned int)*(unsigned __int16 *)(a1 + 330),
        1701672526LL);
LABEL_18:
    if ( !*(_BYTE *)(a1 + 20) )
    {
      if ( *(_QWORD *)(a1 + 936) )
      {
        for ( i = 0; i < *(unsigned __int16 *)(a1 + 330); ++i )
        {
          v15 = (__int64 *)(*(_QWORD *)(a1 + 936) + 208LL * i);
          if ( *v15 )
            sub_14000CF50(a1, v5, v15, v15[1]);
        }
      }
      if ( *(_QWORD *)(a1 + 944) )
      {
        for ( j = 0; j < *(unsigned __int16 *)(a1 + 332); ++j )
        {
          v17 = (__int64 *)(*(_QWORD *)(a1 + 944) + 392LL * j);
          if ( *v17 )
            sub_14000CF50(a1, v6, v17, v17[1]);
        }
      }
      sub_14001F48C(a1, v28);
      sub_14001F48C(a1, 0LL);
      sub_14001F48C(a1, v29);
      sub_14001F48C(a1, 0LL);
      sub_14001F48C(a1, v24);
      sub_14001F48C(a1, *(_QWORD *)(a1 + 944));
      sub_14001F48C(a1, *(_QWORD *)(a1 + 936));
    }
    *(_DWORD *)(a1 + 330) = 0;
    return 0;
  }
  v24 = v6 + *(_QWORD *)*v4;
  v29 = v24 + 16 * v2 * v3;
  v28 = v29 + 32 * v2 * *(unsigned __int16 *)(a1 + 328);
  v8 = (16 * *(unsigned __int16 *)(a1 + 330) * (unsigned int)*(unsigned __int16 *)(a1 + 326)) >> 2;
  if ( v8 )
    sub_140032C80(v24, 0LL, 4LL * v8);
  v9 = (32 * *(unsigned __int16 *)(a1 + 330) * (unsigned int)*(unsigned __int16 *)(a1 + 328)) >> 2;
  if ( v9 )
    sub_140032C80(v29, 0LL, 4LL * v9);
  v10 = (8 * (unsigned int)*(unsigned __int16 *)(a1 + 332)) >> 2;
  if ( v10 )
    sub_140032C80(v28, 0LL, 4LL * v10);
  for ( k = 0; k < *(unsigned __int16 *)(a1 + 330); ++k )
  {
    v12 = *(__int64 **)(a1 + 936);
    v13 = (__int64)&v12[26 * k];
    if ( !*(_BYTE *)(a1 + 20) )
    {
      sub_140006100(a1, v27);
LABEL_17:
      v5 = v27;
      goto LABEL_18;
    }
    v19 = *v12;
    v25 = v19;
    if ( v27 >> 2 )
    {
      sub_140032C80(v19, 0LL, 4LL * (v27 >> 2));
      v19 = v25;
    }
    sub_14000D500(
      a1,
      v13,
      k + 1,
      v19,
      0LL,
      v24 + 16 * k * (unsigned __int64)*(unsigned __int16 *)(a1 + 326),
      v29 + 32 * k * (unsigned __int64)*(unsigned __int16 *)(a1 + 328),
      0LL);
  }
  for ( m = 0; m < *(unsigned __int16 *)(a1 + 332) && m < *(unsigned __int16 *)(a1 + 330); ++m )
  {
    v21 = *(__int64 **)(a1 + 944);
    v22 = (_DWORD)v21 + 392 * m;
    if ( !*(_BYTE *)(a1 + 20) )
    {
      sub_140006100(a1, v6);
      goto LABEL_17;
    }
    v23 = *v21;
    v26 = v23;
    if ( v6 >> 2 )
    {
      sub_140032C80(v23, 0LL, 4LL * (v6 >> 2));
      LODWORD(v23) = v26;
    }
    sub_14001DB6C(a1, v22, m + 1, v23, 0LL, v28 + 8LL * m, 0LL);
  }
  return 1;
}
