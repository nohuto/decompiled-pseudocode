/*
 * XREFs of sub_180096D50 @ 0x180096D50
 * Callers:
 *     sub_180038BB0 @ 0x180038BB0 (sub_180038BB0.c)
 * Callees:
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180013540 @ 0x180013540 (sub_180013540.c)
 *     sub_18003AC0C @ 0x18003AC0C (sub_18003AC0C.c)
 *     sub_1800956F0 @ 0x1800956F0 (sub_1800956F0.c)
 *     sub_180095A60 @ 0x180095A60 (sub_180095A60.c)
 *     sub_180095DF4 @ 0x180095DF4 (sub_180095DF4.c)
 *     sub_18009609C @ 0x18009609C (sub_18009609C.c)
 *     sub_180096540 @ 0x180096540 (sub_180096540.c)
 *     sub_180096734 @ 0x180096734 (sub_180096734.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_180096D50(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v6; // rcx
  int *v7; // rax
  int *v8; // rax
  int *v9; // rax
  char v11; // [rsp+68h] [rbp+10h] BYREF
  char v12; // [rsp+70h] [rbp+18h] BYREF

  *(_QWORD *)a1 = &Spectre::Engine::ShaderState::`vftable';
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  v6 = (__int64 *)(a1 + 40);
  *v6 = 0LL;
  v6[1] = 0LL;
  *(_BYTE *)(a1 + 56) = 1;
  sub_180013540(v6, (_QWORD *)(a3 + 704));
  sub_18009609C(a1 + 64, a3);
  v7 = (int *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a2 + 192LL))(a2, &v11);
  sub_1800956F0(a1 + 1160, *v7, a3);
  v8 = (int *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a2 + 200LL))(a2, &v12);
  sub_180095A60(a1 + 4632, *v8, a3);
  sub_180096734(a1 + 9256, a3);
  *(_QWORD *)(a1 + 9704) = &Spectre::Engine::IndexBufferState::`vftable';
  *(_QWORD *)(a1 + 9712) = 0LL;
  *(_QWORD *)(a1 + 9720) = 0LL;
  *(_QWORD *)(a1 + 9728) = 0LL;
  *(_QWORD *)(a1 + 9736) = 0LL;
  *(_QWORD *)(a1 + 9744) = 0LL;
  *(_QWORD *)(a1 + 9752) = 0LL;
  *(_BYTE *)(a1 + 9772) = 1;
  sub_180013540((__int64 *)(a1 + 9744), (_QWORD *)(a3 + 1120));
  *(_DWORD *)(a1 + 9768) = *(_DWORD *)(a3 + 1136);
  *(_QWORD *)(a1 + 9776) = &Spectre::Engine::VertexLayoutState::`vftable';
  *(_QWORD *)(a1 + 9784) = 0LL;
  *(_QWORD *)(a1 + 9792) = 0LL;
  *(_QWORD *)(a1 + 9800) = 0LL;
  *(_QWORD *)(a1 + 9808) = 0LL;
  *(_QWORD *)(a1 + 9816) = 0LL;
  *(_QWORD *)(a1 + 9824) = 0LL;
  *(_QWORD *)(a1 + 9832) = 0LL;
  *(_BYTE *)(a1 + 9844) = 1;
  sub_18003AC0C((_QWORD *)(a1 + 9816), (_QWORD *)(a3 + 736));
  *(_DWORD *)(a1 + 9840) = *(_DWORD *)(a3 + 752);
  v9 = (int *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a2 + 200LL))(a2, &v11);
  sub_180095DF4(a1 + 9848, *v9, a3);
  *(_QWORD *)(a1 + 14472) = &Spectre::Engine::RenderStateState::`vftable';
  sub_180012C40((_QWORD *)(a1 + 14480), (_QWORD *)(a3 + 720));
  *(_QWORD *)(a1 + 14496) = 0LL;
  *(_QWORD *)(a1 + 14504) = 0LL;
  *(_QWORD *)(a1 + 14516) = 0LL;
  *(_QWORD *)(a1 + 14524) = 0LL;
  sub_180096540(a1 + 14472);
  *(_QWORD *)(a1 + 14536) = &Spectre::Engine::ViewportState::`vftable';
  *(_QWORD *)(a1 + 14544) = 0LL;
  *(_QWORD *)(a1 + 14552) = 0LL;
  *(_QWORD *)(a1 + 14560) = 0LL;
  *(_QWORD *)(a1 + 14568) = 0LL;
  *(_QWORD *)(a1 + 14576) = 0LL;
  *(_QWORD *)(a1 + 14584) = 0LL;
  *(_QWORD *)(a1 + 14592) = 0LL;
  *(_QWORD *)(a1 + 14600) = 0LL;
  *(_QWORD *)(a1 + 14608) = 0LL;
  *(_BYTE *)(a1 + 14616) = 1;
  *(_OWORD *)(a1 + 14592) = *(_OWORD *)(a3 + 1140);
  *(_QWORD *)(a1 + 14608) = *(_QWORD *)(a3 + 1156);
  *(_QWORD *)(a1 + 14624) = &Spectre::Engine::ScissorState::`vftable';
  *(_QWORD *)(a1 + 14632) = 0LL;
  *(_QWORD *)(a1 + 14640) = 0LL;
  *(_QWORD *)(a1 + 14648) = 0LL;
  *(_QWORD *)(a1 + 14656) = 0LL;
  *(_QWORD *)(a1 + 14664) = 0LL;
  *(_QWORD *)(a1 + 14672) = 0LL;
  *(_BYTE *)(a1 + 14680) = 1;
  *(_OWORD *)(a1 + 14664) = *(_OWORD *)(a3 + 1164);
  *(_QWORD *)a1 = &Spectre::Engine::CommandListState::`vftable';
  *(_QWORD *)(a1 + 64) = &Spectre::Engine::CommandListState::`vftable';
  *(_QWORD *)(a1 + 1160) = &Spectre::Engine::CommandListState::`vftable';
  *(_QWORD *)(a1 + 4632) = &Spectre::Engine::CommandListState::`vftable';
  *(_QWORD *)(a1 + 9256) = &Spectre::Engine::CommandListState::`vftable';
  *(_QWORD *)(a1 + 9704) = &Spectre::Engine::CommandListState::`vftable';
  *(_QWORD *)(a1 + 9776) = &Spectre::Engine::CommandListState::`vftable';
  *(_QWORD *)(a1 + 9848) = &Spectre::Engine::CommandListState::`vftable';
  *(_QWORD *)(a1 + 14472) = &Spectre::Engine::CommandListState::`vftable';
  *(_QWORD *)(a1 + 14536) = &Spectre::Engine::CommandListState::`vftable';
  *(_QWORD *)(a1 + 14624) = &Spectre::Engine::CommandListState::`vftable';
  return a1;
}
