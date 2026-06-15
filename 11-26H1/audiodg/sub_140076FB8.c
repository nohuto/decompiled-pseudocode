/*
 * XREFs of sub_140076FB8 @ 0x140076FB8
 * Callers:
 *     sub_14001C940 @ 0x14001C940 (sub_14001C940.c)
 * Callees:
 *     sub_1400454AC @ 0x1400454AC (sub_1400454AC.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     sub_1400778E0 @ 0x1400778E0 (sub_1400778E0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_140076FB8(__int64 *a1, _QWORD *a2, _DWORD *a3, _QWORD *a4, _DWORD *a5, _DWORD *a6, __int64 *a7)
{
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v11 = sub_140049338(104LL, (__int64)&unk_1400C75FC);
  v14 = v11;
  if ( v11 )
  {
    v12 = sub_1400778E0(v11, *a2, *a3, *a4, *a5, *a6, *a7);
    if ( *a1 )
      sub_1400B6010(*a1);
    *a1 = v12;
    v14 = 0LL;
  }
  sub_1400454AC(&v14);
  return a1;
}
