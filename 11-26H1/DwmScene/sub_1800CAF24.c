/*
 * XREFs of sub_1800CAF24 @ 0x1800CAF24
 * Callers:
 *     sub_1800CB8A8 @ 0x1800CB8A8 (sub_1800CB8A8.c)
 *     sub_1800CBD3C @ 0x1800CBD3C (sub_1800CBD3C.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800CAF24(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // rcx
  int v8; // [rsp+50h] [rbp+18h] BYREF
  int v9; // [rsp+58h] [rbp+20h] BYREF

  v9 = a4;
  v8 = a3;
  v5 = *(_QWORD *)(a1 + 56);
  if ( !v5 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  result = (*(__int64 (__fastcall **)(__int64, __int64, int *, int *))(*(_QWORD *)v5 + 16LL))(v5, a2, &v8, &v9);
  v7 = *(_QWORD *)(a2 + 8);
  if ( v7 )
    return sub_180010EC8(v7);
  return result;
}
