/*
 * XREFs of ?_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@PEA_N@Z @ 0x14031CED4
 * Callers:
 *     ?MonitorEnableDisableMonitor@@YAJPEAXKPEAKEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026E6F0 (-MonitorEnableDisableMonitor@@YAJPEAXKPEAKEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 *     ?_CleanUpFromSimulatedMonitor@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14031E390 (-_CleanUpFromSimulatedMonitor@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACCESSOR@@AEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403DFFAC (-_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACCESSOR@.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?AcquireShared@MonitorResourceLock@@QEAAXXZ @ 0x140035838 (-AcquireShared@MonitorResourceLock@@QEAAXXZ.c)
 *     ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x1400383FC (--0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z.c)
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x14003C9DC (--1MUTEX_LOCK@@QEAA@XZ.c)
 *     ??1?$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@XZ @ 0x14003CD2C (--1-$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@XZ.c)
 *     ?reset@?$unique_ptr@$$BY0A@IU?$default_delete@$$BY0A@I@wistd@@@wistd@@QEAAX$$T@Z @ 0x14005CFE8 (-reset@-$unique_ptr@$$BY0A@IU-$default_delete@$$BY0A@I@wistd@@@wistd@@QEAAX$$T@Z.c)
 *     ?_EnableDisableMonitorInternal@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@PEA_N@Z @ 0x14031D32C (-_EnableDisableMonitorInternal@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x14031D68C (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?_IsMonitorDisabled@DXGMONITOR@@QEBA_NXZ @ 0x1403EF53C (-_IsMonitorDisabled@DXGMONITOR@@QEBA_NXZ.c)
 */

__int64 __fastcall MONITOR_MGR::_EnableDisableMonitor(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        __int64 a6,
        _BYTE *a7)
{
  _BYTE *v7; // r13
  unsigned int v8; // edi
  char v9; // r12
  unsigned int v10; // r14d
  int v12; // eax
  int v13; // ebx
  int v14; // ebx
  char v16; // al
  char v17; // dl
  unsigned __int8 v18; // r15
  __int64 v19; // r8
  char v20; // bl
  unsigned __int64 v21; // rax
  unsigned int v22; // r14d
  unsigned int *v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // r8
  __int64 i; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r15
  __int64 v33; // r14
  int v34; // eax
  _BYTE v35[8]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v36; // [rsp+48h] [rbp-28h] BYREF
  _DWORD v37[2]; // [rsp+50h] [rbp-20h] BYREF
  unsigned __int64 v38; // [rsp+58h] [rbp-18h]
  __int128 v39; // [rsp+60h] [rbp-10h]

  v7 = a7;
  v8 = 0;
  v9 = a3;
  v10 = a4;
  if ( a7 )
    *a7 = 0;
  if ( (unsigned int)(a4 - 1) > 1 && (_DWORD)a4 != 8 )
    return 3221225485LL;
  v12 = *(_BYTE *)(a1 + 17) & 1;
  v13 = 2 * (*(_BYTE *)(a1 + 18) & 1);
  v37[1] = a4;
  v38 = a5;
  v14 = a3 & 1 | (2 * (*(_BYTE *)(a1 + 16) & 1 | (2 * (v12 | v13))));
  v39 = 0LL;
  if ( (_DWORD)a2 != -1 )
    return MONITOR_MGR::_EnableDisableMonitorInternal(a1, a2, a3, a4, a5, a6, v7);
  if ( (_DWORD)a4 != 2 && (_DWORD)a4 != 8 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2821;
  }
  if ( a5 >= 2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2836;
  }
  if ( v10 == 8 )
  {
    *(_BYTE *)(a1 + 17) = v9 == 0;
    v16 = *(_BYTE *)(a1 + 18);
  }
  else
  {
    v16 = v9 == 0;
    *(_BYTE *)(a1 + 18) = v9 == 0;
  }
  v17 = *(_BYTE *)(a1 + 17);
  if ( v17 || v16 )
  {
    v18 = 0;
  }
  else
  {
    v18 = 1;
    v16 = 0;
  }
  v37[0] = v14 & 0xFFFFFF8F | (16 * (v18 | (2 * (v17 & 1 | (2 * (v16 & 1))))));
  MONITOR_MGR::_LogMonitorPresentEvent(a1, 14LL, 0xFFFFFFFFLL, 0LL, v37);
  v20 = 0;
  if ( *(_BYTE *)(a1 + 18) && *(_BYTE *)(a1 + 17) )
  {
    MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)v35, (struct DXGFASTMUTEX *)(a1 + 104));
    v24 = a1 + 40;
    v25 = *(_QWORD *)(a1 + 40);
    while ( 1 )
    {
      if ( v25 == v24 )
      {
        v26 = 0LL;
      }
      else
      {
        v26 = v25 - 152;
        if ( !v25 )
          v26 = 0LL;
      }
      MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)v35);
      if ( !v26 )
      {
        v20 = 0;
        goto LABEL_16;
      }
      v36 = v26;
      MonitorResourceLock::AcquireShared((PERESOURCE)(v26 + 40));
      if ( *(_DWORD *)(*(_QWORD *)(v26 + 240) + 16LL) )
      {
        if ( !DXGMONITOR::_IsMonitorDisabled((DXGMONITOR *)v26) )
          break;
      }
      ExReleaseResourceLite((PERESOURCE)(v26 + 40));
      KeLeaveCriticalRegion();
      MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)v35, (struct DXGFASTMUTEX *)(a1 + 104));
      v25 = *(_QWORD *)(v26 + 152);
      v24 = a1 + 40;
    }
    v20 = 1;
    RESOURCE_LOCK<DXGMONITOR>::~RESOURCE_LOCK<DXGMONITOR>(&v36);
  }
