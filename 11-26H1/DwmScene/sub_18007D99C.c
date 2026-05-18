/*
 * XREFs of sub_18007D99C @ 0x18007D99C
 * Callers:
 *     sub_18007ACA4 @ 0x18007ACA4 (sub_18007ACA4.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180028BA0 @ 0x180028BA0 (sub_180028BA0.c)
 *     sub_18007DC00 @ 0x18007DC00 (sub_18007DC00.c)
 *     sub_18007DC34 @ 0x18007DC34 (sub_18007DC34.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_18007D99C(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rax

  *(_QWORD *)a1 = &Spectre::Engine::ShaderPropertyBlock::`vftable';
  *(_QWORD *)(a1 + 8) = *a2 + 16LL;
  sub_180012C40((_QWORD *)(a1 + 16), a2);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_DWORD *)(a1 + 80) = 1;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  v4 = sub_180028BA0(1uLL);
  v5 = sub_180011790(v4);
  *(_QWORD *)v5 = v5;
  *(_QWORD *)(v5 + 8) = v5;
  *(_QWORD *)(v5 + 16) = v5;
  *(_WORD *)(v5 + 24) = 257;
  *(_QWORD *)(a1 + 88) = v5;
  *(_DWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_DWORD *)(a1 + 144) = *(_DWORD *)(*a2 + 48LL);
  *(_BYTE *)(a1 + 148) = *(_BYTE *)(*a2 + 1242LL);
  sub_18007DC00(a1 + 32, *a2 + 80LL);
  sub_18007DC34(a1 + 56, *a2 + 104LL);
  return a1;
}
