/*
 * XREFs of DeactivateKSTInputProcessingHelper @ 0x140218FA0
 * Callers:
 *     xxxDestroyThreadInfo @ 0x140164194 (xxxDestroyThreadInfo.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x140082720 (-Close@IOCPDispatcher@@QEAAX_N@Z.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1400E1960 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ??1ReEnterLeaveCrit@@QEAA@XZ @ 0x1400E1A28 (--1ReEnterLeaveCrit@@QEAA@XZ.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x1401A70D8 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     KSTIOCPDispatcher_Destroy @ 0x140210F20 (KSTIOCPDispatcher_Destroy.c)
 *     ?DeactivateKSTInputProcessing@KST@InputTraceLogging@@SAXXZ @ 0x140215ADC (-DeactivateKSTInputProcessing@KST@InputTraceLogging@@SAXXZ.c)
 *     CleanupSensorExplicitly @ 0x140215F30 (CleanupSensorExplicitly.c)
 *     ?DeactivateKSTInputProcessingHelper@KST@InputTraceLogging@@SAXXZ @ 0x140218D5C (-DeactivateKSTInputProcessingHelper@KST@InputTraceLogging@@SAXXZ.c)
 *     ?ShouldKSTInitializeHidSensor@@YA_NXZ @ 0x140218DE4 (-ShouldKSTInitializeHidSensor@@YA_NXZ.c)
 *     ApiSetEditionPrepareHidForInputThreadMigration @ 0x140225CCC (ApiSetEditionPrepareHidForInputThreadMigration.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 DeactivateKSTInputProcessingHelper()
{
  char v0; // bl
  char v1; // dl
  char v2; // r8
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 UserSessionState; // rax
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 result; // rax
  char v15; // dl
  char v16; // [rsp+60h] [rbp+8h] BYREF

  v0 = 1;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
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
      (__int64)&WPP_f0b946dda9d5374ecc6b238217c99e48_Traceguids);
  InputTraceLogging::KST::DeactivateKSTInputProcessingHelper();
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v16);
  if ( *(_QWORD *)(W32GetUserSessionState(v4, v3) + 19224) )
  {
    UserSessionState = W32GetUserSessionState(v6, v5);
    IOCPDispatcher::Close(*(HANDLE **)(UserSessionState + 19224), 1);
  }
  CleanupSensorExplicitly(0LL, v5);
  if ( (unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline()
    && ShouldKSTInitializeHidSensor() )
  {
    ApiSetEditionPrepareHidForInputThreadMigration();
  }
  ReEnterLeaveCrit::~ReEnterLeaveCrit((ReEnterLeaveCrit *)&v16, v8);
  KSTIOCPDispatcher_Destroy(v10, v9);
  InputTraceLogging::KST::DeactivateKSTInputProcessing();
  v13 = W32GetUserSessionState(v12, v11);
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v13 + 3104) + 8LL))(*(_QWORD *)(v13 + 3104));
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (result = *((unsigned int *)WPP_GLOBAL_Control + 11), (result & 2) == 0)
    || (v15 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    v15 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v0 = 0;
  if ( v15 || v0 )
    return WPP_RECORDER_AND_TRACE_SF_(
             *((_QWORD *)WPP_GLOBAL_Control + 3),
             v15,
             v0,
             *((_QWORD *)WPP_GLOBAL_Control + 8),
             5,
             2,
             19,
             (__int64)&WPP_f0b946dda9d5374ecc6b238217c99e48_Traceguids);
  return result;
}
