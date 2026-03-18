/*
 * XREFs of sub_140007D80 @ 0x140007D80
 * Callers:
 *     sub_14000DBA0 @ 0x14000DBA0 (sub_14000DBA0.c)
 *     sub_1400109F0 @ 0x1400109F0 (sub_1400109F0.c)
 *     sub_14001EBFC @ 0x14001EBFC (sub_14001EBFC.c)
 * Callees:
 *     sub_1400079D0 @ 0x1400079D0 (sub_1400079D0.c)
 *     sub_140008090 @ 0x140008090 (sub_140008090.c)
 */

__int64 __fastcall sub_140007D80(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int16 v5; // di
  unsigned __int8 v6; // bp
  unsigned __int16 i; // si
  unsigned __int16 v8; // dx
  unsigned __int16 v9; // dx
  unsigned __int16 v10; // ax
  unsigned __int16 v11; // r8
  __int64 v12; // r9
  int v13; // eax
  bool v14; // si
  unsigned __int16 j; // si
  unsigned __int16 v17; // [rsp+68h] [rbp+10h]
  unsigned __int16 v18; // [rsp+68h] [rbp+10h]
  unsigned __int16 v19; // [rsp+68h] [rbp+10h]
  unsigned __int16 v20; // [rsp+68h] [rbp+10h]
  unsigned __int16 v21; // [rsp+68h] [rbp+10h]

  v5 = 0;
  v17 = 0;
  v6 = 1;
  if ( *(unsigned __int16 *)(a1 + 472) > *(unsigned __int16 *)(a1 + 1552)
                                       + (unsigned int)*(unsigned __int16 *)(a1 + 1554) )
  {
    do
    {
      StorPortExtendedFunction(81LL, a1, 10000LL, a4);
      if ( *(unsigned __int16 *)(a1 + 472) <= *(unsigned __int16 *)(a1 + 1552)
                                            + (unsigned int)*(unsigned __int16 *)(a1 + 1554) )
        break;
      ++v17;
    }
    while ( v17 < 0x3E8u );
  }
  v18 = 0;
  if ( *(_WORD *)(a1 + 330) )
  {
    do
    {
      for ( i = 0; i < 0x3E8u; ++i )
      {
        StorPortExtendedFunction(81LL, a1, 10000LL, a4);
        v8 = v18;
        if ( !*(_WORD *)(208LL * v18 + *(_QWORD *)(a1 + 936) + 136) )
          break;
      }
      ++v18;
    }
    while ( (unsigned __int16)(v8 + 1) < *(_WORD *)(a1 + 330) );
  }
  v9 = 0;
  v19 = 0;
  if ( *(_WORD *)(a1 + 332) )
  {
    v10 = 0;
    v11 = 0;
    do
    {
      v12 = *(_QWORD *)(a1 + 944);
      if ( *(_BYTE *)(392LL * v10 + v12 + 248) )
      {
        if ( *(_QWORD *)(392LL * v11 + v12 + 256) )
        {
          for ( j = 0; j < *(_WORD *)(a1 + 234); ++j )
          {
            StorPortExtendedFunction(
              90LL,
              a1,
              *(_QWORD *)(*(_QWORD *)(392LL * v9 + *(_QWORD *)(a1 + 944) + 256) + 8LL * j),
              0LL);
            v9 = v19;
          }
        }
      }
      v11 = ++v9;
      v19 = v9;
      v10 = v9;
    }
    while ( v9 < *(_WORD *)(a1 + 332) );
  }
  v20 = 0;
  if ( *(_WORD *)(a1 + 330) )
  {
    v13 = 0;
    do
    {
      v6 = sub_140008090(a1, (unsigned int)(v13 + 1));
      if ( !v6 )
      {
        *(_DWORD *)(a1 + 28) = 15;
        StorPortExtendedFunction(98LL, a1, 0LL, 10LL);
      }
      v13 = v20;
      LOWORD(v13) = v20 + 1;
      v20 = v13;
    }
    while ( (unsigned __int16)v13 < *(_WORD *)(a1 + 330) );
  }
  v21 = 0;
  if ( !*(_WORD *)(a1 + 332) )
    return v6;
  do
  {
    v14 = sub_1400079D0(a1, v5 + 1);
    if ( !v14 )
    {
      *(_DWORD *)(a1 + 28) = 16;
      StorPortExtendedFunction(98LL, a1, 0LL, 10LL);
    }
    v5 = ++v21;
  }
  while ( v21 < *(_WORD *)(a1 + 332) );
  return v14;
}
