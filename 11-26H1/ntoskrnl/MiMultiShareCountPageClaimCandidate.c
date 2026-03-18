/*
 * XREFs of MiMultiShareCountPageClaimCandidate @ 0x1404AA7EC
 * Callers:
 *     MiActivePageClaimCandidate @ 0x1402923F0 (MiActivePageClaimCandidate.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140264F40 (MiGetSystemRegionType.c)
 *     MiHyperPage @ 0x140293000 (MiHyperPage.c)
 */

__int64 __fastcall MiMultiShareCountPageClaimCandidate(int a1, __int64 a2)
{
  int v2; // ebx
  unsigned __int64 v4; // rsi

  v2 = *(_DWORD *)(a2 + 32);
  v4 = *(_QWORD *)(a2 + 8) | 0x8000000000000000uLL;
  if ( (unsigned int)MiGetSystemRegionType((__int64)(v4 << 25) >> 16) == 5 )
  {
    if ( (unsigned __int16)v2 > 1u )
    {
      if ( a1 )
        ++dword_140EF8E4C;
      else
        ++dword_140EF8F10;
    }
    else
    {
      if ( (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 0x10000 )
        return 0LL;
      if ( a1 )
        ++dword_140EF8E50;
      else
        ++dword_140EF8F18;
    }
  }
  else if ( (unsigned int)MiHyperPage(v4) )
  {
    if ( (unsigned __int16)v2 <= 1u )
      return 0LL;
    if ( a1 )
      ++dword_140EF8E54;
    else
      ++dword_140EF8FA0;
  }
  else if ( a1 )
  {
    ++dword_140EF8E5C;
  }
  else
  {
    ++dword_140EF8F68;
  }
  return 3221225473LL;
}
