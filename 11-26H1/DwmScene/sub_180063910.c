/*
 * XREFs of sub_180063910 @ 0x180063910
 * Callers:
 *     <none>
 * Callees:
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_18005F93C @ 0x18005F93C (sub_18005F93C.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

_QWORD *__fastcall sub_180063910(__int64 a1, _QWORD *a2, int a3, __int64 *a4)
{
  __int64 v4; // rdi
  __int64 v7; // rdx
  __int64 v8; // rax

  v4 = a3;
  if ( a3 < 0 || a3 >= (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 24LL))(a1, a4) )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    v8 = sub_18005F93C(*a4, v7);
    sub_180012C40(a2, (_QWORD *)(v8 + 8 + 16 * v4));
  }
  return a2;
}
