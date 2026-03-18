/*
 * XREFs of UserDeactivateMITInputProcessing @ 0x140179858
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1400BA274 (xxxDestroyThreadInfo.c)
 *     NtMITDeactivateInputProcessing @ 0x1401E0D10 (NtMITDeactivateInputProcessing.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     IsInputThread @ 0x140067910 (IsInputThread.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?CoreMsgCloseAllDestinations@InputExtensibilityCallout@@AEAAXXZ @ 0x140179A90 (-CoreMsgCloseAllDestinations@InputExtensibilityCallout@@AEAAXXZ.c)
 *     HandleInputThreadDeactivated @ 0x140179B00 (HandleInputThreadDeactivated.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ApiSetEditionDeactivateMitInput @ 0x1401C3D0C (ApiSetEditionDeactivateMitInput.c)
 *     CleanupTouchExtensibility @ 0x1401C5B00 (CleanupTouchExtensibility.c)
 *     ??1VirtualTouchpadProcessor@@AEAA@XZ @ 0x140220698 (--1VirtualTouchpadProcessor@@AEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 UserDeactivateMITInputProcessing()
{
  int v0; // ecx
  char v1; // bl
  char v2; // dl
  char v3; // r8
  __int64 UserSessionState; // rax
  char v5; // dl
  int v6; // ecx
  char v7; // r8
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  char v11; // dl
  int v12; // ecx
  char v13; // r8
  __int64 v14; // rax
  char v15; // dl
  int v16; // ecx
  char v17; // r8
  __int64 v18; // rsi
  char *v19; // rdi
  InputExtensibilityCallout *v20; // rcx
  char v21; // dl
  int v22; // ecx
  char v23; // r8
  __int64 result; // rax
  char v25; // dl
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9

  v0 = (int)WPP_GLOBAL_Control;
  v1 = 1;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || (v2 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    v2 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v3 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v3 = 0;
  }
  if ( v2 || v3 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v2,
      v3,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      2,
      15,
      (__int64)&WPP_01d96f24aa1a341900b345b638deea72_Traceguids);
  UserSessionState = W32GetUserSessionState(v0, v2, v3);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(UserSessionState + 18800) + 8LL))(*(_QWORD *)(UserSessionState + 18800));
  W32GetUserSessionState(v6, v5, v7);
  if ( !IsInputThread(v9, v8, v10) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 317LL);
  HandleInputThreadDeactivated();
  ApiSetEditionDeactivateMitInput();
  CleanupTouchExtensibility();
  v14 = W32GetUserSessionState(v12, v11, v13);
  v18 = v14;
  v19 = *(char **)(v14 + 19312);
  if ( v19 )
  {
    VirtualTouchpadProcessor::~VirtualTouchpadProcessor(*(VirtualTouchpadProcessor **)(v14 + 19312));
    GreDeleteFastMutex(v19, v26, v27, v28);
    *(_QWORD *)(v18 + 19312) = 0LL;
  }
  v20 = *(InputExtensibilityCallout **)(W32GetUserSessionState(v16, v15, v17) + 16400);
  *(_QWORD *)v20 = 0LL;
  InputExtensibilityCallout::CoreMsgCloseAllDestinations(v20);
  result = W32GetUserSessionState(v22, v21, v23);
  *(_QWORD *)(result + 3280) = 0LL;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (result = *((unsigned int *)WPP_GLOBAL_Control + 11), (result & 2) == 0)
    || (v25 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    v25 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v1 = 0;
  if ( v25 || v1 )
    return WPP_RECORDER_AND_TRACE_SF_(
             *((_QWORD *)WPP_GLOBAL_Control + 3),
             v25,
             v1,
             *((_QWORD *)WPP_GLOBAL_Control + 8),
             5,
             2,
             16,
             (__int64)&WPP_01d96f24aa1a341900b345b638deea72_Traceguids);
  return result;
}
