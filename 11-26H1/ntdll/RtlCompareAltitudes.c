/*
 * XREFs of RtlCompareAltitudes @ 0x180145720
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlCompareAltitudes(unsigned __int16 *a1, __int64 a2)
{
  unsigned __int16 v2; // r11
  unsigned __int16 v3; // r8
  _WORD *v4; // rsi
  unsigned __int16 v5; // cx
  _WORD *v6; // r14
  unsigned __int16 v7; // r11
  unsigned int v8; // r10d
  unsigned __int16 v9; // r9
  unsigned __int16 i; // dx
  unsigned __int16 v11; // bx
  unsigned __int16 j; // ax
  unsigned __int16 v13; // bx
  unsigned __int16 k; // ax
  bool v15; // cf
  unsigned __int16 m; // bx
  unsigned __int16 v18; // di
  unsigned __int16 v19; // ax
  __int16 v20; // r15
  __int16 v21; // bp
  signed __int16 v22; // di
  unsigned __int16 n; // r11
  signed __int16 v24; // r11
  unsigned __int16 ii; // r9
  _WORD *v26; // rsi
  _WORD *v27; // r14
  unsigned __int16 v28; // cx
  unsigned __int16 v29; // dx

  v2 = *a1;
  v3 = 0;
  v4 = (_WORD *)*((_QWORD *)a1 + 1);
  v5 = 0;
  v6 = *(_WORD **)(a2 + 8);
  v7 = v2 >> 1;
  v8 = 1;
  v9 = *(_WORD *)a2 >> 1;
  if ( v7 )
  {
    do
    {
      if ( v4[v5] == 46 )
        break;
      ++v5;
    }
    while ( v5 < v7 );
  }
  for ( i = 0; i < v9; ++i )
  {
    if ( v6[i] == 46 )
      break;
  }
  v11 = v5;
  for ( j = 0; j < v11; --v7 )
  {
    if ( *v4 != 48 )
      break;
    ++j;
    ++v4;
    --v5;
  }
  v13 = i;
  for ( k = 0; k < v13; --v9 )
  {
    if ( *v6 != 48 )
      break;
    ++k;
    ++v6;
    --i;
  }
  v15 = i < v5;
  if ( i != v5 )
    return v15 ? 1 : -1;
  for ( m = 0; m < v5; ++m )
  {
    v18 = v4[m];
    v19 = v6[m];
    v15 = v19 < v18;
    if ( v19 != v18 )
      return v15 ? 1 : -1;
  }
  v20 = 0;
  v21 = 0;
  if ( (__int16)(v7 - v5 - 1) >= 0 )
    v20 = v7 - v5 - 1;
  v22 = v20;
  if ( (__int16)(v9 - i - 1) >= 0 )
    v21 = v9 - i - 1;
  if ( v7 )
  {
    for ( n = v7 - 1; n > v5 && v4[n] == 48; --n )
      --v22;
  }
  v24 = v21;
  if ( v9 )
  {
    for ( ii = v9 - 1; ii > i && v6[ii] == 48; --ii )
      --v24;
  }
  v26 = &v4[v5];
  v27 = &v6[i];
  while ( v3 < v22 && v3 < v24 )
  {
    v28 = v26[v3 + 1];
    v29 = v27[v3 + 1];
    if ( v29 != v28 )
      return v29 < v28 ? 1 : -1;
    ++v3;
  }
  if ( v22 == v24 )
    return 0LL;
  if ( v22 <= v24 )
    return (unsigned int)-1;
  return v8;
}
