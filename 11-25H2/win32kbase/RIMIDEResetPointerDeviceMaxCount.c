/*
 * XREFs of RIMIDEResetPointerDeviceMaxCount @ 0x1401EA4A4
 * Callers:
 *     NtUserSetFeatureReportResponse @ 0x1401BFA20 (NtUserSetFeatureReportResponse.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     RIMCmFreePointerDeviceContacts @ 0x14019D0D0 (RIMCmFreePointerDeviceContacts.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMCmAllocPointerDeviceContacts @ 0x1401F5464 (RIMCmAllocPointerDeviceContacts.c)
 */

__int64 __fastcall RIMIDEResetPointerDeviceMaxCount(_DWORD *a1, unsigned int a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // esi
  int v6; // eax

  v2 = 0;
  if ( a1[91] != 3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 568);
  if ( !a1[194] )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 569);
  if ( !a2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 570);
  v5 = a2 + 1;
  if ( a1[6] != 7 )
    v5 = a2;
  RIMCmFreePointerDeviceContacts((__int64)a1);
  if ( (int)RIMCmAllocPointerDeviceContacts(a1, 1785620818LL) >= 0 )
  {
    if ( Win32AllocPoolZInitImpl(256LL, 8LL * v5, 0x78707352u) )
    {
      a1[194] = v5;
      v6 = 0;
      goto LABEL_14;
    }
    RIMCmFreePointerDeviceContacts((__int64)a1);
  }
  v6 = 1;
LABEL_14:
  LOBYTE(v2) = v6 == 0;
  return v2;
}
