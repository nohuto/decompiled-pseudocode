/*
 * XREFs of sub_180031E90 @ 0x180031E90
 * Callers:
 *     sub_180031EE8 @ 0x180031EE8 (sub_180031EE8.c)
 *     sub_1800D9B58 @ 0x1800D9B58 (sub_1800D9B58.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_180031E90(__int64 a1)
{
  __int64 result; // rax

  result = std::wios::rdbuf(*(_QWORD *)a1 + *(int *)(**(_QWORD **)a1 + 4LL));
  if ( result )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 16LL))(result);
  return result;
}
