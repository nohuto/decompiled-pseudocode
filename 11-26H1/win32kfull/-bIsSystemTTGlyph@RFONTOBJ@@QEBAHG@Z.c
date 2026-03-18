/*
 * XREFs of ?bIsSystemTTGlyph@RFONTOBJ@@QEBAHG@Z @ 0x1400F9B8C
 * Callers:
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x1400C0C28 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z.c)
 *     ?FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z @ 0x1400C14FC (-FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z.c)
 *     ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVDCOBJ@@KPEAGK1@Z @ 0x1400FA384 (-bGetWidthTable@RFONTOBJ@@QEAAHAEAVDCOBJ@@KPEAGK1@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z @ 0x1400FBC50 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RFONTOBJ::bIsSystemTTGlyph(RFONTOBJ *this, __int64 a2, __int64 a3)
{
  int v3; // edi
  __int64 SessionState; // rax
  unsigned int v6; // r10d
  __int64 v7; // r8
  int v9; // eax

  v3 = (unsigned __int16)a2;
  SessionState = W32GetSessionState(this, a2, a3);
  v6 = 0;
  v7 = *(_QWORD *)(SessionState + 96);
  if ( *(_DWORD *)(*(_QWORD *)this + 716LL) )
  {
    v9 = *(unsigned __int16 *)(v7 + 14080);
    if ( (unsigned __int16)v3 >= (unsigned __int16)v9 && (unsigned __int16)v3 <= *(_WORD *)(v7 + 14082) )
      return ((0x80000000 >> ((v3 - v9) % 32)) & *(_DWORD *)(*(_QWORD *)(v7 + 14088) + 4LL * ((v3 - v9) / 32))) != 0;
  }
  return v6;
}
