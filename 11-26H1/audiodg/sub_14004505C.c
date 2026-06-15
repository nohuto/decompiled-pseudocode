/*
 * XREFs of sub_14004505C @ 0x14004505C
 * Callers:
 *     sub_140044FC4 @ 0x140044FC4 (sub_140044FC4.c)
 *     sub_140097020 @ 0x140097020 (sub_140097020.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14000DA4C @ 0x14000DA4C (sub_14000DA4C.c)
 *     sub_14000DA94 @ 0x14000DA94 (sub_14000DA94.c)
 *     sub_140019444 @ 0x140019444 (sub_140019444.c)
 *     sub_140038DA4 @ 0x140038DA4 (sub_140038DA4.c)
 *     sub_1400390D8 @ 0x1400390D8 (sub_1400390D8.c)
 *     sub_140039BB8 @ 0x140039BB8 (sub_140039BB8.c)
 */

void __fastcall sub_14004505C(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // rax
  int v6; // r8d

  *(_QWORD *)a1 = &off_1400F57A8;
  *(_QWORD *)(a1 + 8) = &off_1400F5718;
  v4 = *(_QWORD *)(a1 + 160);
  if ( v4 )
  {
    sub_140039BB8(v4, a2, a3);
    *(_QWORD *)(a1 + 160) = 0LL;
  }
  sub_140019444((__int64 *)(a1 + 72));
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  v5 = sub_14000DA4C();
  sub_14000DA94(*(_QWORD *)(a1 + 96), v5, v6);
  *(_QWORD *)(a1 + 96) = 0LL;
  sub_140038DA4((_QWORD *)(a1 + 216));
  sub_140003238((__int64 *)(a1 + 72));
  sub_1400390D8((__int64 *)(a1 + 64), 0LL);
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
}
