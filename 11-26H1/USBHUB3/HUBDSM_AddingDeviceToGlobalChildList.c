/*
 * XREFs of HUBDSM_AddingDeviceToGlobalChildList @ 0x14001FBF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     HUBMISC_LogDescriptorValidationErrorForDevice @ 0x140030F10 (HUBMISC_LogDescriptorValidationErrorForDevice.c)
 *     HUBMISC_TypeCCompanionHasIdenticalDeviceAttached @ 0x140033D9C (HUBMISC_TypeCCompanionHasIdenticalDeviceAttached.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 *     HUBCONNECTOR_GetConnectorMapNodeForPort @ 0x140085D74 (HUBCONNECTOR_GetConnectorMapNodeForPort.c)
 */

__int64 __fastcall HUBDSM_AddingDeviceToGlobalChildList(__int64 a1)
{
  __int64 *v1; // r15
  __int64 v2; // r13
  __int16 v4; // bp
  __int16 v5; // r14
  unsigned __int16 v6; // di
  __int64 v7; // rsi
  __int64 ConnectorMapNodeForPort; // rax
  int v9; // eax
  int v10; // eax
  int v11; // edx
  __int16 v12; // [rsp+20h] [rbp-38h]
  __int16 v13; // [rsp+28h] [rbp-30h]

  v1 = *(__int64 **)(a1 + 960);
  v2 = v1[1];
  if ( !v1[270] )
  {
    if ( (*(_DWORD *)(v2 + 204) & 0x200) != 0 )
    {
      if ( (unsigned __int8)HUBMISC_TypeCCompanionHasIdenticalDeviceAttached(*(_QWORD *)(a1 + 960)) )
        return 4073LL;
      _InterlockedOr((volatile signed __int32 *)(v2 + 1336), 0x40u);
    }
    return 4077LL;
  }
  v4 = *((_WORD *)v1 + 1003);
  v5 = *((_WORD *)v1 + 1002);
  v6 = *(_WORD *)(v2 + 200);
  v7 = *v1;
  ConnectorMapNodeForPort = HUBCONNECTOR_GetConnectorMapNodeForPort(v1[1]);
  v13 = v4;
  v12 = v5;
  v9 = USBD_AddDeviceToGlobalList(v1, v7, v6, ConnectorMapNodeForPort, v12, v13, v1 + 269) - 1;
  if ( !v9 )
    return 4077LL;
  v10 = v9 - 1;
  if ( !v10 )
    return 4073LL;
  if ( v10 == 1 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
      WdfDriverGlobals,
      WdfDriverGlobals->Driver,
      off_14006D2C0);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 2;
      WPP_RECORDER_SF_(*(_QWORD *)(v1[1] + 1432), v11, 5, 37, (__int64)&WPP_dde998bf8bb3310d95d4227a99ba80b7_Traceguids);
    }
    HUBMISC_LogDescriptorValidationErrorForDevice(v1, 234LL);
  }
  return 4065LL;
}
