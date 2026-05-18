/*
 * XREFs of sub_18005BD60 @ 0x18005BD60
 * Callers:
 *     sub_18005C26C @ 0x18005C26C (sub_18005C26C.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180011BB8 @ 0x180011BB8 (sub_180011BB8.c)
 *     sub_180013074 @ 0x180013074 (sub_180013074.c)
 *     sub_18002ECC8 @ 0x18002ECC8 (sub_18002ECC8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18005BD60(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 i; // rcx
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  v11 = a3;
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = 0LL;
  v6 = sub_18002ECC8(1uLL);
  v7 = sub_180011790(v6);
  *(_QWORD *)(a1 + 8) = v7;
  sub_180011BB8(v8, (_QWORD *)(v7 + 32), a4);
  sub_180013074(*(__int64 **)(a1 + 8), &v11);
  sub_180013074((__int64 *)(*(_QWORD *)(a1 + 8) + 8LL), &v11);
  sub_180013074((__int64 *)(*(_QWORD *)(a1 + 8) + 16LL), &v11);
  for ( i = 0LL; i < 2; ++i )
    *(_BYTE *)(*(_QWORD *)(a1 + 8) + i + 24) = 0;
  return a1;
}
