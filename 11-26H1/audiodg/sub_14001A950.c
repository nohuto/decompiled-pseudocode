/*
 * XREFs of sub_14001A950 @ 0x14001A950
 * Callers:
 *     sub_14001A710 @ 0x14001A710 (sub_14001A710.c)
 * Callees:
 *     sub_14001BE38 @ 0x14001BE38 (sub_14001BE38.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14001A950(__int64 a1)
{
  _QWORD *v2; // rdi

  *(_QWORD *)a1 = &off_1400B8DE0;
  v2 = (_QWORD *)(a1 + 8);
  sub_14001BE38(a1 + 8);
  *(_DWORD *)(a1 + 44) = 1;
  *(_QWORD *)a1 = off_1400B8D70;
  *v2 = off_1400B8990;
  if ( qword_1400E84B8 )
    sub_1400B6010(qword_1400E84B8);
  *(_QWORD *)a1 = off_1400B89D8;
  *v2 = off_1400B8990;
  *(_QWORD *)(a1 + 48) = 0LL;
  return a1;
}
