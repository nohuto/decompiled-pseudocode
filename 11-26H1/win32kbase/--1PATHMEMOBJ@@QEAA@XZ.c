/*
 * XREFs of ??1PATHMEMOBJ@@QEAA@XZ @ 0x140011B40
 * Callers:
 *     GreExtCreateRegion @ 0x140011690 (GreExtCreateRegion.c)
 *     GreCreatePolyPolygonRgnInternal @ 0x1400C0C00 (GreCreatePolyPolygonRgnInternal.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJR@@PEAU_RECTL@@J@Z @ 0x1401A5920 (-iCombine@DC@@QEAAJPEAVEXFORMOBJR@@PEAU_RECTL@@J@Z.c)
 * Callees:
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x140011BA0 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 */

void __fastcall PATHMEMOBJ::~PATHMEMOBJ(PATHMEMOBJ *this)
{
  char *v2; // rbx
  __int64 v3; // rax
  char **v4; // rcx

  EPATHOBJ::vUnlock(this);
  v2 = (char *)this + 80;
  if ( *((_DWORD *)v2 + 8) )
  {
    if ( v2 )
    {
      v3 = *(_QWORD *)v2;
      if ( *(char **)(*(_QWORD *)v2 + 8LL) != v2 || (v4 = (char **)*((_QWORD *)v2 + 1), *v4 != v2) )
        __fastfail(3u);
      *v4 = (char *)v3;
      *(_QWORD *)(v3 + 8) = v4;
      *((_QWORD *)v2 + 1) = v2;
      *(_QWORD *)v2 = v2;
    }
    *((_DWORD *)v2 + 8) = 0;
  }
}
