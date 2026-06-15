/*
 * XREFs of sub_1400382A0 @ 0x1400382A0
 * Callers:
 *     sub_14001E3D8 @ 0x14001E3D8 (sub_14001E3D8.c)
 *     sub_140050E20 @ 0x140050E20 (sub_140050E20.c)
 *     sub_14005A55C @ 0x14005A55C (sub_14005A55C.c)
 *     sub_14005AC94 @ 0x14005AC94 (sub_14005AC94.c)
 *     sub_140088D3C @ 0x140088D3C (sub_140088D3C.c)
 * Callees:
 *     sub_140038358 @ 0x140038358 (sub_140038358.c)
 *     sub_140050ED0 @ 0x140050ED0 (sub_140050ED0.c)
 */

_QWORD *__fastcall sub_1400382A0(_QWORD *a1, _WORD *a2)
{
  __int64 v4; // rcx
  _WORD *v5; // rax
  __int64 v6; // r14
  char *v7; // rax
  char *v8; // rsi
  _QWORD *result; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( !a2 )
    sub_140050ED0(retaddr, 3954LL, "onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h");
  v4 = 0x7FFFFFFFLL;
  v5 = a2;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v4;
  }
  while ( v4 );
  v6 = 2 * (v5 - a2);
  v7 = (char *)CoTaskMemAlloc(v6 + 2);
  v8 = v7;
  if ( v7 )
  {
    sub_140038358(v7, v6 + 2, a2, v6);
    *(_WORD *)&v8[v6] = 0;
  }
  result = a1;
  *a1 = v8;
  return result;
}
