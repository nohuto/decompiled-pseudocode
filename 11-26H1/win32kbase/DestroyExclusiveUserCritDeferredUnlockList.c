/*
 * XREFs of DestroyExclusiveUserCritDeferredUnlockList @ 0x1400E5830
 * Callers:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     NtUserGetHDevName @ 0x1400DECF0 (NtUserGetHDevName.c)
 *     ??1MaybeEnterLeaveCritSharedOnly@@QEAA@XZ @ 0x1400FB674 (--1MaybeEnterLeaveCritSharedOnly@@QEAA@XZ.c)
 *     NtUserGetKeyState @ 0x140117EE0 (NtUserGetKeyState.c)
 *     ?NtUserEnumDisplaySettingsExclusive@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z @ 0x14013C400 (-NtUserEnumDisplaySettingsExclusive@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z.c)
 *     LeaveCrit @ 0x1401A86A0 (LeaveCrit.c)
 * Callees:
 *     HMUnlockObject @ 0x14009B9C0 (HMUnlockObject.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall DestroyExclusiveUserCritDeferredUnlockList(__int64 a1, int a2, int a3)
{
  unsigned int v4; // edi
  __int64 *i; // rsi
  __int64 v6; // rax
  __int64 result; // rax

  v4 = 0;
  if ( *(_DWORD *)(a1 + 76) )
    result = MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4732LL);
  *(_DWORD *)(a1 + 76) = 1;
  if ( *(_QWORD *)(a1 + 80) )
    result = MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4735LL);
  for ( i = *(__int64 **)(a1 + 32); i; ++v4 )
  {
    *(_QWORD *)(a1 + 32) = i[2];
    v6 = *i;
    i[2] = 0LL;
    if ( !*(_DWORD *)(v6 + 8) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4748LL);
    if ( *(_DWORD *)(*i + 8) > 1u )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 4759LL);
    result = HMUnlockObject(*i, a2, a3);
    i = *(__int64 **)(a1 + 32);
  }
  if ( v4 > *(_DWORD *)(a1 + 88) )
    result = MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4775LL);
  if ( v4 != *(_DWORD *)(a1 + 92) )
    result = MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4776LL);
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_DWORD *)(a1 + 76) = 0;
  return result;
}
