/*
 * XREFs of sub_180020024 @ 0x180020024
 * Callers:
 *     sub_180020560 @ 0x180020560 (sub_180020560.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_180020024(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

  result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 8LL))(*a1);
  v3 = a1[5];
  if ( v3 )
    result = sub_180010EC8(v3);
  v4 = a1[3];
  if ( v4 )
    result = sub_180010EC8(v4);
  v5 = a1[1];
  if ( v5 )
    return sub_180010EC8(v5);
  return result;
}
