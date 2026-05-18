/*
 * XREFs of sub_180026F30 @ 0x180026F30
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800119A4 @ 0x1800119A4 (sub_1800119A4.c)
 *     sub_180017BB8 @ 0x180017BB8 (sub_180017BB8.c)
 *     sub_18002506C @ 0x18002506C (sub_18002506C.c)
 *     sub_180029674 @ 0x180029674 (sub_180029674.c)
 *     sub_1800297F4 @ 0x1800297F4 (sub_1800297F4.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180026F30(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rbx
  __int64 *v5; // rdi
  __int64 v6; // rdx
  __int64 *v7; // rcx
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF
  int v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+48h] [rbp+10h]

  v4 = a1 + 8;
  v11 = a1 + 8;
  sub_180029674(a1 + 8);
  v10 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 56LL))(*a2);
  v5 = *(__int64 **)sub_18002506C((__int64 *)(a1 + 24), (__int64)v9, &v10);
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 48LL))(*a2);
  v6 = v5[6];
  v7 = v5 + 5;
  if ( v6 == v5[7] )
    sub_180017BB8(v7, v6, a2);
  else
    sub_1800119A4((__int64)v7, a2);
  return sub_1800297F4(v4);
}
