/*
 * XREFs of AdtpInitializeAuditingCommon @ 0x140890D3C
 * Callers:
 *     SepAdtInitializeAuditingOptions @ 0x140CDE828 (SepAdtInitializeAuditingOptions.c)
 * Callees:
 *     AdtpDbInitializePrivilegeObject @ 0x1407156E0 (AdtpDbInitializePrivilegeObject.c)
 *     AdtpObjsInitialize @ 0x140890854 (AdtpObjsInitialize.c)
 *     AdtpInitializeDriveLetters @ 0x140890D7C (AdtpInitializeDriveLetters.c)
 */

int AdtpInitializeAuditingCommon()
{
  int result; // eax
  int v1; // ebx

  LOWORD(PspSiloMonitorLock.ForegroundLossTime) = 257;
  AdtpRegisteredWithEtw = 1;
  result = AdtpInitializeDriveLetters();
  if ( result >= 0 )
  {
    result = AdtpObjsInitialize();
    v1 = result;
    if ( result >= 0 )
    {
      AdtpDbInitializePrivilegeObject();
      return v1;
    }
  }
  return result;
}
