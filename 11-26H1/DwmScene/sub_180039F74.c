/*
 * XREFs of sub_180039F74 @ 0x180039F74
 * Callers:
 *     sub_180039974 @ 0x180039974 (sub_180039974.c)
 * Callees:
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_180039F74(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        _QWORD *a4,
        unsigned __int8 (__fastcall *a5)(__int64 *, __int64 *))
{
  __int64 *v9; // rdi
  __int64 *v10; // rdx
  __int64 *v11; // rcx

  v9 = a2;
  while ( a5(v9, a1) )
  {
    sub_180011F5C(a4, v9);
    v9 += 2;
    if ( v9 == a3 )
    {
      v10 = a2;
      v11 = a1;
      return unknown_libname_7(v11, v10, a4 + 2);
    }
LABEL_6:
    a4 += 2;
  }
  sub_180011F5C(a4, a1);
  a1 += 2;
  if ( a1 != a2 )
    goto LABEL_6;
  v10 = a3;
  v11 = v9;
  return unknown_libname_7(v11, v10, a4 + 2);
}
