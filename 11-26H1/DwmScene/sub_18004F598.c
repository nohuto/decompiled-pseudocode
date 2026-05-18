/*
 * XREFs of sub_18004F598 @ 0x18004F598
 * Callers:
 *     sub_18004F2AC @ 0x18004F2AC (sub_18004F2AC.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_180016FD4 @ 0x180016FD4 (sub_180016FD4.c)
 *     sub_18007A800 @ 0x18007A800 (sub_18007A800.c)
 *     sub_18007AB60 @ 0x18007AB60 (sub_18007AB60.c)
 *     sub_18009B150 @ 0x18009B150 (sub_18009B150.c)
 *     sub_18009B4A0 @ 0x18009B4A0 (sub_18009B4A0.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18004F598(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  _QWORD v9[4]; // [rsp+28h] [rbp-30h] BYREF

  sub_180011CC4(v9, "LightProbe");
  sub_18007A800(a1, v9, a2);
  sub_1800129D0((__int64)v9);
  *(_QWORD *)a1 = &Spectre::Engine::LightProbe::`vftable';
  *(_BYTE *)(a1 + 88) = 1;
  *(_OWORD *)(a1 + 92) = xmmword_1800FA7C0;
  sub_18009B150(a1 + 108);
  sub_18009B4A0(a1 + 256, v4, v5, v6);
  *(_QWORD *)(a1 + 400) = 0LL;
  *(_DWORD *)(a1 + 408) = 0;
  *(_QWORD *)(a1 + 412) = 1065353216LL;
  *(_QWORD *)(a1 + 420) = 0LL;
  *(_QWORD *)(a1 + 432) = 0LL;
  *(_QWORD *)(a1 + 440) = 0LL;
  v7 = sub_18007AB60(a1);
  sub_180016FD4(v7, (_QWORD *)(a1 + 448));
  *(_QWORD *)(a1 + 472) = 0LL;
  *(_QWORD *)(a1 + 480) = 0LL;
  *(_QWORD *)(a1 + 488) = 0LL;
  *(_OWORD *)(a1 + 496) = xmmword_1800FA848;
  *(_QWORD *)(a1 + 512) = 0LL;
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 528) = 1065353216;
  return a1;
}