LABEL_16:
  if ( v18 != *(_BYTE *)(a1 + 16) || v20 )
  {
    LOBYTE(v19) = v18;
    if ( v10 != 8 )
      v10 = 2;
    v8 = MONITOR_MGR::_EnableDisableMonitorInternal(a1, 0xFFFFFFFFLL, v19, v10, v18 ^ 1LL, a6, v7);
    *(_BYTE *)(a1 + 16) = v18;
    return v8;
  }
  if ( !v9 || v18 || !*(_BYTE *)(a1 + 17) )
    return v8;
  v21 = 4LL * *(unsigned int *)(a1 + 32);
  v22 = 0;
  if ( !is_mul_ok(*(unsigned int *)(a1 + 32), 4uLL) )
    v21 = -1LL;
  a7 = (_BYTE *)operator new[](v21, 0x4D677844u, 256LL);
  v23 = (unsigned int *)a7;
  if ( a7 )
  {
    MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v36, (struct DXGFASTMUTEX *)(a1 + 104));
    v27 = a1 + 40;
    for ( i = *(_QWORD *)(a1 + 40); i != v27; i = *(_QWORD *)(v29 + 152) )
    {
      v29 = i - 152;
      if ( !i )
        v29 = 0LL;
      if ( !v29 )
        break;
      if ( *(_DWORD *)(*(_QWORD *)(v29 + 240) + 16LL) && DXGMONITOR::_IsMonitorDisabled((DXGMONITOR *)v29) )
      {
        v30 = v22++;
        v23[v30] = *(_DWORD *)(v29 + 180);
      }
    }
    MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)&v36);
    if ( v22 )
    {
      v32 = v22;
      do
      {
        v33 = *v23;
        if ( (_DWORD)v33 == -1 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 2970;
        }
        LOBYTE(v31) = 1;
        v34 = MONITOR_MGR::_EnableDisableMonitorInternal(a1, (unsigned int)v33, v31, 2LL, 0LL, a6, v7);
        if ( v34 < 0 )
        {
          WdLogSingleEntry3(2LL, v33, a1, v34);
          WdLogGlobalForLineNumber = 2977;
        }
        ++v23;
        --v32;
      }
      while ( v32 );
    }
    wistd::unique_ptr<unsigned int [0],wistd::default_delete<unsigned int [0]>>::reset((void **)&a7);
    return v8;
  }
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 2942;
  wistd::unique_ptr<unsigned int [0],wistd::default_delete<unsigned int [0]>>::reset((void **)&a7);
  return 3221225495LL;
}
