/*
 * XREFs of RtlpStdGetSpaceForTrace @ 0x18006AFBC
 * Callers:
 *     RtlpStdLogCapturedStackTrace @ 0x18006AE68 (RtlpStdLogCapturedStackTrace.c)
 * Callees:
 *     RtlpStdExtendLowerWatermark @ 0x1800FBBAC (RtlpStdExtendLowerWatermark.c)
 *     RtlpInterlockedPopEntrySList @ 0x180162BD0 (RtlpInterlockedPopEntrySList.c)
 */

__int64 __fastcall RtlpStdGetSpaceForTrace(__int64 a1, unsigned __int16 a2)
{
  __int64 v2; // rsi
  unsigned int i; // ebx
  PSLIST_ENTRY v5; // rax
  __int64 result; // rax
  unsigned int v7; // ecx

  v2 = a2;
  if ( !a2 )
    return 0LL;
  for ( i = a2 - 1; i < 0x20; ++i )
  {
    v5 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 16 * (i + 13LL)));
    if ( v5 )
    {
      result = (__int64)&v5[-1];
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 196));
      return result;
    }
  }
  result = RtlpStdExtendLowerWatermark(a1, (8 * v2 + 31) & 0xFFFFFFFFFFFFFFF0uLL);
  if ( result )
  {
    v7 = ((((8 * (_DWORD)v2 + 31) & 0xFFFFFFF0) - 16) >> 3) - 1;
    if ( v7 > 0x1F )
      LOWORD(v7) = 31;
    *(_WORD *)(result + 8) &= 0x7FFu;
    *(_WORD *)(result + 8) |= (_WORD)v7 << 11;
  }
  return result;
}
