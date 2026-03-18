/*
 * XREFs of ?DmmGetNextVideoPresentTarget@@YAJQEAXIPEAI@Z @ 0x1403407AC
 * Callers:
 *     ?MonitorRebuildMonitorModeListCache@@YAJPEAXIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026F85C (-MonitorRebuildMonitorModeListCache@@YAJPEAXIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@Z @ 0x1403403F8 (-_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14000E320 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 */

__int64 __fastcall DmmGetNextVideoPresentTarget(__int64 a1, int a2, unsigned int *a3)
{
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // rax
  bool v13; // zf
  __int64 result; // rax

  if ( !a3 )
  {
    WdLogSingleEntry1(2LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 6978;
    return result;
  }
  *a3 = -1;
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 6995;
    return 3223191554LL;
  }
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(a1 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(a1 + 168)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7001;
  }
  v6 = *(_QWORD *)(a1 + 3160);
  if ( !v6 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 7006;
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
  v7 = *(_QWORD *)(v6 + 104);
  if ( v7 )
  {
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v7 + 40));
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v7 + 120) + 72LL));
    v8 = *(_QWORD *)(v7 + 120);
    v9 = 0LL;
    v10 = v8 + 24;
    v11 = *(_QWORD *)(v8 + 24);
    if ( a2 == -1 )
    {
      if ( v11 != v10 )
        v9 = v11 - 8;
LABEL_18:
      if ( v9 )
      {
        *a3 = *(_DWORD *)(v9 + 24);
        if ( v8 )
          ReferenceCounted::Release((ReferenceCounted *)(v8 + 64));
        DXGFASTMUTEX::Release((struct _KTHREAD **)(v7 + 40));
        return 0LL;
      }
      else
      {
        if ( v8 )
          ReferenceCounted::Release((ReferenceCounted *)(v8 + 64));
        DXGFASTMUTEX::Release((struct _KTHREAD **)(v7 + 40));
        return 3221226021LL;
      }
    }
    else
    {
      if ( v11 != v10 )
        v9 = v11 - 8;
      while ( v9 )
      {
        v12 = *(_QWORD *)(v9 + 8);
        v13 = *(_DWORD *)(v9 + 24) == a2;
        v9 = v12 - 8;
        if ( v13 )
        {
          if ( v12 == v10 )
            v9 = 0LL;
          goto LABEL_18;
        }
        if ( v12 == v10 )
          v9 = 0LL;
      }
      if ( v8 )
        ReferenceCounted::Release((ReferenceCounted *)(v8 + 64));
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v7 + 40));
      return 3223192325LL;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL);
    result = 3223192373LL;
    WdLogGlobalForLineNumber = 7020;
  }
  return result;
}
