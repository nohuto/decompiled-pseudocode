/*
 * XREFs of sub_1800D616C @ 0x1800D616C
 * Callers:
 *     sub_1800D6DF0 @ 0x1800D6DF0 (sub_1800D6DF0.c)
 *     sub_1800E56C9 @ 0x1800E56C9 (sub_1800E56C9.c)
 *     sub_1800E5757 @ 0x1800E5757 (sub_1800E5757.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1800D616C(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  _QWORD v5[3]; // [rsp+30h] [rbp-18h] BYREF

  v3 = *(_QWORD *)(a1 + 56);
  v5[0] = 0LL;
  if ( !v3 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD *))(*(_QWORD *)v3 + 16LL))(v3, a2, a3, v5);
}
