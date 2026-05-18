/*
 * XREFs of sub_180026F00 @ 0x180026F00
 * Callers:
 *     sub_1800BD230 @ 0x1800BD230 (sub_1800BD230.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_180026F00(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rax

  v2 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 184LL))(*a2);
  return sub_180098A64(*v2);
}
