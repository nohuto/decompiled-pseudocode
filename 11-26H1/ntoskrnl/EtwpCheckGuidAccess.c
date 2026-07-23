/*
 * XREFs of EtwpCheckGuidAccess @ 0x1408FC30C
 * Callers:
 *     EtwpLogFileNameRundown @ 0x140835714 (EtwpLogFileNameRundown.c)
 *     EtwpNotifyGuid @ 0x140913FD4 (EtwpNotifyGuid.c)
 *     EtwpIsRegEntryAllowed @ 0x140916B44 (EtwpIsRegEntryAllowed.c)
 *     EtwpCheckNotificationAccess @ 0x14097A0C0 (EtwpCheckNotificationAccess.c)
 *     EtwpCheckGuidAccessAndDoRundown @ 0x140A99B60 (EtwpCheckGuidAccessAndDoRundown.c)
 *     EtwpStartLogger @ 0x140AB0F2C (EtwpStartLogger.c)
 *     EtwpCheckSystemTraceAccess @ 0x140AB2A20 (EtwpCheckSystemTraceAccess.c)
 *     EtwSetPerformanceTraceInformation @ 0x140B38820 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     EtwpGetSecurityDescriptorByGuid @ 0x1408FC870 (EtwpGetSecurityDescriptorByGuid.c)
 *     EtwpAccessCheck @ 0x14090DB60 (EtwpAccessCheck.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
