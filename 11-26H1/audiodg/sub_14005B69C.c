/*
 * XREFs of sub_14005B69C @ 0x14005B69C
 * Callers:
 *     sub_14005B568 @ 0x14005B568 (sub_14005B568.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14005B69C(__int64 a1)
{
  *(_DWORD *)(a1 + 44) = 1;
  *(_QWORD *)a1 = off_1400BBFD0;
  *(_QWORD *)(a1 + 8) = off_1400BBF18;
  *(_QWORD *)(a1 + 16) = off_1400BBF50;
  *(_QWORD *)(a1 + 24) = off_1400BBF80;
  *(_QWORD *)(a1 + 32) = off_1400BBEC8;
  if ( qword_1400E84B8 )
    sub_1400B6010(qword_1400E84B8);
  *(_QWORD *)a1 = off_1400BBE50;
  *(_QWORD *)(a1 + 8) = off_1400BC018;
  *(_QWORD *)(a1 + 16) = off_1400BBEE8;
  *(_QWORD *)(a1 + 24) = off_1400BBE98;
  *(_QWORD *)(a1 + 32) = off_1400BBFB0;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  return a1;
}
