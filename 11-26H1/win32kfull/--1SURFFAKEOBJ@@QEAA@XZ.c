/*
 * XREFs of ??1SURFFAKEOBJ@@QEAA@XZ @ 0x14016DD70
 * Callers:
 *     ?GrepExtEscape@@YAHAEAVXDCOBJ@@HHPEADH1@Z @ 0x14016D63C (-GrepExtEscape@@YAHAEAVXDCOBJ@@HHPEADH1@Z.c)
 *     ?DoFontManagement@@YAKAEAVXDCOBJ@@KKPEAXK1@Z @ 0x14016DFD0 (-DoFontManagement@@YAKAEAVXDCOBJ@@KKPEAXK1@Z.c)
 *     ?iCheckPassthroughImage@@YAHAEAVXDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z @ 0x140311298 (-iCheckPassthroughImage@@YAHAEAVXDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z.c)
 *     NtGdiGetETM @ 0x1403336E0 (NtGdiGetETM.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1400158B4 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?vUnguard@CAutoTGO@@QEAAXXZ @ 0x140114F5C (-vUnguard@CAutoTGO@@QEAAXXZ.c)
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
