/*
 * XREFs of sub_18001E6FC @ 0x18001E6FC
 * Callers:
 *     sub_18001E780 @ 0x18001E780 (sub_18001E780.c)
 *     sub_18004F2B8 @ 0x18004F2B8 (sub_18004F2B8.c)
 *     sub_18004F81C @ 0x18004F81C (sub_18004F81C.c)
 *     sub_1800876BC @ 0x1800876BC (sub_1800876BC.c)
 *     sub_1800D8C3C @ 0x1800D8C3C (sub_1800D8C3C.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_18001E6FC(__int64 a1)
{
  __int64 result; // rax

  result = std::ios::rdbuf(*(_QWORD *)a1 + *(int *)(**(_QWORD **)a1 + 4LL));
  if ( result )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 16LL))(result);
  return result;
}
