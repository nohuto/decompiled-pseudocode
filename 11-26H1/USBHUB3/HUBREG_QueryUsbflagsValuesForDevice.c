/*
 * XREFs of HUBREG_QueryUsbflagsValuesForDevice @ 0x14008A81C
 * Callers:
 *     HUBMISC_QueryAndCacheRegistryValuesForDevice @ 0x140086EFC (HUBMISC_QueryAndCacheRegistryValuesForDevice.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x140002460 (RtlStringCchPrintfA.c)
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     RtlUnicodeStringPrintf @ 0x14000FA34 (RtlUnicodeStringPrintf.c)
 *     HUBMISC_QueryKseDeviceFlags @ 0x140033308 (HUBMISC_QueryKseDeviceFlags.c)
 *     HUBREG_QueryUsbflagsAlternateSettingFilter @ 0x14003525C (HUBREG_QueryUsbflagsAlternateSettingFilter.c)
 *     __security_check_cookie @ 0x1400467B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 *     HUBREG_OpenCreateUsbflagsDeviceKey @ 0x14008860C (HUBREG_OpenCreateUsbflagsDeviceKey.c)
 */

__int64 __fastcall HUBREG_QueryUsbflagsValuesForDevice(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // r13
  NTSTATUS v12; // esi
  _WORD *v13; // r10
  __int64 v14; // rbx
  unsigned __int16 v15; // r9
  bool v16; // zf
  bool v17; // zf
  bool v18; // zf
  char v19; // al
  __int64 v21; // [rsp+28h] [rbp-D8h]
  __int64 v22; // [rsp+38h] [rbp-C8h]
  int v23; // [rsp+80h] [rbp-80h] BYREF
  char v24; // [rsp+84h] [rbp-7Ch]
  __int64 v25; // [rsp+88h] [rbp-78h] BYREF
  char pszDest[8]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v27; // [rsp+98h] [rbp-68h] BYREF
  __int64 v28; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v29; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v30; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v31; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v32; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v33; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v34; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v35; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v36; // [rsp+E0h] [rbp-20h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+E8h] [rbp-18h] BYREF
  char v38; // [rsp+100h] [rbp+0h] BYREF

  v4 = *(_QWORD *)a1;
  v23 = 0;
  v34 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v33 = 0LL;
  v35 = 0LL;
  v24 = *(_BYTE *)(v4 + 200);
  DestinationString.Buffer = (wchar_t *)&v38;
  v9 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)&DestinationString.Length = 6291456LL;
  v25 = 0LL;
  v27 = 0LL;
  v22 = *(_QWORD *)(v9 + 1432);
  v36 = 0LL;
  HUBREG_OpenCreateUsbflagsDeviceKey(a2, a3, a4, 0x20019u, &v36, &v25, 0, v22);
  v10 = HUBREG_OpenCreateUsbflagsDeviceKey(
          a2,
          a3,
          a4,
          0x20019u,
          0LL,
          &v27,
          1,
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL));
  v11 = v36;
  v12 = v10;
  if ( v10 < 0 )
    goto LABEL_157;
  RtlStringCchPrintfA(pszDest, 3uLL, "%02X", *(unsigned __int8 *)(a1 + 2000));
  if ( *(_DWORD *)(v4 + 168) == 3 && (v13 = *(_WORD **)(v4 + 176)) != 0LL )
    HUBMISC_QueryKseDeviceFlags(
      (__int64)pszDest,
      a2,
      a3,
      a4,
      v13,
      *(_WORD **)(v4 + 184),
      *(_WORD **)(v4 + 192),
      &v34,
      &v31,
      &v32,
      &v28,
      &v29,
      &v30,
      &v33,
      0,
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL));
  else
    HUBMISC_QueryKseDeviceFlags(
      (__int64)pszDest,
      a2,
      a3,
      a4,
      0LL,
      0LL,
      0LL,
      &v34,
      &v31,
      &v32,
      &v28,
      &v29,
      &v30,
      &v33,
      0,
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL));
  v14 = v34 | v31 | v32 | v28 | v29 | v30 | v33;
  if ( v11 )
  {
    v12 = RtlUnicodeStringPrintf(
            &DestinationString,
            L"IgnoreHWSerNum%04X%04X",
            *(unsigned __int16 *)(a1 + 2004),
            *(unsigned __int16 *)(a1 + 2006));
    if ( v12 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_157;
      v15 = 25;
LABEL_156:
      LODWORD(v21) = v12;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        v15,
        (__int64)&WPP_6348287eaa4439ce1c5af6747761b290_Traceguids,
        v21);
      goto LABEL_157;
    }
    v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
            WdfDriverGlobals,
            v11,
            &DestinationString,
            4LL,
            &v23,
            0LL,
            0LL);
    if ( v12 < 0 )
    {
      if ( v12 != -1073741772 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_157;
        v15 = 26;
        goto LABEL_156;
      }
    }
    else if ( v23 )
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 1652), 1u);
    }
  }
  v23 = 0;
  v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
          WdfDriverGlobals,
          v27,
          L"\b\n",
          2LL,
          &v23,
          0LL,
          0LL);
  if ( v12 >= 0 )
  {
    if ( v23 )
    {
      *(_BYTE *)(a1 + 2060) = BYTE1(v23);
      goto LABEL_28;
    }
    goto LABEL_21;
  }
  if ( v12 != -1073741772 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_157;
    v15 = 27;
    goto LABEL_156;
  }
  if ( (v14 & 1) != 0 )
  {
LABEL_21:
    _InterlockedOr((volatile signed __int32 *)(a1 + 1640), 0x80u);
    goto LABEL_28;
  }
  if ( (v28 & 2) != 0 || (v29 & 2) != 0 || (v30 & 2) != 0 || (v31 & 2) != 0 || (v32 & 2) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1652), 2u);
