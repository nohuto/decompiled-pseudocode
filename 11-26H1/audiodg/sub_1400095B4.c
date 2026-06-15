/*
 * XREFs of sub_1400095B4 @ 0x1400095B4
 * Callers:
 *     sub_140009440 @ 0x140009440 (sub_140009440.c)
 *     sub_14003AA5C @ 0x14003AA5C (sub_14003AA5C.c)
 * Callees:
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_1400095B4(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rbx
  _QWORD *v5; // rax
  __int64 v7; // rbx
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
      v5 = *(_QWORD **)(v3 + 16);
      v3 = *(_QWORD *)(v3 + 8);
      if ( !*v5 )
        sub_14004639C(2147500037LL, a2);
    }
    while ( *(_DWORD *)(v4 + 40) != 2 );
    v7 = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 40LL);
    if ( v7 )
      sub_1400B6010(v7);
    if ( (int)sub_1400B6010(v7) >= 0 )
      break;
    if ( v7 )
      sub_1400B6010(v7);
  }
  if ( !v7 )
    return 2147943568LL;
  v8 = sub_1400B6010(v7);
  sub_1400B6010(v7);
  return v8;
}
