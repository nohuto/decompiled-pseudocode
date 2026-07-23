/*
 * XREFs of MiMapFrame @ 0x1402A00A0
 * Callers:
 *     MmCopyToCachedPage @ 0x1402B23B0 (MmCopyToCachedPage.c)
 *     MiMapSystemCachePage @ 0x1404F958C (MiMapSystemCachePage.c)
 * Callees:
 *     MiUserPdeOrAbove @ 0x1402A0990 (MiUserPdeOrAbove.c)
 */

__int64 __fastcall MiMapFrame(unsigned __int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rbx
  int v4; // eax
  unsigned __int64 v5; // rbx

  if ( a2 > qword_140E2D920 )
  {
    v3 = 4LL;
  }
  else if ( (*(_QWORD *)(48 * a2 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
  {
    v4 = *(_DWORD *)(48 * a2 - 0x21FFFFFFFFE0LL) & 0xC00000;
    if ( !v4 || v4 == 12582912 )
    {
      v3 = 12LL;
    }
    else
    {
      v3 = 4LL;
      if ( v4 == 0x800000 )
        v3 = 28LL;
    }
  }
  else
  {
    v3 = 4LL;
  }
  v5 = ((a2 & 0xFFFFFFFFFFLL) << 12) | MmProtectToPteMask[v3] & 0xFFF0000000000E7FuLL | 0x21;
  if ( a1 >= 0xFFFFF68000000000uLL && a1 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    if ( a1 >= 0xFFFFF6FB40000000uLL && a1 <= 0xFFFFF6FB7FFFFFFFuLL )
    {
      if ( a1 == 0xFFFFF6FB7DBEDF68uLL )
        v5 |= 0x8000000000000000uLL;
      else
        v5 &= ~0x8000000000000000uLL;
      if ( (unsigned int)MiUserPdeOrAbove(a1) )
        v5 |= 4uLL;
    }
    if ( (unsigned __int64)((__int64)(a1 << 25) >> 16) < 0x7FFFFFFF0000LL )
      v5 |= 4uLL;
  }
  *(_QWORD *)a1 = (BYTE4(stru_140E2DAB0.Header.WaitListHead.Blink) << 8) & 0x100 ^ (v5 & 0xFAFFFFFFFFFFFEBDuLL | 0x42) | 0xA00000000000000LL;
  return (__int64)(a1 << 25) >> 16;
}
