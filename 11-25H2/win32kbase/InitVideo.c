/*
 * XREFs of InitVideo @ 0x1401B6588
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x140135AA0 (-UserInitialize@@YAJXZ.c)
 *     xxxRemoteConnect @ 0x14016C380 (xxxRemoteConnect.c)
 * Callees:
 *     UpdateExternalMonitorConnectedStatus @ 0x14002AAE4 (UpdateExternalMonitorConnectedStatus.c)
 *     ?DispBrokerUpdateKernelDisplayPolicies@@YAXXZ @ 0x14002B900 (-DispBrokerUpdateKernelDisplayPolicies@@YAXXZ.c)
 *     DrvCloseGraphicsDevices @ 0x14006C330 (DrvCloseGraphicsDevices.c)
 *     GreUpdateSharedDevCaps @ 0x1401216C0 (GreUpdateSharedDevCaps.c)
 *     DrvSetDisplayConfig @ 0x14013C960 (DrvSetDisplayConfig.c)
 *     ?HYDRA_HINT@@YAXW4HydraHint@@@Z @ 0x14014CA8C (-HYDRA_HINT@@YAXW4HydraHint@@@Z.c)
 *     CacheRotationInfo @ 0x14015C6F8 (CacheRotationInfo.c)
 *     InitUserScreen @ 0x140167940 (InitUserScreen.c)
 *     DrvInitConsole @ 0x14017CE9C (DrvInitConsole.c)
 *     ??4?$SGRDPgProtocolType@G@@QEAAAEAGAEBG@Z @ 0x1401A0F50 (--4-$SGRDPgProtocolType@G@@QEAAAEAGAEBG@Z.c)
 *     Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline @ 0x1401ABE78 (Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline.c)
 *     GreReinitializePerUserDpiSetting @ 0x1401D0014 (GreReinitializePerUserDpiSetting.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

struct _MDEV *__fastcall InitVideo(__int64 a1, __int64 a2)
{
  int v3; // edi
  __int16 v4; // si
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  int IsEnabledDeviceUsageNoInline; // eax
  unsigned int v14; // r8d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  struct _MDEV *v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 UserSessionState; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  int (*v30)(void); // rax
  __int64 v31; // rcx
  __int16 v33; // [rsp+B8h] [rbp+10h] BYREF
  struct _MDEV *v34; // [rsp+C0h] [rbp+18h] BYREF

  v34 = 0LL;
  v3 = 0;
  v4 = *(_WORD *)(W32GetUserSessionState(a1, a2) + 68752);
  if ( (int)DrvInitConsole(v5) < 0 )
    return 0LL;
  if ( !*(_DWORD *)(W32GetUserSessionState(v7, v6) + 68608) && !*(_DWORD *)(W32GetUserSessionState(v9, v8) + 68612) )
  {
    v33 = -1;
    SGRDPgProtocolType<unsigned short>::operator=(v9, &v33);
    *(_DWORD *)(W32GetUserSessionState(v11, v10) + 316) = 0xFFFF;
    v3 = 1;
    v9 = *(_QWORD *)(W32GetSessionState(v12) + 88);
    *(_DWORD *)(v9 + 1060) = 0;
  }
  DispBrokerUpdateKernelDisplayPolicies(v9, v8);
  GreReinitializePerUserDpiSetting();
  IsEnabledDeviceUsageNoInline = Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline();
  v14 = 2191;
  if ( !IsEnabledDeviceUsageNoInline )
    v14 = 2447;
  if ( (int)DrvSetDisplayConfig(0, 0LL, v14, 0x802u, 0LL, 0, 0LL, 0LL, 0LL, &v34, 0LL, 0LL, 0LL, 0LL, 0LL, a1, 0LL) < 0 )
    return 0LL;
  if ( !*(_WORD *)(W32GetUserSessionState(v16, v15) + 68752) )
    UpdateExternalMonitorConnectedStatus(1);
  v18 = *(_QWORD *)(W32GetSessionState(v17) + 88);
  *(_DWORD *)(v18 + 1060) = 0;
  v19 = *(_QWORD *)v34;
  v21 = *(_QWORD *)(W32GetUserSessionState(v18, v20) + 56968);
  *(_QWORD *)(v21 + 48) = v19;
  v22 = v34;
  v24 = *(_QWORD *)(W32GetUserSessionState(v21, v23) + 56968);
  *(_QWORD *)(v24 + 16) = v22;
  UserSessionState = W32GetUserSessionState(v24, v25);
  GreUpdateSharedDevCaps(*(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 48LL));
  if ( !(unsigned int)InitUserScreen() )
    return 0LL;
  if ( v3 )
  {
    if ( !v4 )
      RtlSetActiveConsoleId(0xFFFFFFFFLL);
    DrvCloseGraphicsDevices(1LL);
  }
  else
  {
    v30 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v28, v27) + 48) + 3072LL);
    if ( v30 && v30() >= 0 )
      CacheRotationInfo(v31, v29);
  }
  HYDRA_HINT(4LL, v29);
  return v34;
}
