/*
 * XREFs of sub_180010334 @ 0x180010334
 * Callers:
 *     sub_1800101B0 @ 0x1800101B0 (sub_1800101B0.c)
 *     sub_180015C40 @ 0x180015C40 (sub_180015C40.c)
 *     sub_180019870 @ 0x180019870 (sub_180019870.c)
 *     sub_1800198D0 @ 0x1800198D0 (sub_1800198D0.c)
 *     sub_180019930 @ 0x180019930 (sub_180019930.c)
 *     sub_180019990 @ 0x180019990 (sub_180019990.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180010334(volatile signed __int32 *a1)
{
  signed __int32 v1; // r8d

  do
    v1 = *a1;
  while ( *a1 != 0x7FFFFFFF && v1 != _InterlockedCompareExchange(a1, v1 - 1, v1) );
  return (unsigned int)(v1 - 1);
}
