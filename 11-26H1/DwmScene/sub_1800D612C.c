/*
 * XREFs of sub_1800D612C @ 0x1800D612C
 * Callers:
 *     sub_1800D668C @ 0x1800D668C (sub_1800D668C.c)
 *     sub_1800D6984 @ 0x1800D6984 (sub_1800D6984.c)
 *     sub_1800E5490 @ 0x1800E5490 (sub_1800E5490.c)
 *     sub_1800E54FD @ 0x1800E54FD (sub_1800E54FD.c)
 *     sub_1800E55B4 @ 0x1800E55B4 (sub_1800E55B4.c)
 *     sub_1800E5624 @ 0x1800E5624 (sub_1800E5624.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1800D612C(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(a1 + 56);
  v4[0] = 0LL;
  if ( !v2 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)v2 + 16LL))(v2, a2, v4);
}
