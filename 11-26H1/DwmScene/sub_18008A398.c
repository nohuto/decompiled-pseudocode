/*
 * XREFs of sub_18008A398 @ 0x18008A398
 * Callers:
 *     sub_180089B38 @ 0x180089B38 (sub_180089B38.c)
 *     sub_18008B370 @ 0x18008B370 (sub_18008B370.c)
 *     sub_18008B500 @ 0x18008B500 (sub_18008B500.c)
 *     sub_1800DDD72 @ 0x1800DDD72 (sub_1800DDD72.c)
 *     sub_1800DDEEF @ 0x1800DDEEF (sub_1800DDEEF.c)
 *     unknown_libname_68 @ 0x1800DDF01 (unknown_libname_68.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180013494 @ 0x180013494 (sub_180013494.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_18008A398(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  _QWORD *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  result = sub_180013494((__int64)(a1 + 15), a2);
  v5 = (_QWORD *)a1[14];
  if ( v5 )
  {
    LOBYTE(v4) = v5 != a1 + 7;
    result = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*v5 + 32LL))(v5, v4);
    a1[14] = 0LL;
  }
  v6 = a1[3];
  if ( v6 )
    result = sub_180010EC8(v6);
  v7 = a1[1];
  if ( v7 )
    return sub_180010EC8(v7);
  return result;
}
