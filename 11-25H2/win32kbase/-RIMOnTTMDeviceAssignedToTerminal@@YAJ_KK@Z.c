/*
 * XREFs of ?RIMOnTTMDeviceAssignedToTerminal@@YAJ_KK@Z @ 0x1401F6510
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     ?SetDeviceTerminalId@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z @ 0x1401F65C4 (-SetDeviceTerminalId@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z.c)
 */

__int64 __fastcall RIMOnTTMDeviceAssignedToTerminal(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx

  v2 = *(_QWORD *)(a1 + 320);
  InputTraceLogging::RIM::SetDeviceTerminalId((const struct RIMDEV *)a1, a2);
  RIMLockExclusive(v2 + 104);
  if ( *(_DWORD *)(a1 + 1300) != a2 )
    *(_DWORD *)(a1 + 1300) = a2;
  RIMUnlockExclusive(v2 + 104);
  return 0LL;
}
