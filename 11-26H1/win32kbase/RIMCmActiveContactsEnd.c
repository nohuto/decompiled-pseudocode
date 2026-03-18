/*
 * XREFs of RIMCmActiveContactsEnd @ 0x14007B47C
 * Callers:
 *     rimEndAllActiveContactsWorker @ 0x14007A7BC (rimEndAllActiveContactsWorker.c)
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x14007AAC0 (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x14007ADBC (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimIsWakeablePointerFrame @ 0x14007B3D8 (rimIsWakeablePointerFrame.c)
 *     RIMSuppressAllActiveContacts @ 0x14007B620 (RIMSuppressAllActiveContacts.c)
 *     RIMInsertSimulatedKeepAliveStateForActiveContacts @ 0x1401B5F48 (RIMInsertSimulatedKeepAliveStateForActiveContacts.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMCmActiveContactsEnd(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx

  if ( !*(_DWORD *)(a2 + 1008) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 470LL);
  v4 = a2 + 1000;
  if ( !*(_QWORD *)v4 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 64LL);
  if ( !*(_DWORD *)(v4 + 8) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 65LL);
  *(_QWORD *)a1 = v4;
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(v4 + 8);
  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)v4 + 16LL * *(unsigned int *)(v4 + 8);
  return a1;
}
