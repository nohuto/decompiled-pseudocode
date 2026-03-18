/*
 * XREFs of UserNotifyUniversalScaleFactorChanged @ 0x1401EA874
 * Callers:
 *     DrvDisplayConfigSetScaleFactorOverride @ 0x1401F76A0 (DrvDisplayConfigSetScaleFactorOverride.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     xxxResetDisplayDevice @ 0x14007F460 (xxxResetDisplayDevice.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x14013B610 (GreIncrementDisplaySettingsUniqueness.c)
 *     xxxSendNotifyMessage @ 0x140194BD0 (xxxSendNotifyMessage.c)
 */

__int64 __fastcall UserNotifyUniversalScaleFactorChanged(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  __int64 UserSessionState; // rax
  int CurrentWin32kSessionId; // [rsp+50h] [rbp+8h] BYREF
  int v9; // [rsp+58h] [rbp+10h] BYREF

  CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(a1);
  ZwUpdateWnfStateData(&WNF_SPI_LOGICALDPIOVERRIDE, 0LL, 0LL, 0LL, &CurrentWin32kSessionId, 0, 0);
  LOBYTE(v1) = 1;
  GreIncrementDisplaySettingsUniqueness(v1);
  xxxSendNotifyMessage(v2, 0x1Au, 159LL);
  v9 = 0;
  UserSessionState = W32GetUserSessionState(v4, v3, v5);
  return xxxResetDisplayDevice(*(_QWORD *)(UserSessionState + 19176), &v9, 0LL);
}
