/*
 * XREFs of EtwpCheckGuidAccess @ 0x1409207F8
 * Callers:
 *     EtwpLogFileNameRundown @ 0x14082F4D4 (EtwpLogFileNameRundown.c)
 *     EtwpCheckNotificationAccess @ 0x1409205D4 (EtwpCheckNotificationAccess.c)
 *     EtwpNotifyGuid @ 0x140938434 (EtwpNotifyGuid.c)
 *     EtwpIsRegEntryAllowed @ 0x14093AFA4 (EtwpIsRegEntryAllowed.c)
 *     EtwpCheckGuidAccessAndDoRundown @ 0x140A6D8A4 (EtwpCheckGuidAccessAndDoRundown.c)
 *     EtwpStartLogger @ 0x140A6E1B4 (EtwpStartLogger.c)
 *     EtwpCheckSystemTraceAccess @ 0x140A6F2BC (EtwpCheckSystemTraceAccess.c)
 *     EtwSetPerformanceTraceInformation @ 0x140B36610 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     EtwpGetSecurityDescriptorByGuid @ 0x140920D60 (EtwpGetSecurityDescriptorByGuid.c)
 *     EtwpAccessCheck @ 0x140931F90 (EtwpAccessCheck.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpCheckGuidAccess(__int64 a1, ACCESS_MASK a2)
{
  PVOID v3; // rbx
  unsigned int v4; // edi
  PVOID P; // [rsp+48h] [rbp+20h] BYREF

  P = 0LL;
  EtwpGetSecurityDescriptorByGuid(a1, &P);
  v3 = P;
  v4 = EtwpAccessCheck(P, a2);
  if ( v3 && v3 != (PVOID)WmipDefaultAccessSd && v3 != EtwpDefaultTraceSecurityDescriptor )
    ExFreePoolWithTag(v3, 0);
  return v4;
}
