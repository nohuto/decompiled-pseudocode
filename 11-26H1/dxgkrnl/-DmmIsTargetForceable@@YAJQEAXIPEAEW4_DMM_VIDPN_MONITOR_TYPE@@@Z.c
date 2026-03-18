/*
 * XREFs of ?DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1403409F4
 * Callers:
 *     ?DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401CDCB0 (-DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_D.c)
 *     DxgkHandleForceProjectionMonitor @ 0x1401CFE80 (DxgkHandleForceProjectionMonitor.c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x14026BCB4 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 *     ?MonitorCreateSimulatedMonitor@@YAJPEAXIW4_DMM_VIDPN_MONITOR_TYPE@@PEAUHDXGMONITOR__@@0EPEAPEAU2@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026DF04 (-MonitorCreateSimulatedMonitor@@YAJPEAXIW4_DMM_VIDPN_MONITOR_TYPE@@PEAUHDXGMONITOR__@@0EPEAPEAU2.c)
 *     ?_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140273E20 (-_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     _anonymous_namespace_::DetermineIfNeedToChangeActivity @ 0x14042C784 (_anonymous_namespace_--DetermineIfNeedToChangeActivity.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14000E320 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?IsTargetForceable@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x140340C38 (-IsTargetForceable@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 */

__int64 __fastcall DmmIsTargetForceable(__int64 a1, unsigned int a2, unsigned __int8 *a3, int a4)
{
  __int64 v4; // rbp
  __int64 v8; // rdi
  struct _KTHREAD **v9; // rdi
  struct _KTHREAD *v10; // rbx
  __int64 v11; // rdx
  struct _KTHREAD *v12; // rcx
  struct _KTHREAD *v13; // rax
  unsigned __int8 IsTargetForceable; // al
  __int64 result; // rax

  v4 = a2;
  *a3 = 0;
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 7090;
    return 3223191554LL;
  }
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(a1 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(a1 + 168)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7096;
  }
  v8 = *(_QWORD *)(a1 + 3160);
  if ( !v8 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 7101;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified adapter handle 0x%I64x is a render only adapter.",
      a1,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3223191554LL;
  }
  v9 = *(struct _KTHREAD ***)(v8 + 104);
  if ( v9 )
  {
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v9 + 5));
    _InterlockedIncrement((volatile signed __int32 *)v9[15] + 18);
    v10 = v9[15];
    v11 = 0LL;
    v12 = (struct _KTHREAD *)*((_QWORD *)v10 + 3);
    if ( v12 != (struct _KTHREAD *)((char *)v10 + 24) )
      v11 = (__int64)v12 - 8;
    while ( v11 )
    {
      if ( *(_DWORD *)(v11 + 24) == (_DWORD)v4 )
      {
        if ( a4 == 5 )
          IsTargetForceable = *(_QWORD *)(v11 + 112) == 0LL;
        else
          IsTargetForceable = DMMVIDEOPRESENTTARGET::IsTargetForceable((DMMVIDEOPRESENTTARGET *)v11);
        *a3 = IsTargetForceable;
        if ( v10 )
          ReferenceCounted::Release((struct _KTHREAD *)((char *)v10 + 64));
        DXGFASTMUTEX::Release(v9 + 5);
        return 0LL;
      }
      v13 = *(struct _KTHREAD **)(v11 + 8);
      v11 = (__int64)v13 - 8;
      if ( v13 == (struct _KTHREAD *)((char *)v10 + 24) )
        v11 = 0LL;
    }
    if ( !v9[1] )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 68;
    }
    WdLogSingleEntry2(3LL, v4, *((_QWORD *)v9[1] + 2));
    WdLogGlobalForLineNumber = 7139;
    if ( v10 )
      ReferenceCounted::Release((struct _KTHREAD *)((char *)v10 + 64));
    DXGFASTMUTEX::Release(v9 + 5);
    return 3223192325LL;
  }
  else
  {
    WdLogSingleEntry1(2LL);
    result = 3223192373LL;
    WdLogGlobalForLineNumber = 7115;
  }
  return result;
}
