/*
 * XREFs of sub_140061B80 @ 0x140061B80
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400612E0 @ 0x1400612E0 (sub_1400612E0.c)
 *     sub_140061414 @ 0x140061414 (sub_140061414.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140061B80(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = sub_140061414(a1 + 64);
  while ( v6 )
  {
    v2 = sub_1400612E0(a1 + 64, &v6);
    if ( *(_QWORD *)(v2 + 24) )
    {
      sub_1400B6010(*(_QWORD *)(a1 + 280));
      *(_QWORD *)(v2 + 24) = 0LL;
    }
  }
  v6 = sub_140061414(a1 + 136);
  while ( v6 )
  {
    v3 = sub_1400612E0(a1 + 136, &v6);
    if ( *(_QWORD *)(v3 + 24) )
    {
      sub_1400B6010(*(_QWORD *)(a1 + 280));
      *(_QWORD *)(v3 + 24) = 0LL;
    }
  }
  v6 = sub_140061414(a1 + 208);
  while ( v6 )
  {
    v4 = sub_1400612E0(a1 + 208, &v6);
    if ( *(_QWORD *)(v4 + 24) )
    {
      sub_1400B6010(*(_QWORD *)(a1 + 280));
      *(_QWORD *)(v4 + 24) = 0LL;
    }
  }
  return sub_1400125D4((__int64 *)(a1 + 280));
}
