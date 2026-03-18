/*
 * XREFs of InputInitialize @ 0x140194D38
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1402F04E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     ?Initialize@CTouchProcessor@@SAJXZ @ 0x14018A808 (-Initialize@CTouchProcessor@@SAJXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?InitializeInputGlobals@@YAJXZ @ 0x1401BCD80 (-InitializeInputGlobals@@YAJXZ.c)
 *     ApiSetEnterEditionCrit @ 0x1401C50EC (ApiSetEnterEditionCrit.c)
 *     InitializeInputComponents @ 0x14021B770 (InitializeInputComponents.c)
 *     ?ivrInitialize@@YAJXZ @ 0x14021F8E0 (-ivrInitialize@@YAJXZ.c)
 *     ShouldEnableInputVirtualization @ 0x14021FC0C (ShouldEnableInputVirtualization.c)
 *     ?DeviceAcceleratorInitialize@@YAJXZ @ 0x14021FE20 (-DeviceAcceleratorInitialize@@YAJXZ.c)
 *     ApiSetGetInputSensorThreadingModel @ 0x1402280D0 (ApiSetGetInputSensorThreadingModel.c)
 *     ApiSetLeaveEditionCrit @ 0x140228290 (ApiSetLeaveEditionCrit.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 InputInitialize()
{
  int v0; // ebp
  int v1; // edx
  int v2; // ecx
  int v3; // r8d
  int v4; // edx
  int v5; // ecx
  int v6; // ebx
  int v7; // r8d
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  __int64 UserSessionState; // rsi
  unsigned int i; // ebx
  __int64 v16; // rax
  int InputSensorThreadingModel; // eax
  __int64 v18; // rcx
  int CurrentWin32kSessionId; // ebx
  int v20; // edx
  int v21; // ecx
  int v22; // r8d
  int v23; // edx
  int v24; // ecx
  int v25; // r8d
  int v26; // edx
  int v27; // ecx
  int v28; // r8d
  __int64 v29; // rbx
  int v30; // edx
  int v31; // ecx
  int v32; // r8d
  __int64 (__fastcall *v33)(__int64); // rax

  v0 = ApiSetEnterEditionCrit();
  *(_DWORD *)(W32GetUserSessionState(v2, v1, v3) + 19168) = 1;
  v6 = InitializeInputGlobals();
  if ( v6 >= 0 )
  {
    *(_QWORD *)(W32GetUserSessionState(v5, v4, v7) + 3064) = 0LL;
    *(_BYTE *)(W32GetUserSessionState(v9, v8, v10) + 3080) = 1;
    UserSessionState = W32GetUserSessionState(v12, v11, v13);
    for ( i = 0; i < 3; ++i )
    {
      if ( i != *(_DWORD *)(UserSessionState + 48LL * i + 3144) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 68LL);
      v16 = (*(__int64 (**)(void))(UserSessionState + 48LL * i + 3112))();
      *(_QWORD *)(UserSessionState + 48LL * i + 3136) = v16;
      if ( !v16 )
      {
        v6 = -1073741823;
        goto LABEL_19;
      }
      InputSensorThreadingModel = ApiSetGetInputSensorThreadingModel(*(unsigned int *)(UserSessionState + 48LL * i + 3144));
      *(_DWORD *)(UserSessionState + 48LL * i + 3128) = InputSensorThreadingModel;
      if ( !InputSensorThreadingModel )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 80LL);
    }
    v6 = CTouchProcessor::Initialize();
    if ( v6 >= 0 )
    {
      v6 = DeviceAcceleratorInitialize();
      if ( v6 >= 0 )
      {
        if ( (unsigned __int8)ShouldEnableInputVirtualization() )
        {
          CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(v18);
          *(_DWORD *)(W32GetUserSessionState(v21, v20, v22) + 19484) = CurrentWin32kSessionId;
          *(_DWORD *)(W32GetUserSessionState(v24, v23, v25) + 19480) = 1;
          v6 = ivrInitialize();
          if ( v6 >= 0 )
          {
            v29 = W32GetUserSessionState(v27, v26, v28);
            v33 = *(__int64 (__fastcall **)(__int64))(W32GetUserSessionState(v31, v30, v32) + 19544);
            if ( v33 )
              v6 = v33(v29 + 19536);
            else
              v6 = -1073741637;
          }
        }
      }
    }
    InitializeInputComponents();
  }
LABEL_19:
  if ( !v0 )
    ApiSetLeaveEditionCrit();
  return (unsigned int)v6;
}
