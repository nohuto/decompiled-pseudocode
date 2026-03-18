/*
 * XREFs of RIMIDEResetPointerDeviceMaxCount @ 0x14020958C
 * Callers:
 *     NtUserSetFeatureReportResponse @ 0x1401E89E0 (NtUserSetFeatureReportResponse.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     RIMCmAllocPointerDeviceContacts @ 0x14012E834 (RIMCmAllocPointerDeviceContacts.c)
 *     RIMCmFreePointerDeviceContacts @ 0x14012EBA0 (RIMCmFreePointerDeviceContacts.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMIDEResetPointerDeviceMaxCount(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  unsigned int v5; // ebp
  unsigned int v7; // esi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9

  v4 = 0;
  v5 = a2;
  if ( a1[91] != 3 )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 559);
  if ( !a1[194] )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 560);
  if ( !v5 )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 561);
  v7 = v5 + 1;
  if ( a1[6] != 7 )
    v7 = v5;
  RIMCmFreePointerDeviceContacts((__int64)a1, a2, a3, a4);
  if ( (int)RIMCmAllocPointerDeviceContacts((__int64)a1, 0x6A6E6952u) >= 0 )
  {
    if ( Win32AllocPoolZInitImpl(256LL, 8LL * v7, 0x78707352u) )
    {
      a1[194] = v7;
      return 1;
    }
    else
    {
      RIMCmFreePointerDeviceContacts((__int64)a1, v8, v9, v10);
    }
  }
  return v4;
}
