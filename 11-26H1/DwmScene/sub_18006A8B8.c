/*
 * XREFs of sub_18006A8B8 @ 0x18006A8B8
 * Callers:
 *     sub_180029A30 @ 0x180029A30 (sub_180029A30.c)
 *     sub_18003A468 @ 0x18003A468 (sub_18003A468.c)
 *     sub_180046728 @ 0x180046728 (sub_180046728.c)
 *     sub_18004941C @ 0x18004941C (sub_18004941C.c)
 *     sub_180083A90 @ 0x180083A90 (sub_180083A90.c)
 *     sub_1800C31E8 @ 0x1800C31E8 (sub_1800C31E8.c)
 *     sub_1800C4100 @ 0x1800C4100 (sub_1800C4100.c)
 *     sub_1800C4B58 @ 0x1800C4B58 (sub_1800C4B58.c)
 *     sub_1800C9334 @ 0x1800C9334 (sub_1800C9334.c)
 *     sub_1800CD75C @ 0x1800CD75C (sub_1800CD75C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_18001C7B8 @ 0x18001C7B8 (sub_18001C7B8.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18006A8B8(_QWORD *a1, __int64 a2, __int64 a3, int a4, __int64 a5, char a6)
{
  sub_18001C7B8((__int64)a1, a4, a5, a6);
  *a1 = &Spectre::Engine::EngineException::`vftable';
  sub_1800129D0(a2);
  return a1;
}
