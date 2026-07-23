/*
 * XREFs of AdtpInitializeAuditingCommon @ 0x140897138
 * Callers:
 *     SepAdtInitializeAuditingOptions @ 0x140CE4BC0 (SepAdtInitializeAuditingOptions.c)
 * Callees:
 *     AdtpDbInitializePrivilegeObject @ 0x14071A3D0 (AdtpDbInitializePrivilegeObject.c)
 *     AdtpObjsInitialize @ 0x140896C50 (AdtpObjsInitialize.c)
 *     AdtpInitializeDriveLetters @ 0x140897178 (AdtpInitializeDriveLetters.c)
 */

NTSTATUS AdtpInitializeAuditingCommon()
{
  NTSTATUS result; // eax
  NTSTATUS v1; // ebx

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
