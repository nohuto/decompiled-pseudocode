/*
 * XREFs of sub_140041E74 @ 0x140041E74
 * Callers:
 *     sub_140064B44 @ 0x140064B44 (sub_140064B44.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140041E74(__int64 a1)
{
  *(_QWORD *)(a1 + 72) = 1LL;
  *(_QWORD *)a1 = off_1400BC628;
  *(_QWORD *)(a1 + 8) = off_1400BC660;
  *(_QWORD *)(a1 + 16) = off_1400BC680;
  *(_QWORD *)(a1 + 24) = off_1400BC4B8;
  *(_QWORD *)(a1 + 32) = off_1400BC5A0;
  *(_QWORD *)(a1 + 40) = off_1400BC500;
  *(_QWORD *)(a1 + 48) = off_1400BC6D8;
  *(_QWORD *)(a1 + 56) = off_1400BC4E0;
  if ( qword_1400E84B8 )
    sub_1400B6010(qword_1400E84B8);
  *(_QWORD *)a1 = off_1400F5238;
  *(_QWORD *)(a1 + 8) = off_1400F52C0;
  *(_QWORD *)(a1 + 16) = off_1400F52E0;
  *(_QWORD *)(a1 + 24) = off_1400F5210;
  *(_QWORD *)(a1 + 32) = off_1400F5270;
  *(_QWORD *)(a1 + 40) = off_1400F5350;
  *(_QWORD *)(a1 + 48) = off_1400F51E0;
  *(_QWORD *)(a1 + 56) = off_1400F5330;
  *(_DWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  return a1;
}
