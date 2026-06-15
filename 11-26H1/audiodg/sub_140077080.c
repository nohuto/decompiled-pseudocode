/*
 * XREFs of sub_140077080 @ 0x140077080
 * Callers:
 *     sub_140045B10 @ 0x140045B10 (sub_140045B10.c)
 * Callees:
 *     sub_1400454AC @ 0x1400454AC (sub_1400454AC.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     sub_1400779D0 @ 0x1400779D0 (sub_1400779D0.c)
 *     sub_14007D4B0 @ 0x14007D4B0 (sub_14007D4B0.c)
 */

__int64 *__fastcall sub_140077080(__int64 *a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v6 = sub_140049338(80LL, (__int64)&unk_1400C75FC);
  v9 = v6;
  if ( v6 )
  {
    v7 = sub_1400779D0(v6, *a2, *a3);
    if ( *a1 )
      sub_14007D4B0();
    *a1 = v7;
    v9 = 0LL;
  }
  sub_1400454AC(&v9);
  return a1;
}
