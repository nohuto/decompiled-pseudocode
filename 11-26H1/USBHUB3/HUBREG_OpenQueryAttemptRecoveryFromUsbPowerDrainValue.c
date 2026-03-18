/*
 * XREFs of HUBREG_OpenQueryAttemptRecoveryFromUsbPowerDrainValue @ 0x140088C3C
 * Callers:
 *     HUBFDO_LowPowerEpochCallback @ 0x14000EAA0 (HUBFDO_LowPowerEpochCallback.c)
 *     HUBPDO_EvtWorkItemDripsWatchDogCallback @ 0x140083CF0 (HUBPDO_EvtWorkItemDripsWatchDogCallback.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     RtlUnicodeStringInit @ 0x140035E50 (RtlUnicodeStringInit.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBREG_OpenQueryAttemptRecoveryFromUsbPowerDrainValue(_DWORD *a1)
{
  __int64 v2; // rsi
  wchar_t *Pool2; // r14
  char v4; // r13
  char v5; // r12
  int v6; // ebx
  int v7; // eax
  NTSTATUS PersistedStateLocation; // eax
  unsigned __int16 v9; // r9
  __int64 v11; // [rsp+28h] [rbp-28h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v13; // [rsp+98h] [rbp+48h] BYREF
  __int64 v14; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v15; // [rsp+A8h] [rbp+58h] BYREF

  DestinationString = 0LL;
  v13 = 0;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_14006D2C0);
  v14 = 0LL;
  v15 = 0LL;
  Pool2 = 0LL;
  v4 = 0;
  v5 = 0;
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *, __int64, _QWORD, __int64 *))(WdfFunctions_01015
                                                                                                  + 1832))(
         WdfDriverGlobals,
         0LL,
         &g_UsbAutomaticSurpriseRemovalKeyName,
         131097LL,
         0LL,
         &v14);
  if ( v6 >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, _DWORD *))(WdfFunctions_01015 + 1920))(
           WdfDriverGlobals,
           v14,
           L"@B",
           a1);
    v6 = v7;
    if ( v7 >= 0 )
    {
      v4 = 1;
    }
    else
    {
      *a1 = 0;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v11) = v7;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v2 + 64),
          2u,
          2u,
          0x8Au,
          (__int64)&WPP_6348287eaa4439ce1c5af6747761b290_Traceguids,
          v11);
      }
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1848))(WdfDriverGlobals, v14);
    v14 = 0LL;
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v11) = v6;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v2 + 64),
      2u,
      2u,
      0x89u,
      (__int64)&WPP_6348287eaa4439ce1c5af6747761b290_Traceguids,
      v11);
  }
  if ( (unsigned __int8)RtlIsStateSeparationEnabled() == 1 )
  {
    PersistedStateLocation = RtlGetPersistedStateLocation(
                               L"USB",
                               0LL,
                               L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\usb",
                               0LL,
                               0LL,
                               0,
                               &v13);
    v6 = PersistedStateLocation;
    if ( PersistedStateLocation == -2147483643 )
    {
      Pool2 = (wchar_t *)ExAllocatePool2(64LL, v13, 1681082453LL);
      if ( Pool2 )
      {
        PersistedStateLocation = RtlGetPersistedStateLocation(
                                   L"USB",
                                   0LL,
                                   L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\usb",
                                   0LL,
                                   Pool2,
                                   v13,
                                   0LL);
        v6 = PersistedStateLocation;
        if ( PersistedStateLocation >= 0 )
        {
          PersistedStateLocation = RtlUnicodeStringInit(&DestinationString, Pool2);
          v6 = PersistedStateLocation;
          if ( PersistedStateLocation < 0 )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_34;
            v9 = 142;
            goto LABEL_19;
          }
          PersistedStateLocation = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, struct _UNICODE_STRING *, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 1832))(
                                     WdfDriverGlobals,
                                     0LL,
                                     &DestinationString,
                                     131097LL,
                                     0LL,
                                     &v15);
          v6 = PersistedStateLocation;
          if ( PersistedStateLocation < 0 )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_34;
            v9 = 143;
            goto LABEL_19;
          }
          PersistedStateLocation = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 1832))(
                                     WdfDriverGlobals,
                                     v15,
                                     L"02",
                                     131097LL,
                                     0LL,
                                     &v14);
          v6 = PersistedStateLocation;
          if ( PersistedStateLocation < 0 )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_34;
            v9 = 144;
            goto LABEL_19;
          }
          PersistedStateLocation = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, _DWORD *))(WdfFunctions_01015 + 1920))(
                                     WdfDriverGlobals,
                                     v14,
                                     L"@B",
                                     a1);
          v6 = PersistedStateLocation;
          if ( PersistedStateLocation >= 0 )
          {
            v5 = 1;
            goto LABEL_34;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v9 = 145;
            goto LABEL_19;
          }
        }
        else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v9 = 141;
          goto LABEL_19;
        }
      }
      else
      {
        v6 = -1073741670;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v9 = 140;
          LODWORD(v11) = -1073741670;
LABEL_20:
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v2 + 64),
            2u,
            2u,
            v9,
            (__int64)&WPP_6348287eaa4439ce1c5af6747761b290_Traceguids,
            v11);
        }
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = 139;
LABEL_19:
      LODWORD(v11) = PersistedStateLocation;
      goto LABEL_20;
    }
  }
LABEL_34:
  if ( v4 && !v5 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v11) = v6;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v2 + 64),
        3u,
        2u,
        0x92u,
        (__int64)&WPP_6348287eaa4439ce1c5af6747761b290_Traceguids,
        v11);
    }
    v6 = 0;
  }
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x64334855u);
  if ( v15 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  if ( v14 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  return (unsigned int)v6;
}
