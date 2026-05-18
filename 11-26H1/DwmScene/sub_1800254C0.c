/*
 * XREFs of sub_1800254C0 @ 0x1800254C0
 * Callers:
 *     sub_180050B20 @ 0x180050B20 (sub_180050B20.c)
 *     sub_1800BABD4 @ 0x1800BABD4 (sub_1800BABD4.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012B20 @ 0x180012B20 (sub_180012B20.c)
 *     sub_18001F378 @ 0x18001F378 (sub_18001F378.c)
 *     sub_18002544C @ 0x18002544C (sub_18002544C.c)
 *     sub_180025824 @ 0x180025824 (sub_180025824.c)
 *     sub_180029AC0 @ 0x180029AC0 (sub_180029AC0.c)
 *     sub_18006BB00 @ 0x18006BB00 (sub_18006BB00.c)
 *     sub_18006C198 @ 0x18006C198 (sub_18006C198.c)
 */

// Hidden C++ exception states: #wind=20
__int64 __fastcall sub_1800254C0(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v9; // [rsp+A0h] [rbp+18h] BYREF

  v9 = a3;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( a2 )
    v6 = *(unsigned int *)(a2 + 32);
  else
    v6 = 1LL;
  sub_180029AC0(a1 + 24, v6);
  *(_QWORD *)a1 = &Spectre::Engine::RenderDevice::`vftable';
  sub_18001F378(a1 + 80);
  sub_18001F378(a1 + 112);
  sub_18001F378(a1 + 144);
  sub_18001F378(a1 + 176);
  sub_18001F378(a1 + 208);
  *(_DWORD *)(a1 + 240) = 1;
  *(_DWORD *)(a1 + 244) = _InterlockedExchangeAdd(&dword_1801C7C80, 1u);
  *(_QWORD *)(a1 + 248) = 0LL;
  *(_QWORD *)(a1 + 256) = 0LL;
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_QWORD *)(a1 + 272) = 0LL;
  *(_QWORD *)(a1 + 280) = 0LL;
  *(_DWORD *)(a1 + 288) = 1;
  *(_QWORD *)(a1 + 296) = 0LL;
  *(_QWORD *)(a1 + 304) = 0LL;
  *(_BYTE *)(a1 + 312) = 0;
  *(_DWORD *)(a1 + 316) = 40960;
  *(_QWORD *)(a1 + 320) = 45312LL;
  *(_QWORD *)(a1 + 328) = 1LL;
  *(_QWORD *)(a1 + 336) = 0LL;
  *(_QWORD *)(a1 + 344) = 0LL;
  *(_QWORD *)(a1 + 352) = 0LL;
  *(_QWORD *)(a1 + 360) = 0LL;
  *(_QWORD *)(a1 + 368) = 0LL;
  *(_DWORD *)(a1 + 376) = 0;
  *(_DWORD *)(a1 + 384) = 3;
  *(_QWORD *)(a1 + 392) = 0LL;
  *(_QWORD *)(a1 + 400) = 0LL;
  *(_DWORD *)(a1 + 408) = 0;
  *(_QWORD *)(a1 + 424) = 0LL;
  *(_QWORD *)(a1 + 432) = 0LL;
  *(_QWORD *)(a1 + 440) = 0LL;
  *(_QWORD *)(a1 + 448) = 0LL;
  *(_QWORD *)(a1 + 456) = 0LL;
  *(_QWORD *)(a1 + 464) = 0LL;
  sub_180025824(a1 + 496);
  *(_QWORD *)(a1 + 592) = 0LL;
  *(_QWORD *)(a1 + 600) = 0LL;
  *(_QWORD *)(a1 + 592) = *a3;
  *(_QWORD *)(a1 + 600) = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  sub_18006BB00(a1 + 608);
  sub_18006BB00(a1 + 832);
  sub_18006BB00(a1 + 1056);
  sub_18006C198(a1 + 1280);
  *(_QWORD *)(a1 + 3840) = 0LL;
  *(_QWORD *)(a1 + 3848) = 0LL;
  *(_QWORD *)(a1 + 3856) = 0LL;
  *(_QWORD *)(a1 + 3864) = 0LL;
  *(_QWORD *)(a1 + 3872) = 0LL;
  *(_QWORD *)(a1 + 3880) = 3LL;
  *(_QWORD *)(a1 + 3888) = 0LL;
  *(_QWORD *)(a1 + 3896) = 0LL;
  *(_QWORD *)(a1 + 3904) = 0LL;
  *(_QWORD *)(a1 + 3912) = 0LL;
  *(_DWORD *)(a1 + 3920) = 0;
  *(_QWORD *)(a1 + 3928) = 0LL;
  *(_QWORD *)(a1 + 3936) = 0LL;
  *(_QWORD *)(a1 + 3944) = 0LL;
  *(_QWORD *)(a1 + 3952) = 0LL;
  *(_QWORD *)(a1 + 3960) = 0LL;
  *(_QWORD *)(a1 + 3968) = 0LL;
  *(_WORD *)(a1 + 3976) = 0;
  *(_QWORD *)(a1 + 3984) = a2;
  *(_QWORD *)(a1 + 3992) = 0LL;
  *(_QWORD *)(a1 + 4000) = 0LL;
  *(_QWORD *)(a1 + 4008) = 0LL;
  *(_QWORD *)(a1 + 4016) = 0LL;
  *(_QWORD *)(a1 + 4024) = 0LL;
  *(_QWORD *)(a1 + 4032) = 0LL;
  *(_QWORD *)(a1 + 4048) = 0LL;
  *(_QWORD *)(a1 + 4056) = 0LL;
  *(_QWORD *)(a1 + 4064) = 0LL;
  *(_QWORD *)(a1 + 4072) = 0LL;
  *(_QWORD *)(a1 + 4080) = 0LL;
  *(_QWORD *)(a1 + 4088) = 0LL;
  *(_DWORD *)(a1 + 4040) = 0;
  *(_DWORD *)(a1 + 4044) = 1065353216;
  sub_18002544C((_QWORD *)(a1 + 4096), a1);
  *(_OWORD *)(a1 + 424) = 0LL;
  *(_OWORD *)(a1 + 440) = 0LL;
  *(_OWORD *)(a1 + 456) = 0LL;
  *(_OWORD *)(a1 + 472) = 0LL;
  *(_QWORD *)(a1 + 488) = 0LL;
  *(_QWORD *)(a1 + 424) = *sub_180012B20((__int64 *)&v9);
  v7 = a3[1];
  if ( v7 )
    sub_180010EC8(v7);
  return a1;
}