LABEL_28:
  v23 = 0;
  if ( !v25 )
    goto LABEL_35;
  v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
          WdfDriverGlobals,
          v25,
          &g_IgnoreHwSerialNumber,
          4LL,
          &v23,
          0LL,
          0LL);
  if ( v12 < 0 )
  {
    if ( v12 != -1073741772 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_157;
      v15 = 28;
      goto LABEL_156;
    }
LABEL_35:
    if ( (v14 & 0x40) == 0 )
      goto LABEL_37;
    goto LABEL_36;
  }
  if ( v23 )
LABEL_36:
    _InterlockedOr((volatile signed __int32 *)(a1 + 1652), 1u);
LABEL_37:
  v23 = 0;
  if ( !v25 )
    goto LABEL_44;
  v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
          WdfDriverGlobals,
          v25,
          L"68",
          4LL,
          &v23,
          0LL,
          0LL);
  if ( v12 < 0 )
  {
    if ( v12 != -1073741772 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_157;
      v15 = 29;
      goto LABEL_156;
    }
LABEL_44:
    if ( (v14 & 0x80000000) == 0 )
      goto LABEL_46;
    goto LABEL_45;
  }
  if ( v23 )
LABEL_45:
    _InterlockedOr((volatile signed __int32 *)(a1 + 1652), 0x200000u);
LABEL_46:
  v23 = 0;
  if ( !v25 )
    goto LABEL_53;
  v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
          WdfDriverGlobals,
          v25,
          &g_ResetOnResume,
          4LL,
          &v23,
          0LL,
          0LL);
  if ( v12 < 0 )
  {
    if ( v12 != -1073741772 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_157;
      v15 = 30;
      goto LABEL_156;
    }
LABEL_53:
    if ( (v14 & 4) == 0 )
      goto LABEL_55;
    goto LABEL_54;
  }
  if ( v23 )
LABEL_54:
    _InterlockedOr((volatile signed __int32 *)(a1 + 1652), 4u);
LABEL_55:
  v23 = 0;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1652), 8u);
  if ( !v25 )
    goto LABEL_62;
  v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
          WdfDriverGlobals,
          v25,
          L"&(",
          4LL,
          &v23,
          0LL,
          0LL);
  if ( v12 < 0 )
  {
    if ( v12 != -1073741772 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_157;
      v15 = 31;
      goto LABEL_156;
    }
LABEL_62:
    if ( (v14 & 8) == 0 )
      goto LABEL_64;
    goto LABEL_63;
  }
  if ( v23 )
    goto LABEL_64;
LABEL_63:
  _InterlockedAnd((volatile signed __int32 *)(a1 + 1652), 0xFFFFFFF7);
LABEL_64:
  v23 = 0;
  if ( v25 )
  {
    v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
            WdfDriverGlobals,
            v25,
            L"02",
            4LL,
            &v23,
            0LL,
            0LL);
    if ( v12 >= 0 )
    {
      v16 = v23 == 0;
      goto LABEL_71;
    }
    if ( v12 != -1073741772 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_157;
      v15 = 32;
      goto LABEL_156;
    }
  }
  v16 = (v14 & 0x10) == 0;
