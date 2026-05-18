/*
 * XREFs of sub_1800C5C14 @ 0x1800C5C14
 * Callers:
 *     sub_1800C6720 @ 0x1800C6720 (sub_1800C6720.c)
 *     sub_1800C7F00 @ 0x1800C7F00 (sub_1800C7F00.c)
 *     sub_1800C8970 @ 0x1800C8970 (sub_1800C8970.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

_QWORD *__fastcall sub_1800C5C14(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 104);
  *a2 = v3;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return a2;
}
