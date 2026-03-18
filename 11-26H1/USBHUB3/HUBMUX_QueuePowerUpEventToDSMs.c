/*
 * XREFs of HUBMUX_QueuePowerUpEventToDSMs @ 0x1400117E4
 * Callers:
 *     HUBHSM_NotifyingHubResumeInS0ToDevices @ 0x140009860 (HUBHSM_NotifyingHubResumeInS0ToDevices.c)
 *     HUBHSM_NotifyingHubResumeToDevices @ 0x140009890 (HUBHSM_NotifyingHubResumeToDevices.c)
 *     HUBHSM_NotifyingHubResumeWithResetToDevices @ 0x1400098D0 (HUBHSM_NotifyingHubResumeWithResetToDevices.c)
 *     HUBHSM_NotifyingHubResumeWithResetToDevicesOnFailure @ 0x140009910 (HUBHSM_NotifyingHubResumeWithResetToDevicesOnFailure.c)
 *     HUBHSM_WaitingForDevicesToAcquireReferenceOnStart @ 0x14000A400 (HUBHSM_WaitingForDevicesToAcquireReferenceOnStart.c)
 * Callees:
 *     HUBSM_AddEvent @ 0x14000A81C (HUBSM_AddEvent.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

_QWORD *__fastcall HUBMUX_QueuePowerUpEventToDSMs(__int64 a1, int a2)
{
  __int64 v3; // rsi
  KIRQL v5; // al
  int v6; // edi
  __int64 v7; // rdx
  KIRQL v8; // r15
  __int64 v9; // rbx
  _QWORD *v10; // rax
  _QWORD *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  _QWORD *result; // rax
  _QWORD *v15; // rdi
  __int64 i; // rbx
  __int64 v17; // rax
  _QWORD *v18; // [rsp+30h] [rbp-38h] BYREF
  _QWORD **v19; // [rsp+38h] [rbp-30h]

  v19 = &v18;
  v3 = a1 + 2336;
  v18 = &v18;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 2336));
  v6 = 0;
  v7 = *(_QWORD *)(v3 + 64);
  v8 = v5;
  v9 = v7 - 200;
  if ( v3 + 64 != v7 )
  {
    do
    {
      if ( (*(_DWORD *)(v9 + 248) & 1) != 0 )
      {
        _InterlockedAnd((volatile signed __int32 *)(v9 + 248), 0xFFFFFFFE);
        _InterlockedOr((volatile signed __int32 *)(v9 + 248), 4u);
        v10 = v19;
        ++v6;
        v11 = (_QWORD *)(v9 + 216);
        if ( *v19 != &v18 )
          __fastfail(3u);
        *(_QWORD *)(v9 + 224) = v19;
        *v11 = &v18;
        *v10 = v11;
        v19 = (_QWORD **)(v9 + 216);
        v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(
                WdfDriverGlobals,
                v9);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015
                                                                                                  + 1640))(
          WdfDriverGlobals,
          v12,
          "DSM PnPPower Tag",
          2350LL,
          "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hsmmux.c");
      }
      v13 = *(_QWORD *)(v9 + 200);
      v9 = v13 - 200;
    }
    while ( v3 + 64 != v13 );
  }
  *(_DWORD *)(v3 + 12) = v6;
  KeReleaseSpinLock((PKSPIN_LOCK)v3, v8);
  if ( !v6 )
    return (_QWORD *)HUBSM_AddEvent(a1 + 1280, 2014);
  v15 = v18 - 27;
  result = v18;
  for ( i = *v18 - 216LL; &v18 != result; i = *(_QWORD *)(i + 216) - 216LL )
  {
    HUBSM_AddEvent((__int64)(v15 + 64), a2);
    v17 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v15);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
      WdfDriverGlobals,
      v17,
      "DSM PnPPower Tag",
      2391LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hsmmux.c");
    result = (_QWORD *)(i + 216);
    v15 = (_QWORD *)i;
  }
  return result;
}
