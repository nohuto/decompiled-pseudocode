/*
 * XREFs of sub_140096700 @ 0x140096700
 * Callers:
 *     sub_140096F00 @ 0x140096F00 (sub_140096F00.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140096700(__int64 a1)
{
  *(_DWORD *)(a1 + 512) = -1073741823;
  *(_QWORD *)a1 = off_1400BFD10;
  *(_QWORD *)(a1 + 8) = off_1400BFCD8;
  *(_QWORD *)(a1 + 424) = off_1400BFCA0;
  *(_QWORD *)(a1 + 432) = off_1400BF5E8;
  *(_QWORD *)(a1 + 488) = off_1400BFF20;
  *(_QWORD *)(a1 + 744) = off_1400BFEF0;
  *(_QWORD *)(a1 + 752) = off_1400BFEC8;
  *(_QWORD *)(a1 + 760) = off_1400BFEA8;
  sub_1400B6010(qword_1400E8490);
  return sub_140096C30(a1);
}
