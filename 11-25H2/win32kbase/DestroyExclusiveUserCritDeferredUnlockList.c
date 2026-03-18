/*
 * XREFs of DestroyExclusiveUserCritDeferredUnlockList @ 0x1401616B8
 * Callers:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ?NtUserEnumDisplaySettingsExclusive@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z @ 0x14004C39C (-NtUserEnumDisplaySettingsExclusive@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x140094120 (UserSessionSwitchLeaveCrit.c)
 *     NtUserGetHDevName @ 0x14009E490 (NtUserGetHDevName.c)
 *     LeaveCrit @ 0x1401675A0 (LeaveCrit.c)
 *     NtUserGetKeyState @ 0x140170360 (NtUserGetKeyState.c)
 * Callees:
 *     HMUnlockObject @ 0x140037A30 (HMUnlockObject.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

int *__fastcall DestroyExclusiveUserCritDeferredUnlockList(__int64 a1, __int64 a2)
{
  unsigned int v3; // esi
  int *result; // rax
  int *v5; // rax
  int **v6; // rdi

  v3 = 0;
  if ( *(_DWORD *)(a1 + 76) )
    result = (int *)MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4711LL);
  *(_DWORD *)(a1 + 76) = 1;
  if ( *(_QWORD *)(a1 + 80) )
    result = (int *)MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4714LL);
  while ( 1 )
  {
    v6 = *(int ***)(a1 + 32);
    if ( !v6 )
      break;
    *(_QWORD *)(a1 + 32) = v6[2];
    v5 = *v6;
    v6[2] = 0LL;
    if ( !v5[2] )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4727LL);
    if ( (unsigned int)(*v6)[2] > 1 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 4738LL);
    result = HMUnlockObject(*v6, a2);
    ++v3;
  }
  if ( v3 > *(_DWORD *)(a1 + 88) )
    result = (int *)MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4754LL);
  if ( v3 != *(_DWORD *)(a1 + 92) )
    result = (int *)MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4755LL);
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_DWORD *)(a1 + 76) = 0;
  return result;
}
