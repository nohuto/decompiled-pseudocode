/*
 * XREFs of sub_1800BDD30 @ 0x1800BDD30
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_180038C44 @ 0x180038C44 (sub_180038C44.c)
 *     sub_1800B97A8 @ 0x1800B97A8 (sub_1800B97A8.c)
 *     sub_1800BC108 @ 0x1800BC108 (sub_1800BC108.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800BDD30(__int64 a1)
{
  _QWORD **v2; // rcx
  _QWORD *v3; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_QWORD ***)(a1 + 272);
  if ( v2 )
    sub_180038C44(v2);
  v5 = 0LL;
  v3 = sub_1800BC108(a1, &v6);
  sub_1800B97A8((__int64 (__fastcall ****)(_QWORD, void *, __int64 *))v3, &v5);
  sub_18000F938(&v6);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 136LL))(v5);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 272) + 48LL))(*(_QWORD *)(a1 + 272));
  return sub_18000F938(&v5);
}
