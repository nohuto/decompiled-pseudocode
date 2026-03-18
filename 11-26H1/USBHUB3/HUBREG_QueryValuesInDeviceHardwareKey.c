/*
 * XREFs of HUBREG_QueryValuesInDeviceHardwareKey @ 0x14008B738
 * Callers:
 *     HUBPDO_EvtDevicePrepareHardware @ 0x140082630 (HUBPDO_EvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     HUBREG_ValidateAndPopulateEndpointPriorities @ 0x14003559C (HUBREG_ValidateAndPopulateEndpointPriorities.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400468C0 (memmove.c)
 */

__int64 __fastcall HUBREG_QueryValuesInDeviceHardwareKey(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v3; // rax
  int v4; // eax
  unsigned int v5; // ebx
  unsigned __int16 v6; // r9
  void *Pool2; // rax
  int v8; // edx
  void *v9; // rdi
  int v10; // edx
  __int64 v12; // [rsp+28h] [rbp-38h]
  __int64 v13; // [rsp+40h] [rbp-20h] BYREF
  void *Src[2]; // [rsp+48h] [rbp-18h] BYREF
  int v15; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v16; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v17; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v18; // [rsp+B8h] [rbp+58h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v15 = 0;
  *(_OWORD *)Src = 0LL;
  v17 = 0LL;
  v16 = 0LL;
  v13 = 0LL;
  v18 = 0LL;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v1);
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 384))(
         WdfDriverGlobals,
         v3,
         1LL,
         131097LL,
         0LL,
         &v16);
  v5 = v4;
  if ( v4 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_50;
    v6 = 85;
    goto LABEL_4;
  }
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
         WdfDriverGlobals,
         v16,
         L"02",
         4LL,
         &v15,
         0LL,
         0LL);
  v5 = v4;
  if ( v4 < 0 )
  {
    if ( v4 != -1073741772 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v6 = 86;
        goto LABEL_4;
      }
      goto LABEL_50;
    }
  }
  else if ( v15 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1640), 0x400u);
  }
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64 *))(WdfFunctions_01015 + 2464))(
         WdfDriverGlobals,
         0LL,
         0LL,
         &v18);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64))(WdfFunctions_01015 + 1912))(
           WdfDriverGlobals,
           v16,
           &g_FriendlyName,
           v18);
    v5 = v4;
    if ( v4 < 0 )
    {
      if ( v4 != -1073741772 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v6 = 89;
          goto LABEL_4;
        }
        goto LABEL_50;
      }
    }
    else
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void **))(WdfFunctions_01015 + 2472))(
        WdfDriverGlobals,
        v18,
        Src);
      Pool2 = (void *)ExAllocatePool2(64LL, LOWORD(Src[0]), 1681082453LL);
      v9 = Pool2;
      if ( !Pool2 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v8) = 2;
          WPP_RECORDER_SF_(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
            v8,
            5,
            88,
            (__int64)&WPP_6348287eaa4439ce1c5af6747761b290_Traceguids);
        }
        goto LABEL_50;
      }
      memmove(Pool2, Src[1], LOWORD(Src[0]));
      *(_DWORD *)(a1 + 2172) = LOWORD(Src[0]);
      *(_QWORD *)(a1 + 2176) = v9;
    }
    v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 1832))(
           WdfDriverGlobals,
           v16,
           L"HJ",
           131097LL,
           0LL,
           &v13);
    v5 = v4;
    if ( v4 >= 0 )
    {
      v15 = 0;
      v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
             WdfDriverGlobals,
             v13,
             &g_D3ColdSupported,
             4LL,
             &v15,
             0LL,
             0LL);
      v5 = v4;
      if ( v4 < 0 )
      {
        if ( v4 != -1073741772 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v6 = 92;
            goto LABEL_4;
          }
          goto LABEL_50;
        }
      }
      else if ( v15 )
      {
        _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x1000u);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v10) = 4;
          WPP_RECORDER_SF_(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
            v10,
            5,
            91,
            (__int64)&WPP_6348287eaa4439ce1c5af6747761b290_Traceguids);
        }
      }
    }
    else if ( v4 != -1073741772 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v6 = 90;
        goto LABEL_4;
      }
      goto LABEL_50;
    }
    v15 = 0;
    v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
           WdfDriverGlobals,
           v16,
           L" \"",
           4LL,
           &v15,
           0LL,
           0LL);
    v5 = v4;
    if ( v4 < 0 )
    {
      if ( v4 != -1073741772 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v6 = 93;
          goto LABEL_4;
        }
        goto LABEL_50;
      }
    }
    else if ( v15 )
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 1640), 0x4000u);
    }
    *(_DWORD *)(*(_QWORD *)(a1 + 8) + 1440LL) = 1000;
    v15 = 0;
    v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
           WdfDriverGlobals,
           v16,
           L",.",
           4LL,
           &v15,
           0LL,
           0LL);
    v5 = v4;
    if ( v4 < 0 )
    {
      if ( v4 != -1073741772 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v6 = 94;
          goto LABEL_4;
        }
        goto LABEL_50;
      }
    }
    else
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 8) + 1440LL) = v15;
    }
    v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 104))(
           WdfDriverGlobals,
           0LL,
           &v17);
    v5 = v4;
    if ( v4 >= 0 )
    {
      if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, _QWORD, __int64))(WdfFunctions_01015
                                                                                                 + 1896))(
             WdfDriverGlobals,
             v16,
             L"$&",
             0LL,
             v17) >= 0 )
        HUBREG_ValidateAndPopulateEndpointPriorities(a1, v17);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, v17);
      v5 = 0;
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = 95;
      goto LABEL_4;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v6 = 87;
LABEL_4:
    LODWORD(v12) = v4;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      v6,
      (__int64)&WPP_6348287eaa4439ce1c5af6747761b290_Traceguids,
      v12);
  }
LABEL_50:
  if ( v13 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  if ( v16 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  if ( v18 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  return v5;
}
