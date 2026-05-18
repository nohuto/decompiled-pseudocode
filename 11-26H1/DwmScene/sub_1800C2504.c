/*
 * XREFs of sub_1800C2504 @ 0x1800C2504
 * Callers:
 *     sub_1800C56C0 @ 0x1800C56C0 (sub_1800C56C0.c)
 *     sub_1800C6D50 @ 0x1800C6D50 (sub_1800C6D50.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

_QWORD *__fastcall sub_1800C2504(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 128);
  *a2 = v3;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return a2;
}
