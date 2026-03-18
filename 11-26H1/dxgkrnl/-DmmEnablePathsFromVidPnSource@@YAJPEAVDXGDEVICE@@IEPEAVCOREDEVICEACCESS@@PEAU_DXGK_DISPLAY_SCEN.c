/*
 * XREFs of ?DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402D3CBC
 * Callers:
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402D2480 (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 *     DxgkDisplayOnOff @ 0x1403EBC10 (DxgkDisplayOnOff.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400319C0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1400381A8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z @ 0x140059B50 (-FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z.c)
 *     ?UsingDelayCreateCddAllocation@DXGADAPTER@@QEBAEXZ @ 0x140064BA8 (-UsingDelayCreateCddAllocation@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z @ 0x14006C170 (-GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1401A1558 (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEV.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1402D290C (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1402D3ACC (-GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     ?DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402D4AF8 (-DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402D4EF8 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?DmmResetModeState@@YAJQEAXK@Z @ 0x14030B7CC (-DmmResetModeState@@YAJQEAXK@Z.c)
 */

__int64 __fastcall DmmEnablePathsFromVidPnSource(
        struct DXGDEVICE *a1,
        unsigned int a2,
        char a3,
        struct COREDEVICEACCESS *a4,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a5)
{
  __int64 v6; // rsi
  __int64 v9; // rdi
  __int64 v10; // r9
  __int64 v11; // rbx
  int v12; // edx
  const struct _D3DKMT_DISPLAYMODE *CddDisplayMode; // rax
  int CddAllocations; // eax
  __int64 v16; // rdx
  _BYTE v17[8]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v18; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD v19[68]; // [rsp+60h] [rbp-A0h] BYREF

  v6 = a2;
  memset(v19, 0, 0x104uLL);
  v9 = *((_QWORD *)a1 + 237);
  v17[0] = 0;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v9) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 13873;
  }
  if ( !*(_QWORD *)(v9 + 3168) || a3 )
    ADAPTER_DISPLAY::GetCddPrimaryAllocation(*(ADAPTER_DISPLAY **)(v9 + 3160), v6, 0);
  else
    ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(*(ADAPTER_DISPLAY **)(v9 + 3160), v6);
  if ( DXGADAPTER::UsingDelayCreateCddAllocation((DXGADAPTER *)v9)
    || v10 && (*(_DWORD *)(v10 + 4) & 0x10) == 0 && *(_QWORD *)(v10 + 16) )
  {
    goto LABEL_6;
  }
  CddDisplayMode = ADAPTER_DISPLAY::GetCddDisplayMode(*(ADAPTER_DISPLAY **)(v9 + 3160), v6);
  if ( !CddDisplayMode->Width || !CddDisplayMode->Height )
  {
    WdLogSingleEntry2(3LL, v6, v9);
    WdLogGlobalForLineNumber = 13912;
    return 0LL;
  }
  CddAllocations = ADAPTER_DISPLAY::CreateCddAllocations(*(ADAPTER_DISPLAY **)(v9 + 3160), a1, v6, CddDisplayMode, a4);
  if ( CddAllocations >= 0 )
  {
LABEL_6:
    v11 = *(_QWORD *)(*(_QWORD *)(v9 + 3160) + 104LL);
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v18, v11);
    WdLogSingleEntry2(7LL, v6, v11);
    v19[8] = 1 << v6;
    WdLogGlobalForLineNumber = 13952;
    v12 = VIDPN_MGR::SetTimingsFromVidPn(v11, 0LL, 5LL, 0LL, v19, v17, 0, 0LL, 0LL);
    if ( v12 < 0 )
    {
      v19[21] = -1;
      FillFailedStatus((struct D3DKMT_VIDPN_SOURCE_MASKS *)v19, v12);
      WdLogSingleEntry4(2LL, v6, *(int *)(v9 + 416), *(unsigned int *)(v9 + 412), v16);
      WdLogGlobalForLineNumber = 13972;
    }
    if ( v19[21] )
    {
      v17[0] |= 2u;
      if ( (int)DmmResetModeState((void *const)v9, v19[21]) < 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 13983;
      }
    }
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v18 + 40));
  }
  else
  {
    WdLogSingleEntry3(2LL, v6, v9, CddAllocations);
    v17[0] |= 2u;
    WdLogGlobalForLineNumber = 13927;
  }
  DmmHandleSetTimingsResult((DXGADAPTER *)v9, (struct _DMM_SET_TIMING_RESULT *)v17, a5);
  return 0LL;
}
