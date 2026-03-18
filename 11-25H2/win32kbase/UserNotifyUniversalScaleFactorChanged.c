/*
 * XREFs of UserNotifyUniversalScaleFactorChanged @ 0x1401C1C34
 * Callers:
 *     DrvDisplayConfigSetScaleFactorOverride @ 0x1401CDE60 (DrvDisplayConfigSetScaleFactorOverride.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140049A34 (W32GetCurrentWin32kSessionId.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1400736E0 (GreIncrementDisplaySettingsUniqueness.c)
 *     xxxResetDisplayDevice @ 0x1400AB7F0 (xxxResetDisplayDevice.c)
 *     xxxSendNotifyMessage @ 0x14023F504 (xxxSendNotifyMessage.c)
 */

__int64 UserNotifyUniversalScaleFactorChanged()
{
  __int64 v0; // rcx
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 UserSessionState; // rax
  int CurrentWin32kSessionId; // [rsp+50h] [rbp+8h] BYREF
  int v7; // [rsp+58h] [rbp+10h] BYREF

  CurrentWin32kSessionId = W32GetCurrentWin32kSessionId();
  ZwUpdateWnfStateData(&WNF_SPI_LOGICALDPIOVERRIDE, 0LL, 0LL, 0LL, &CurrentWin32kSessionId);
  GreIncrementDisplaySettingsUniqueness(v0);
  xxxSendNotifyMessage(v1, 26LL);
  v7 = 0;
  UserSessionState = W32GetUserSessionState(v3, v2);
  return xxxResetDisplayDevice(*(_QWORD *)(UserSessionState + 19144), &v7, 0LL);
}
