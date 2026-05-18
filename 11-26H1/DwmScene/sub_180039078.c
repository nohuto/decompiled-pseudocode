/*
 * XREFs of sub_180039078 @ 0x180039078
 * Callers:
 *     sub_180057C70 @ 0x180057C70 (sub_180057C70.c)
 *     sub_18006EC64 @ 0x18006EC64 (sub_18006EC64.c)
 * Callees:
 *     sub_180013540 @ 0x180013540 (sub_180013540.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 *__fastcall sub_180039078(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 96) + 8LL))(*(_QWORD *)(a1 + 96), a1);
  sub_180013540((__int64 *)(*(_QWORD *)(a1 + 96) + 9264LL), a2);
  return sub_180013540((__int64 *)(*(_QWORD *)(a1 + 96) + 9648LL), a3);
}
