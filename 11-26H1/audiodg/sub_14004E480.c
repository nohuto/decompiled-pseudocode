/*
 * XREFs of sub_14004E480 @ 0x14004E480
 * Callers:
 *     sub_1400B1402 @ 0x1400B1402 (sub_1400B1402.c)
 *     sub_1400B14AA @ 0x1400B14AA (sub_1400B14AA.c)
 *     sub_1400B15BE @ 0x1400B15BE (sub_1400B15BE.c)
 *     sub_1400B1614 @ 0x1400B1614 (sub_1400B1614.c)
 * Callees:
 *     sub_14001EB30 @ 0x14001EB30 (sub_14001EB30.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

void __fastcall sub_14004E480(__int64 a1, _WORD *a2, __int64 a3)
{
  __int64 v5; // rax

  if ( a2 )
  {
    v5 = sub_1400B6010(a1);
    sub_14001EB30(a2, a3, (__int64)L"std::exception: %hs", v5);
  }
}
