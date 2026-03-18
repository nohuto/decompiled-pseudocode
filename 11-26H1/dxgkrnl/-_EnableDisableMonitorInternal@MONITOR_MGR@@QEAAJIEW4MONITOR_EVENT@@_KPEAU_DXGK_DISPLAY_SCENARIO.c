/*
 * XREFs of ?_EnableDisableMonitorInternal@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@PEA_N@Z @ 0x14031D32C
 * Callers:
 *     ?_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@PEA_N@Z @ 0x14031CED4 (-_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 * Callees:
 *     ??0MONITOR_REF_LOCK_ACCESSOR@@QEAA@AEBVMONITOR_REF_ACCESSOR@@@Z @ 0x14003555C (--0MONITOR_REF_LOCK_ACCESSOR@@QEAA@AEBVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?AcquireExclusive@MonitorResourceLock@@QEAAXXZ @ 0x14003586C (-AcquireExclusive@MonitorResourceLock@@QEAAXXZ.c)
 *     ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x1400383FC (--0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z.c)
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x14003C9DC (--1MUTEX_LOCK@@QEAA@XZ.c)
 *     ??1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x14003CD00 (--1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ?_ChangeLIDStatus@DXGMONITOR@@QEAAX_N@Z @ 0x14031D62C (-_ChangeLIDStatus@DXGMONITOR@@QEAAX_N@Z.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x14031D68C (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@UEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14031D820 (-_IssueMonitorEvent@MONITOR_MGR@@UEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?_ChangePowerStatus@DXGMONITOR@@QEAAX_N@Z @ 0x140412914 (-_ChangePowerStatus@DXGMONITOR@@QEAAX_N@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_EnableDisableMonitorInternal(
        __int64 a1,
        unsigned int a2,
        char a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        _BYTE *a7)
{
  __int64 v7; // rsi
  __int64 v10; // r14
  char v11; // r12
  __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // rbx
  struct DXGFASTMUTEX *v15; // r14
  __int64 v16; // rax
  __int64 v18; // rax
  _BYTE v19[8]; // [rsp+30h] [rbp-58h] BYREF
  struct DXGFASTMUTEX *v20; // [rsp+38h] [rbp-50h] BYREF
  DXGMONITOR *v21[4]; // [rsp+40h] [rbp-48h] BYREF

  v7 = a2;
  v10 = a1;
  v11 = 0;
  if ( a4 - 1 > 1 && a4 != 8 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3031;
  }
  v20 = (struct DXGFASTMUTEX *)(v10 + 104);
  MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)v19, (struct DXGFASTMUTEX *)(v10 + 104));
  v12 = v10 + 40;
  v13 = *(_QWORD *)(v10 + 40);
  if ( v13 == v10 + 40 )
  {
    v14 = 0LL;
  }
  else
  {
    v14 = v13 - 152;
    if ( !v13 )
      v14 = 0LL;
  }
  MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)v19);
  if ( v14 )
  {
    v15 = v20;
    do
    {
      if ( (_DWORD)v7 == -1 || *(_DWORD *)(v14 + 180) == (_DWORD)v7 )
      {
        v11 = 1;
        MonitorResourceLock::AcquireExclusive((PERESOURCE)(v14 + 40));
        if ( *(_BYTE *)(*(_QWORD *)(v14 + 264) + 8LL) && a7 )
          *a7 = 1;
        if ( a4 == 1 )
        {
          DXGMONITOR::_ChangeLIDStatus((DXGMONITOR *)v14, a3 != 0);
        }
        else if ( a4 != 8 || *(_DWORD *)(*(_QWORD *)(v14 + 240) + 16LL) != 1 || a3 )
        {
          DXGMONITOR::_ChangePowerStatus((DXGMONITOR *)v14, a3 != 0);
        }
        ExReleaseResourceLite((PERESOURCE)(v14 + 40));
        KeLeaveCriticalRegion();
        if ( *(_DWORD *)(v14 + 280) != 1 )
        {
          v18 = *(_QWORD *)(v14 + 296);
          if ( v18 )
          {
            if ( *(_DWORD *)(v18 + 280) != 1 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 3098;
            }
            MONITOR_REF_LOCK_ACCESSOR::MONITOR_REF_LOCK_ACCESSOR(
              (MONITOR_REF_LOCK_ACCESSOR *)v21,
              (const struct MONITOR_REF_ACCESSOR *)(v14 + 288));
            if ( a4 == 1 )
              DXGMONITOR::_ChangeLIDStatus(v21[0], a3 != 0);
            else
              DXGMONITOR::_ChangePowerStatus(v21[0], a3 != 0);
            MONITOR_REF_LOCK_ACCESSOR::~MONITOR_REF_LOCK_ACCESSOR((MONITOR_REF_LOCK_ACCESSOR *)v21);
          }
        }
      }
      MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v20, v15);
      v16 = *(_QWORD *)(v14 + 152);
      if ( v16 == v12 )
      {
        v14 = 0LL;
      }
      else
      {
        v14 = v16 - 152;
        if ( !v16 )
          v14 = 0LL;
      }
      MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)&v20);
    }
    while ( v14 );
    v10 = a1;
    if ( v11 )
      goto LABEL_24;
  }
  if ( (_DWORD)v7 == -1 || a4 == 2 || a4 == 8 )
  {
LABEL_24:
    MONITOR_MGR::_IssueMonitorEvent(v10 + 8, (unsigned int)v7, a4, a5, 0, a6);
    MONITOR_MGR::_LogMonitorPresentEvent(v10, (unsigned int)(a3 != 0) + 9, (unsigned int)v7, 0LL, 0LL);
  }
  else
  {
    WdLogSingleEntry2(2LL, v7, v10);
    WdLogGlobalForLineNumber = 3151;
  }
  return 0LL;
}
