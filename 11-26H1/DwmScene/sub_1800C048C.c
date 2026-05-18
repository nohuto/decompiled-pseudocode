/*
 * XREFs of sub_1800C048C @ 0x1800C048C
 * Callers:
 *     sub_1800BFD20 @ 0x1800BFD20 (sub_1800BFD20.c)
 *     sub_1800C1050 @ 0x1800C1050 (sub_1800C1050.c)
 *     sub_1800C13F0 @ 0x1800C13F0 (sub_1800C13F0.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1800C048C(__int64 a1)
{
  unsigned int v2; // edi
  char v3; // al

  v2 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 264LL))(a1, 2LL);
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 296LL))(a1);
  return sub_1800C04E0(v2, v3 != 0);
}
