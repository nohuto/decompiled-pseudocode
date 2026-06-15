/*
 * XREFs of sub_14001AC60 @ 0x14001AC60
 * Callers:
 *     sub_14001ABE8 @ 0x14001ABE8 (sub_14001ABE8.c)
 * Callees:
 *     sub_14001BE38 @ 0x14001BE38 (sub_14001BE38.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14001AC60(__int64 a1)
{
  _QWORD *v2; // rdi

  *(_QWORD *)a1 = &off_1400B8DE0;
  v2 = (_QWORD *)(a1 + 8);
  sub_14001BE38(a1 + 8);
  *(_DWORD *)(a1 + 44) = 1;
  *(_QWORD *)a1 = off_1400B8E00;
  *v2 = off_1400B8D98;
  if ( qword_1400E84B8 )
    sub_1400B6010(qword_1400E84B8);
  *(_QWORD *)a1 = off_1400B8A00;
  *v2 = off_1400B8D98;
  *(_QWORD *)(a1 + 48) = 0LL;
  return a1;
}
