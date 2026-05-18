/*
 * XREFs of sub_18005C1B8 @ 0x18005C1B8
 * Callers:
 *     sub_18005D458 @ 0x18005D458 (sub_18005D458.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_1800133B8 @ 0x1800133B8 (sub_1800133B8.c)
 *     sub_18005CC70 @ 0x18005CC70 (sub_18005CC70.c)
 */

_QWORD *__fastcall sub_18005C1B8(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v6; // rbx
  __int64 v7; // rcx
  _QWORD *v8; // rcx
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11; // [rsp+28h] [rbp-10h]

  if ( *(_QWORD *)(a1 + 8) == 0x7FFFFFFFFFFFFFFLL )
    std::_Xlength_error("list too long");
  v10 = a1;
  v11 = 0LL;
  v6 = (_QWORD *)sub_180011790(0x20uLL);
  sub_1800133B8(v7, v6 + 2, a3);
  ++*(_QWORD *)(a1 + 8);
  v8 = *(_QWORD **)(a2 + 8);
  *v6 = a2;
  v6[1] = v8;
  v11 = 0LL;
  *(_QWORD *)(a2 + 8) = v6;
  *v8 = v6;
  sub_18005CC70(&v10);
  return v6;
}
