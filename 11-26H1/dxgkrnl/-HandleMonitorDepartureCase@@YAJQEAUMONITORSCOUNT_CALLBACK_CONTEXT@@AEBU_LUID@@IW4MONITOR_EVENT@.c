/*
 * XREFs of ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403ABFD4
 * Callers:
 *     ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x1403ABC4C (-DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x140033570 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x140047278 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z @ 0x140268E8C (-FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1402AC2B8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1402C2560 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z @ 0x140319388 (-Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x14033D260 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x14033D68C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1403495F4 (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     DxgkInvalidateMonitorConnections @ 0x1403ADA10 (DxgkInvalidateMonitorConnections.c)
 *     ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403ADC38 (-DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISP.c)
 *     ?UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1403ADF70 (-UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJAEBU_LUID@@IW4_DMM_VIDPN_MON.c)
 *     ?CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1403AE090 (-CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1403DAF18 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ?DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z @ 0x1404275F4 (-DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z.c)
 */

__int64 __fastcall HandleMonitorDepartureCase(
        __int64 a1,
        const struct _LUID *a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a6)
{
  __int64 v7; // rsi
  __int64 v9; // rdi
  struct DXGGLOBAL *Global; // rax
  int v11; // edi
  DXGGLOBAL *v13; // rax
  struct DXGADAPTER *v14; // rax
  DXGADAPTER *v15; // rbx
  int v16; // ebx
  int v17; // eax
  __int64 v18; // rsi
  struct DXGGLOBAL *v19; // rax
  struct CCD_BTL *v20; // rax
  int v21; // eax
  unsigned int v22; // esi
  int PathDescriptorByTarget; // eax
  __int64 v24; // rbx
  __int64 v25; // rsi
  __int64 v26; // [rsp+20h] [rbp-E0h]
  __int64 v27; // [rsp+20h] [rbp-E0h]
  __int64 v28; // [rsp+28h] [rbp-D8h]
  __int64 v29; // [rsp+28h] [rbp-D8h]
  __int64 HighPart; // [rsp+28h] [rbp-D8h]
  __int64 LowPart; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v32[4]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v33; // [rsp+54h] [rbp-ACh]
  unsigned int v34; // [rsp+5Ch] [rbp-A4h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v35; // [rsp+60h] [rbp-A0h] BYREF
  struct D3DKMT_GETPATHSMODALITY *v36[9]; // [rsp+70h] [rbp-90h] BYREF
  int v37; // [rsp+BCh] [rbp-44h]
  int v38; // [rsp+C0h] [rbp-40h]

  v7 = a4;
  v9 = a3;
  v35 = a6;
  if ( a4 == 10 && a5 == 2 )
  {
    *(_BYTE *)(a1 + 25) = 0;
    Global = DXGGLOBAL::GetGlobal();
    v11 = DXGGLOBAL::IterateAdaptersWithCallback(
            (__int64)Global,
            (__int64 (__fastcall *)(_QWORD *, __int64))DisplayConfigCountMonitorsCallback,
            a1,
            (int)v7 - 6);
    if ( v11 < 0 )
    {
      WdLogSingleEntry1((unsigned int)(v7 - 7));
      WdLogGlobalForLineNumber = 3150;
      return (unsigned int)v11;
    }
    *(_BYTE *)(a1 + 26) = 1;
    return 0LL;
  }
  if ( a5 != 5 )
  {
    if ( (int)DxgkInvalidateMonitorConnections(2uLL) < 0 )
    {
      WdLogSingleEntry1(4LL);
      WdLogGlobalForLineNumber = 3229;
    }
    if ( (int)MONITORSCOUNT_CALLBACK_CONTEXT::UpdateEmergencyMonitorContext(a1, a2, (unsigned int)v9) < 0 )
    {
      WdLogSingleEntry3(3LL, a2->HighPart, a2->LowPart, v9);
      WdLogGlobalForLineNumber = 3246;
    }
    if ( *(_BYTE *)(a1 + 24) )
    {
      *(_BYTE *)(a1 + 26) = 1;
      *(_BYTE *)(a1 + 31) = 1;
      CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v36, 8u, 0);
      v20 = CCD_BTL::Global();
      v21 = CCD_TOPOLOGY::CopyRenewScope((CCD_TOPOLOGY *)v36, (struct CCD_BTL *)((char *)v20 + 8));
      v34 = v21;
      if ( v21 < 0 )
      {
        v24 = v7;
        v25 = v21;
        WdLogSingleEntry5(2LL, v21, a2->HighPart, a2->LowPart, v9, v24);
        LowPart = a2->LowPart;
        HighPart = a2->HighPart;
        WdLogGlobalForLineNumber = 3341;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Unable to get copy of most recent topology. (NtStatus = 0x%I64x, i_AdapterLuid = 0x%I64x%08I64x, i_Ta"
                    "rgetId = 0x%I64x, i_MonitorEvent = 0x%I64x)",
          v25,
          HighPart,
          LowPart,
          v9,
          v24);
        DxgkLogCodePointPacket(0x3Du, v34, 0, 0, (__int64)*a2);
      }
      else
      {
        v22 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 474);
        if ( v22 > 1 )
        {
          WdLogSingleEntry0(3LL);
          WdLogGlobalForLineNumber = 3277;
          v33 = 0LL;
          DxgkLogCodePointPacket(0x52u, v22, 0, 0, 0LL);
          CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v36);
          return 0LL;
        }
        if ( *(_DWORD *)(a1 + 20) != -1 )
        {
          *(_BYTE *)(a1 + 25) = 0;
          PathDescriptorByTarget = CCD_TOPOLOGY::FindPathDescriptorByTarget((CCD_TOPOLOGY *)v36, a2, v9, 0LL);
          if ( PathDescriptorByTarget == -1073741275 )
          {
            v37 = 1;
            v38 = 4;
            if ( (int)CCD_TOPOLOGY::Functionalize((CCD_TOPOLOGY *)v36, 0, 0) >= 0 )
            {
              if ( (int)CCD_TOPOLOGY::Persist(v36, 0LL) >= 0 )
              {
                *(_DWORD *)(a1 + 32) |= 0x20u;
                *(_BYTE *)(a1 + 26) = 0;
                *(_BYTE *)(a1 + 31) = 0;
              }
              else
              {
                WdLogSingleEntry1(3LL);
                WdLogGlobalForLineNumber = 3311;
              }
            }
            else
            {
              WdLogSingleEntry1(3LL);
              WdLogGlobalForLineNumber = 3300;
            }
          }
          else if ( PathDescriptorByTarget < 0 )
          {
            WdLogSingleEntry2(3LL, PathDescriptorByTarget, v9);
            WdLogGlobalForLineNumber = 3330;
          }
        }
      }
      CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v36);
    }
    if ( *(_BYTE *)(a1 + 30) )
    {
      *(_BYTE *)(a1 + 25) = 0;
      *(_DWORD *)(a1 + 20) = v9;
    }
    v16 = DisplayConfigHandleMonitorInvalidation(5uLL, (struct MONITORSCOUNT_CALLBACK_CONTEXT *)a1, v35);
    if ( v16 < 0 )
    {
      WdLogSingleEntry1(4LL);
      WdLogGlobalForLineNumber = 3370;
      v16 = 0;
    }
    WdLogSingleEntry1(4LL);
    WdLogGlobalForLineNumber = 3374;
    return (unsigned int)v16;
  }
  v13 = DXGGLOBAL::GetGlobal();
  v14 = DXGGLOBAL::ReferenceAdapterByLuid(v13, *a2, (unsigned __int64 *)&v35);
  v15 = v14;
  if ( !v14 )
  {
    v16 = -1073741811;
    WdLogSingleEntry3(2LL, a2->HighPart, a2->LowPart, -1073741811LL);
    v28 = a2->LowPart;
    v26 = a2->HighPart;
    WdLogGlobalForLineNumber = 3173;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to find adapter from LUID 0x%I64x%08I64x, returning 0x%I64x.",
      v26,
      v28,
      -1073741811LL,
      0LL,
      0LL);
    return (unsigned int)v16;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v36, v14, 0LL);
  DXGADAPTER::ReleaseReference(v15);
  v17 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v36, 0LL);
  v18 = v17;
  if ( v17 >= 0 )
  {
    v32[0] = 0;
    if ( DmmIsTargetInClientVidPnTopology(v15, v9, v32) >= 0 && !v32[0] )
      *(_BYTE *)(a1 + 26) = 0;
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)v36);
    *(_BYTE *)(a1 + 25) = 0;
    v19 = DXGGLOBAL::GetGlobal();
    v11 = DXGGLOBAL::IterateAdaptersWithCallback(
            (__int64)v19,
            (__int64 (__fastcall *)(_QWORD *, __int64))DisplayConfigCountMonitorsCallback,
            a1,
            4);
    if ( v11 >= 0 )
    {
      v11 = 0;
    }
    else
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 3217;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v36);
    return (unsigned int)v11;
  }
  WdLogSingleEntry3(2LL, a2->HighPart, a2->LowPart, v17);
  v29 = a2->LowPart;
  v27 = a2->HighPart;
  WdLogGlobalForLineNumber = 3189;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Failed to acquire adapter core access on adapter 0x%I64x%08I64x, NtStatus = 0x%I64x.",
    v27,
    v29,
    v18,
    0LL,
    0LL);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v36);
  return (unsigned int)v18;
}
