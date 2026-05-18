/*
 * XREFs of sub_18006B040 @ 0x18006B040
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180028BD0 @ 0x180028BD0 (sub_180028BD0.c)
 *     sub_180029070 @ 0x180029070 (sub_180029070.c)
 *     sub_18002912C @ 0x18002912C (sub_18002912C.c)
 *     sub_1800292C4 @ 0x1800292C4 (sub_1800292C4.c)
 *     sub_180042544 @ 0x180042544 (sub_180042544.c)
 *     sub_18005934C @ 0x18005934C (sub_18005934C.c)
 *     sub_1800594A8 @ 0x1800594A8 (sub_1800594A8.c)
 *     sub_18006A92C @ 0x18006A92C (sub_18006A92C.c)
 *     sub_18006AD9C @ 0x18006AD9C (sub_18006AD9C.c)
 *     sub_18006B5CC @ 0x18006B5CC (sub_18006B5CC.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18006B040(__int64 *a1, __int64 *a2)
{
  __int64 result; // rax
  int v5; // r14d
  __int64 v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // rdx
  unsigned int v9; // eax
  __int64 v10; // r10
  void (__fastcall *v11)(__int64, _QWORD); // r11
  __int64 v12; // [rsp+30h] [rbp-30h] BYREF
  __int64 v13; // [rsp+38h] [rbp-28h]
  _QWORD v14[4]; // [rsp+40h] [rbp-20h] BYREF
  int v15; // [rsp+88h] [rbp+28h] BYREF

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 32LL))(*a2);
  if ( !(_BYTE)result )
  {
    v5 = *(_DWORD *)(*a2 + 244);
    v15 = v5;
    result = sub_180042544((__int64)(a1 + 32), (__int64)&v15);
    if ( result == a1[32] )
    {
      sub_180029070((__int64)a1, (__int64)a2);
      sub_18006A92C(*a2, &v12);
      v6 = v12;
      v7 = sub_18002912C((__int64)a1, v14);
      sub_1800292C4(v6, (__int64)v7);
      v8 = *(_QWORD *)(a1[14] + 128);
      if ( v8 )
        v8 = *(unsigned int *)(v8 + 20);
      sub_18006B5CC(a1, v8);
      sub_18005934C((__int64)a1);
      v9 = sub_1800594A8((__int64)a1);
      v11(v10, v9);
      sub_18006AD9C(a1, &v12);
      v15 = v5;
      result = sub_180028BD0(a1 + 10, (__int64)v14, &v15);
      *(_BYTE *)(*(_QWORD *)result + 32LL) = 1;
      if ( v13 )
        return sub_180010EC8(v13);
    }
  }
  return result;
}
