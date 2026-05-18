/*
 * XREFs of sub_1800BDC00 @ 0x1800BDC00
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_1800B97A8 @ 0x1800B97A8 (sub_1800B97A8.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800BDC00(__int64 a1, unsigned int a2)
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  sub_1800B97A8((__int64 (__fastcall ****)(_QWORD, void *, __int64 *))(a1 + 4256), &v4);
  if ( v4 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 96LL))(v4, a2);
  return sub_18000F938(&v4);
}
