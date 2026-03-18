/*
 * XREFs of ?_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402CDC34
 * Callers:
 *     ?MonitorAdapterPowerChange@@YAJPEAXEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14030CD68 (-MonitorAdapterPowerChange@@YAJPEAXEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?MonitorDestroyAllSameTypeSimulatedMonitor@@YAJPEAXW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1403F17B0 (-MonitorDestroyAllSameTypeSimulatedMonitor@@YAJPEAXW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_.c)
 * Callees:
 *     ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x1400383FC (--0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z.c)
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x14003C9DC (--1MUTEX_LOCK@@QEAA@XZ.c)
 *     ?Assign@MONITOR_REF_ACCESSOR@@QEAAXPEAVDXGMONITOR@@@Z @ 0x140042284 (-Assign@MONITOR_REF_ACCESSOR@@QEAAXPEAVDXGMONITOR@@@Z.c)
 *     ??$?9V?$unique_storage@U?$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@YA_NAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@0@$$T@Z @ 0x14005A43C (--$-9V-$unique_storage@U-$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1-DereferenceObject@det.c)
 *     ?_CreateTtmDevice@DXGMONITOR@@QEAAJXZ @ 0x140191E54 (-_CreateTtmDevice@DXGMONITOR@@QEAAJXZ.c)
 *     ?_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z @ 0x140274514 (-_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ @ 0x1402CC034 (-AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CC050 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x14031D68C (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@UEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14031D820 (-_IssueMonitorEvent@MONITOR_MGR@@UEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z @ 0x1404275F4 (-DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_DestroyAllSameTypeSimulatedMonitor(__int64 a1, int a2, char a3, __int64 a4)
{
  __int64 *v6; // rsi
  __int64 *v7; // r15
  __int64 v8; // rax
  __int64 *v9; // rbx
  _QWORD **v10; // rax
  __int64 *v11; // rdi
  __int64 v12; // rsi
  __int64 *v14; // rdi
  __int64 *v15; // rax
  __int64 v16; // rcx
  __int64 *v17; // rcx
  __int64 **v18; // rax
  __int64 **v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  _QWORD *v22; // rax
  __int64 v23; // rdx
  _QWORD **v24; // rcx
  unsigned int v25; // ebx
  unsigned int v26; // eax
  _QWORD **v27; // rax
  struct DXGMONITOR *v28; // rdx
  _QWORD *v29; // rcx
  char v30[8]; // [rsp+30h] [rbp-48h] BYREF
  char v31[8]; // [rsp+38h] [rbp-40h] BYREF
  _QWORD **v32; // [rsp+40h] [rbp-38h] BYREF
  __int64 **v33; // [rsp+48h] [rbp-30h]
  void *v34; // [rsp+50h] [rbp-28h] BYREF
  __int64 *v35; // [rsp+58h] [rbp-20h]
  void *v36; // [rsp+60h] [rbp-18h] BYREF
  __int64 *v37; // [rsp+68h] [rbp-10h]
  void *retaddr; // [rsp+B8h] [rbp+40h]
  char v39; // [rsp+C0h] [rbp+48h] BYREF
  unsigned __int8 v40; // [rsp+C8h] [rbp+50h] BYREF
  char v41; // [rsp+D0h] [rbp+58h]
  __int64 v42; // [rsp+D8h] [rbp+60h]

  v42 = a4;
  v41 = a3;
  if ( a2 == 1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2178;
  }
  v6 = 0LL;
  v33 = (__int64 **)&v32;
  v35 = 0LL;
  v32 = &v32;
  v34 = retaddr;
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v34);
  v36 = retaddr;
  v37 = 0LL;
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v36);
  MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v39, (struct DXGFASTMUTEX *)(a1 + 104));
  v7 = (__int64 *)(a1 + 40);
  v8 = *(_QWORD *)(a1 + 40);
  if ( v8 == a1 + 40 )
  {
    v9 = 0LL;
  }
  else
  {
    v9 = (__int64 *)(v8 - 152);
    if ( !v8 )
      v9 = 0LL;
  }
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v34);
  v35 = v9;
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v34);
  MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)&v39);
  while ( v9 )
  {
    MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v39, (struct DXGFASTMUTEX *)(a1 + 104));
    v14 = v9 + 19;
    v15 = (__int64 *)v9[19];
    if ( v15 != v7 )
    {
      v6 = v15 - 19;
      if ( !v15 )
        v6 = 0LL;
    }
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v36);
    v37 = v6;
    MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v36);
    MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)&v39);
    if ( a2 == *((_DWORD *)v9 + 70) )
    {
      if ( !v41
        || (v16 = *(_QWORD *)(a1 + 24),
            v40 = 0,
            DmmIsTargetInClientVidPnTopology(*(void *const *)(v16 + 16), *((_DWORD *)v9 + 45), &v40) >= 0)
        && !v40 )
      {
        MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v30, (struct DXGFASTMUTEX *)(a1 + 104));
        v17 = (__int64 *)*v14;
        if ( *(__int64 **)(*v14 + 8) != v14 )
          goto LABEL_47;
        v18 = (__int64 **)v9[20];
        if ( *v18 != v14 )
          goto LABEL_47;
        *v18 = v17;
        v17[1] = (__int64)v18;
        v19 = v33;
        if ( *v33 != (__int64 *)&v32 )
          goto LABEL_47;
        v9[20] = (__int64)v33;
        *v14 = (__int64)&v32;
        *v19 = v14;
        v33 = (__int64 **)(v9 + 19);
        MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)&v30);
        v20 = v9[37];
        if ( v20 )
        {
          if ( *(_DWORD *)(v20 + 280) != 1 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 2251;
          }
          MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v31, (struct DXGFASTMUTEX *)(a1 + 104));
          v21 = *v7;
          v22 = (_QWORD *)(v9[37] + 152);
          if ( *(__int64 **)(*v7 + 8) != v7 )
            goto LABEL_47;
          *v22 = v21;
          v22[1] = v7;
          *(_QWORD *)(v21 + 8) = v22;
          *v7 = (__int64)v22;
          MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)&v31);
          if ( MONITOR_MGR::_UsingCCDNameForTTM
            || wil::operator!=<wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>>((_QWORD *)(v9[25] + 40)) )
          {
            DXGMONITOR::_CreateTtmDevice((DXGMONITOR *)v9[37], v23);
          }
        }
        else
        {
          --*(_DWORD *)(a1 + 32);
        }
      }
    }
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v34);
    v9 = v6;
    v6 = 0LL;
    v34 = v36;
    v37 = 0LL;
    v35 = v9;
  }
  v10 = v32;
  if ( v32 == &v32 )
  {
    v11 = 0LL;
  }
  else
  {
    if ( v32[1] != &v32 || (v24 = (_QWORD **)*v32, (_QWORD **)(*v32)[1] != v32) )
LABEL_47:
      __fastfail(3u);
    v32 = (_QWORD **)*v32;
    v11 = (__int64 *)(v10 - 19);
    v24[1] = &v32;
    if ( !v10 )
      v11 = 0LL;
  }
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v34);
  v35 = v11;
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v34);
  v12 = v42;
  while ( v11 )
  {
    v25 = *((_DWORD *)v11 + 45);
    MONITOR_MGR::_IssueMonitorEvent(a1 + 8, v25, 0LL, 2LL, *((_DWORD *)v11 + 70), v12);
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)(v11 + 36));
    v26 = MONITOR_MGR::_DestroySimulatedMonitor((MONITOR_MGR *)a1, (const struct MONITOR_REF_ACCESSOR *)&v34);
    MONITOR_MGR::_LogMonitorPresentEvent(a1, 1073741826LL, v25, v26, 0LL);
    v27 = v32;
    if ( v32 == &v32 )
    {
      v28 = 0LL;
    }
    else
    {
      if ( v32[1] != &v32 )
        goto LABEL_47;
      v29 = *v32;
      if ( (_QWORD **)(*v32)[1] != v32 )
        goto LABEL_47;
      v32 = (_QWORD **)*v32;
      v29[1] = &v32;
      v28 = (struct DXGMONITOR *)(v27 - 19);
      if ( !v27 )
        v28 = 0LL;
    }
    MONITOR_REF_ACCESSOR::Assign((MONITOR_REF_ACCESSOR *)&v34, v28);
    v11 = v35;
  }
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v36);
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v34);
  return 0LL;
}
