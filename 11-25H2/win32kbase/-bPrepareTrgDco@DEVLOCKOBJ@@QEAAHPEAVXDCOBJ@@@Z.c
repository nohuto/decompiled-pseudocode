/*
 * XREFs of ?bPrepareTrgDco@DEVLOCKOBJ@@QEAAHPEAVXDCOBJ@@@Z @ 0x140086D90
 * Callers:
 *     pProcessDfbSurfacesInternal @ 0x1400700D0 (pProcessDfbSurfacesInternal.c)
 *     ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x140086CF8 (-vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x14008D360 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     GreSetMagicColors @ 0x14014DDBC (GreSetMagicColors.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DEVLOCKOBJ::bPrepareTrgDco(DEVLOCKOBJ *this, struct XDCOBJ *a2)
{
  int (*v4)(void); // rax
  __int64 (__fastcall *v5)(DEVLOCKOBJ *, struct XDCOBJ *); // rax

  v4 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 768LL);
  if ( v4
    && v4() >= 0
    && (v5 = *(__int64 (__fastcall **)(DEVLOCKOBJ *, struct XDCOBJ *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24)
                                                                     + 776LL)) != 0LL )
  {
    return v5(this, a2);
  }
  else
  {
    return 0LL;
  }
}
