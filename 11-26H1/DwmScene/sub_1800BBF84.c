/*
 * XREFs of sub_1800BBF84 @ 0x1800BBF84
 * Callers:
 *     sub_1800BC4A0 @ 0x1800BC4A0 (sub_1800BC4A0.c)
 *     sub_1800BD130 @ 0x1800BD130 (sub_1800BD130.c)
 *     sub_1800C1050 @ 0x1800C1050 (sub_1800C1050.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800BBF84(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 4272);
  *a2 = v3;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return a2;
}
