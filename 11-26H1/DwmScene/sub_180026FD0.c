/*
 * XREFs of sub_180026FD0 @ 0x180026FD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800265E0 @ 0x1800265E0 (sub_1800265E0.c)
 */

__int64 __fastcall sub_180026FD0(__int64 a1)
{
  __int64 v1; // rax

  v1 = sub_1800265E0(a1);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 72LL))(v1);
}
