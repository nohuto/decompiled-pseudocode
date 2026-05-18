/*
 * XREFs of sub_18008E674 @ 0x18008E674
 * Callers:
 *     sub_18005FC78 @ 0x18005FC78 (sub_18005FC78.c)
 *     sub_18008E64C @ 0x18008E64C (sub_18008E64C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_18007A800 @ 0x18007A800 (sub_18007A800.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18008E674(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx
  _QWORD v6[4]; // [rsp+28h] [rbp-30h] BYREF

  sub_180011CC4(v6, "Aimer");
  sub_18007A800(a1, (__int64)v6, a2);
  sub_1800129D0((__int64)v6);
  *(_QWORD *)a1 = &Spectre::Engine::Aimer::`vftable';
  *(_DWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_OWORD *)(a1 + 152) = xmmword_180109128;
  v4 = a2[1];
  if ( v4 )
    sub_180010EC8(v4);
  return a1;
}
