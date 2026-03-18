/*
 * XREFs of rimAbIsPointerSuppressedByOtherActiveDevicesContacts @ 0x140077904
 * Callers:
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1400752B0 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x140075964 (rimAbSuppressLowerRankActivityInFrame.c)
 * Callees:
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x14007AAC0 (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall rimAbIsPointerSuppressedByOtherActiveDevicesContacts(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD **v4; // rsi
  unsigned int v6; // edi
  _QWORD *i; // rbx
  __int64 v9; // r8

  v4 = (_QWORD **)(a1 + 448);
  v6 = 0;
  if ( !*(_DWORD *)(W32GetUserSessionState(a1, a2, a3) + 244) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 423LL);
  for ( i = *v4; i != v4; i = (_QWORD *)*i )
  {
    v9 = *(i - 1);
    if ( v9 != a2 && (unsigned int)rimAbIsPointerSuppressedByOtherDeviceContacts(a3, a2, v9, 1LL) )
      return 1;
  }
  return v6;
}
