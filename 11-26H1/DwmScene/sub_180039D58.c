/*
 * XREFs of sub_180039D58 @ 0x180039D58
 * Callers:
 *     sub_180039550 @ 0x180039550 (sub_180039550.c)
 * Callees:
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_180032460 @ 0x180032460 (sub_180032460.c)
 *     sub_18003A014 @ 0x18003A014 (sub_18003A014.c)
 *     sub_18003A2F4 @ 0x18003A2F4 (sub_18003A2F4.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180039D58(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        __int64 (__fastcall *a5)(__int64 *, __int64 *))
{
  __int64 *v5; // rdi
  __int64 v9; // r14
  _QWORD *v10; // r15
  __int64 *v11; // rbp
  __int64 *v12; // rsi
  char v13; // al
  _QWORD *v14; // rcx
  __int64 result; // rax

  v5 = a4;
  v9 = sub_18003A2F4(a2, a3, a4);
  v10 = (_QWORD *)(a3 - 16);
  sub_180011F5C(v10, (__int64 *)(a2 - 16));
  v11 = (__int64 *)(v9 - 16);
  v12 = (__int64 *)(a2 - 32);
  while ( 1 )
  {
    v13 = a5(v11, v12);
    v14 = v10 - 2;
    if ( !v13 )
      break;
    sub_180011F5C(v14, v12);
    if ( a1 == v12 )
    {
      sub_180011F5C(v10 - 4, v11);
      result = sub_18003A014(v5, v11, v10 - 4);
      while ( v5 != (__int64 *)v9 )
      {
        result = sub_180032460((__int64)v5);
        v5 += 2;
      }
      return result;
    }
    v12 -= 2;
LABEL_6:
    v10 -= 2;
  }
  sub_180011F5C(v14, v11);
  v11 -= 2;
  if ( v5 != v11 )
    goto LABEL_6;
  sub_180011F5C(v10 - 4, v12);
  sub_18003A014(a1, v12, v10 - 4);
  result = (__int64)sub_180011F5C(a1, v5);
  while ( v5 != (__int64 *)v9 )
  {
    result = sub_180032460((__int64)v5);
    v5 += 2;
  }
  return result;
}
