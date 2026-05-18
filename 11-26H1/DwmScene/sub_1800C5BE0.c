/*
 * XREFs of sub_1800C5BE0 @ 0x1800C5BE0
 * Callers:
 *     sub_1800C7180 @ 0x1800C7180 (sub_1800C7180.c)
 *     sub_1800C8020 @ 0x1800C8020 (sub_1800C8020.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800C5BE0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 120);
  *a2 = v3;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return a2;
}
