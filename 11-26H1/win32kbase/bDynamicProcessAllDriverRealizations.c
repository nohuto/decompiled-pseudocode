/*
 * XREFs of bDynamicProcessAllDriverRealizations @ 0x140030BE0
 * Callers:
 *     bDynamicModeChange @ 0x140030E68 (bDynamicModeChange.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x14014E538 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     ?GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z @ 0x1400151C0 (-GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x14002F1A0 (vDynamicConvertNewSurfaceDCs.c)
 *     pProcessDfbSurfaces2 @ 0x140030400 (pProcessDfbSurfaces2.c)
 *     HmgSafeNextObjt @ 0x140032210 (HmgSafeNextObjt.c)
 *     ?ulGlobalBrushUnique@BRUSH@@QEAAKXZ @ 0x14003293C (-ulGlobalBrushUnique@BRUSH@@QEAAKXZ.c)
 *     IsPDEVOBJ_bDisableHalftoneSupported @ 0x14018CEE0 (IsPDEVOBJ_bDisableHalftoneSupported.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall bDynamicProcessAllDriverRealizations(__int64 a1, __int64 a2, int a3)
{
  unsigned __int8 v4; // cf
  __int64 v6; // rdi
  unsigned int v7; // r14d
  bool v8; // r12
  unsigned int v9; // ebx
  __int64 v10; // rsi
  __int64 v11; // r10
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 i; // rcx
  __int64 v16; // rbx
  BRUSH *v17; // rcx
  unsigned int v18; // esi
  __int64 v20; // rcx
  void (__fastcall *v21)(__int64 *); // rax
  int (*v22)(void); // rax
  __int64 v23; // rcx
  __int64 v24; // rbx
  void (__fastcall *v25)(__int64); // rax
  __int64 v26; // [rsp+70h] [rbp+40h] BYREF
  __int64 v27; // [rsp+78h] [rbp+48h] BYREF
  __int64 v28; // [rsp+88h] [rbp+58h] BYREF

  v28 = a1;
  v4 = _bittest((const signed __int32 *)(a1 + 2112), 0x10u);
  v27 = 0LL;
  v6 = a1;
  v7 = 1;
  v8 = v4 && a2 && _bittest((const signed __int32 *)(a2 + 2112), 0x10u);
  v9 = 0;
LABEL_4:
  v10 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  v26 = 0LL;
  while ( 1 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**(_QWORD **)(v10 + 8) + 32LL))(
           *(_QWORD *)(v10 + 8),
           v9,
           &v26);
    if ( !v9 )
      break;
    if ( *(_BYTE *)(v26 + 14) == 5 )
    {
      v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v10 + 8) + 96LL))(*(_QWORD *)(v10 + 8), v9);
      a1 = *(unsigned __int8 *)(v26 + 12);
      v12 = (unsigned __int16)v9 | (unsigned __int64)(*(unsigned __int16 *)(v26 + 12) << 16);
      if ( (_DWORD)v12 == (unsigned int)*(_QWORD *)v11 )
      {
        if ( v12 )
        {
          if ( *(_QWORD *)(v11 + 48) == v6
            && (*(_DWORD *)(v11 + 112) & 0x800000) != 0
            && !*(_QWORD *)(v11 + 560)
            && *(_QWORD *)(v11 + 40)
            && (a3 || (*(_DWORD *)(v11 + 116) & 1) == 0)
            && (!v8 || (*(_DWORD *)(v11 + 116) & 4) == 0) )
          {
            a1 = (unsigned int)-(pProcessDfbSurfaces2(v11, 0LL, 0, 1, a2) != 0);
            v7 &= a1;
          }
          goto LABEL_4;
        }
      }
      else
      {
        GrepCaptureLiveMemoryDump(400LL, 47LL, v26, *(_QWORD *)v11, v12, 0);
      }
    }
  }
  vDynamicConvertNewSurfaceDCs(v6, 0LL);
  if ( v7 )
  {
    if ( *(_QWORD *)(v28 + 3024) )
    {
      v22 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v14) + 24) + 1840LL);
      if ( v22 )
      {
        if ( v22() >= 0 )
        {
          v24 = v28;
          v13 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v23) + 24);
          v25 = *(void (__fastcall **)(__int64))(v13 + 1848);
          if ( v25 )
            v25(v24);
        }
      }
    }
    for ( i = 0LL; ; i = v18 )
    {
      LOBYTE(v13) = 16;
      v18 = HmgSafeNextObjt(i, v13, &v27);
      if ( !v18 )
        break;
      v16 = v27;
      *(_DWORD *)(v27 + 112) = -1;
      *(_DWORD *)(v16 + 44) = BRUSH::ulGlobalBrushUnique(v17);
    }
    if ( *(_QWORD *)(v6 + 1512) )
    {
      if ( (int)IsPDEVOBJ_bDisableHalftoneSupported() >= 0 )
      {
        v21 = *(void (__fastcall **)(__int64 *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v20) + 24) + 1544LL);
        if ( v21 )
          v21(&v28);
      }
    }
  }
  return v7;
}
