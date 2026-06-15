/*
 * XREFs of sub_140096170 @ 0x140096170
 * Callers:
 *     sub_140095B8C @ 0x140095B8C (sub_140095B8C.c)
 *     sub_140096294 @ 0x140096294 (sub_140096294.c)
 * Callees:
 *     sub_140095FC4 @ 0x140095FC4 (sub_140095FC4.c)
 */

__int64 __fastcall sub_140096170(__int64 a1)
{
  *(_DWORD *)(a1 + 520) = 0;
  *(_OWORD *)(a1 + 528) = 0LL;
  *(_OWORD *)(a1 + 544) = 0LL;
  *(_QWORD *)(a1 + 560) = 0LL;
  *(_BYTE *)(a1 + 568) = 0;
  sub_140095FC4(a1, 1);
  *(_QWORD *)(a1 + 488) = &off_1400F5658;
  *(_QWORD *)(a1 + 496) = a1;
  *(_QWORD *)(a1 + 504) = 3LL;
  *(_DWORD *)(a1 + 576) = 0;
  *(_QWORD *)(a1 + 624) = 0LL;
  return a1;
}
