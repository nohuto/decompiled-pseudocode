/*
 * XREFs of sub_180017D30 @ 0x180017D30
 * Callers:
 *     sub_180017A8C @ 0x180017A8C (sub_180017A8C.c)
 *     sub_180041860 @ 0x180041860 (sub_180041860.c)
 *     sub_18006F8FC @ 0x18006F8FC (sub_18006F8FC.c)
 *     sub_18007AFEC @ 0x18007AFEC (sub_18007AFEC.c)
 *     sub_1800852C0 @ 0x1800852C0 (sub_1800852C0.c)
 *     sub_180098E88 @ 0x180098E88 (sub_180098E88.c)
 *     sub_18009CD40 @ 0x18009CD40 (sub_18009CD40.c)
 * Callees:
 *     sub_180012970 @ 0x180012970 (sub_180012970.c)
 */

__int64 __fastcall sub_180017D30(unsigned __int64 a1)
{
  if ( a1 > 0x1FFFFFFFFFFFFFFFLL )
    sub_180012970();
  return 8 * a1;
}
