/*
 * XREFs of EtwCheckSecurityLoggerAccess @ 0x140A7FB2C
 * Callers:
 *     EtwpQueryTrace @ 0x14091F240 (EtwpQueryTrace.c)
 *     EtwpCheckNotificationAccess @ 0x1409205D4 (EtwpCheckNotificationAccess.c)
 *     NtSetInformationProcess @ 0x140B72B10 (NtSetInformationProcess.c)
 * Callees:
 *     RtlTestProtectedAccess @ 0x140A7FCA4 (RtlTestProtectedAccess.c)
 */

__int64 __fastcall EtwCheckSecurityLoggerAccess(__int64 a1, __int64 a2)
{
  if ( !(_BYTE)a2 )
    return 0LL;
  LOBYTE(a1) = *(_BYTE *)(a1 + 1530);
  LOBYTE(a2) = 49;
  return (unsigned __int8)RtlTestProtectedAccess(a1, a2) == 0 ? 0xC0000022 : 0;
}
