/*
 * XREFs of sub_1800DBCA7 @ 0x1800DBCA7
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001DCFC @ 0x18001DCFC (sub_18001DCFC.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1800DBCA7(__int64 a1, __int64 a2)
{
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 32) + 8LL))(*(_QWORD *)(a2 + 32));
  sub_18001DCFC(&qword_1801BD368, 3);
  return 0LL;
}
