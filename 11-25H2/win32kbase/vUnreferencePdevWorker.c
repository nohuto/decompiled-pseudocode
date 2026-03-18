/*
 * XREFs of vUnreferencePdevWorker @ 0x140092830
 * Callers:
 *     ?vUnreferencePdevFast@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401C3FF0 (-vUnreferencePdevFast@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 * Callees:
 *     HmgDecrementShareReferenceCountEx @ 0x14001CA40 (HmgDecrementShareReferenceCountEx.c)
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     GreDeleteSemaphore @ 0x14006D810 (GreDeleteSemaphore.c)
 *     bDeleteFont @ 0x140089B5C (bDeleteFont.c)
 *     bDeleteSurface @ 0x14008CE40 (bDeleteSurface.c)
 *     ?vDelete@EBRUSHOBJ@@QEAAXXZ @ 0x140091DA0 (-vDelete@EBRUSHOBJ@@QEAAXXZ.c)
 *     ?vDisableSurface@PDEVOBJ@@QEAAXE@Z @ 0x140092BB0 (-vDisableSurface@PDEVOBJ@@QEAAXE@Z.c)
 *     ?Free@PDEV@@SAXPEAV1@H@Z @ 0x140092D10 (-Free@PDEV@@SAXPEAV1@H@Z.c)
 *     ?vMarkSurfacesWithHDEV@@YAXPEAUHDEV__@@@Z @ 0x140092D48 (-vMarkSurfacesWithHDEV@@YAXPEAUHDEV__@@@Z.c)
 *     ?vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ @ 0x140092E18 (-vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ.c)
 *     IsUMPD_ldevUnloadImageSupported @ 0x140093094 (IsUMPD_ldevUnloadImageSupported.c)
 *     UMPD_ldevUnloadImageWrap @ 0x1400930CC (UMPD_ldevUnloadImageWrap.c)
 *     ?bAllowDDICall@PDEVOBJ@@QEBAHXZ @ 0x1400932CC (-bAllowDDICall@PDEVOBJ@@QEBAHXZ.c)
 *     ldevUnloadImage @ 0x140101E40 (ldevUnloadImage.c)
 *     PDEVOBJ_bDisableHalftoneWrap @ 0x14014ED6C (PDEVOBJ_bDisableHalftoneWrap.c)
 *     IsPDEVOBJ_bDisableHalftoneSupported @ 0x14015A764 (IsPDEVOBJ_bDisableHalftoneSupported.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z @ 0x1401C595C (-bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall vUnreferencePdevWorker(__int64 a1)
{
  HDEV v1; // rbx
  int v3; // r12d
  int v4; // r15d
  __int64 v5; // rsi
  int (*v6)(void); // rax
  int (*v7)(void); // rax
  char *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  HDEV v13; // r14
  void (__fastcall *v14)(HDEV, __int64); // rax
  struct _BASEOBJECT *v15; // rcx
  struct _BASEOBJECT *v16; // rcx
  struct _ERESOURCE *v17; // rcx
  void *v18; // rcx
  HDEV v19; // rdi
  void (__fastcall *v20)(HDEV); // rax
  __int64 i; // rdi
  HDEV v22; // [rsp+50h] [rbp+30h] BYREF
  __int64 v23; // [rsp+58h] [rbp+38h] BYREF

  v1 = *(HDEV *)a1;
  v3 = *(_DWORD *)(a1 + 8);
  v22 = v1;
  v4 = (_DWORD)v1[10] & 0x8000;
  v5 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  v6 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 1816LL);
  if ( v6 && v6() >= 0 )
  {
    v13 = v22;
    v14 = *(void (__fastcall **)(HDEV, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 1824LL);
    if ( v14 )
      v14(v13, a1);
  }
  else
  {
    *(_DWORD *)(a1 + 8) = 0;
  }
  v7 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 1848LL);
  if ( v7 )
  {
    if ( v7() >= 0 )
    {
      v19 = v22;
      v20 = *(void (__fastcall **)(HDEV))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 1856LL);
      if ( v20 )
        v20(v19);
    }
  }
  v8 = (char *)*((_QWORD *)v1 + 323);
  if ( v8 )
    GreDeleteFastMutex(v8);
  if ( ((_DWORD)v22[10] & 0x80000) == 0 )
  {
    v9 = *((_QWORD *)v1 + 179);
    if ( v9 != *(_QWORD *)(*(_QWORD *)(v5 + 3008) + 104LL) )
      bDeleteFont(v9, 1u);
    v10 = *((_QWORD *)v1 + 180);
    if ( v10 != *(_QWORD *)(*(_QWORD *)(v5 + 3008) + 104LL) )
      bDeleteFont(v10, 1u);
    v11 = *((_QWORD *)v1 + 181);
    if ( v11 != *(_QWORD *)(*(_QWORD *)(v5 + 3008) + 128LL) )
      bDeleteFont(v11, 1u);
    if ( ((_DWORD)v1[10] & 1) != 0 )
    {
      for ( i = 1456LL; i < 1504; i += 8LL )
        bDeleteSurface(*(_QWORD *)((char *)v1 + i));
    }
  }
  PDEVOBJ::vDisableSurface((PDEVOBJ *)&v22, 1u);
  if ( *((_QWORD *)v1 + 189) && (int)IsPDEVOBJ_bDisableHalftoneSupported() >= 0 )
    PDEVOBJ_bDisableHalftoneWrap(&v22);
  PDEVOBJ::vDeleteHTPATSIZEUSERAllocations((PDEVOBJ *)&v22);
  EBRUSHOBJ::vDelete((EBRUSHOBJ *)(v22 + 390));
  if ( ((_DWORD)v22[10] & 0x80000) == 0 )
  {
    if ( !*(_DWORD *)(*(_QWORD *)(W32GetSessionState(v12) + 88) + 3032LL) )
    {
      v15 = (struct _BASEOBJECT *)*((_QWORD *)v1 + 224);
      if ( v15 )
        HmgDecrementShareReferenceCountEx(v15, 0LL);
      v16 = (struct _BASEOBJECT *)*((_QWORD *)v1 + 225);
      if ( v16 )
        HmgDecrementShareReferenceCountEx(v16, 0LL);
      v23 = *((_QWORD *)v1 + 225);
      if ( v23 )
        XEPALOBJ::bDeletePalette(&v23, 0LL);
    }
    if ( *((_QWORD *)v22 + 337) != *((_QWORD *)v22 + 335) && (unsigned int)PDEVOBJ::bAllowDDICall((PDEVOBJ *)&v22) && v3 )
      (*((void (__fastcall **)(_QWORD))v22 + 337))(*((_QWORD *)v22 + 223));
    if ( v4 )
    {
      if ( (int)IsUMPD_ldevUnloadImageSupported() >= 0 )
        UMPD_ldevUnloadImageWrap(*((_QWORD *)v1 + 222));
    }
    else
    {
      v18 = (void *)*((_QWORD *)v1 + 222);
      if ( v18 )
        ldevUnloadImage(v18);
    }
  }
  if ( ((_DWORD)v1[10] & 0x10000) == 0 )
  {
    v17 = (struct _ERESOURCE *)*((_QWORD *)v1 + 6);
    if ( v17 )
      GreDeleteSemaphore(v17);
  }
  if ( ((_DWORD)v1[10] & 1) != 0 )
    GreDeleteSemaphore(*((PERESOURCE *)v1 + 7));
  vMarkSurfacesWithHDEV(v22);
  PDEV::Free((struct PDEV *)v1, v4);
}
