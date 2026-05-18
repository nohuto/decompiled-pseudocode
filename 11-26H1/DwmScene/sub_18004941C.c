/*
 * XREFs of sub_18004941C @ 0x18004941C
 * Callers:
 *     sub_180049E40 @ 0x180049E40 (sub_180049E40.c)
 *     sub_18007A950 @ 0x18007A950 (sub_18007A950.c)
 *     sub_180087F00 @ 0x180087F00 (sub_180087F00.c)
 *     sub_18008819C @ 0x18008819C (sub_18008819C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 *     sub_18006A8B8 @ 0x18006A8B8 (sub_18006A8B8.c)
 */

_QWORD *__fastcall sub_18004941C(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v7; // eax
  int v8; // r8d
  _QWORD v10[5]; // [rsp+38h] [rbp-40h] BYREF

  v10[4] = a2;
  v7 = (unsigned int)sub_1800181BC(v10, a2);
  sub_18006A8B8((_DWORD)a1, v7, v8, -2147467263, a4, 0);
  *a1 = &Spectre::Engine::EngineNotImplException::`vftable';
  sub_1800129D0(a2);
  return a1;
}
