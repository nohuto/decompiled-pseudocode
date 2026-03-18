/*
 * XREFs of ??1SURFFAKEOBJ@@QEAA@XZ @ 0x1401D3F50
 * Callers:
 *     ?GrepExtEscape@@YAHAEAVXDCOBJ@@HHPEADH1AEBUTag@RFONTOBJ@@@Z @ 0x1401D371C (-GrepExtEscape@@YAHAEAVXDCOBJ@@HHPEADH1AEBUTag@RFONTOBJ@@@Z.c)
 *     NtGdiGetETM @ 0x140311420 (NtGdiGetETM.c)
 *     ?DoFontManagement@@YAKAEAVUDCOBJ@@KKPEAXK1AEBUTag@RFONTOBJ@@@Z @ 0x1403270C8 (-DoFontManagement@@YAKAEAVUDCOBJ@@KKPEAXK1AEBUTag@RFONTOBJ@@@Z.c)
 *     ?iCheckPassthroughImage@@YAHAEAVXDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z @ 0x140327DC8 (-iCheckPassthroughImage@@YAHAEAVXDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z.c)
 * Callees:
 *     ?vUnguard@CAutoTGO@@QEAAXXZ @ 0x140079978 (-vUnguard@CAutoTGO@@QEAAXXZ.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14007DDEC (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 */

void __fastcall SURFFAKEOBJ::~SURFFAKEOBJ(SURFFAKEOBJ *this)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx

  if ( *((_QWORD *)this + 4) )
  {
    CAutoTGO::vUnguard((SURFFAKEOBJ *)((char *)this + 40));
    v2 = *((_QWORD *)this + 4);
    v3 = v2 + 40;
    if ( !v2 )
      v3 = 16LL;
    *(_QWORD *)v3 = *((_QWORD *)this + 10);
    v4 = *((_QWORD *)this + 4);
    v5 = v4 + 48;
    if ( !v4 )
      v5 = 24LL;
    *(_QWORD *)v5 = *((_QWORD *)this + 11);
    v6 = *((_QWORD *)this + 4);
    v7 = v6 + 100;
    if ( !v6 )
      v7 = 76LL;
    *(_WORD *)v7 = *((_WORD *)this + 48);
    SURFREF::vTryDeleteSurface(this);
  }
  CAutoTGO::vUnguard((SURFFAKEOBJ *)((char *)this + 40));
  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF(this);
}
