/*
 * XREFs of InitVideo @ 0x1401AAB00
 * Callers:
 *     xxxRemoteConnect @ 0x14007DC00 (xxxRemoteConnect.c)
 *     ?UserInitialize@@YAJXZ @ 0x140170DB4 (-UserInitialize@@YAJXZ.c)
 * Callees:
 *     DrvInitConsole @ 0x14000A7F4 (DrvInitConsole.c)
 *     ?DispBrokerUpdateKernelDisplayPolicies@@YAXXZ @ 0x14007CD30 (-DispBrokerUpdateKernelDisplayPolicies@@YAXXZ.c)
 *     Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline @ 0x14007EC3C (Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline.c)
 *     DrvCloseGraphicsDevices @ 0x14016E180 (DrvCloseGraphicsDevices.c)
 *     DrvSetDisplayConfig @ 0x140175E80 (DrvSetDisplayConfig.c)
 *     ??4?$SGRDPgProtocolType@G@@QEAAAEAGAEBG@Z @ 0x14017D4C0 (--4-$SGRDPgProtocolType@G@@QEAAAEAGAEBG@Z.c)
 *     UpdateExternalMonitorConnectedStatus @ 0x140196570 (UpdateExternalMonitorConnectedStatus.c)
 *     CacheRotationInfo @ 0x14019CBCC (CacheRotationInfo.c)
 *     GreReinitializePerUserDpiSetting @ 0x1401BDC24 (GreReinitializePerUserDpiSetting.c)
 *     GreUpdateSharedDevCaps @ 0x1401C06BC (GreUpdateSharedDevCaps.c)
 *     InitUserScreen @ 0x1401D1E4C (InitUserScreen.c)
 *     Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledDeviceUsageNoInline @ 0x1401D60EC (Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

struct _MDEV *__fastcall InitVideo(__int64 a1, int a2, int a3)
{
  int v4; // edi
  __int16 v5; // si
  __int64 v6; // rcx
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  int v10; // edx
  __int64 v11; // rcx
  int v12; // r8d
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  __int64 v16; // rcx
  int IsEnabledDeviceUsageNoInline; // eax
  unsigned int v18; // r8d
  int v19; // edx
  __int64 v20; // rcx
  int v21; // r8d
  __int64 v22; // rcx
  __int64 v23; // rbx
  int v24; // edx
  int v25; // r8d
  __int64 v26; // rcx
  struct _MDEV *v27; // rbx
  int v28; // edx
  int v29; // r8d
  __int64 v30; // rcx
  int v31; // edx
  int v32; // r8d
  __int64 UserSessionState; // rax
  __int64 v34; // rcx
  int v35; // edx
  __int64 v36; // rcx
  int v37; // r8d
  int (*v38)(void); // rax
  __int64 v39; // rax
  __int16 v41; // [rsp+B8h] [rbp+10h] BYREF
  struct _MDEV *v42; // [rsp+C0h] [rbp+18h] BYREF

  v42 = 0LL;
  v4 = 0;
  v5 = *(_WORD *)(W32GetUserSessionState(a1, a2, a3) + 68744);
  if ( (int)DrvInitConsole(v6) < 0 )
    return 0LL;
  if ( !*(_DWORD *)(W32GetUserSessionState(v8, v7, v9) + 68600)
    && !*(_DWORD *)(W32GetUserSessionState(v11, v10, v12) + 68604) )
  {
    v41 = -1;
    SGRDPgProtocolType<unsigned short>::operator=(v11, &v41, v12);
    *(_DWORD *)(W32GetUserSessionState(v14, v13, v15) + 316) = 0xFFFF;
    v4 = 1;
    v11 = *(_QWORD *)(W32GetSessionState(v16) + 88);
    *(_DWORD *)(v11 + 1148) = 0;
  }
  DispBrokerUpdateKernelDisplayPolicies(v11, v10, v12);
  GreReinitializePerUserDpiSetting();
  IsEnabledDeviceUsageNoInline = Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline();
  v18 = 2191;
  if ( !IsEnabledDeviceUsageNoInline )
    v18 = 2447;
  if ( (int)DrvSetDisplayConfig(0, 0LL, v18, 0x802u, 0LL, 0, 0LL, 0LL, 0LL, &v42, 0LL, 0LL, 0LL, 0LL, 0LL, a1, 0LL) < 0 )
    return 0LL;
  if ( !(unsigned int)Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledDeviceUsageNoInline()
    && !*(_WORD *)(W32GetUserSessionState(v20, v19, v21) + 68744) )
  {
    UpdateExternalMonitorConnectedStatus(1);
  }
  v22 = *(_QWORD *)(W32GetSessionState(v20) + 88);
  *(_DWORD *)(v22 + 1148) = 0;
  v23 = *(_QWORD *)v42;
  v26 = *(_QWORD *)(W32GetUserSessionState(v22, v24, v25) + 56968);
  *(_QWORD *)(v26 + 40) = v23;
  v27 = v42;
  v30 = *(_QWORD *)(W32GetUserSessionState(v26, v28, v29) + 56968);
  *(_QWORD *)(v30 + 16) = v27;
  UserSessionState = W32GetUserSessionState(v30, v31, v32);
  GreUpdateSharedDevCaps(*(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 40LL));
  if ( !(unsigned int)InitUserScreen() )
    return 0LL;
  if ( v4 )
  {
    if ( !v5 )
      RtlSetActiveConsoleId(0xFFFFFFFFLL);
    DrvCloseGraphicsDevices(1LL);
  }
  else
  {
    v36 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v34) + 48);
    v38 = *(int (**)(void))(v36 + 2688);
    if ( v38 && v38() >= 0 )
      CacheRotationInfo(v36);
  }
  v39 = W32GetUserSessionState(v36, v35, v37);
  *(_DWORD *)(v39 + 68928) |= 4u;
  return v42;
}
