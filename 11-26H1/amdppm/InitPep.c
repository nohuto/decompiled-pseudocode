/*
 * XREFs of InitPep @ 0x14003C830
 * Callers:
 *     ProcLibDeviceStart @ 0x14002E514 (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003760 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall @ 0x14000E680 (_guard_dispatch_icall.c)
 *     PepNotifyQueryWpsCapabilities @ 0x14003AE50 (PepNotifyQueryWpsCapabilities.c)
 *     PepNotifyQuerySocIdentifier @ 0x14003CC80 (PepNotifyQuerySocIdentifier.c)
 *     RegisterPepDevice @ 0x14003D13C (RegisterPepDevice.c)
 */

__int64 __fastcall InitPep(__int64 a1)
{
  int v2; // eax
  int v3; // edx
  unsigned int v4; // esi
  _QWORD *v5; // r14
  const signed __int64 *v6; // rdi
  __int64 v7; // rcx
  int v8; // eax
  char v9; // dl
  int WpsCapabilities; // eax
  int v11; // edx
  char v13; // [rsp+50h] [rbp+8h] BYREF

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208),
    0LL);
  v2 = RegisterPepDevice(a1);
  v4 = v2;
  if ( v2 >= 0 )
  {
    v5 = (_QWORD *)(a1 + 1120);
    if ( !*(_DWORD *)(a1 + 80) )
      ((void (__fastcall *)(_QWORD, _QWORD))qword_140015960)(*(unsigned int *)(a1 + 56), *v5);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1400155D8,
      0LL);
    if ( !PepSocIdInitialized )
    {
      PepNotifyQuerySocIdentifier(a1);
      PepSocIdInitialized = 1;
    }
    v6 = (const signed __int64 *)(a1 + 280);
    if ( !PepLpiInitialized )
    {
      if ( (*v6 & 0x20E0000000000LL) != 0 && (*v6 & 0x100000000000LL) != 0 )
      {
        v7 = *v5;
        v13 = 0;
        v8 = PoFxProcessorNotification(v7, 34LL, &v13);
        v9 = 0;
        if ( v8 >= 0 )
          v9 = v13;
        PepLpiDisabled = v9;
      }
      PepLpiInitialized = 1;
    }
    if ( PepLpiDisabled )
      *v6 &= 0xFFFDE1FFFFFFFFFFuLL;
    if ( !PepWpsCapabilitiesInitialized )
    {
      if ( _bittest64(v6, 0x33u) )
      {
        WpsCapabilities = PepNotifyQueryWpsCapabilities(a1);
        v4 = WpsCapabilities;
        if ( WpsCapabilities < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v11) = 3;
            WPP_RECORDER_SF_d(
              WPP_GLOBAL_Control->DeviceExtension,
              v11,
              3,
              14,
              (__int64)&WPP_997e76c6ae9131171cbd6c73bc5000b7_Traceguids,
              WpsCapabilities);
          }
          v4 = 0;
          *(_QWORD *)(a1 + 280) &= ~0x8000000000000uLL;
        }
      }
      PepWpsCapabilitiesInitialized = 1;
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1400155D8);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = 3;
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      v3,
      3,
      13,
      (__int64)&WPP_997e76c6ae9131171cbd6c73bc5000b7_Traceguids,
      v2);
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208));
  return v4;
}
