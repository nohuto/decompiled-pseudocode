/*
 * XREFs of ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1402C6890
 * Callers:
 *     DxgkCreateLightweightDeviceAndContext @ 0x1401B5348 (DxgkCreateLightweightDeviceAndContext.c)
 *     DxgkGetSharedPrimaryHandle @ 0x1401B5F10 (DxgkGetSharedPrimaryHandle.c)
 *     DxgkNeedToEnableCddPrimary @ 0x1401B6F70 (DxgkNeedToEnableCddPrimary.c)
 *     DxgkOpenVerticalBlankEventInternal @ 0x1401B7D10 (DxgkOpenVerticalBlankEventInternal.c)
 *     DxgkChangeVideoMemoryReservationInternal @ 0x1401BADEC (DxgkChangeVideoMemoryReservationInternal.c)
 *     ?DxgkCddSetPalette@@YAJQEAXPEBU_DXGKARG_SETPALETTE@@@Z @ 0x1401BD5A0 (-DxgkCddSetPalette@@YAJQEAXPEBU_DXGKARG_SETPALETTE@@@Z.c)
 *     ?PairedBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJPEAUCSM_BUFFER_INFO@@_NPEA_K@Z @ 0x1401BF2C0 (-PairedBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJPEAUCSM_BUFFER_INFO@@_NPEA_K@Z.c)
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1401CE964 (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 *     DxgkGetMultisampleMethodList @ 0x1401D37F0 (DxgkGetMultisampleMethodList.c)
 *     NtDxgkIsFeatureEnabled @ 0x1401DB020 (NtDxgkIsFeatureEnabled.c)
 *     DxgkSetStablePowerState @ 0x1401F8F00 (DxgkSetStablePowerState.c)
 *     DxgkGetScanLine @ 0x1402A3580 (DxgkGetScanLine.c)
 *     DxgkGetAdapterDeviceDesc @ 0x1402AD2E0 (DxgkGetAdapterDeviceDesc.c)
 *     ?CreatePeriodicMonitoredFenceNotificationInternal@@YAJPEAVDXGADAPTER@@0PEAVDXGSYNCOBJECT@@PEBU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@_N@Z @ 0x1402BDBF8 (-CreatePeriodicMonitoredFenceNotificationInternal@@YAJPEAVDXGADAPTER@@0PEAVDXGSYNCOBJECT@@PEBU_D.c)
 *     DxgkQueryVideoMemoryInfo @ 0x1402C0A40 (DxgkQueryVideoMemoryInfo.c)
 *     DxgkQueryStatisticsInternal @ 0x1402C12E8 (DxgkQueryStatisticsInternal.c)
 *     DxgkGetPresentHistoryInternal @ 0x1402C4DC0 (DxgkGetPresentHistoryInternal.c)
 *     ?GetCddDeviceAndContext@SESSION_ADAPTER@@QEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@E@Z @ 0x1403670F4 (-GetCddDeviceAndContext@SESSION_ADAPTER@@QEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQ.c)
 *     ?DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x14036EF20 (-DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_G.c)
 *     DxgkGetMultiPlaneOverlayCaps @ 0x140391CA0 (DxgkGetMultiPlaneOverlayCaps.c)
 *     DxgkGetPostCompositionCaps @ 0x140392370 (DxgkGetPostCompositionCaps.c)
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x14039A290 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     ?DxgkCddQueryInterface@@YAJPEAU_DXGKCDD_INTERFACE@@PEAK@Z @ 0x1403C7AF4 (-DxgkCddQueryInterface@@YAJPEAU_DXGKCDD_INTERFACE@@PEAK@Z.c)
 *     DxgkReserveGpuVirtualAddress @ 0x1403C86B0 (DxgkReserveGpuVirtualAddress.c)
 *     DxgkFreeGpuVirtualAddress @ 0x1403D1110 (DxgkFreeGpuVirtualAddress.c)
 *     ?DxgkCddSetOrigin@@YAXQEAXIQEBUtagPOINT@@@Z @ 0x1403EDD50 (-DxgkCddSetOrigin@@YAXQEAXIQEBUtagPOINT@@@Z.c)
 *     ?DxgkCddGetDriverCaps@@YAJQEAXPEAU_DXGK_DRIVERCAPS@@PEAPEAXPEA_K1@Z @ 0x1403F9B70 (-DxgkCddGetDriverCaps@@YAJQEAXPEAU_DXGK_DRIVERCAPS@@PEAPEAXPEA_K1@Z.c)
 *     ?DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z @ 0x140406624 (-DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z.c)
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x140417C20 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     DxgkQueryModeListCacheLuid @ 0x140420FD0 (DxgkQueryModeListCacheLuid.c)
 *     DxgkGetPresentHistoryReadyEvent @ 0x140423AA0 (DxgkGetPresentHistoryReadyEvent.c)
 *     ?DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x140433430 (-DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     DxgkGetDisplayModeList @ 0x140438C50 (DxgkGetDisplayModeList.c)
 *     DxgkEscape @ 0x14043CE60 (DxgkEscape.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x14004611C (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z @ 0x14029F0F4 (-DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z.c)
 */

