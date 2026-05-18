/*
 * XREFs of sub_1800BC140 @ 0x1800BC140
 * Callers:
 *     sub_1800C4100 @ 0x1800C4100 (sub_1800C4100.c)
 *     sub_1800CD8D4 @ 0x1800CD8D4 (sub_1800CD8D4.c)
 *     sub_1800CE4B0 @ 0x1800CE4B0 (sub_1800CE4B0.c)
 * Callees:
 *     sub_180029EF8 @ 0x180029EF8 (sub_180029EF8.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800BC140(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx

  sub_180029EF8(a1 + 24, (__int64)a2);
  v4 = *(_QWORD *)(a1 + 4264);
  *a2 = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  return a2;
}
