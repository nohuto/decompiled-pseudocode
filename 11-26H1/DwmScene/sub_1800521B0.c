/*
 * XREFs of sub_1800521B0 @ 0x1800521B0
 * Callers:
 *     sub_180052460 @ 0x180052460 (sub_180052460.c)
 *     sub_18007DD3C @ 0x18007DD3C (sub_18007DD3C.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_18002912C @ 0x18002912C (sub_18002912C.c)
 *     sub_1800292C4 @ 0x1800292C4 (sub_1800292C4.c)
 *     sub_180042544 @ 0x180042544 (sub_180042544.c)
 *     sub_180051C70 @ 0x180051C70 (sub_180051C70.c)
 *     sub_1800523AC @ 0x1800523AC (sub_1800523AC.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800521B0(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v5; // rbx
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  void (__fastcall *v8)(__int64, _QWORD *); // r8
  __int64 v9; // r9
  __int64 v10; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11; // [rsp+28h] [rbp-30h]
  _QWORD v12[5]; // [rsp+30h] [rbp-28h] BYREF
  int v13; // [rsp+68h] [rbp+10h] BYREF

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 32LL))(*a2);
  if ( !(_BYTE)result )
  {
    v13 = *(_DWORD *)(*a2 + 244);
    result = sub_180042544(a1 + 128, (__int64)&v13);
    if ( result == *(_QWORD *)(a1 + 128) || !*(_QWORD *)(result + 40) )
    {
      sub_180051C70(*a2, &v10);
      v5 = v10;
      v6 = sub_18002912C(a1, v12);
      sub_1800292C4(v5, (__int64)v6);
      v7 = sub_180012C40(v12, (_QWORD *)(a1 + 112));
      v8(v9, v7);
      result = sub_1800523AC(a1, &v10);
      if ( v11 )
        return sub_180010EC8(v11);
    }
  }
  return result;
}
