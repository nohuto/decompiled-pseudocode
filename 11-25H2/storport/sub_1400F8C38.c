/*
 * XREFs of sub_1400F8C38 @ 0x1400F8C38
 * Callers:
 *     sub_1400FB018 @ 0x1400FB018 (sub_1400FB018.c)
 *     sub_1400FF010 @ 0x1400FF010 (sub_1400FF010.c)
 *     sub_14010216C @ 0x14010216C (sub_14010216C.c)
 *     sub_140102C4C @ 0x140102C4C (sub_140102C4C.c)
 *     sub_140107CC0 @ 0x140107CC0 (sub_140107CC0.c)
 *     sub_14010A138 @ 0x14010A138 (sub_14010A138.c)
 *     sub_1401186F0 @ 0x1401186F0 (sub_1401186F0.c)
 *     sub_14012D2A0 @ 0x14012D2A0 (sub_14012D2A0.c)
 *     sub_14012D668 @ 0x14012D668 (sub_14012D668.c)
 *     sub_14012EC28 @ 0x14012EC28 (sub_14012EC28.c)
 *     sub_140198640 @ 0x140198640 (sub_140198640.c)
 * Callees:
 *     sub_1400F9454 @ 0x1400F9454 (sub_1400F9454.c)
 */

__int64 __fastcall sub_1400F8C38(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 result; // rax

  v2 = 0;
  if ( !a2 || (result = sub_1400F9454(), v2 = result, (int)result >= 0) )
  {
    if ( !ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 120)) )
      return (unsigned int)-1073741738;
    return v2;
  }
  return result;
}
