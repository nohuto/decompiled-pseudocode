/*
 * XREFs of ?vUnlockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXXZ @ 0x1400AFE68
 * Callers:
 *     ?dtorHelper@RFONTOBJ@@QEAAXXZ @ 0x140017398 (-dtorHelper@RFONTOBJ@@QEAAXXZ.c)
 * Callees:
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x140017080 (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     ?vReleaseCache@RFONTOBJ@@QEAAXXZ @ 0x1400AF7EC (-vReleaseCache@RFONTOBJ@@QEAAXXZ.c)
 *     ?vUnlockSystemTTGlyphCache@RFONTOBJ@@AEAAXXZ @ 0x1400AFF34 (-vUnlockSystemTTGlyphCache@RFONTOBJ@@AEAAXXZ.c)
 */

void __fastcall RFONTOBJ::vUnlockEUDCFontsGlyphCache(RFONTOBJ *this)
{
  int v2; // eax
  __int64 i; // rdi
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  RFONTOBJ::vUnlockSystemTTGlyphCache(this);
  if ( (*(_DWORD *)(*(_QWORD *)this + 720LL) & 0x101) == 1 )
  {
    v2 = *(_DWORD *)(*(_QWORD *)this + 848LL) - 1;
    for ( i = v2; i >= 0; --i )
    {
      if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 752LL) + 8 * i) )
      {
        v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 752LL) + 8 * i);
        RFONTOBJ::vReleaseCache((RFONTOBJ *)&v4);
        RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v4);
      }
    }
    if ( *(_QWORD *)(*(_QWORD *)this + 744LL) )
    {
      v4 = *(_QWORD *)(*(_QWORD *)this + 744LL);
      RFONTOBJ::vReleaseCache((RFONTOBJ *)&v4);
      RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v4);
    }
    if ( *(_QWORD *)(*(_QWORD *)this + 736LL) )
    {
      v4 = *(_QWORD *)(*(_QWORD *)this + 736LL);
      RFONTOBJ::vReleaseCache((RFONTOBJ *)&v4);
      RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v4);
    }
  }
}
