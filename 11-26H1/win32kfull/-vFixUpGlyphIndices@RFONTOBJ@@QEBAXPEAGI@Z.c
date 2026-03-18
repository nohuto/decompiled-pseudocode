/*
 * XREFs of ?vFixUpGlyphIndices@RFONTOBJ@@QEBAXPEAGI@Z @ 0x1401C06D0
 * Callers:
 *     ?GrepGetTextExtentExW@@YAHAEAVDCOBJ@@PEAGKKPEAK2PEAUtagSIZE@@K@Z @ 0x1401A60AC (-GrepGetTextExtentExW@@YAHAEAVDCOBJ@@PEAGKKPEAK2PEAUtagSIZE@@K@Z.c)
 *     ?GrepGetTextExtentW@@YAHAEAVDCOBJ@@PEAGHPEAUtagSIZE@@I@Z @ 0x1401C4B10 (-GrepGetTextExtentW@@YAHAEAVDCOBJ@@PEAGHPEAUtagSIZE@@I@Z.c)
 *     ?GrepGetCharABCWidthsW@@YAHAEAVDCOBJ@@IKPEAGKPEAX@Z @ 0x1401D5AD0 (-GrepGetCharABCWidthsW@@YAHAEAVDCOBJ@@IKPEAGKPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RFONTOBJ::vFixUpGlyphIndices(RFONTOBJ *this, unsigned __int16 *a2, int a3)
{
  __int64 v3; // r9
  __int64 v4; // rax
  __int16 v5; // r9
  unsigned __int16 *v6; // rcx

  v3 = *(_QWORD *)(*(_QWORD *)this + 120LL);
  if ( (*(_DWORD *)(*(_QWORD *)(v3 + 16) + 4LL) & 2) != 0 )
  {
    v4 = *(_QWORD *)(v3 + 32);
    v5 = *(unsigned __int8 *)(v4 + 108);
    if ( *(_BYTE *)(v4 + 108) )
    {
      v6 = &a2[a3];
      while ( a2 < v6 )
        *a2++ -= v5;
    }
  }
}
