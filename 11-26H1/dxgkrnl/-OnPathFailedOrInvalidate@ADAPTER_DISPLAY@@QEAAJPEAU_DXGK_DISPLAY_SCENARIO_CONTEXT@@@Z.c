/*
 * XREFs of ?OnPathFailedOrInvalidate@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401A3BC0
 * Callers:
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x14025F128 (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 *     ?DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402D4AF8 (-DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1404348A4 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140039054 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x14005B6A4 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14042C10C (-RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_D.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::OnPathFailedOrInvalidate(
        DXGADAPTER **this,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  struct _LUID *v3; // rdx
  DXGADAPTER *v4; // rcx
  struct DXGGLOBAL *Global; // rax
  unsigned __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rax
  bool v9; // si
  int updated; // ebx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v11; // rcx
  GUID *v12; // rdx
  __int64 v14; // [rsp+20h] [rbp-40h]
  __int64 v15; // [rsp+20h] [rbp-40h]
  __int64 v16; // [rsp+20h] [rbp-40h]
  _BYTE v17[16]; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int64 v18; // [rsp+90h] [rbp+30h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v19; // [rsp+98h] [rbp+38h] BYREF

  v19 = a2;
  if ( !ADAPTER_DISPLAY::IsCoreResourceSharedOwner((ADAPTER_DISPLAY *)this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9127;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceSharedOwner()", 9127LL, 0LL, 0LL, 0LL, 0LL);
  }
  v4 = this[2];
  v18 = 0LL;
  DXGADAPTER::IsAdapterSessionized(v4, v3, 0LL, &v18);
  Global = DXGGLOBAL::GetGlobal();
  v6 = v18;
  v7 = *((_QWORD *)Global + 123);
  if ( v7 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v17, (struct DXGFASTMUTEX *const)(v7 + 88), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
    v9 = v6 == 0x200000000LL && (v8 = *(_QWORD *)(v7 + 136)) != 0 && *(_BYTE *)(v8 + 18499) == 0;
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v17);
    if ( v9 )
    {
      updated = ADAPTER_DISPLAY::RequestAsyncDisplaySwitchCallout((ADAPTER_DISPLAY *)this, 0LL, v19);
      if ( updated < 0 )
      {
        WdLogSingleEntry1(2LL);
        v14 = (__int64)this[2];
        WdLogGlobalForLineNumber = 9144;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to send mode change request to GDI for final mode change on adapter 0x%I64x",
          v14,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      return (unsigned int)updated;
    }
  }
  v11 = v19;
  if ( v19 )
  {
    DisplayScenarioContextHolding(&v19);
    v11 = v19;
  }
  if ( v6 == 0x200000000LL )
  {
    LODWORD(v6) = *(_DWORD *)(*((_QWORD *)DXGGLOBAL::GetGlobal() + 123) + 144LL);
    v11 = v19;
  }
  else if ( ((v6 - 0x100000000LL) & 0xFFFFFFFDFFFFFFFFuLL) == 0 )
  {
    LODWORD(v18) = -1;
    goto LABEL_22;
  }
  LODWORD(v18) = v6;
  if ( (_DWORD)v6 == -1 )
  {
LABEL_22:
    updated = -1073741275;
    WdLogSingleEntry1(2LL);
    v16 = (__int64)this[2];
    WdLogGlobalForLineNumber = 9175;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Did not find the corresponding session ID for adapter 0x%I64x",
      v16,
      0LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)updated;
  }
  v12 = &GUID_NULL;
  if ( v11 )
    v12 = (GUID *)v11;
  updated = ZwUpdateWnfStateData(&WNF_DXGK_PATH_FAILED_OR_INVALIDATED_V2, v12, 16LL);
  if ( updated < 0 )
  {
    WdLogSingleEntry1(2LL);
    v15 = (__int64)this[2];
    WdLogGlobalForLineNumber = 9169;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to notify WNF clients of a monitor change for final mode change on adapter 0x%I64x",
      v15,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)updated;
}
