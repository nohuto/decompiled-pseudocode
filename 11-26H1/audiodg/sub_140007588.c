/*
 * XREFs of sub_140007588 @ 0x140007588
 * Callers:
 *     sub_1400070E0 @ 0x1400070E0 (sub_1400070E0.c)
 *     sub_140007258 @ 0x140007258 (sub_140007258.c)
 *     sub_140007360 @ 0x140007360 (sub_140007360.c)
 *     sub_140007510 @ 0x140007510 (sub_140007510.c)
 *     sub_140007540 @ 0x140007540 (sub_140007540.c)
 *     sub_1400075D4 @ 0x1400075D4 (sub_1400075D4.c)
 *     sub_140021ACC @ 0x140021ACC (sub_140021ACC.c)
 *     sub_140023334 @ 0x140023334 (sub_140023334.c)
 *     sub_1400234EC @ 0x1400234EC (sub_1400234EC.c)
 *     sub_140023A68 @ 0x140023A68 (sub_140023A68.c)
 *     sub_14002F92C @ 0x14002F92C (sub_14002F92C.c)
 *     sub_14003003C @ 0x14003003C (sub_14003003C.c)
 *     sub_14003586C @ 0x14003586C (sub_14003586C.c)
 *     sub_1400359C4 @ 0x1400359C4 (sub_1400359C4.c)
 *     pfns @ 0x1400377A0 (pfns.c)
 *     sub_140039264 @ 0x140039264 (sub_140039264.c)
 *     sub_140041294 @ 0x140041294 (sub_140041294.c)
 *     sub_14004E530 @ 0x14004E530 (sub_14004E530.c)
 *     sub_140050AE0 @ 0x140050AE0 (sub_140050AE0.c)
 *     sub_140051420 @ 0x140051420 (sub_140051420.c)
 *     sub_140053700 @ 0x140053700 (sub_140053700.c)
 *     sub_140053838 @ 0x140053838 (sub_140053838.c)
 *     sub_140053AF0 @ 0x140053AF0 (sub_140053AF0.c)
 *     sub_140090808 @ 0x140090808 (sub_140090808.c)
 *     sub_1400912C0 @ 0x1400912C0 (sub_1400912C0.c)
 *     sub_1400A5CC0 @ 0x1400A5CC0 (sub_1400A5CC0.c)
 *     sub_1400A60D0 @ 0x1400A60D0 (sub_1400A60D0.c)
 *     sub_1400A61CC @ 0x1400A61CC (sub_1400A61CC.c)
 *     sub_1400A6508 @ 0x1400A6508 (sub_1400A6508.c)
 *     sub_1400A6544 @ 0x1400A6544 (sub_1400A6544.c)
 *     sub_1400A90C4 @ 0x1400A90C4 (sub_1400A90C4.c)
 *     sub_1400A92F8 @ 0x1400A92F8 (sub_1400A92F8.c)
 *     sub_1400A93A8 @ 0x1400A93A8 (sub_1400A93A8.c)
 *     sub_1400A9518 @ 0x1400A9518 (sub_1400A9518.c)
 *     sub_1400AA1A8 @ 0x1400AA1A8 (sub_1400AA1A8.c)
 *     sub_1400AA844 @ 0x1400AA844 (sub_1400AA844.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140007588(__int64 a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 8), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    sub_1400B6010(a1);
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 12), 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return sub_1400B6010(a1);
  }
  return result;
}
