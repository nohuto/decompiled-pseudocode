/*
 * XREFs of sub_1800266E0 @ 0x1800266E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_1800249B8 @ 0x1800249B8 (sub_1800249B8.c)
 *     sub_18002506C @ 0x18002506C (sub_18002506C.c)
 *     sub_180029674 @ 0x180029674 (sub_180029674.c)
 *     sub_1800297F4 @ 0x1800297F4 (sub_1800297F4.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800266E0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v11; // r14
  __int64 v12; // rcx
  __int64 v14[6]; // [rsp+28h] [rbp-30h] BYREF
  unsigned int v15; // [rsp+70h] [rbp+18h] BYREF

  v15 = a3;
  v5 = a1 + 8;
  sub_180029674(a1 + 8);
  v6 = sub_18002506C((__int64 *)(a1 + 24), (__int64)v14, &v15);
  v7 = *(_QWORD *)v6;
  v8 = *(_QWORD *)(*(_QWORD *)v6 + 48LL);
  if ( *(_QWORD *)(*(_QWORD *)v6 + 40LL) == v8 )
  {
    sub_1800249B8(*(_QWORD *)(a1 + 16), v14);
    if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v14[0] + 40LL))(
           v14[0],
           *(_QWORD *)(a1 + 16),
           v15) )
    {
      *(_OWORD *)a2 = *(_OWORD *)v14;
      *(_OWORD *)v14 = 0LL;
      sub_1800297F4(v5);
    }
    else
    {
      if ( v14[1] )
        sub_180010EC8(v14[1]);
      *(_QWORD *)a2 = 0LL;
      *(_QWORD *)(a2 + 8) = 0LL;
      sub_1800297F4(v5);
    }
  }
  else
  {
    v9 = *(_QWORD *)(v8 - 8);
    if ( v9 )
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
    v10 = *(_QWORD *)(v8 - 16);
    v11 = *(_QWORD *)(v8 - 8);
    v12 = *(_QWORD *)(*(_QWORD *)(v7 + 48) - 8LL);
    if ( v12 )
      sub_180010EC8(v12);
    *(_QWORD *)(v7 + 48) -= 16LL;
    *(_QWORD *)a2 = v10;
    *(_QWORD *)(a2 + 8) = v11;
    sub_1800297F4(v5);
  }
  return a2;
}
