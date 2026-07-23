/*
 * XREFs of PsBlockNonCetBinaries @ 0x1407F5DE8
 * Callers:
 *     MiAllowImageMap @ 0x140B2222C (MiAllowImageMap.c)
 * Callees:
 *     EtwTimLogBlockNonCetBinaries @ 0x140830640 (EtwTimLogBlockNonCetBinaries.c)
 */

__int64 __fastcall PsBlockNonCetBinaries(__int64 a1, unsigned __int8 a2, unsigned __int8 a3, __int64 a4)
{
  int v4; // eax
  int v5; // ebx

  if ( (*(_DWORD *)(a1 + 1532) & 0x1000) != 0 || (*(_DWORD *)(a1 + 1532) & 1) != 0 )
    return 0LL;
  v4 = *(_DWORD *)(a1 + 1876);
  v5 = v4 & 0x800000;
  if ( (v4 & 0x400000) != 0 )
  {
    if ( a2 && a3 )
      return 0LL;
    EtwTimLogBlockNonCetBinaries(2 - (v5 != 0), a1, a2, a3, a4, 1);
  }
  else
  {
    if ( (v4 & 0x200000) == 0 || a2 )
      return 0LL;
    EtwTimLogBlockNonCetBinaries(2 - (v5 != 0), a1, 0, a3, a4, 0);
  }
  if ( v5 )
    return 0LL;
  return 3221225506LL;
}
