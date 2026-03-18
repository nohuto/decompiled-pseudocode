/*
 * XREFs of ?bPrepareTrgDco@DEVLOCKOBJ@@QEAAHPEAVXDCOBJ@@@Z @ 0x1400C6660
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@W4_CLEANUPTYPE@@H@Z @ 0x1400126D0 (-bDeleteSurface@SURFACE@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@W4_CLEANUPTYPE@@H@Z.c)
 *     ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1400C65C4 (-vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DEVLOCKOBJ::bPrepareTrgDco(DEVLOCKOBJ *this, struct XDCOBJ *a2)
{
  int (*v4)(void); // rax
  __int64 v5; // rcx
  __int64 (__fastcall *v6)(DEVLOCKOBJ *, struct XDCOBJ *); // rax

  v4 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(this) + 24) + 768LL);
  if ( v4
    && v4() >= 0
    && (v6 = *(__int64 (__fastcall **)(DEVLOCKOBJ *, struct XDCOBJ *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v5) + 24)
                                                                     + 776LL)) != 0LL )
  {
    return v6(this, a2);
  }
  else
  {
    return 0LL;
  }
}
