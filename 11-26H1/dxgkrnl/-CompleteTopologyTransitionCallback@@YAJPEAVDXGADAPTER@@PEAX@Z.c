/*
 * XREFs of ?CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x14031F060
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14002E4CC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?MonitorCreateSimulatedMonitor@@YAJPEAXIW4_DMM_VIDPN_MONITOR_TYPE@@PEAUHDXGMONITOR__@@0EPEAPEAU2@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026DF04 (-MonitorCreateSimulatedMonitor@@YAJPEAXIW4_DMM_VIDPN_MONITOR_TYPE@@PEAUHDXGMONITOR__@@0EPEAPEAU2.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1402ACDEC (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z @ 0x1402CBB30 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ @ 0x1402CC034 (-AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CC050 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?MonitorCleanUpFromSimulatedMonitor@@YAXPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14031E7A4 (-MonitorCleanUpFromSimulatedMonitor@@YAXPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x140320470 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 */

__int64 __fastcall CompleteTopologyTransitionCallback(struct DXGADAPTER *a1, _QWORD *a2)
{
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v2; // r13
  int v5; // r8d
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // rax
  unsigned int v12; // esi
  __int64 v13; // r12
  __int64 i; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r14
  __int64 v18; // rax
  MONITOR_MGR *v19; // r10
  int MonitorInstance; // eax
  _QWORD *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // r9
  __int64 v26; // [rsp+20h] [rbp-E0h]
  __int64 v27; // [rsp+30h] [rbp-D0h]
  unsigned int v28; // [rsp+50h] [rbp-B0h] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v29; // [rsp+54h] [rbp-ACh] BYREF
  void *v30; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v31; // [rsp+60h] [rbp-A0h]
  _BYTE v32[144]; // [rsp+70h] [rbp-90h] BYREF
  void *retaddr; // [rsp+148h] [rbp+48h]

  v2 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)a2[1];
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v32, a1, 0LL);
  v6 = COREADAPTERACCESS::AcquireExclusive((__int64)v32, (unsigned int)(v5 + 1));
  v9 = 0;
  if ( v6 < 0 )
  {
    if ( v6 == -1073741130 )
    {
      v21 = (_QWORD *)WdLogNewEntry5_WdTrace(v8, v7);
      v21[3] = a1;
      v21[4] = *((int *)a1 + 104);
      v21[5] = *((unsigned int *)a1 + 103);
      WdLogGlobalForLineNumber = 8561;
    }
    else
    {
      v9 = v6;
    }
  }
  else
  {
    v10 = *((_QWORD *)a1 + 395);
    if ( v10 )
    {
      v12 = 0;
      if ( *(_DWORD *)(v10 + 96) )
      {
        do
        {
          v28 = -1;
          v13 = 1LL;
          for ( i = 0LL; (int)DmmEnumClientVidPnPathTargetsFromSource(a1, v12, i, &v28) >= 0 && v28 != -1; i = v13++ )
          {
            v29 = D3DKMDT_VOT_UNINITIALIZED;
            DmmGetVideoOutputTechnology(a1, v28, 0LL, &v29);
            if ( v29 == D3DKMDT_VOT_MIRACAST )
            {
              if ( *(_DWORD *)a2 || *((_DWORD *)a2 + 1) )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 8595;
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"(pTransContext->ActiveMiracastAdapterLuid.LowPart == 0) && (pTransContext->ActiveMiracastAdap"
                            "terLuid.HighPart == 0)",
                  8595LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              *a2 = *(_QWORD *)((char *)a1 + 412);
            }
            v17 = v28;
            v18 = WdLogNewEntry5_WdTrace(v16, v15);
            *(_QWORD *)(v18 + 24) = v17;
            *(_QWORD *)(v18 + 32) = a1;
            WdLogGlobalForLineNumber = 2037;
            if ( (_DWORD)v17 != -1 )
            {
              if ( !*((_QWORD *)a1 + 395) )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 2059;
              }
              if ( *(_QWORD *)(*((_QWORD *)a1 + 395) + 112LL) )
              {
                v30 = retaddr;
                v31 = 0LL;
                MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v30);
                MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v19, v17, 0, (struct MONITOR_REF_ACCESSOR *)&v30);
                if ( MonitorInstance == -1073741275 )
                {
                  if ( v31 )
                  {
                    WdLogSingleEntry0(1LL);
                    WdLogGlobalForLineNumber = 2083;
                  }
                  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v30);
                  v24 = WdLogNewEntry5_WdTrace(v23, v22);
                  *(_QWORD *)(v24 + 24) = a1;
                  *(_QWORD *)(v24 + 32) = v28;
                  WdLogGlobalForLineNumber = 8613;
                  MonitorCreateSimulatedMonitor((__int64)a1, v28, 4, v25, v26, 0, v27, (__int64)v2);
                }
                else
                {
                  if ( MonitorInstance >= 0 && !v31 )
                  {
                    WdLogSingleEntry0(1LL);
                    WdLogGlobalForLineNumber = 2090;
                  }
                  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v30);
                }
              }
              else
              {
                WdLogSingleEntry1(2LL);
                WdLogGlobalForLineNumber = 2069;
              }
            }
          }
          ++v12;
        }
        while ( v12 < *(_DWORD *)(*((_QWORD *)a1 + 395) + 96LL) );
      }
      MonitorCleanUpFromSimulatedMonitor((PERESOURCE *)a1, v2);
    }
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v32);
  return v9;
}
