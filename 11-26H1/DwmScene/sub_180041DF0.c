/*
 * XREFs of sub_180041DF0 @ 0x180041DF0
 * Callers:
 *     sub_180013090 @ 0x180013090 (sub_180013090.c)
 *     sub_180041DC8 @ 0x180041DC8 (sub_180041DC8.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_18003C8A4 @ 0x18003C8A4 (sub_18003C8A4.c)
 *     sub_1800422D0 @ 0x1800422D0 (sub_1800422D0.c)
 *     sub_18007A800 @ 0x18007A800 (sub_18007A800.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180041DF0(__int64 a1, __int64 *a2)
{
  __int64 v4; // rcx
  _QWORD v6[4]; // [rsp+30h] [rbp-38h] BYREF

  sub_180011CC4(v6, "Light");
  sub_18007A800(a1, v6, a2);
  sub_1800129D0((__int64)v6);
  *(_QWORD *)a1 = &Spectre::Engine::Light::`vftable';
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_DWORD *)(a1 + 96) = 0;
  *(_DWORD *)(a1 + 100) = 1065353216;
  sub_1800422D0(a1);
  sub_18003C8A4(*a2, 3, 1);
  v4 = a2[1];
  if ( v4 )
    sub_180010EC8(v4);
  return a1;
}
