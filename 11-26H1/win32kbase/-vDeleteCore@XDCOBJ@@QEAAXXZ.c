/*
 * XREFs of ?vDeleteCore@XDCOBJ@@QEAAXXZ @ 0x14003453C
 * Callers:
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1400372F0 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?bDelete@XDCOBJ@@QEAA_NK@Z @ 0x14003E5B4 (-bDelete@XDCOBJ@@QEAA_NK@Z.c)
 * Callees:
 *     ?vDelete@EBRUSHOBJ@@QEAAXXZ @ 0x140033520 (-vDelete@EBRUSHOBJ@@QEAAXXZ.c)
 *     RFONT_vMakeInactive @ 0x140034770 (RFONT_vMakeInactive.c)
 *     ?hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z @ 0x140034A80 (-hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z.c)
 *     ?FreeObject@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAXK@Z @ 0x140034CA0 (-FreeObject@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAXK@Z.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall XDCOBJ::vDeleteCore(DC **this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  int (*v4)(void); // rax
  void (__fastcall *v5)(DC **); // rax
  int (*v6)(void); // rax
  __int64 v7; // rcx
  char *v8; // rcx
  __int64 *v9; // rdi
  __int64 v10; // rbp
  __int64 *v11; // rsi
  void (__fastcall *v12)(__int64); // rax

  RFONT_vMakeInactive(*((_QWORD *)*this + 220));
  EBRUSHOBJ::vDelete((DC *)((char *)*this + 1200));
  EBRUSHOBJ::vDelete((DC *)((char *)*this + 1336));
  EBRUSHOBJ::vDelete((DC *)((char *)*this + 1472));
  EBRUSHOBJ::vDelete((DC *)((char *)*this + 1608));
  DC::hpath(*this, 0LL);
  v3 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v2) + 24);
  v4 = *(int (**)(void))(v3 + 1984);
  if ( v4 )
  {
    if ( v4() >= 0 )
    {
      v3 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v3) + 24);
      v5 = *(void (__fastcall **)(DC **))(v3 + 1992);
      if ( v5 )
        v5(this);
    }
  }
  v6 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v3) + 24) + 1808LL);
  if ( v6 && v6() >= 0 )
  {
    v9 = (__int64 *)*((_QWORD *)*this + 259);
    while ( v9 )
    {
      v10 = *v9;
      v11 = v9;
      v9 = (__int64 *)v9[1];
      v12 = *(void (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v7) + 24) + 1816LL);
      if ( v12 )
        v12(v10);
      GreDeleteFastMutex(v11);
    }
  }
  v8 = (char *)*((_QWORD *)*this + 37);
  if ( v8 && v8 != (char *)*this + 264 )
  {
    GreDeleteFastMutex(v8);
    *((_QWORD *)*this + 37) = 0LL;
  }
  FreeObject(this[2], *this, 1u);
  *this = 0LL;
}
