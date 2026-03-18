/*
 * XREFs of HUBMISC_TypeCCompanionHasIdenticalDeviceAttached @ 0x140033D9C
 * Callers:
 *     HUBDSM_AddingDeviceToGlobalChildList @ 0x14001FBF0 (HUBDSM_AddingDeviceToGlobalChildList.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 *     HUBCONNECTOR_GetCompanionPort @ 0x140085BD0 (HUBCONNECTOR_GetCompanionPort.c)
 */

bool __fastcall HUBMISC_TypeCCompanionHasIdenticalDeviceAttached(__int64 a1)
{
  __int64 v1; // rsi
  bool v2; // bl
  __int64 v4; // rax
  __int64 CompanionPort; // rax
  _WORD *v6; // rdx
  __int64 v7; // rax

  v1 = *(_QWORD *)(a1 + 8);
  v2 = 0;
  if ( !v1 || (*(_DWORD *)(v1 + 204) & 0x200) == 0 || *(_DWORD *)(v1 + 208) == 512 )
    return 0;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_14006D2C0);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(v4 + 56),
    0LL);
  CompanionPort = HUBCONNECTOR_GetCompanionPort(v1, 1LL);
  if ( CompanionPort )
  {
    if ( (*(_DWORD *)(CompanionPort + 1336) & 0x40) != 0 )
    {
      v6 = *(_WORD **)(CompanionPort + 1328);
      if ( v6 )
      {
        if ( v6[1002] == *(_WORD *)(a1 + 2004) && v6[1003] == *(_WORD *)(a1 + 2006) )
          v2 = v6[1004] == *(_WORD *)(a1 + 2008);
      }
    }
  }
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_14006D2C0);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(v7 + 56));
  return v2;
}
