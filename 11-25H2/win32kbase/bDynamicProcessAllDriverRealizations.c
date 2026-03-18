/*
 * XREFs of bDynamicProcessAllDriverRealizations @ 0x140071620
 * Callers:
 *     bDynamicModeChange @ 0x1401793D8 (bDynamicModeChange.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x1401CA198 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     pProcessDfbSurfaces2 @ 0x140070C90 (pProcessDfbSurfaces2.c)
 *     ?ulGlobalBrushUnique@BRUSH@@QEAAKXZ @ 0x140071BD0 (-ulGlobalBrushUnique@BRUSH@@QEAAKXZ.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x140071D90 (vDynamicConvertNewSurfaceDCs.c)
 *     HmgSafeNextObjt @ 0x1400726E0 (HmgSafeNextObjt.c)
 *     PDEVOBJ_bDisableHalftoneWrap @ 0x14014ED6C (PDEVOBJ_bDisableHalftoneWrap.c)
 *     IsPDEVOBJ_bDisableHalftoneSupported @ 0x14015A764 (IsPDEVOBJ_bDisableHalftoneSupported.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall bDynamicProcessAllDriverRealizations(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rbx
  unsigned int v6; // r14d
  bool v7; // si
  __int64 i; // rcx
  unsigned int v9; // r15d
  __int64 v10; // rdx
  __int64 j; // rcx
  __int64 v12; // rbx
  BRUSH *v13; // rcx
  unsigned int v14; // esi
  int (*v16)(void); // rax
  __int64 v17; // rbx
  void (__fastcall *v18)(__int64); // rax
  __int64 v19; // [rsp+70h] [rbp+40h] BYREF
  __int64 v20; // [rsp+78h] [rbp+48h] BYREF
  __int64 v21; // [rsp+88h] [rbp+58h] BYREF

  v19 = 0LL;
  v20 = 0LL;
  v4 = a2;
  v21 = a1;
  v6 = 1;
  v7 = _bittest((const signed __int32 *)(a1 + 2112), 0x10u)
    && a2
    && _bittest((const signed __int32 *)(a2 + 2112), 0x10u);
  for ( i = 0LL; ; i = v9 )
  {
    LOBYTE(a2) = 5;
    v9 = HmgSafeNextObjt(i, a2, &v19);
    if ( !v9 )
      break;
    if ( *(_QWORD *)(v19 + 48) == a1
      && (*(_DWORD *)(v19 + 112) & 0x800000) != 0
      && !*(_QWORD *)(v19 + 560)
      && *(_QWORD *)(v19 + 40)
      && (a3 || (*(_DWORD *)(v19 + 116) & 1) == 0)
      && (!v7 || (*(_DWORD *)(v19 + 116) & 4) == 0) )
    {
      v6 &= -(pProcessDfbSurfaces2(v19, 0LL, 0, 1, v4) != 0);
    }
  }
  vDynamicConvertNewSurfaceDCs(a1, 0LL);
  if ( v6 )
  {
    if ( *(_QWORD *)(v21 + 3024) )
    {
      v16 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 1864LL);
      if ( v16 )
      {
        if ( v16() >= 0 )
        {
          v17 = v21;
          v10 = *(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24);
          v18 = *(void (__fastcall **)(__int64))(v10 + 1872);
          if ( v18 )
            v18(v17);
        }
      }
    }
    for ( j = 0LL; ; j = v14 )
    {
      LOBYTE(v10) = 16;
      v14 = HmgSafeNextObjt(j, v10, &v20);
      if ( !v14 )
        break;
      v12 = v20;
      *(_DWORD *)(v20 + 112) = -1;
      *(_DWORD *)(v12 + 44) = BRUSH::ulGlobalBrushUnique(v13);
    }
    if ( *(_QWORD *)(a1 + 1512) && (int)IsPDEVOBJ_bDisableHalftoneSupported() >= 0 )
      PDEVOBJ_bDisableHalftoneWrap(&v21);
  }
  return v6;
}
