/*
 * XREFs of ?bSkipCHSFontSegUISymFallback@RFONTOBJ@@QEAAHGPEAVPFF@@0@Z @ 0x1401C2530
 * Callers:
 *     ?GrepGetGlyphOutline@@YAKAEAVDCOBJ@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@H@Z @ 0x14010CB48 (-GrepGetGlyphOutline@@YAKAEAVDCOBJ@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RFONTOBJ::bSkipCHSFontSegUISymFallback(RFONTOBJ *this, __int64 a2, struct PFF *a3, struct PFF *a4)
{
  __int16 v6; // bx

  v6 = a2;
  if ( *(_DWORD *)(*(_QWORD *)(W32GetSessionState(this, a2, a3) + 96) + 14164LL)
    || (unsigned __int16)(v6 + 0x2000) > 0x18FFu
    || (*((_DWORD *)a4 + 13) & 0x4000) == 0 )
  {
    return 0LL;
  }
  else
  {
    return (*((_DWORD *)a3 + 13) >> 15) & 1;
  }
}
