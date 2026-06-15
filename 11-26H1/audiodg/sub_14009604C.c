/*
 * XREFs of sub_14009604C @ 0x14009604C
 * Callers:
 *     sub_140095B1C @ 0x140095B1C (sub_140095B1C.c)
 *     sub_1400961F4 @ 0x1400961F4 (sub_1400961F4.c)
 * Callees:
 *     sub_14002C564 @ 0x14002C564 (sub_14002C564.c)
 *     sub_140095FC4 @ 0x140095FC4 (sub_140095FC4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14009604C(__int64 a1)
{
  *(_DWORD *)(a1 + 512) = 0;
  *(_OWORD *)(a1 + 520) = 0LL;
  *(_OWORD *)(a1 + 536) = 0LL;
  *(_QWORD *)(a1 + 552) = 0LL;
  *(_BYTE *)(a1 + 560) = 0;
  sub_140095FC4(a1, 0);
  *(_QWORD *)(a1 + 488) = &off_1400F5658;
  *(_QWORD *)(a1 + 504) = 3LL;
  *(_QWORD *)(a1 + 496) = a1;
  *(_DWORD *)(a1 + 568) = 0;
  *(_BYTE *)(a1 + 572) = 0;
  *(_DWORD *)(a1 + 576) = 0;
  sub_14002C564(a1 + 580);
  *(_QWORD *)(a1 + 736) = 0LL;
  return a1;
}
