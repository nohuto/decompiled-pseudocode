/*
 * XREFs of HUBMISC_InitializeHsm @ 0x140086A8C
 * Callers:
 *     HUBFDO_EvtDeviceAdd @ 0x14007ABE0 (HUBFDO_EvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBMISC_InitializeHsm(__int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 v3; // rax
  int v4; // eax
  unsigned int v5; // edi
  unsigned __int16 v6; // r9
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  bool v10; // zf
  __int64 Timer; // rax
  int v12; // edx
  __int64 v13; // rax
  __int64 v14; // rax
  int v15; // edx
  __int128 v17; // [rsp+30h] [rbp-40h] BYREF
  __int64 v18; // [rsp+40h] [rbp-30h]
  __int64 v19; // [rsp+48h] [rbp-28h]
  __int128 v20; // [rsp+50h] [rbp-20h]
  __int64 v21; // [rsp+60h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 2240) = a1;
  v18 = 0LL;
  v21 = 0LL;
  v17 = 0LL;
  LODWORD(v17) = 56;
  v19 = 0x100000001LL;
  v20 = v1;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 336))(WdfDriverGlobals);
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int64, __int64))(WdfFunctions_01015 + 1976))(
         WdfDriverGlobals,
         &v17,
         v3,
         a1 + 816);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2280))(
           WdfDriverGlobals,
           *(_QWORD *)(a1 + 816));
    v8 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(a1 + 832) = v7;
    v18 = 0LL;
    v21 = 0LL;
    v17 = 0LL;
    LODWORD(v17) = 56;
    v19 = 0x100000001LL;
    v20 = v8;
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 336))(WdfDriverGlobals);
    v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int64, __int64))(WdfFunctions_01015 + 1976))(
           WdfDriverGlobals,
           &v17,
           v9,
           a1 + 984);
    v5 = v4;
    if ( v4 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v5;
      v6 = 11;
      goto LABEL_4;
    }
    KeInitializeSpinLock((PKSPIN_LOCK)(a1 + 2120));
    KeInitializeEvent((PRKEVENT)(a1 + 1168), NotificationEvent, 0);
    v10 = *(_BYTE *)(a1 + 240) == 0;
    *(_DWORD *)(a1 + 2132) = 2000;
    *(_DWORD *)(a1 + 2160) = 0;
    if ( v10 )
    {
      *(_DWORD *)(a1 + 2232) = 4;
    }
    else if ( *(_DWORD *)(a1 + 256) == 1 || *(_DWORD *)(a1 + 256) == 2 )
    {
      *(_DWORD *)(a1 + 2232) = 1;
    }
    else if ( *(_DWORD *)(a1 + 256) == 3 )
    {
      *(_DWORD *)(a1 + 2232) = 2;
    }
    *(_DWORD *)(a1 + 2264) = 2000;
    *(_QWORD *)(a1 + 2256) = &HSMStateTable;
    *(_QWORD *)(a1 + 2312) = *(_QWORD *)(a1 + 248);
    *(_QWORD *)(a1 + 2280) = a1;
    Timer = ExAllocateTimer(HUBMISC_HubEventTimer, a1, 4LL);
    *(_QWORD *)(a1 + 2320) = Timer;
    if ( Timer )
    {
      v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 248))(
              WdfDriverGlobals,
              *(_QWORD *)(a1 + 16));
      v14 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(a1 + 504))(*(_QWORD *)(a1 + 248), v13, 1LL);
      *(_QWORD *)(a1 + 2272) = v14;
      if ( !v14 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v15) = 2;
          WPP_RECORDER_SF_(
            *(_QWORD *)(a1 + 2536),
            v15,
            3,
            13,
            (__int64)&WPP_dde998bf8bb3310d95d4227a99ba80b7_Traceguids);
        }
        return (unsigned int)-1073741670;
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = 2;
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2536), v12, 3, 12, (__int64)&WPP_dde998bf8bb3310d95d4227a99ba80b7_Traceguids);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v6 = 10;
LABEL_4:
    WPP_RECORDER_SF_d(*(_QWORD *)(a1 + 2536), 2u, 3u, v6, (__int64)&WPP_dde998bf8bb3310d95d4227a99ba80b7_Traceguids, v4);
  }
  return v5;
}
