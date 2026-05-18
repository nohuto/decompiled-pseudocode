/*
 * XREFs of sub_180039C48 @ 0x180039C48
 * Callers:
 *     sub_180039550 @ 0x180039550 (sub_180039550.c)
 * Callees:
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_180032460 @ 0x180032460 (sub_180032460.c)
 *     unknown_libname_7 @ 0x18003A064 (unknown_libname_7.c)
 *     sub_18003A2F4 @ 0x18003A2F4 (sub_18003A2F4.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180039C48(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        unsigned __int8 (__fastcall *a5)(__int64 *, __int64 *))
{
  __int64 v5; // rbx
  __int64 v9; // rdi
  __int64 *v10; // r14
  __int64 *v11; // r12
  __int64 *v12; // rdx
  _QWORD *v13; // rbp
  __int64 *v14; // rsi
  __int64 result; // rax
  _QWORD *v16; // rax

  v5 = a4;
  v9 = sub_18003A2F4(a1, a2, a4);
  v10 = (__int64 *)v5;
  v11 = (__int64 *)(v9 - 16);
  sub_180011F5C(a1, v12);
  v13 = a1 + 2;
  v14 = (__int64 *)(a2 + 16);
  while ( a5(v14, v10) )
  {
    sub_180011F5C(v13, v14);
    v14 += 2;
    if ( v14 == a3 )
    {
      result = unknown_libname_7(v10, v9, v13 + 2);
      while ( v5 != v9 )
      {
        result = sub_180032460(v5);
        v5 += 16LL;
      }
      return result;
    }
LABEL_6:
    v13 += 2;
  }
  sub_180011F5C(v13, v10);
  v10 += 2;
  if ( v10 != v11 )
    goto LABEL_6;
  v16 = (_QWORD *)unknown_libname_7(v14, a3, v13 + 2);
  result = (__int64)sub_180011F5C(v16, v11);
  while ( v5 != v9 )
  {
    result = sub_180032460(v5);
    v5 += 16LL;
  }
  return result;
}
