/*
 * XREFs of sub_140009970 @ 0x140009970
 * Callers:
 *     sub_140009440 @ 0x140009440 (sub_140009440.c)
 * Callees:
 *     sub_140009AA8 @ 0x140009AA8 (sub_140009AA8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_140009970(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rbx
  unsigned int v8; // edi

  *a2 = 0LL;
  v2 = *(_QWORD *)(a1 + 24);
  v3 = *(_QWORD *)(a1 + 72);
  while ( 1 )
  {
    do
    {
      if ( !v2 )
        return 2147943568LL;
      v4 = *(_QWORD *)(v2 + 16);
      v2 = *(_QWORD *)(v2 + 8);
      v5 = *(_QWORD *)(v3 + 16);
      v3 = *(_QWORD *)(v3 + 8);
      sub_140009AA8(v5);
    }
    while ( *(_DWORD *)(v4 + 40) != 2 );
    v6 = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 40LL);
    if ( v6 )
      sub_1400B6010(v6);
    if ( (int)sub_1400B6010(v6) >= 0 )
      break;
    if ( v6 )
      sub_1400B6010(v6);
  }
  if ( !v6 )
    return 2147943568LL;
  v8 = sub_1400B6010(v6);
  sub_1400B6010(v6);
  return v8;
}
