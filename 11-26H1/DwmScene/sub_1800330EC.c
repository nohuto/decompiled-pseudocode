/*
 * XREFs of sub_1800330EC @ 0x1800330EC
 * Callers:
 *     sub_180019350 @ 0x180019350 (sub_180019350.c)
 *     sub_180034DD0 @ 0x180034DD0 (sub_180034DD0.c)
 * Callees:
 *     sub_180033068 @ 0x180033068 (sub_180033068.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_1800330EC(_QWORD *a1, __int64 *a2)
{
  sub_180033068(a1, a2);
  (*(void (__fastcall **)(_QWORD *, __int64 *))(*a1 + 80LL))(a1, a2);
  return a2;
}
