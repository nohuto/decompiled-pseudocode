/*
 * XREFs of ?vLockSystemTTGlyphCache@RFONTOBJ@@AEAAXXZ @ 0x1401808EC
 * Callers:
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVUDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x14001681C (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVUDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z.c)
 *     ?vLockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXH@Z @ 0x140180754 (-vLockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXH@Z.c)
 * Callees:
 *     ??$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z @ 0x140016F64 (--$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x140017244 (--1RFONTOBJ@@QEAA@XZ.c)
 */

void __fastcall RFONTOBJ::vLockSystemTTGlyphCache(RFONTOBJ *this)
{
  __int64 v1; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)this;
  v3 = *(_QWORD *)(*(_QWORD *)this + 728LL);
  if ( v3 )
  {
    if ( (*(_DWORD *)(v1 + 720) & 0x80u) == 0 )
    {
      GreAcquireSemaphore<5,RFONT *>(v3);
      v4 = *(_QWORD *)this;
      v5 = 0LL;
      *(_DWORD *)(v4 + 720) |= 0x80u;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v5);
    }
  }
}
