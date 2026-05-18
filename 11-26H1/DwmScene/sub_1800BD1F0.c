/*
 * XREFs of sub_1800BD1F0 @ 0x1800BD1F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180029EF8 @ 0x180029EF8 (sub_180029EF8.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1800BD1F0(__int64 a1, __int64 a2)
{
  sub_180029EF8(a1 + 24, a2);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return sub_180026DB0(a1);
}
