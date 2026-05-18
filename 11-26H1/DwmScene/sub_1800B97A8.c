/*
 * XREFs of sub_1800B97A8 @ 0x1800B97A8
 * Callers:
 *     sub_1800BC190 @ 0x1800BC190 (sub_1800BC190.c)
 *     sub_1800BDC00 @ 0x1800BDC00 (sub_1800BDC00.c)
 *     sub_1800BDD30 @ 0x1800BDD30 (sub_1800BDD30.c)
 *     sub_1800CE2A0 @ 0x1800CE2A0 (sub_1800CE2A0.c)
 * Callees:
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1800B97A8(__int64 (__fastcall ****a1)(_QWORD, void *, __int64 *), __int64 *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, void *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, void *, __int64 *); // rdi

  v3 = *a1;
  v4 = ***a1;
  sub_18000F938(a2);
  return v4(v3, &unk_18018F4F8, a2);
}
