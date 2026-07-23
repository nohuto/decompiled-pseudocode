/*
 * XREFs of EtwCheckSecurityLoggerAccess @ 0x140A8599C
 * Callers:
 *     EtwpQueryTrace @ 0x140979CA0 (EtwpQueryTrace.c)
 *     EtwpCheckNotificationAccess @ 0x14097A0C0 (EtwpCheckNotificationAccess.c)
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 * Callees:
 *     RtlTestProtectedAccess @ 0x140A85B14 (RtlTestProtectedAccess.c)
 */

__int64 __fastcall EtwCheckSecurityLoggerAccess(PS_PROTECTION *a1, char a2)
{
  if ( a2 )
    return RtlTestProtectedAccess(a1[1530], (PS_PROTECTION)49) == 0 ? 0xC0000022 : 0;
  else
    return 0LL;
}
