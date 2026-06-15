/*
 * XREFs of sub_14004CBD8 @ 0x14004CBD8
 * Callers:
 *     sub_14004CA9C @ 0x14004CA9C (sub_14004CA9C.c)
 *     sub_14004CB88 @ 0x14004CB88 (sub_14004CB88.c)
 *     sub_14004CBB0 @ 0x14004CBB0 (sub_14004CBB0.c)
 *     sub_1400A5D90 @ 0x1400A5D90 (sub_1400A5D90.c)
 * Callees:
 *     _o___std_exception_copy @ 0x14004A516 (_o___std_exception_copy.c)
 */

__int64 __fastcall sub_14004CBD8(__int64 a1)
{
  *(_QWORD *)a1 = &std::exception::`vftable';
  *(_OWORD *)(a1 + 8) = 0LL;
  o___std_exception_copy();
  return a1;
}