LABEL_71:
  if ( !v16 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1652), 0x10u);
  v23 = 0;
  if ( !v25 )
    goto LABEL_80;
  v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
          WdfDriverGlobals,
          v25,
          L":<",
          4LL,
          &v23,
          0LL,
          0LL);
  if ( v12 < 0 )
  {
    if ( v12 != -1073741772 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_157;
      v15 = 33;
      goto LABEL_156;
    }
LABEL_80:
    if ( (v14 & 0x1000000000LL) == 0 )
      goto LABEL_82;
    goto LABEL_81;
  }
  if ( !v23 )
    goto LABEL_82;
LABEL_81:
  _InterlockedOr((volatile signed __int32 *)(a1 + 1652), 0x800000u);
LABEL_82:
  v23 = 0;
  v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
          WdfDriverGlobals,
          v27,
          L"(*",
          4LL,
          &v23,
          0LL,
          0LL);
  if ( v12 >= 0 )
  {
    if ( !v23 )
      goto LABEL_88;
LABEL_87:
    _InterlockedOr((volatile signed __int32 *)(a1 + 1652), 0x20u);
    goto LABEL_88;
  }
  if ( v12 != -1073741772 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_157;
    v15 = 34;
    goto LABEL_156;
  }
  if ( (v14 & 0x20) != 0 )
    goto LABEL_87;
LABEL_88:
  v23 = 0;
  if ( v25 )
  {
    v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
            WdfDriverGlobals,
            v25,
            &g_DisableLpm,
            4LL,
            &v23,
            0LL,
            0LL);
    if ( v12 >= 0 )
    {
      v17 = v23 == 0;
      goto LABEL_95;
    }
    if ( v12 != -1073741772 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_157;
      v15 = 35;
      goto LABEL_156;
    }
  }
  v17 = (v14 & 0x1000) == 0;
LABEL_95:
  if ( !v17 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1652), 0x80u);
  if ( (v14 & 0x400) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1652), 0x40u);
  if ( (v14 & 0x4000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1652), 0x100u);
  if ( (v14 & 0x10000) != 0 && *(_BYTE *)(*(_QWORD *)a1 + 240LL) )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1652), 0x80u);
  if ( (v14 & 0x80000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1652), 0x400u);
  if ( (v14 & 0x200000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1652), 0x800u);
  if ( (v14 & 0x800000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1652), 0x1000u);
  if ( (v14 & 0x1000000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1652), 0x2000u);
  v23 = 0;
  if ( !v25 )
  {
LABEL_118:
    v18 = (v14 & 0x8000000) == 0;
    goto LABEL_119;
  }
  v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
          WdfDriverGlobals,
          v25,
          L",.",
          4LL,
          &v23,
          0LL,
          0LL);
  if ( v12 < 0 )
  {
    if ( v12 != -1073741772 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_157;
      v15 = 36;
      goto LABEL_156;
    }
    goto LABEL_118;
  }
  v18 = v23 == 0;
LABEL_119:
  if ( !v18 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1652), 0x8000u);
  if ( (v14 & 0x2000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1652), 0x20000u);
  if ( (v14 & 0x20000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1652), 0x40000u);
  if ( (v14 & 0x40000000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1652), 0x100000u);
  if ( ((v14 & 0x400000) != 0 || (v14 & 0x4000000000LL) != 0 && v24) && (*(_DWORD *)(a1 + 1640) & 2) == 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1652), 0x80000u);
  if ( (v14 & 0x100000000LL) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1652), 0x400000u);
  if ( (v14 & 0x2000000000LL) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1652), 0x1000000u);
  if ( (v14 & 0x80000000000LL) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1652), 0x4000000u);
  if ( (v14 & 0x800000000000LL) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1652), 0x8000000u);
  v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, __int64 *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
          WdfDriverGlobals,
          v27,
          L".0",
          8LL,
          &v35,
          0LL,
          0LL);
  if ( v12 < 0 )
  {
    if ( v12 != -1073741772 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_157;
      v15 = 37;
      goto LABEL_156;
    }
  }
  else
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2476), 4u);
    v19 = BYTE6(v35);
    *(_DWORD *)(a1 + 2472) |= 4u;
    *(_BYTE *)(a1 + 2060) = v19;
    *(_QWORD *)(a1 + 2488) = v35;
  }
  if ( *(_WORD *)(a1 + 2004) == 8457 && *(_WORD *)(a1 + 2006) == 2064 && (unsigned __int8)*(_WORD *)(a1 + 2008) < 0x89u )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1652), 0x10000u);
  if ( v25 )
    HUBREG_QueryUsbflagsAlternateSettingFilter(a1, v25);
  v12 = 0;
LABEL_157:
  if ( v25 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  if ( v11 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1848))(WdfDriverGlobals, v11);
  if ( v27 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  return (unsigned int)v12;
}