__int64 __fastcall DxgkpGetPairingAdapters(
        struct DXGADAPTER *a1,
        unsigned int a2,
        struct DXGADAPTER **a3,
        unsigned __int64 *a4,
        struct DXGADAPTER **a5,
        unsigned __int64 *a6,
        char a7)
{
  __int64 v8; // rdi
  struct DXGADAPTER *v9; // rsi
  __int64 v12; // rax
  unsigned __int64 v13; // r12
  int IndirectDisplayPairedAdapter; // eax
  __int64 v16; // rdi
  volatile signed __int64 *v17; // rdi
  DXGADAPTER *v18; // [rsp+50h] [rbp-20h] BYREF
  unsigned __int64 v19; // [rsp+58h] [rbp-18h]
  _BYTE v20[16]; // [rsp+60h] [rbp-10h] BYREF
  unsigned __int64 v21; // [rsp+A0h] [rbp+30h]
  unsigned int v22; // [rsp+A0h] [rbp+30h]

  v8 = a2;
  v9 = 0LL;
  v18 = 0LL;
  if ( !a1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8820;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_pAdapter != NULL", 8820LL, 0LL, 0LL, 0LL, 0LL);
  }
  v12 = *((_QWORD *)a1 + 395);
  if ( v12 )
  {
    if ( (unsigned int)v8 >= *(_DWORD *)(v12 + 96) )
    {
      WdLogSingleEntry2(2LL, v8, -1073741811LL);
      WdLogGlobalForLineNumber = 8833;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid VidPnSourceId (0x%I64x) specified, returning 0x%I64x",
        v8,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      return 3221225485LL;
    }
    v9 = a1;
    _InterlockedIncrement64((volatile signed __int64 *)a1 + 3);
    v13 = -1LL;
  }
  else
  {
    if ( a5 )
    {
      WdLogSingleEntry2(4LL, a1, -1073741637LL);
      WdLogGlobalForLineNumber = 8846;
      return 3221225659LL;
    }
    v13 = v21;
  }
  if ( !a3 )
  {
LABEL_10:
    if ( a5 )
    {
      *a5 = v9;
      v9 = 0LL;
      *a6 = v13;
    }
    v18 = 0LL;
    if ( v9 )
      DXGADAPTER::ReleaseReference(v9);
    return 0LL;
  }
  if ( *((_QWORD *)a1 + 396) )
  {
    v18 = a1;
    _InterlockedIncrement64((volatile signed __int64 *)a1 + 3);
    v19 = -1LL;
LABEL_9:
    *a3 = v18;
    *a4 = v19;
    v18 = 0LL;
    goto LABEL_10;
  }
  if ( (*((_DWORD *)a1 + 111) & 0x100) == 0 )
  {
    DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v20);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
    v17 = (volatile signed __int64 *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 126);
    v18 = (DXGADAPTER *)v17;
    if ( v17 )
    {
      _InterlockedIncrement64(v17 + 3);
      v19 = -1LL;
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v20);
      goto LABEL_9;
    }
    WdLogSingleEntry2(2LL, a1, -1073741637LL);
    WdLogGlobalForLineNumber = 8889;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"WARP render only adapter is not ready to be used with display only adapter 0x%I64x, returning 0x%I64x.",
      (__int64)a1,
      -1073741637LL,
      0LL,
      0LL,
      0LL);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v20);
    v18 = 0LL;
    if ( v9 )
      DXGADAPTER::ReleaseReference(v9);
    return 3221225659LL;
  }
  IndirectDisplayPairedAdapter = DxgkpGetIndirectDisplayPairedAdapter(a1, a7, &v18);
  v22 = IndirectDisplayPairedAdapter;
  if ( IndirectDisplayPairedAdapter >= 0 )
    goto LABEL_9;
  v16 = IndirectDisplayPairedAdapter;
  WdLogSingleEntry2(2LL, a1, IndirectDisplayPairedAdapter);
  WdLogGlobalForLineNumber = 8875;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Failed to get the paired render adapter for indirect display adapter 0x%I64x, (Status = 0x%I64x).",
    (__int64)a1,
    v16,
    0LL,
    0LL,
    0LL);
  if ( v18 )
    DXGADAPTER::ReleaseReference(v18);
  v18 = 0LL;
  if ( v9 )
    DXGADAPTER::ReleaseReference(v9);
  return v22;
}
