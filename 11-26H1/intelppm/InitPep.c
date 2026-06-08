/*
 * XREFs of InitPep @ 0x14003D440
 * Callers:
 *     ProcLibDeviceStart @ 0x140032614 (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x140004618 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 *     PepNotifyQueryWpsCapabilities @ 0x14003C114 (PepNotifyQueryWpsCapabilities.c)
 *     PepNotifyQuerySocIdentifier @ 0x14003D890 (PepNotifyQuerySocIdentifier.c)
 *     RegisterPepDevice @ 0x14003DD4C (RegisterPepDevice.c)
 */

__int64 __fastcall InitPep(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // esi
  _QWORD *v4; // r14
  const signed __int64 *v5; // rdi
  __int64 v6; // rcx
  int v7; // eax
  char v8; // dl
  int WpsCapabilities; // eax
  char v11; // [rsp+50h] [rbp+8h] BYREF

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208),
    0LL);
  v2 = RegisterPepDevice(a1);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v4 = (_QWORD *)(a1 + 1120);
    if ( !*(_DWORD *)(a1 + 80) )
      ((void (__fastcall *)(_QWORD, _QWORD))qword_140019530)(*(unsigned int *)(a1 + 56), *v4);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1400191A8,
      0LL);
    if ( !PepSocIdInitialized )
    {
      PepNotifyQuerySocIdentifier(a1);
      PepSocIdInitialized = 1;
    }
    v5 = (const signed __int64 *)(a1 + 280);
    if ( !PepLpiInitialized )
    {
      if ( (*v5 & 0x20E0000000000LL) != 0 && (*v5 & 0x100000000000LL) != 0 )
      {
        v6 = *v4;
        v11 = 0;
        v7 = PoFxProcessorNotification(v6, 34LL, &v11);
        v8 = 0;
        if ( v7 >= 0 )
          v8 = v11;
        PepLpiDisabled = v8;
      }
      PepLpiInitialized = 1;
    }
    if ( PepLpiDisabled )
      *v5 &= 0xFFFDE1FFFFFFFFFFuLL;
    if ( !PepWpsCapabilitiesInitialized )
    {
      if ( _bittest64(v5, 0x33u) )
      {
        WpsCapabilities = PepNotifyQueryWpsCapabilities(a1);
        v3 = WpsCapabilities;
        if ( WpsCapabilities < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_D(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              3u,
              3u,
              0xEu,
              (__int64)&WPP_997e76c6ae9131171cbd6c73bc5000b7_Traceguids,
              WpsCapabilities);
          v3 = 0;
          *(_QWORD *)(a1 + 280) &= ~0x8000000000000uLL;
        }
      }
      PepWpsCapabilitiesInitialized = 1;
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1400191A8);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      0xDu,
      (__int64)&WPP_997e76c6ae9131171cbd6c73bc5000b7_Traceguids,
      v2);
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208));
  return v3;
}
