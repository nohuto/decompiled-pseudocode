/*
 * XREFs of RIMApiSetCheckForLegacyTouchPad @ 0x140180798
 * Callers:
 *     RIMLoadDeviceLegacyInfo @ 0x1401D54D4 (RIMLoadDeviceLegacyInfo.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?IsMouseDeviceOnWhiteList@@YAHPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@H@Z @ 0x1400B084C (-IsMouseDeviceOnWhiteList@@YAHPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@H@Z.c)
 *     RIMGetContainerId @ 0x1400B180C (RIMGetContainerId.c)
 *     RIMIsRunningOnDesktop @ 0x1400B29E8 (RIMIsRunningOnDesktop.c)
 *     ?IsHIDMouseDeviceRelative@@YAHPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@PEAUDEVICEINFO@@@Z @ 0x140144064 (-IsHIDMouseDeviceRelative@@YAHPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@PEAUDEVICEINFO@@@Z.c)
 *     EtwTraceLegacyTouchPadDetectionStart @ 0x14015AF20 (EtwTraceLegacyTouchPadDetectionStart.c)
 *     EtwTraceLegacyTouchPadDetectionStop @ 0x14015B290 (EtwTraceLegacyTouchPadDetectionStop.c)
 *     EtwTraceLegacyTouchPadDetected @ 0x14015EB60 (EtwTraceLegacyTouchPadDetected.c)
 *     EtwTraceTouchPadWhiteListDeviceDetected @ 0x1401B8970 (EtwTraceTouchPadWhiteListDeviceDetected.c)
 *     ?RimDeviceExtendedProps@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1401D5E2C (-RimDeviceExtendedProps@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     ?CheckLegacyPadControlledStatus@@YAXPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@@Z @ 0x1401E75F4 (-CheckLegacyPadControlledStatus@@YAXPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

void __fastcall RIMApiSetCheckForLegacyTouchPad(
        struct DEVICEINFO *a1,
        struct _FILE_OBJECT *a2,
        struct _DEVICE_OBJECT *a3,
        int a4)
{
  int v4; // r12d
  BOOL v7; // ebp
  __int64 v8; // rcx
  struct _DEVICE_OBJECT *v9; // rdx
  void *v10; // rcx
  bool v11; // r14
  bool v12; // r12
  __int64 v13; // rax
  int v14; // r8d
  int v15; // edx
  __int64 v16; // rdx
  void *v17; // rcx
  bool v18; // di
  __int64 v19; // rdx
  bool v20; // si
  __int64 UserSessionState; // rax
  int v22; // edx
  int v23; // r8d
  struct _DEVICE_OBJECT *v24; // rdx
  __int16 v25; // [rsp+30h] [rbp-78h]
  int v26; // [rsp+40h] [rbp-68h] BYREF
  int v27; // [rsp+44h] [rbp-64h]
  struct _FILE_OBJECT *v28; // [rsp+48h] [rbp-60h]
  __int128 v29; // [rsp+50h] [rbp-58h] BYREF

  v26 = 0;
  v27 = a4;
  v4 = a4;
  v28 = a2;
  v29 = 0LL;
  v7 = gPlatformRole == PlatformRoleMobile || gPlatformRole == PlatformRoleSlate;
  if ( RIMIsRunningOnDesktop((__int64)a1, (__int64)a2) )
  {
    EtwTraceLegacyTouchPadDetectionStart(v8);
    if ( (int)RIMGetContainerId(a3, &v29, &v26) >= 0 )
    {
      if ( !v26 )
      {
        if ( !v7 )
          goto LABEL_40;
        if ( !v4 || IsHIDMouseDeviceRelative(v28, a3, a1) )
        {
          EtwTraceLegacyTouchPadDetected((__int64)v10);
          *((_WORD *)a1 + 432) |= 1u;
          InputTraceLogging::RIM::RimDeviceExtendedProps(a1);
          v17 = WPP_GLOBAL_Control;
          v18 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
          v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !v18 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_39;
          UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v19);
          v25 = 20;
          goto LABEL_38;
        }
LABEL_17:
        if ( (unsigned int)IsMouseDeviceOnWhiteList(a1, v9, v4) )
        {
          EtwTraceTouchPadWhiteListDeviceDetected();
          *((_WORD *)a1 + 432) |= 1u;
          InputTraceLogging::RIM::RimDeviceExtendedProps(a1);
          v17 = WPP_GLOBAL_Control;
          v18 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
          v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !v18 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_39;
          UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v16);
          v25 = 21;
LABEL_38:
          LOBYTE(v23) = v20;
          LOBYTE(v22) = v18;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v22,
            v23,
            *(_QWORD *)(UserSessionState + 19336),
            4,
            1,
            v25,
            (__int64)&WPP_b554531fceee36eb2b750301196162e5_Traceguids);
LABEL_39:
          EtwTraceLegacyTouchPadDetectionStop((__int64)v17);
          if ( gPlatformRole != PlatformRoleSlate )
            CheckLegacyPadControlledStatus(a1, v24);
          return;
        }
LABEL_40:
        EtwTraceLegacyTouchPadDetectionStop((__int64)v10);
        return;
      }
    }
    else
    {
      v10 = WPP_GLOBAL_Control;
      v11 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v13 = W32GetUserSessionState(WPP_GLOBAL_Control, v9);
        LOBYTE(v14) = v12;
        LOBYTE(v15) = v11;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v15,
          v14,
          *(_QWORD *)(v13 + 19336),
          3,
          1,
          19,
          (__int64)&WPP_b554531fceee36eb2b750301196162e5_Traceguids);
      }
      v4 = v27;
    }
    if ( !v7 )
      goto LABEL_40;
    goto LABEL_17;
  }
}
