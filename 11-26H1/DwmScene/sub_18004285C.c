/*
 * XREFs of sub_18004285C @ 0x18004285C
 * Callers:
 *     sub_18005BFCC @ 0x18005BFCC (sub_18005BFCC.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180028BA0 @ 0x180028BA0 (sub_180028BA0.c)
 *     sub_180028DF4 @ 0x180028DF4 (sub_180028DF4.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_18004285C(__int64 a1)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rax

  sub_180028DF4((_QWORD *)a1, 0, 10);
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)a1 = &Spectre::Engine::Material::`vftable';
  *(_WORD *)(a1 + 112) = 2;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_BYTE *)(a1 + 184) = 0;
  *(_DWORD *)(a1 + 188) = 0;
  *(_QWORD *)(a1 + 192) = _InterlockedIncrement64(&qword_1801C8598);
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = 0LL;
  v2 = sub_180028BA0(1uLL);
  v3 = sub_180011790(v2);
  *(_QWORD *)v3 = v3;
  *(_QWORD *)(v3 + 8) = v3;
  *(_QWORD *)(v3 + 16) = v3;
  *(_WORD *)(v3 + 24) = 257;
  *(_QWORD *)(a1 + 200) = v3;
  *(_QWORD *)(a1 + 216) = 0LL;
  *(_QWORD *)(a1 + 224) = 0LL;
  *(_QWORD *)(a1 + 192) |= 0xFFFFFFFF00000000uLL;
  return a1;
}
