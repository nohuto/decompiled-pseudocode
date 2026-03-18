/*
 * XREFs of ?bIsSystemTTGlyph@RFONTOBJ@@QEBAHG@Z @ 0x14019FD2C
 * Callers:
 *     ?FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVUDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z @ 0x1400AD7F0 (-FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVUDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z @ 0x1400AFFB0 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z.c)
 *     ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVUDCOBJ@@KPEAGK1@Z @ 0x1400BE658 (-bGetWidthTable@RFONTOBJ@@QEAAHAEAVUDCOBJ@@KPEAGK1@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RFONTOBJ::bIsSystemTTGlyph(RFONTOBJ *this, __int64 a2)
{
  int v2; // edi
  __int64 SessionState; // rax
  unsigned int v5; // r10d
  __int64 v6; // r8
  int v8; // eax

  v2 = (unsigned __int16)a2;
  SessionState = W32GetSessionState((_DWORD)this, a2);
  v5 = 0;
  v6 = *(_QWORD *)(SessionState + 96);
  if ( *(_DWORD *)(*(_QWORD *)this + 716LL) )
  {
    v8 = *(unsigned __int16 *)(v6 + 14088);
    if ( (unsigned __int16)v2 >= (unsigned __int16)v8 && (unsigned __int16)v2 <= *(_WORD *)(v6 + 14090) )
      return ((0x80000000 >> ((v2 - v8) % 32)) & *(_DWORD *)(*(_QWORD *)(v6 + 14096) + 4LL * ((v2 - v8) / 32))) != 0;
  }
  return v5;
}
