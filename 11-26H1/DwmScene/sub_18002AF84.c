/*
 * XREFs of sub_18002AF84 @ 0x18002AF84
 * Callers:
 *     sub_1800BF300 @ 0x1800BF300 (sub_1800BF300.c)
 *     sub_1800CDCB4 @ 0x1800CDCB4 (sub_1800CDCB4.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_1800162D0 @ 0x1800162D0 (sub_1800162D0.c)
 *     sub_180025874 @ 0x180025874 (sub_180025874.c)
 *     sub_18002AC48 @ 0x18002AC48 (sub_18002AC48.c)
 *     sub_18002ACCC @ 0x18002ACCC (sub_18002ACCC.c)
 *     sub_18002AD40 @ 0x18002AD40 (sub_18002AD40.c)
 *     sub_18002ADB4 @ 0x18002ADB4 (sub_18002ADB4.c)
 *     sub_18002AF28 @ 0x18002AF28 (sub_18002AF28.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall sub_18002AF84(__int64 a1, __int64 a2, _QWORD *a3, __int64 *a4)
{
  _QWORD *v8; // rax
  char v9; // r8
  __int64 v10; // rdx
  __int64 *v11; // rcx
  char v12; // bl
  __int64 v13; // rcx
  __int64 v14; // rcx
  char v16; // [rsp+20h] [rbp-58h] BYREF
  __int64 v17; // [rsp+28h] [rbp-50h]
  __int64 v18; // [rsp+30h] [rbp-48h] BYREF
  __int64 v19; // [rsp+38h] [rbp-40h]

  v8 = sub_180012C40(&v18, a3);
  sub_18002AF28((_QWORD *)a1, v8);
  *(_QWORD *)a1 = &Spectre::Engine::RenderOutput::`vftable';
  sub_1800162D0((_QWORD *)(a1 + 80), a3);
  *(_OWORD *)(a1 + 96) = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 112) = *(_OWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_BYTE *)(a1 + 160) = 0;
  *(_QWORD *)(a1 + 164) = 0LL;
  *(_QWORD *)(a1 + 172) = 0LL;
  *(_QWORD *)(a1 + 180) = 0LL;
  *(_DWORD *)(a1 + 188) = 0;
  *(_DWORD *)(a1 + 192) = 1065353216;
  *(_DWORD *)(a1 + 196) = 1065353216;
  *(_DWORD *)(a1 + 200) = 3;
  sub_18002AD40((_QWORD *)(a1 + 208));
  *(_WORD *)(a1 + 236) = 256;
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_QWORD *)(a1 + 248) = 0LL;
  *(_QWORD *)(a1 + 256) = 0LL;
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_QWORD *)(a1 + 272) = 0LL;
  *(_QWORD *)(a1 + 280) = 0LL;
  *(_DWORD *)(a1 + 296) = 2;
  sub_180025874(a1 + 304);
  if ( *(_DWORD *)(a2 + 24) == 1 )
  {
    v10 = *a4;
    v19 = a4[1];
    *a4 = 0LL;
    a4[1] = 0LL;
    v11 = &v18;
    v12 = 1;
  }
  else
  {
    v17 = 0LL;
    v11 = (__int64 *)&v16;
    v12 = v9;
    v10 = 0LL;
  }
  *(_QWORD *)(a1 + 384) = v10;
  *(_QWORD *)(a1 + 392) = v11[1];
  *v11 = 0LL;
  v11[1] = 0LL;
  if ( ((unsigned __int8)v12 & (unsigned __int8)v9) != 0 )
  {
    v12 &= ~2u;
    if ( v17 )
      sub_180010EC8(v17);
  }
  if ( (v12 & 1) != 0 && v19 )
    sub_180010EC8(v19);
  *(_BYTE *)(a1 + 400) = 0;
  *(_QWORD *)(a1 + 408) = 1LL;
  *(_QWORD *)(a1 + 416) = 0LL;
  *(_QWORD *)(a1 + 424) = 0LL;
  *(_QWORD *)(a1 + 432) = 0LL;
  sub_18002AC48((_QWORD *)(a1 + 440));
  sub_18002ACCC((_QWORD *)(a1 + 456));
  sub_18002ADB4((_QWORD *)(a1 + 472));
  *(_QWORD *)(a1 + 480) = 1LL;
  *(_QWORD *)(a1 + 488) = 0LL;
  *(_QWORD *)(a1 + 496) = 0LL;
  *(_QWORD *)(a1 + 272) = 0x8000000000000000uLL;
  *(_QWORD *)(a1 + 280) = 0x8000000000000000uLL;
  *(_QWORD *)(a1 + 288) = 0LL;
  *(_DWORD *)(a1 + 224) = 21;
  *(_DWORD *)(a1 + 228) = 21;
  *(_DWORD *)(a1 + 232) = 16;
  v13 = a3[1];
  if ( v13 )
    sub_180010EC8(v13);
  v14 = a4[1];
  if ( v14 )
    sub_180010EC8(v14);
  return a1;
}
