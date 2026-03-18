/*
 * XREFs of ?bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x140174CBC
 * Callers:
 *     ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x14008BE80 (-bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z.c)
 * Callees:
 *     ?bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x14026D2C4 (-bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bUnHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x14026D434 (-bUnHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall DEVLOCKBLTOBJ::bUnMapTrgSurfaceView(DEVLOCKBLTOBJ *this)
{
  struct XDCOBJ *v1; // rdi
  int v3; // eax
  SURFACE *v4; // rcx

  v1 = (DEVLOCKBLTOBJ *)((char *)this + 120);
  if ( *((_QWORD *)this + 15) && *((_BYTE *)this + 193) )
  {
    v3 = *((_DWORD *)this + 28);
    if ( (v3 & 0x400) != 0 )
    {
      bUnHookRedir((DEVLOCKBLTOBJ *)((char *)this + 120));
      *((_DWORD *)this + 28) &= ~0x400u;
      v3 = *((_DWORD *)this + 28);
    }
    if ( (v3 & 0x2000) != 0 )
    {
      bUnHookBmpDrv(v1);
      *((_DWORD *)this + 28) &= ~0x2000u;
      v3 = *((_DWORD *)this + 28);
    }
    if ( (v3 & 0x1000) != 0 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)v1 + 44LL) & 1) == 0 )
      {
        v4 = *(SURFACE **)(*(_QWORD *)v1 + 496LL);
        if ( v4 )
          SURFACE::bUnMap(v4);
      }
      *(_DWORD *)(*((_QWORD *)this + 15) + 44LL) &= ~1u;
    }
  }
  return 1LL;
}
