/*
 * XREFs of sub_180046728 @ 0x180046728
 * Callers:
 *     sub_1800479B8 @ 0x1800479B8 (sub_1800479B8.c)
 *     sub_180047C00 @ 0x180047C00 (sub_180047C00.c)
 *     sub_180047D40 @ 0x180047D40 (sub_180047D40.c)
 *     sub_180047E18 @ 0x180047E18 (sub_180047E18.c)
 *     sub_180047F8C @ 0x180047F8C (sub_180047F8C.c)
 *     sub_180048114 @ 0x180048114 (sub_180048114.c)
 *     sub_18004824C @ 0x18004824C (sub_18004824C.c)
 *     sub_180048378 @ 0x180048378 (sub_180048378.c)
 *     sub_180048544 @ 0x180048544 (sub_180048544.c)
 *     sub_18004866C @ 0x18004866C (sub_18004866C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 *     sub_18006A8B8 @ 0x18006A8B8 (sub_18006A8B8.c)
 */

_QWORD *__fastcall sub_180046728(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v7; // eax
  int v8; // r8d
  _QWORD v10[5]; // [rsp+38h] [rbp-40h] BYREF

  v10[4] = a2;
  v7 = (unsigned int)sub_1800181BC(v10, a2);
  sub_18006A8B8((_DWORD)a1, v7, v8, -2147467261, a4, 0);
  *a1 = &Spectre::Engine::EngineInvalidPointerException::`vftable';
  sub_1800129D0(a2);
  return a1;
}
