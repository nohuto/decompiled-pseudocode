/*
 * XREFs of HUBREG_OpenCreateUsbflagsDeviceKey @ 0x14008860C
 * Callers:
 *     HUBREG_AssignUsbflagsValueForDevice @ 0x14008758C (HUBREG_AssignUsbflagsValueForDevice.c)
 *     HUBREG_QueryHubErrataFlags @ 0x140089B94 (HUBREG_QueryHubErrataFlags.c)
 *     HUBREG_QueryUsbflagsValuesForDevice @ 0x14008A81C (HUBREG_QueryUsbflagsValuesForDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     RtlUnicodeStringPrintf @ 0x14000FA34 (RtlUnicodeStringPrintf.c)
 *     RtlUnicodeStringInit @ 0x140035E50 (RtlUnicodeStringInit.c)
 *     __security_check_cookie @ 0x1400467B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBREG_OpenCreateUsbflagsDeviceKey(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        _QWORD *a5,
        _QWORD *a6,
        char a7,
        __int64 a8)
{
  void *v8; // rsi
  NTSTATUS PersistedStateLocation; // ebx
  __int64 Pool2; // rax
  __int64 v11; // rcx
  const wchar_t *v12; // rax
  __int16 v13; // cx
  unsigned int v14; // r14d
  unsigned __int16 v15; // r9
  __int64 v17; // [rsp+28h] [rbp-C1h]
  __int64 v18; // [rsp+28h] [rbp-C1h]
  __int64 v19; // [rsp+28h] [rbp-C1h]
  unsigned int v20; // [rsp+50h] [rbp-99h] BYREF
  __int64 v21; // [rsp+58h] [rbp-91h] BYREF
  unsigned int v22; // [rsp+60h] [rbp-89h]
  struct _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-81h] BYREF
  struct _UNICODE_STRING v24; // [rsp+78h] [rbp-71h] BYREF
  __int64 v25; // [rsp+88h] [rbp-61h]
  __int64 v26; // [rsp+90h] [rbp-59h]
  __int64 v27; // [rsp+98h] [rbp-51h]
  _QWORD *v28; // [rsp+A0h] [rbp-49h]
  char v29; // [rsp+A8h] [rbp-41h] BYREF

  v26 = a2;
  v27 = a1;
  v22 = a4;
  v25 = a3;
  v28 = a5;
  *(_QWORD *)&v24.Length = 3407872LL;
  v24.Buffer = (wchar_t *)&v29;
  v20 = 0;
  v21 = 0LL;
  DestinationString = 0LL;
  if ( a5 )
    *a5 = 0LL;
  *a6 = 0LL;
  v8 = 0LL;
  if ( a7 != 1 )
  {
    v11 = 0x7FFFLL;
    v12 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\usbflags";
    while ( *v12 )
    {
      ++v12;
      if ( !--v11 )
        goto LABEL_17;
    }
    v13 = 2 * v11;
    DestinationString.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\usbflags";
    DestinationString.Length = -2 - v13;
    DestinationString.MaximumLength = -v13;
    goto LABEL_17;
  }
  PersistedStateLocation = RtlGetPersistedStateLocation(
                             L"UsbFlags",
                             0LL,
                             L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\usbflags",
                             0LL,
                             0LL,
                             0,
                             &v20);
  if ( PersistedStateLocation == -2147483643 )
  {
    Pool2 = ExAllocatePool2(64LL, v20, 1681082453LL);
    v8 = (void *)Pool2;
    if ( Pool2 )
    {
      PersistedStateLocation = RtlGetPersistedStateLocation(
                                 L"UsbFlags",
                                 0LL,
                                 L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\usbflags",
                                 0LL,
                                 Pool2,
                                 v20,
                                 0LL);
      if ( PersistedStateLocation < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v18) = PersistedStateLocation;
          WPP_RECORDER_SF_d(a8, 2u, 5u, 0xAu, (__int64)&WPP_6348287eaa4439ce1c5af6747761b290_Traceguids, v18);
        }
LABEL_34:
        ExFreePoolWithTag(v8, 0x64334855u);
        goto LABEL_35;
      }
      RtlUnicodeStringInit(&DestinationString, (NTSTRSAFE_PCWSTR)v8);
    }
LABEL_17:
    v14 = v22;
    PersistedStateLocation = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, struct _UNICODE_STRING *, _QWORD, _QWORD, __int64 *))(WdfFunctions_01015 + 1832))(
                               WdfDriverGlobals,
                               0LL,
                               &DestinationString,
                               v22,
                               0LL,
                               &v21);
    if ( PersistedStateLocation == -1073741772 )
    {
      if ( a7 != 1 )
      {
LABEL_21:
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_33;
        v15 = 12;
        goto LABEL_32;
      }
      PersistedStateLocation = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, struct _UNICODE_STRING *, _QWORD, _DWORD, _QWORD, _QWORD, __int64 *))(WdfFunctions_01015 + 1840))(
                                 WdfDriverGlobals,
                                 0LL,
                                 &DestinationString,
                                 v14,
                                 0,
                                 0LL,
                                 0LL,
                                 &v21);
    }
    if ( PersistedStateLocation < 0 )
      goto LABEL_21;
    PersistedStateLocation = RtlUnicodeStringPrintf(&v24, L"%S%S%S", v27, v26, v25);
    if ( PersistedStateLocation < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_33;
      v15 = 13;
      goto LABEL_32;
    }
    PersistedStateLocation = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *, __int64, _QWORD, _QWORD *))(WdfFunctions_01015 + 1832))(
                               WdfDriverGlobals,
                               v21,
                               &v24,
                               131097LL,
                               0LL,
                               a6);
    if ( PersistedStateLocation == -1073741772 )
    {
      if ( a7 != 1 )
      {
LABEL_30:
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_33;
        v15 = 14;
LABEL_32:
        LODWORD(v19) = PersistedStateLocation;
        WPP_RECORDER_SF_d(a8, 2u, 5u, v15, (__int64)&WPP_6348287eaa4439ce1c5af6747761b290_Traceguids, v19);
LABEL_33:
        if ( !v8 )
          goto LABEL_35;
        goto LABEL_34;
      }
      PersistedStateLocation = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *, __int64, _DWORD, _QWORD, _QWORD, _QWORD *))(WdfFunctions_01015 + 1840))(
                                 WdfDriverGlobals,
                                 v21,
                                 &v24,
                                 983103LL,
                                 0,
                                 0LL,
                                 0LL,
                                 a6);
    }
    if ( PersistedStateLocation >= 0 )
      goto LABEL_33;
    goto LABEL_30;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v17) = PersistedStateLocation;
    WPP_RECORDER_SF_d(a8, 2u, 5u, 0xBu, (__int64)&WPP_6348287eaa4439ce1c5af6747761b290_Traceguids, v17);
  }
LABEL_35:
  if ( PersistedStateLocation >= 0 )
  {
    if ( !v28 )
    {
LABEL_42:
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
      return (unsigned int)PersistedStateLocation;
    }
    *v28 = v21;
  }
  else
  {
    if ( *a6 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
      *a6 = 0LL;
    }
    if ( v21 )
      goto LABEL_42;
  }
  return (unsigned int)PersistedStateLocation;
}
