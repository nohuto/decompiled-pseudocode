/*
 * XREFs of sub_18008E4D0 @ 0x18008E4D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180026A6C @ 0x180026A6C (sub_180026A6C.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18008E4D0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  _QWORD *v9; // rax
  __int64 v10; // r8
  void (__fastcall *v11)(__int64, __int64, __int64, _QWORD *, __int64); // r10
  __int64 v13; // [rsp+38h] [rbp-50h] BYREF
  __int64 v14; // [rsp+40h] [rbp-48h]
  __int64 v15; // [rsp+48h] [rbp-40h] BYREF
  _QWORD v16[3]; // [rsp+58h] [rbp-30h] BYREF

  (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 184) + 16LL))(*(_QWORD *)(a1 + 184), &v13);
  sub_180012C40(&v15, a5);
  v9 = sub_180012C40(v16, &v13);
  v11(a1, a3, a4, v9, v10);
  sub_180026A6C(*(_QWORD *)(a1 + 232), a2);
  if ( v14 )
    sub_180010EC8(v14);
  return a2;
}
