/*
 * XREFs of ?DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z @ 0x14029F0F4
 * Callers:
 *     DxgkSetIndirectDisplayRenderAdapter @ 0x1401B863C (DxgkSetIndirectDisplayRenderAdapter.c)
 *     _lambda_eeea5582e93711493668b9eafd12873f_::operator() @ 0x1401CC7CC (_lambda_eeea5582e93711493668b9eafd12873f_--operator().c)
 *     _lambda_ef85c4d3ba2b9aeb28478c22401d75d8_::operator() @ 0x1401CD050 (_lambda_ef85c4d3ba2b9aeb28478c22401d75d8_--operator().c)
 *     DxgkWaitForVerticalBlankEventInternal @ 0x1402902F0 (DxgkWaitForVerticalBlankEventInternal.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x14029E110 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x14029FF9C (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 *     ?RunForAdapter@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_METADATA@@@@SAJPEAVDXGADAPTER@@_NIPEAU_D3DKMT_OUTPUTDUPL_METADATA@@P6AJPEAVOUTPUTDUPL_MGR@@2@Z@Z @ 0x1402A1824 (-RunForAdapter@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_METADATA@@@@SAJPEAVDXGADAPTER@@_NIPEAU_.c)
 *     DxgkModifyVSyncWaiterInternal @ 0x1402A1E80 (DxgkModifyVSyncWaiterInternal.c)
 *     ?RunForAdapter@?$OutputDuplThunks@PEBU_DXGKARG_SETPOINTERPOSITION@@@@SAJPEAVDXGADAPTER@@_NIPEBU_DXGKARG_SETPOINTERPOSITION@@P8OUTPUTDUPL_MGR@@EAAX2@Z@Z @ 0x1402A2CE8 (-RunForAdapter@-$OutputDuplThunks@PEBU_DXGKARG_SETPOINTERPOSITION@@@@SAJPEAVDXGADAPTER@@_NIPEBU_.c)
 *     ?RunForAdapter@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJPEAVDXGADAPTER@@_NIPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@P6AJPEAVOUTPUTDUPL_MGR@@2@Z@Z @ 0x1402A3E84 (-RunForAdapter@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJPEAVDXGADA.c)
 *     DxgkGetAdapterDeviceDesc @ 0x1402AD2E0 (DxgkGetAdapterDeviceDesc.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1402C6890 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@JW4START_ADAPTER_FAILURE_REASON@@@Z @ 0x140358108 (-AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CO.c)
 *     ?DxgkQueryClockCalibrationInternal@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYCLOCKCALIBRATION@@PEAVDXGADAPTER@@@Z @ 0x14038AB98 (-DxgkQueryClockCalibrationInternal@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYCLOCKCALIBRATION@@PEAVDX.c)
 *     ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@ZPEBU2@PEBU3@II@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@Z23IIP6AJPEAV3@423II@Z@Z @ 0x14038F6C0 (-RunForAdapter@-$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DX.c)
 * Callees:
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x140017080 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?SetPairedRenderAdapter@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@PEBU_GUID@@@Z @ 0x1401A4CE8 (-SetPairedRenderAdapter@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@PEBU_GUID@@@Z.c)
 *     ?DxgkpFindDefaultRenderAdapterForSession@@YAJAEAU_LUID@@AEAVDXGADAPTER_REFERENCE@@PEAKAEAE@Z @ 0x14042C8BC (-DxgkpFindDefaultRenderAdapterForSession@@YAJAEAU_LUID@@AEAVDXGADAPTER_REFERENCE@@PEAKAEAE@Z.c)
 */

__int64 __fastcall DxgkpGetIndirectDisplayPairedAdapter(struct DXGADAPTER *a1, char a2, DXGADAPTER **a3)
{
  const struct _GUID *v4; // rdi
  __int64 v8; // r14
  DXGFASTMUTEX *v9; // rcx
  volatile signed __int64 *v10; // r14
  bool v11; // cf
  int DefaultRenderAdapterForSession; // eax
  __int64 v13; // r14
  DXGFASTMUTEX *v14; // [rsp+50h] [rbp-10h] BYREF
  char v15; // [rsp+58h] [rbp-8h]
  unsigned __int8 v16; // [rsp+90h] [rbp+30h] BYREF
  int v17; // [rsp+A0h] [rbp+40h] BYREF
  struct _LUID v18; // [rsp+A8h] [rbp+48h] BYREF

  v4 = 0LL;
  if ( *a3 )
    DXGADAPTER::ReleaseReference(*a3);
  *a3 = 0LL;
  if ( !a1 || (*((_DWORD *)a1 + 111) & 0x100) == 0 )
  {
    WdLogSingleEntry2(2LL, a1, -1073741811LL);
    WdLogGlobalForLineNumber = 8925;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified adapter 0x%I64x is not an Indirect Display Adapter, returning 0x%I64x.",
      (__int64)a1,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v8 = *((_QWORD *)a1 + 395);
  v15 = 0;
  v9 = (DXGFASTMUTEX *)(v8 + 200);
  v14 = (DXGFASTMUTEX *)(v8 + 200);
  if ( v8 == -200 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 628;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 628LL, 0LL, 0LL, 0LL, 0LL);
    v9 = v14;
  }
  if ( DXGFASTMUTEX::IsOwner(v9) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 635;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 635LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v14);
  v10 = *(volatile signed __int64 **)(v8 + 248);
  if ( *a3 )
    DXGADAPTER::ReleaseReference(*a3);
  *a3 = (DXGADAPTER *)v10;
  if ( v10 )
  {
    _InterlockedIncrement64(v10 + 3);
    a3[1] = (DXGADAPTER *)-1LL;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v14);
  if ( *a3 && a2 && (*((_DWORD *)*a3 + 50) != 1 || *((_BYTE *)*a3 + 3057)) )
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)a3, 0LL);
  if ( *a3 )
    return 0LL;
  v11 = *(_QWORD *)((char *)a1 + 4876) != 0LL;
  v17 = *((_DWORD *)a1 + 1221);
  v18 = 0LL;
  v16 = 0;
  DefaultRenderAdapterForSession = DxgkpFindDefaultRenderAdapterForSession(
                                     &v18,
                                     (struct DXGADAPTER_REFERENCE *)a3,
                                     (unsigned int *)((unsigned __int64)&v17 & -(__int64)v11),
                                     &v16);
  v13 = DefaultRenderAdapterForSession;
  if ( DefaultRenderAdapterForSession >= 0 )
  {
    if ( v16 )
      v4 = (const struct _GUID *)((char *)*a3 + 316);
    ADAPTER_DISPLAY::SetPairedRenderAdapter(*((ADAPTER_DISPLAY **)a1 + 395), *a3, v4);
    return 0LL;
  }
  WdLogSingleEntry2(2LL, a1, DefaultRenderAdapterForSession);
  WdLogGlobalForLineNumber = 8968;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Failed to find the render adapter for display only adapter 0x%I64x (Status = 0x%I64x).",
    (__int64)a1,
    v13,
    0LL,
    0LL,
    0LL);
  return (unsigned int)v13;
}
