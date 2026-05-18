/*
 * XREFs of sub_1800D086C @ 0x1800D086C
 * Callers:
 *     sub_180067318 @ 0x180067318 (sub_180067318.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1800D086C(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v5; // r8

  v2 = *a1;
  LOBYTE(v5) = (*(unsigned __int8 (__fastcall **)(__int64 *, __int64, _QWORD))(*a1 + 64))(a1, a2, 0LL) == 0;
  return (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, __int64))(v2 + 144))(a1, a2, v5, 1LL);
}
