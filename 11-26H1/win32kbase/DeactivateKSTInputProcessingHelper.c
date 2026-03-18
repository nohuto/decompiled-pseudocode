/*
 * XREFs of DeactivateKSTInputProcessingHelper @ 0x14021DE70
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1400BA274 (xxxDestroyThreadInfo.c)
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x14005FB10 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x1400E9D80 (-Close@IOCPDispatcher@@QEAAX_N@Z.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x140111814 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     CleanupSensorExplicitly @ 0x140196C90 (CleanupSensorExplicitly.c)
 *     KSTIOCPDispatcher_Destroy @ 0x140218B40 (KSTIOCPDispatcher_Destroy.c)
 *     ?DeactivateKSTInputProcessing@KST@InputTraceLogging@@SAXXZ @ 0x14021AFC4 (-DeactivateKSTInputProcessing@KST@InputTraceLogging@@SAXXZ.c)
 *     ?DeactivateKSTInputProcessingHelper@KST@InputTraceLogging@@SAXXZ @ 0x14021DC2C (-DeactivateKSTInputProcessingHelper@KST@InputTraceLogging@@SAXXZ.c)
 *     ?ShouldKSTInitializeHidSensor@@YA_NXZ @ 0x14021DCB4 (-ShouldKSTInitializeHidSensor@@YA_NXZ.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 DeactivateKSTInputProcessingHelper()
{
  char v0; // bl
  char v1; // dl
  char v2; // r8
  __int64 v3; // rdx
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  __int64 UserSessionState; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int (*v15)(void); // rax
  void (*v16)(void); // rax
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  __int64 v20; // rax
  __int64 result; // rax
  char v22; // dl
  char v23; // [rsp+60h] [rbp+8h] BYREF

  v0 = 1;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || (v1 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    v1 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v2 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v2 = 0;
  }
  if ( v1 || v2 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v1,
      v2,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      2,
      18,
      (__int64)&WPP_0fe79df054993ae0b16e68322df78d93_Traceguids);
  InputTraceLogging::KST::DeactivateKSTInputProcessingHelper();
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v23, v3);
  if ( *(_QWORD *)(W32GetUserSessionState(v5, v4, v6) + 19256) )
  {
    UserSessionState = W32GetUserSessionState(v8, v7, v9);
    IOCPDispatcher::Close(*(HANDLE **)(UserSessionState + 19256), 1);
  }
  CleanupSensorExplicitly(0, v7, v9);
  if ( (unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( ShouldKSTInitializeHidSensor(v12) )
    {
      v12 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v12) + 48);
      v15 = *(int (**)(void))(v12 + 6032);
      if ( v15 )
      {
        if ( v15() >= 0 )
        {
          v12 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v12) + 48);
          v16 = *(void (**)(void))(v12 + 6040);
          if ( v16 )
            v16();
        }
      }
    }
  }
  if ( !v23 )
    UserSessionSwitchLeaveCritWithNonPaged(v12, v11, v13, v14);
  KSTIOCPDispatcher_Destroy(v12, v11, v13);
  InputTraceLogging::KST::DeactivateKSTInputProcessing();
  v20 = W32GetUserSessionState(v18, v17, v19);
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v20 + 3104) + 8LL))(*(_QWORD *)(v20 + 3104));
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (result = *((unsigned int *)WPP_GLOBAL_Control + 11), (result & 2) == 0)
    || (v22 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    v22 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v0 = 0;
  if ( v22 || v0 )
    return WPP_RECORDER_AND_TRACE_SF_(
             *((_QWORD *)WPP_GLOBAL_Control + 3),
             v22,
             v0,
             *((_QWORD *)WPP_GLOBAL_Control + 8),
             5,
             2,
             19,
             (__int64)&WPP_0fe79df054993ae0b16e68322df78d93_Traceguids);
  return result;
}
