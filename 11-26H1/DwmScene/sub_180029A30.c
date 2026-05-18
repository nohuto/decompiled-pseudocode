/*
 * XREFs of sub_180029A30 @ 0x180029A30
 * Callers:
 *     sub_180029674 @ 0x180029674 (sub_180029674.c)
 *     sub_180029734 @ 0x180029734 (sub_180029734.c)
 *     sub_1800297F4 @ 0x1800297F4 (sub_1800297F4.c)
 *     sub_1800298C4 @ 0x1800298C4 (sub_1800298C4.c)
 *     sub_180029E54 @ 0x180029E54 (sub_180029E54.c)
 *     sub_180029EF8 @ 0x180029EF8 (sub_180029EF8.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 *     sub_18006A8B8 @ 0x18006A8B8 (sub_18006A8B8.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180029A30(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v7; // eax
  int v8; // r8d
  _QWORD v10[5]; // [rsp+38h] [rbp-40h] BYREF

  v10[4] = a2;
  v7 = (unsigned int)sub_1800181BC(v10, a2);
  sub_18006A8B8((_DWORD)a1, v7, v8, -2147024891, a4, 0);
  *a1 = &Spectre::Engine::EngineAccessDeniedException::`vftable';
  sub_1800129D0(a2);
  return a1;
}
