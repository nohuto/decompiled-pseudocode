/*
 * XREFs of ?bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1401AAE74
 * Callers:
 *     ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x1400A9B14 (-bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z.c)
 * Callees:
 *     ?bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x140294A84 (-bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bUnHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x140294C40 (-bUnHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall DEVLOCKBLTOBJ::bUnMapTrgSurfaceView(DEVLOCKBLTOBJ *this)
{
  struct XDCOBJ *v1; // rdi
  int v3; // eax
  SURFACE *v4; // rcx

  v1 = (DEVLOCKBLTOBJ *)((char *)this + 80);
  if ( *((_QWORD *)this + 10) && *((_BYTE *)this + 177) )
  {
    v3 = *((_DWORD *)this + 18);
    if ( (v3 & 0x400) != 0 )
    {
      bUnHookRedir((DEVLOCKBLTOBJ *)((char *)this + 80));
      *((_DWORD *)this + 18) &= ~0x400u;
      v3 = *((_DWORD *)this + 18);
    }
    if ( (v3 & 0x2000) != 0 )
    {
      bUnHookBmpDrv(v1);
      *((_DWORD *)this + 18) &= ~0x2000u;
      v3 = *((_DWORD *)this + 18);
    }
    if ( (v3 & 0x1000) != 0 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)v1 + 44LL) & 1) == 0 )
      {
        v4 = *(SURFACE **)(*(_QWORD *)v1 + 496LL);
        if ( v4 )
          SURFACE::bUnMap(v4);
      }
      *(_DWORD *)(*(_QWORD *)v1 + 44LL) &= ~1u;
    }
  }
  return 1LL;
}
