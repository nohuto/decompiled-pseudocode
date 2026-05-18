/*
 * XREFs of sub_180054AF0 @ 0x180054AF0
 * Callers:
 *     sub_18002DA20 @ 0x18002DA20 (sub_18002DA20.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180025874 @ 0x180025874 (sub_180025874.c)
 *     sub_180030794 @ 0x180030794 (sub_180030794.c)
 *     sub_180031294 @ 0x180031294 (sub_180031294.c)
 *     sub_180055168 @ 0x180055168 (sub_180055168.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_180054AF0(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v5; // rax

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = a2;
  *(_DWORD *)(a1 + 32) = a3;
  *(_DWORD *)(a1 + 36) = a4;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  v5 = sub_180011790(0x48uLL);
  *(_QWORD *)v5 = v5;
  *(_QWORD *)(v5 + 8) = v5;
  *(_QWORD *)(v5 + 16) = v5;
  *(_WORD *)(v5 + 24) = 257;
  *(_QWORD *)(a1 + 88) = v5;
  *(_OWORD *)(a1 + 104) = 0LL;
  sub_180030794((_BYTE *)(a1 + 120), 0);
  sub_180025874(a1 + 128);
  sub_180031294(a1 + 208);
  sub_180031294(a1 + 280);
  sub_180031294(a1 + 352);
  sub_180030794((_BYTE *)(a1 + 424), 0);
  sub_180030794((_BYTE *)(a1 + 425), 0);
  sub_180030794((_BYTE *)(a1 + 426), 0);
  *(_DWORD *)(a1 + 428) = -1;
  *(_WORD *)(a1 + 432) = 256;
  *(_QWORD *)(a1 + 440) = 0LL;
  *(_DWORD *)(a1 + 448) = 0;
  if ( *(_DWORD *)(a1 + 36) == 1 )
    sub_180055168(a1);
  return a1;
}
