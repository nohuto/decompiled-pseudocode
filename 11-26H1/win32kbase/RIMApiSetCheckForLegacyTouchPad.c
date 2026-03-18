/*
 * XREFs of RIMApiSetCheckForLegacyTouchPad @ 0x1400EE6CC
 * Callers:
 *     RIMLoadDeviceLegacyInfo @ 0x1400EDEFC (RIMLoadDeviceLegacyInfo.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     EtwTraceLegacyTouchPadDetectionStop @ 0x1400ED9E0 (EtwTraceLegacyTouchPadDetectionStop.c)
 *     ?IsMouseDeviceOnWhiteList@@YAHPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@H@Z @ 0x1400EED24 (-IsMouseDeviceOnWhiteList@@YAHPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@H@Z.c)
 *     RIMGetContainerId @ 0x1400EEEE8 (RIMGetContainerId.c)
 *     RIMIsRunningOnDesktop @ 0x1400F0800 (RIMIsRunningOnDesktop.c)
 *     ?IsHIDMouseDeviceRelative@@YAHPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@PEAUDEVICEINFO@@@Z @ 0x14017A340 (-IsHIDMouseDeviceRelative@@YAHPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@PEAUDEVICEINFO@@@Z.c)
 *     EtwTraceLegacyTouchPadDetected @ 0x140199130 (EtwTraceLegacyTouchPadDetected.c)
 *     EtwTraceLegacyTouchPadDetectionStart @ 0x14019B300 (EtwTraceLegacyTouchPadDetectionStart.c)
 *     ?RimDeviceExtendedProps@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1401AE388 (-RimDeviceExtendedProps@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     EtwTraceTouchPadWhiteListDeviceDetected @ 0x1401DB840 (EtwTraceTouchPadWhiteListDeviceDetected.c)
 *     ?CheckLegacyPadControlledStatus@@YAXPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@@Z @ 0x1402063B8 (-CheckLegacyPadControlledStatus@@YAXPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

void __fastcall RIMApiSetCheckForLegacyTouchPad(
        struct DEVICEINFO *a1,
        struct _FILE_OBJECT *a2,
        struct _DEVICE_OBJECT *a3,
        int a4)
{
  int v4; // r12d
  BOOL v7; // ebp
  struct _DEVICE_OBJECT *v8; // rdx
  CTouchProcessor *v9; // rcx
  int v10; // r8d
  int v11; // edx
  int v12; // r8d
  CTouchProcessor *v13; // rcx
  bool v14; // di
  bool v15; // si
  __int64 v16; // rax
  int v17; // edx
  int v18; // r8d
  struct _DEVICE_OBJECT *v19; // rdx
  bool v20; // r14
  bool v21; // r12
  __int64 UserSessionState; // rax
  int v23; // r8d
  int v24; // edx
  int v25; // edx
  int v26; // r8d
  __int16 v27; // [rsp+30h] [rbp-78h]
  int v28; // [rsp+40h] [rbp-68h] BYREF
  int v29; // [rsp+44h] [rbp-64h]
  struct _FILE_OBJECT *v30; // [rsp+48h] [rbp-60h]
  __int128 v31; // [rsp+50h] [rbp-58h] BYREF

  v29 = a4;
  v30 = a2;
  v4 = a4;
  v28 = 0;
  v31 = 0LL;
  v7 = gPlatformRole == PlatformRoleMobile || gPlatformRole == PlatformRoleSlate;
  if ( (unsigned int)RIMIsRunningOnDesktop() )
  {
    EtwTraceLegacyTouchPadDetectionStart();
    if ( (int)RIMGetContainerId(a3, &v31, &v28) < 0 )
    {
      v9 = WPP_GLOBAL_Control;
      v20 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      v21 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (_DWORD)v8, v10);
        LOBYTE(v23) = v21;
        LOBYTE(v24) = v20;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v24,
          v23,
          *(_QWORD *)(UserSessionState + 19368),
          3,
          1,
          19,
          (__int64)&WPP_b554531fceee36eb2b750301196162e5_Traceguids);
      }
      v4 = v29;
    }
    else if ( !v28 )
    {
      if ( v7 )
      {
        if ( !v4 || (unsigned int)IsHIDMouseDeviceRelative(v30, a3, a1) )
        {
          EtwTraceLegacyTouchPadDetected();
          *((_WORD *)a1 + 432) |= 1u;
          InputTraceLogging::RIM::RimDeviceExtendedProps(a1);
          v13 = WPP_GLOBAL_Control;
          v14 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
          v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !v14 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_16;
          v16 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v11, v12);
          v27 = 20;
          goto LABEL_15;
        }
LABEL_18:
        if ( !IsMouseDeviceOnWhiteList(a1, v8, v4) )
          goto LABEL_19;
        EtwTraceTouchPadWhiteListDeviceDetected();
        *((_WORD *)a1 + 432) |= 1u;
        InputTraceLogging::RIM::RimDeviceExtendedProps(a1);
        v13 = WPP_GLOBAL_Control;
        v14 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
        v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v14 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
LABEL_16:
          EtwTraceLegacyTouchPadDetectionStop((__int64)v13);
          if ( gPlatformRole != PlatformRoleSlate )
            CheckLegacyPadControlledStatus(a1, v19);
          return;
        }
        v16 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v25, v26);
        v27 = 21;
LABEL_15:
        LOBYTE(v18) = v15;
        LOBYTE(v17) = v14;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v17,
          v18,
          *(_QWORD *)(v16 + 19368),
          4,
          1,
          v27,
          (__int64)&WPP_b554531fceee36eb2b750301196162e5_Traceguids);
        goto LABEL_16;
      }
LABEL_19:
      EtwTraceLegacyTouchPadDetectionStop((__int64)v9);
      return;
    }
    if ( v7 )
      goto LABEL_18;
    goto LABEL_19;
  }
}
