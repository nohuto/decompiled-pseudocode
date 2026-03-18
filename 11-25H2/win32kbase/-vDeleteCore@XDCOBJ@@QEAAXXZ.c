/*
 * XREFs of ?vDeleteCore@XDCOBJ@@QEAAXXZ @ 0x140178E6C
 * Callers:
 *     ?vDelete@XDCOBJ@@QEAAXK@Z @ 0x1400D9D40 (-vDelete@XDCOBJ@@QEAAXK@Z.c)
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1401245F0 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?vDelete@EBRUSHOBJ@@QEAAXXZ @ 0x140091DA0 (-vDelete@EBRUSHOBJ@@QEAAXXZ.c)
 *     ?hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z @ 0x1400C6250 (-hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z.c)
 *     RFONT_vMakeInactive @ 0x1400DE05C (RFONT_vMakeInactive.c)
 *     HmgFree @ 0x140177250 (HmgFree.c)
 *     Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline @ 0x1401C4090 (Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline.c)
 *     HmgFreeFast @ 0x1401C56C0 (HmgFreeFast.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall XDCOBJ::vDeleteCore(DC **this, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  int (*v7)(void); // rax
  void (__fastcall *v8)(DC **); // rax
  int (*v9)(void); // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  char *v13; // rsi
  __int64 v14; // rbp
  void (__fastcall *v15)(__int64); // rax
  char *v16; // rcx

  RFONT_vMakeInactive(*((_QWORD *)*this + 220), a2);
  EBRUSHOBJ::vDelete((DC *)((char *)*this + 1200));
  EBRUSHOBJ::vDelete((DC *)((char *)*this + 1336));
  EBRUSHOBJ::vDelete((DC *)((char *)*this + 1472));
  EBRUSHOBJ::vDelete((DC *)((char *)*this + 1608));
  DC::hpath(*this, 0LL);
  v6 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v4, v3) + 24);
  v7 = *(int (**)(void))(v6 + 2008);
  if ( v7 )
  {
    if ( v7() >= 0 )
    {
      v6 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v6, v5) + 24);
      v8 = *(void (__fastcall **)(DC **))(v6 + 2016);
      if ( v8 )
        v8(this);
    }
  }
  v9 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v6, v5) + 24) + 1832LL);
  if ( v9 && v9() >= 0 )
  {
    v12 = *((_QWORD *)*this + 259);
    while ( v12 )
    {
      v13 = (char *)v12;
      v12 = *(_QWORD *)(v12 + 8);
      v14 = *(_QWORD *)v13;
      v15 = *(void (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v11, v10) + 24) + 1840LL);
      if ( v15 )
        v15(v14);
      GreDeleteFastMutex(v13);
    }
  }
  v16 = (char *)*((_QWORD *)*this + 37);
  if ( v16 && v16 != (char *)*this + 264 )
  {
    GreDeleteFastMutex(v16);
    *((_QWORD *)*this + 37) = 0LL;
  }
  if ( (unsigned int)Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline() )
    HmgFreeFast(this[2], *(_QWORD *)*this);
  else
    HmgFree(*(_QWORD *)*this);
  *this = 0LL;
}
