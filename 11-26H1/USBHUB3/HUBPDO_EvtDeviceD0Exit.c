/*
 * XREFs of HUBPDO_EvtDeviceD0Exit @ 0x140015C40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     HUBSM_AddEvent @ 0x14000A81C (HUBSM_AddEvent.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x14000F6F4 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     McTemplateK0pqqh_EtwWriteTransfer @ 0x14000F76C (McTemplateK0pqqh_EtwWriteTransfer.c)
 *     Feature_UH3WET__private_IsEnabledDeviceUsageNoInline @ 0x140014B8C (Feature_UH3WET__private_IsEnabledDeviceUsageNoInline.c)
 *     HUBMISC_WaitForSignal @ 0x14003436C (HUBMISC_WaitForSignal.c)
 *     HUBIDLE_AddEvent @ 0x14004073C (HUBIDLE_AddEvent.c)
 *     __security_check_cookie @ 0x1400467B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 *     WMI_FireNotification @ 0x14008FAC0 (WMI_FireNotification.c)
 *     WMI_FireNotificationOld @ 0x140090190 (WMI_FireNotificationOld.c)
 */

__int64 __fastcall HUBPDO_EvtDeviceD0Exit(unsigned __int64 a1, int a2)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // r8
  int v8; // r14d
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  unsigned int v12; // esi
  int v13; // edx
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v19; // [rsp+28h] [rbp-59h]
  __int64 v20; // [rsp+30h] [rbp-51h]
  __int64 v21; // [rsp+48h] [rbp-39h] BYREF
  _QWORD v22[3]; // [rsp+50h] [rbp-31h] BYREF
  __int128 v23; // [rsp+68h] [rbp-19h] BYREF
  __int64 v24; // [rsp+78h] [rbp-9h]
  __int64 v25; // [rsp+80h] [rbp-1h]
  __int128 v26; // [rsp+88h] [rbp+7h]
  __int64 v27; // [rsp+98h] [rbp+17h]
  GUID v28; // [rsp+A0h] [rbp+1Fh] BYREF

  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006D1D0);
  v5 = *(_QWORD *)(v4 + 24);
  *(_DWORD *)(v4 + 384) = a2;
  v28 = 0LL;
  if ( (*(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                      WdfDriverGlobals,
                      WdfDriverGlobals->Driver,
                      off_14006D2C0)
                  + 4) & 0x1000) != 0
    && EtwActivityIdControl(3u, (LPGUID)(v5 + 2184)) >= 0 )
  {
    v28 = *(GUID *)(v5 + 2184);
    _InterlockedOr((volatile signed __int32 *)(v5 + 1644), 0x80u);
  }
  KeClearEvent((PRKEVENT)(v5 + 1592));
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64))(WdfFunctions_01015 + 3104))(
         WdfDriverGlobals,
         a1);
  v8 = v6;
  if ( (Microsoft_Windows_USB_USBHUB3EnableBits & 4) != 0 )
  {
    v9 = *(_DWORD *)(v4 + 32) >> 3;
    LOWORD(v9) = (*(_DWORD *)(v4 + 32) & 8) != 0;
    McTemplateK0pqqh_EtwWriteTransfer(
      v9,
      &USBHUB3_ETW_EVENT_DEVICE_D0_EXIT_START,
      &v28,
      *(_QWORD *)(v5 + 24),
      a2,
      v6,
      v9);
  }
  if ( a2 == 5 )
  {
    if ( !v8 )
      goto LABEL_26;
  }
  else if ( !v8 && (*(_DWORD *)(v5 + 1640) & 0x400) == 0 )
  {
    DWORD1(v23) = 0;
    HIDWORD(v22[0]) = 0;
    v21 = 0LL;
    _InterlockedOr((volatile signed __int32 *)(v5 + 1640), 0x400u);
    v27 = 0LL;
    v22[0] = 24LL;
    v24 = 0LL;
    v22[1] = HUBREG_EvtWorkItemUpdateSqmDeviceSelectiveSuspended;
    v23 = 0LL;
    LODWORD(v23) = 56;
    v25 = 0x100000001LL;
    v26 = a1;
    v22[2] = 1LL;
    v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, __int128 *, __int64 *))(WdfFunctions_01015 + 3032))(
            WdfDriverGlobals,
            v22,
            &v23,
            &v21);
    if ( v10 >= 0 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3040))(WdfDriverGlobals, v21);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v20) = v10;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
        2u,
        2u,
        0x4Bu,
        (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids,
        v20);
    }
  }
  if ( a2 == 6 )
  {
    HUBSM_AddEvent(v5 + 512, 4079);
  }
  else
  {
    if ( a2 == 4 )
    {
      if ( (*(_DWORD *)(v4 + 32) & 4) != 0 )
      {
        v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, __int64))(WdfFunctions_01015 + 688))(
                WdfDriverGlobals,
                a1,
                3221226195LL);
        if ( v11 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v20) = v11;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
            3u,
            5u,
            0x4Cu,
            (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids,
            v20);
        }
        _InterlockedAnd((volatile signed __int32 *)(v4 + 32), 0xFFFFFFFB);
      }
      if ( (*(_DWORD *)(v5 + 1640) & 0x4000) == 0 )
        HUBIDLE_AddEvent(v4 + 72, 6008LL, 0LL);
    }
    HUBSM_AddEvent(v5 + 512, 4071);
  }
  HUBMISC_WaitForSignal((PVOID)(v5 + 1592));
LABEL_26:
  LOBYTE(v7) = 1;
  v12 = *(_DWORD *)(v5 + 1584);
  if ( (*(unsigned __int8 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01015 + 2560))(
         WdfDriverGlobals,
         *(_QWORD *)(v5 + 2424),
         v7) == 1 )
  {
    IsEnabledDeviceUsageNoInline = Feature_UH3WET__private_IsEnabledDeviceUsageNoInline();
    v15 = *(_QWORD *)(v5 + 8);
    if ( IsEnabledDeviceUsageNoInline )
      WMI_FireNotification(v15, 1LL);
    else
      WMI_FireNotificationOld(*(_QWORD *)v5, *(unsigned __int16 *)(v15 + 200), 1LL);
  }
  if ( *(_QWORD *)(v4 + 392) )
    SleepstudyHelper_ComponentInactive();
  v16 = *(_QWORD *)(v5 + 8);
  if ( (*(_DWORD *)(v16 + 204) & 0x800) != 0 )
  {
    v17 = *(_DWORD *)(v5 + 2732);
    if ( v17 == 2 || v17 == 4 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v13) = 4;
        WPP_RECORDER_SF_(*(_QWORD *)(v16 + 1432), v13, 5, 77, (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids);
      }
      PoFxIdleComponent(*(_QWORD *)(*(_QWORD *)v5 + 2624LL), 0LL, 2LL);
    }
  }
  if ( (Microsoft_Windows_USB_USBHUB3EnableBits & 4) != 0 )
  {
    LODWORD(v20) = v8;
    LODWORD(v19) = v12;
    McTemplateK0pqq_EtwWriteTransfer(
      v16,
      &USBHUB3_ETW_EVENT_DEVICE_D0_EXIT_COMPLETE,
      &v28,
      *(_QWORD *)(v5 + 24),
      v19,
      v20);
  }
  _InterlockedAnd((volatile signed __int32 *)(v5 + 1644), 0xFFFFFF7F);
  return v12;
}
