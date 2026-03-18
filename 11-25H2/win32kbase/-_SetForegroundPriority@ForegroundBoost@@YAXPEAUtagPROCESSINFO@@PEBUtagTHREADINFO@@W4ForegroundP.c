/*
 * XREFs of ?_SetForegroundPriority@ForegroundBoost@@YAXPEAUtagPROCESSINFO@@PEBUtagTHREADINFO@@W4ForegroundPriorityClass@1@W4ForegroundBoostSource@1@@Z @ 0x14009D1A0
 * Callers:
 *     ?DeBoostIfTime@CLastWokenThread@@QEAAX_J@Z @ 0x14009AA58 (-DeBoostIfTime@CLastWokenThread@@QEAAX_J@Z.c)
 *     ?Clear@LastWokenThread@@YAXXZ @ 0x14009AEF0 (-Clear@LastWokenThread@@YAXXZ.c)
 *     ?_SetForInput@CLastWokenThread@@AEAAXPEBUtagTHREADINFO@@@Z @ 0x14009B438 (-_SetForInput@CLastWokenThread@@AEAAXPEBUtagTHREADINFO@@@Z.c)
 *     ?_SetForAsfw@CLastWokenThread@@AEAAXPEBUtagTHREADINFO@@_N@Z @ 0x14009B498 (-_SetForAsfw@CLastWokenThread@@AEAAXPEBUtagTHREADINFO@@_N@Z.c)
 *     ?doBoost@GroupedFGBoostProp@@AEAAXPEAU_EPROCESS@@W4BoostFlag@@@Z @ 0x14009C9A0 (-doBoost@GroupedFGBoostProp@@AEAAXPEAU_EPROCESS@@W4BoostFlag@@@Z.c)
 *     ?SetForegroundPriority@ForegroundBoost@@YAXPEBUtagTHREADINFO@@W4ForegroundPriorityClass@1@W4ForegroundBoostSource@1@@Z @ 0x14009D150 (-SetForegroundPriority@ForegroundBoost@@YAXPEBUtagTHREADINFO@@W4ForegroundPriorityClass@1@W4Fore.c)
 *     ?SetForegroundPriority@ForegroundBoost@@YAXPEAUtagPROCESSINFO@@W4ForegroundPriorityClass@1@W4ForegroundBoostSource@1@@Z @ 0x14009D180 (-SetForegroundPriority@ForegroundBoost@@YAXPEAUtagPROCESSINFO@@W4ForegroundPriorityClass@1@W4For.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1400E96D0 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     ?OnDestroyed@CLastWokenThread@@QEAAXPEBUtagTHREADINFO@@@Z @ 0x140110FC8 (-OnDestroyed@CLastWokenThread@@QEAAXPEBUtagTHREADINFO@@@Z.c)
 *     xxxCreateThreadInfo @ 0x140162D44 (xxxCreateThreadInfo.c)
 *     ?SetForeground@CActivationObjectManager@@AEAAJPEAVCActivationObject@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@W4ACTIVATION_OBJECT_CONFIG_BEHAVIOR@@PEAVForegroundChangeTracker@1@@Z @ 0x1401A9F04 (-SetForeground@CActivationObjectManager@@AEAAJPEAVCActivationObject@@W4ACTIVATIONOBJECTSTATECHAN.c)
 *     ?ZapForeground@CActivationObjectManager@@AEAAXPEAVForegroundChangeTracker@1@@Z @ 0x1401AA270 (-ZapForeground@CActivationObjectManager@@AEAAXPEAVForegroundChangeTracker@1@@Z.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B1C0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B254 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1400A015C (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_dDdd @ 0x14010F040 (WPP_RECORDER_AND_TRACE_SF_dDdd.c)
 *     ApiSetEditionProcessForegroundPriorityChanged @ 0x14011DDEC (ApiSetEditionProcessForegroundPriorityChanged.c)
 *     ForegroundBoost::_anonymous_namespace_::GetProcessPriorityByClass @ 0x140120934 (ForegroundBoost--_anonymous_namespace_--GetProcessPriorityByClass.c)
 *     ForegroundBoost::_anonymous_namespace_::SetForegroundPriorityProcess @ 0x140168CE4 (ForegroundBoost--_anonymous_namespace_--SetForegroundPriorityProcess.c)
 */

void __fastcall ForegroundBoost::_SetForegroundPriority(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
  unsigned int v4; // esi
  char v6; // r14
  unsigned int v7; // ebp
  __int64 UserSessionState; // rbx
  __int64 v9; // rcx
  int ProcessPriorityByClass; // r13d
  char v11; // r12
  __int64 v12; // rax
  int v13; // r8d
  int v14; // edx
  unsigned int v15; // edi
  __int64 v16; // rdx
  int v17; // ebp
  bool v18; // r12
  int v19; // edi
  __int64 v20; // rax
  int v21; // r8d
  int v22; // edx
  bool v23; // zf
  bool v25; // [rsp+B0h] [rbp+18h]

  v4 = 0;
  v6 = 1;
  if ( a3 == 1 )
    v7 = ((*(_DWORD *)(a1 + 12) & 0x800) != 0) + 1;
  else
    v7 = 0;
  UserSessionState = W32GetUserSessionState(a1, a2);
  W32AcquirePushLockExclusiveEx((struct W32_PUSH_LOCK *)(UserSessionState + 18856), 0);
  ProcessPriorityByClass = ForegroundBoost::_anonymous_namespace_::GetProcessPriorityByClass(a1);
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) == 0
    || (v11 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v11 = 0;
  }
  v25 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( !v11 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v15 = a4;
  }
  else
  {
    v12 = W32GetUserSessionState(v9, WPP_GLOBAL_Control);
    LOBYTE(v13) = v25;
    LOBYTE(v14) = v11;
    v15 = a4;
    WPP_RECORDER_AND_TRACE_SF_dDdd(*((_QWORD *)WPP_GLOBAL_Control + 3), v14, v13, *(_QWORD *)(v12 + 69144));
  }
  ForegroundBoost::_anonymous_namespace_::SetForegroundPriorityProcess(a1, a2, v7, v15);
  v17 = ForegroundBoost::_anonymous_namespace_::GetProcessPriorityByClass(a1);
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v6 = 0;
  }
  v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v19 = *(_DWORD *)(a1 + 56);
    v20 = W32GetUserSessionState(&WPP_GLOBAL_Control, v16);
    LOBYTE(v21) = v18;
    LOBYTE(v22) = v6;
    WPP_RECORDER_AND_TRACE_SF_Dd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v22,
      v21,
      *(_QWORD *)(v20 + 69144),
      4,
      13,
      15,
      (__int64)&WPP_9013cc159d3036d86bd9082f593c9e7a_Traceguids,
      v19,
      v17);
  }
  W32ReleasePushLockExclusiveEx((struct W32_PUSH_LOCK *)(UserSessionState + 18856), 0LL);
  if ( v17 != ProcessPriorityByClass )
  {
    v23 = v17 == 0;
    if ( v17 )
    {
      if ( ProcessPriorityByClass )
        return;
      v23 = v17 == 0;
    }
    LOBYTE(v4) = !v23;
    ApiSetEditionProcessForegroundPriorityChanged(a1, v4);
  }
}
