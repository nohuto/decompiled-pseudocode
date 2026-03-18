/*
 * XREFs of InputInitialize @ 0x14021C368
 * Callers:
 *     Win32kBaseDriverEntryOrFault @ 0x1401B34A8 (Win32kBaseDriverEntryOrFault.c)
 *     Win32kBaseDriverEntry @ 0x1402E85E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x140033268 (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ??0ApiSetEditionCrit@@QEAA@H@Z @ 0x140033288 (--0ApiSetEditionCrit@@QEAA@H@Z.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     W32GetCurrentWin32kSessionId @ 0x140049A34 (W32GetCurrentWin32kSessionId.c)
 *     ??0CTouchProcessor@@QEAA@XZ @ 0x14014D0A8 (--0CTouchProcessor@@QEAA@XZ.c)
 *     IsGetInputSensorThreadingModelSupported @ 0x14015CF04 (IsGetInputSensorThreadingModelSupported.c)
 *     InitializeInputComponents @ 0x14018C900 (InitializeInputComponents.c)
 *     ShouldEnableInputVirtualization @ 0x14018DC68 (ShouldEnableInputVirtualization.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?ivrInitialize@@YAJXZ @ 0x14021B40C (-ivrInitialize@@YAJXZ.c)
 *     ?DeviceAcceleratorInitialize@@YAJXZ @ 0x14021C210 (-DeviceAcceleratorInitialize@@YAJXZ.c)
 *     ?InitializeInputGlobals@@YAJXZ @ 0x140241168 (-InitializeInputGlobals@@YAJXZ.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 InputInitialize()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // esi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 (**v10)(void); // rbx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // ebp
  int v15; // edi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 (__fastcall *v20)(_QWORD); // rax
  CTouchProcessor *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  CTouchProcessor *v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  int CurrentWin32kSessionId; // ebx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 UserSessionState; // rbx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 (__fastcall *v41)(__int64); // rax
  char v43; // [rsp+78h] [rbp+20h] BYREF

  ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)&v43);
  *(_DWORD *)(W32GetUserSessionState(v1, v0) + 19136) = 1;
  v4 = InitializeInputGlobals();
  if ( v4 >= 0 )
  {
    *(_QWORD *)(W32GetUserSessionState(v3, v2) + 3064) = 0LL;
    v7 = 0;
    *(_BYTE *)(W32GetUserSessionState(v6, v5) + 3080) = 1;
    v10 = (__int64 (**)(void))(W32GetUserSessionState(v9, v8) + 3144);
    do
    {
      if ( v7 != *(_DWORD *)v10 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 68);
      v11 = (*(v10 - 4))();
      *(v10 - 1) = (__int64 (*)(void))v11;
      if ( !v11 )
      {
        v4 = -1073741823;
        goto LABEL_27;
      }
      v14 = *(_DWORD *)v10;
      v15 = 0;
      if ( (int)IsGetInputSensorThreadingModelSupported(v13, v12) < 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1345);
      if ( (int)IsGetInputSensorThreadingModelSupported(v17, v16) >= 0 )
      {
        v20 = *(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v19, v18) + 48) + 5344LL);
        if ( v20 )
          v15 = v20(v14);
      }
      *((_DWORD *)v10 - 4) = v15;
      if ( !v15 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 80);
      ++v7;
      v10 += 6;
    }
    while ( v7 < 3 );
    v21 = (CTouchProcessor *)Win32AllocPoolZInitImpl(256LL, 0xA8uLL, 0x43547072u);
    if ( v21 )
      v24 = CTouchProcessor::CTouchProcessor(v21, v22);
    else
      v24 = 0LL;
    *(_QWORD *)(W32GetUserSessionState(v23, v22) + 3256) = v24;
    if ( *(_QWORD *)(W32GetUserSessionState(v26, v25) + 3256) )
    {
      v4 = DeviceAcceleratorInitialize(v28, v27);
      if ( v4 >= 0 )
      {
        if ( ShouldEnableInputVirtualization(v30, v29) )
        {
          CurrentWin32kSessionId = W32GetCurrentWin32kSessionId();
          *(_DWORD *)(W32GetUserSessionState(v33, v32) + 19452) = CurrentWin32kSessionId;
          *(_DWORD *)(W32GetUserSessionState(v35, v34) + 19448) = 1;
          v4 = ivrInitialize();
          if ( v4 >= 0 )
          {
            UserSessionState = W32GetUserSessionState(v37, v36);
            v41 = *(__int64 (__fastcall **)(__int64))(W32GetUserSessionState(v40, v39) + 19512);
            if ( v41 )
              v4 = v41(UserSessionState + 19504);
            else
              v4 = -1073741637;
          }
        }
      }
    }
    else
    {
      v4 = -1073741801;
    }
    InitializeInputComponents();
  }
LABEL_27:
  ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)&v43);
  return (unsigned int)v4;
}
