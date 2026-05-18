/*
 * XREFs of sub_180038C44 @ 0x180038C44
 * Callers:
 *     sub_180012470 @ 0x180012470 (sub_180012470.c)
 *     sub_18009A710 @ 0x18009A710 (sub_18009A710.c)
 *     sub_1800BDC60 @ 0x1800BDC60 (sub_1800BDC60.c)
 *     sub_1800BDD30 @ 0x1800BDD30 (sub_1800BDD30.c)
 *     sub_1800C5DF0 @ 0x1800C5DF0 (sub_1800C5DF0.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_180038C44(_QWORD **a1)
{
  ((void (__fastcall *)(_QWORD **, _QWORD))(*a1)[29])(a1, 0LL);
  return (*(__int64 (__fastcall **)(_QWORD *))(*a1[12] + 16LL))(a1[12]);
}
