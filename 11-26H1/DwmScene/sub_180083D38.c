/*
 * XREFs of sub_180083D38 @ 0x180083D38
 * Callers:
 *     sub_1800C72D0 @ 0x1800C72D0 (sub_1800C72D0.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180033F34 @ 0x180033F34 (sub_180033F34.c)
 *     sub_180042544 @ 0x180042544 (sub_180042544.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180083D38(_QWORD *a1, _QWORD *a2, int a3)
{
  _QWORD *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v10; // [rsp+28h] [rbp-20h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]
  int v12; // [rsp+60h] [rbp+18h] BYREF

  v12 = a3;
  v6 = a1 + 17;
  if ( sub_180042544((__int64)(a1 + 17), (__int64)&v12) == a1[17] )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 32LL))(a1);
    sub_180033F34(v7, &v10, a3);
    (*(void (__fastcall **)(_QWORD *, __int64 *))(*a1 + 16LL))(a1, &v10);
    if ( v11 )
      sub_180010EC8(v11);
  }
  v12 = a3;
  v8 = sub_180042544((__int64)v6, (__int64)&v12);
  if ( v8 == *v6 )
  {
    *(_OWORD *)a2 = 0LL;
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    sub_180012C40(a2, (_QWORD *)(v8 + 40));
  }
  return a2;
}
