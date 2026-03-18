/*
 * XREFs of vUnreferencePdevWorker @ 0x1400C5E70
 * Callers:
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C97A0 (-vUnreferencePdev@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 * Callees:
 *     ldevUnloadImage @ 0x14000D750 (ldevUnloadImage.c)
 *     HmgDecrementShareReferenceCount @ 0x140019C10 (HmgDecrementShareReferenceCount.c)
 *     ?vDelete@EBRUSHOBJ@@QEAAXXZ @ 0x140033520 (-vDelete@EBRUSHOBJ@@QEAAXXZ.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z @ 0x1400C49EC (-bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z.c)
 *     bDeleteFont @ 0x1400C5ABC (bDeleteFont.c)
 *     ?Free@PDEV@@SAXPEAV1@H@Z @ 0x1400C61E0 (-Free@PDEV@@SAXPEAV1@H@Z.c)
 *     ?vMarkSurfacesWithHDEV@@YAXPEAUHDEV__@@@Z @ 0x1400C6218 (-vMarkSurfacesWithHDEV@@YAXPEAUHDEV__@@@Z.c)
 *     ?vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ @ 0x1400C6384 (-vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ.c)
 *     GreDeleteSemaphore @ 0x1400C6C70 (GreDeleteSemaphore.c)
 *     UMPD_ldevUnloadImageWrap @ 0x1400C79D8 (UMPD_ldevUnloadImageWrap.c)
 *     IsUMPD_ldevUnloadImageSupported @ 0x1400C7A14 (IsUMPD_ldevUnloadImageSupported.c)
 *     ?bDeleteSurface@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHSURF__@@@Z @ 0x14017D2A0 (-bDeleteSurface@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHSURF__@@@Z.c)
 *     ?bAllowDDICall@PDEVOBJ@@QEBAHXZ @ 0x14017F310 (-bAllowDDICall@PDEVOBJ@@QEBAHXZ.c)
 *     IsPDEVOBJ_bDisableHalftoneSupported @ 0x14018CEE0 (IsPDEVOBJ_bDisableHalftoneSupported.c)
 *     ?vDisableSurface@PDEVOBJ@@QEAAXE@Z @ 0x1401B9140 (-vDisableSurface@PDEVOBJ@@QEAAXE@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall vUnreferencePdevWorker(__int64 a1)
{
  HDEV v1; // rbx
  int v3; // r12d
  int v4; // r15d
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rcx
  int (*v8)(void); // rax
  HDEV v9; // r14
  void (__fastcall *v10)(HDEV, __int64); // rax
  int (*v11)(void); // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  HDEV v16; // rdi
  void (__fastcall *v17)(HDEV); // rax
  char *v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  unsigned int *v22; // rdx
  unsigned int *v23; // rdx
  struct _ERESOURCE *v24; // rcx
  __int64 v25; // rcx
  void (__fastcall *v26)(HDEV *); // rax
  __int64 *v27; // rcx
  __int64 i; // rdi
  HDEV v29; // [rsp+50h] [rbp+30h] BYREF
  __int64 v30; // [rsp+58h] [rbp+38h] BYREF

  v1 = *(HDEV *)a1;
  v3 = *(_DWORD *)(a1 + 8);
  v29 = v1;
  v4 = (_DWORD)v1[10] & 0x8000;
  v5 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  v7 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v6) + 24);
  v8 = *(int (**)(void))(v7 + 1792);
  if ( v8 && v8() >= 0 )
  {
    v9 = v29;
    v10 = *(void (__fastcall **)(HDEV, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v7) + 24) + 1800LL);
    if ( v10 )
      v10(v9, a1);
  }
  else
  {
    *(_DWORD *)(a1 + 8) = 0;
  }
  v11 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v7) + 24) + 1824LL);
  if ( v11 )
  {
    if ( v11() >= 0 )
    {
      v16 = v29;
      v12 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v15) + 24);
      v17 = *(void (__fastcall **)(HDEV))(v12 + 1832);
      if ( v17 )
        v17(v16);
    }
  }
  v18 = (char *)*((_QWORD *)v1 + 323);
  if ( v18 )
    GreDeleteFastMutex(v18, v12, v13, v14);
  if ( ((_DWORD)v29[10] & 0x80000) == 0 )
  {
    v19 = *((_QWORD *)v1 + 179);
    if ( v19 != *(_QWORD *)(*(_QWORD *)(v5 + 3088) + 104LL) )
      bDeleteFont(v19, 1u);
    v20 = *((_QWORD *)v1 + 180);
    if ( v20 != *(_QWORD *)(*(_QWORD *)(v5 + 3088) + 104LL) )
      bDeleteFont(v20, 1u);
    v21 = *((_QWORD *)v1 + 181);
    if ( v21 != *(_QWORD *)(*(_QWORD *)(v5 + 3088) + 128LL) )
      bDeleteFont(v21, 1u);
    if ( ((_DWORD)v1[10] & 1) != 0 )
    {
      for ( i = 1456LL; i < 1504; i += 8LL )
        bDeleteSurface((struct Gre::Base::SESSION_GLOBALS *)v5, *(HSURF *)((char *)v1 + i));
    }
  }
  PDEVOBJ::vDisableSurface((PDEVOBJ *)&v29, 1u);
  if ( *((_QWORD *)v1 + 189) )
  {
    if ( (int)IsPDEVOBJ_bDisableHalftoneSupported() >= 0 )
    {
      v26 = *(void (__fastcall **)(HDEV *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v25) + 24) + 1544LL);
      if ( v26 )
        v26(&v29);
    }
  }
  PDEVOBJ::vDeleteHTPATSIZEUSERAllocations((PDEVOBJ *)&v29);
  EBRUSHOBJ::vDelete((EBRUSHOBJ *)(v29 + 390));
  if ( ((_DWORD)v29[10] & 0x80000) == 0 )
  {
    v22 = (unsigned int *)*((_QWORD *)v1 + 224);
    if ( v22 )
      HmgDecrementShareReferenceCount(v5, v22);
    v23 = (unsigned int *)*((_QWORD *)v1 + 225);
    if ( v23 )
      HmgDecrementShareReferenceCount(v5, v23);
    v30 = *((_QWORD *)v1 + 225);
    if ( v30 )
      XEPALOBJ::bDeletePalette((XEPALOBJ *)&v30, 0);
    if ( *((_QWORD *)v29 + 337) != *((_QWORD *)v29 + 335) && (unsigned int)PDEVOBJ::bAllowDDICall((PDEVOBJ *)&v29) && v3 )
      (*((void (__fastcall **)(_QWORD))v29 + 337))(*((_QWORD *)v29 + 223));
    if ( v4 )
    {
      if ( (int)IsUMPD_ldevUnloadImageSupported() >= 0 )
        UMPD_ldevUnloadImageWrap(*((_QWORD *)v1 + 222));
    }
    else
    {
      v27 = (__int64 *)*((_QWORD *)v1 + 222);
      if ( v27 )
        ldevUnloadImage(v27);
    }
  }
  if ( ((_DWORD)v1[10] & 0x10000) == 0 )
  {
    v24 = (struct _ERESOURCE *)*((_QWORD *)v1 + 6);
    if ( v24 )
      GreDeleteSemaphore(v24);
  }
  if ( ((_DWORD)v1[10] & 1) != 0 )
    GreDeleteSemaphore(*((PERESOURCE *)v1 + 7));
  vMarkSurfacesWithHDEV(v29);
  PDEV::Free((struct PDEV *)v1, v4);
}
