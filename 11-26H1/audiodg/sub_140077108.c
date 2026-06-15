/*
 * XREFs of sub_140077108 @ 0x140077108
 * Callers:
 *     sub_14007BD30 @ 0x14007BD30 (sub_14007BD30.c)
 * Callees:
 *     sub_1400454AC @ 0x1400454AC (sub_1400454AC.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     sub_140077AA4 @ 0x140077AA4 (sub_140077AA4.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_140077108(__int64 *a1, unsigned int *a2, _QWORD *a3)
{
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v6 = sub_140049338(80LL, (__int64)&unk_1400C75FC);
  v9 = v6;
  if ( v6 )
  {
    v7 = sub_140077AA4(v6, *a2, *a3);
    if ( *a1 )
      sub_1400B6010(*a1);
    *a1 = v7;
    v9 = 0LL;
  }
  sub_1400454AC(&v9);
  return a1;
}
