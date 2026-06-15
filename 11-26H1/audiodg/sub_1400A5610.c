/*
 * XREFs of sub_1400A5610 @ 0x1400A5610
 * Callers:
 *     sub_1400A5364 @ 0x1400A5364 (sub_1400A5364.c)
 * Callees:
 *     sub_1400A5B80 @ 0x1400A5B80 (sub_1400A5B80.c)
 */

_QWORD *__fastcall sub_1400A5610(_QWORD *a1)
{
  sub_1400A5B80();
  a1[202] = 0LL;
  a1[203] = 0LL;
  *a1 = off_1400C07F8;
  a1[1] = off_1400C0308;
  a1[2] = off_1400C0780;
  a1[3] = off_1400C0748;
  a1[172] = off_1400C0710;
  a1[173] = off_1400C03E0;
  a1[174] = off_1400C03D8;
  a1[187] = off_1400C03A8;
  a1[199] = off_1400BF568;
  a1[200] = off_1400BF540;
  a1[201] = off_1400BF520;
  return a1;
}
