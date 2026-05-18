/*
 * XREFs of sub_1800BC108 @ 0x1800BC108
 * Callers:
 *     sub_1800120E0 @ 0x1800120E0 (sub_1800120E0.c)
 *     sub_1800BB56C @ 0x1800BB56C (sub_1800BB56C.c)
 *     sub_1800BBFC0 @ 0x1800BBFC0 (sub_1800BBFC0.c)
 *     sub_1800BC190 @ 0x1800BC190 (sub_1800BC190.c)
 *     sub_1800BDD30 @ 0x1800BDD30 (sub_1800BDD30.c)
 *     sub_1800C0430 @ 0x1800C0430 (sub_1800C0430.c)
 *     sub_1800C1D80 @ 0x1800C1D80 (sub_1800C1D80.c)
 *     sub_1800C1FC0 @ 0x1800C1FC0 (sub_1800C1FC0.c)
 *     sub_1800C31E8 @ 0x1800C31E8 (sub_1800C31E8.c)
 *     sub_1800C37E0 @ 0x1800C37E0 (sub_1800C37E0.c)
 *     sub_1800C3C1C @ 0x1800C3C1C (sub_1800C3C1C.c)
 *     sub_1800C3E50 @ 0x1800C3E50 (sub_1800C3E50.c)
 *     sub_1800C4100 @ 0x1800C4100 (sub_1800C4100.c)
 *     sub_1800C4B58 @ 0x1800C4B58 (sub_1800C4B58.c)
 *     sub_1800C57C0 @ 0x1800C57C0 (sub_1800C57C0.c)
 *     sub_1800C5DF0 @ 0x1800C5DF0 (sub_1800C5DF0.c)
 *     sub_1800C8EA0 @ 0x1800C8EA0 (sub_1800C8EA0.c)
 *     sub_1800C9334 @ 0x1800C9334 (sub_1800C9334.c)
 *     sub_1800C9D40 @ 0x1800C9D40 (sub_1800C9D40.c)
 *     sub_1800CA0F0 @ 0x1800CA0F0 (sub_1800CA0F0.c)
 *     sub_1800CA8B0 @ 0x1800CA8B0 (sub_1800CA8B0.c)
 *     sub_1800CB160 @ 0x1800CB160 (sub_1800CB160.c)
 *     sub_1800CB5F4 @ 0x1800CB5F4 (sub_1800CB5F4.c)
 *     sub_1800CB8A8 @ 0x1800CB8A8 (sub_1800CB8A8.c)
 *     sub_1800CC3A0 @ 0x1800CC3A0 (sub_1800CC3A0.c)
 *     sub_1800CC5F0 @ 0x1800CC5F0 (sub_1800CC5F0.c)
 *     sub_1800CC850 @ 0x1800CC850 (sub_1800CC850.c)
 *     sub_1800CCAB0 @ 0x1800CCAB0 (sub_1800CCAB0.c)
 *     sub_1800CCE00 @ 0x1800CCE00 (sub_1800CCE00.c)
 *     sub_1800CD75C @ 0x1800CD75C (sub_1800CD75C.c)
 *     sub_1800CD8D4 @ 0x1800CD8D4 (sub_1800CD8D4.c)
 *     sub_1800CE2A0 @ 0x1800CE2A0 (sub_1800CE2A0.c)
 *     sub_1800CEA90 @ 0x1800CEA90 (sub_1800CEA90.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

_QWORD *__fastcall sub_1800BC108(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 4256);
  *a2 = v3;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return a2;
}
