/*
 * XREFs of ExIsRestrictedCaller @ 0x1409DDEE0
 * Callers:
 *     ExpProfileCreate @ 0x14084B100 (ExpProfileCreate.c)
 *     ExProcessCounterSetCallback @ 0x14091D960 (ExProcessCounterSetCallback.c)
 *     ExpGetProcessInformation @ 0x1409DC1B8 (ExpGetProcessInformation.c)
 *     PspQueryWorkingSetWatch @ 0x1409DDA3C (PspQueryWorkingSetWatch.c)
 *     NtQueryInformationProcess @ 0x140A534E0 (NtQueryInformationProcess.c)
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 * Callees:
 *     SeAccessCheck @ 0x140301000 (SeAccessCheck.c)
 *     Feature_RestrictKernelAddressLeaks__private_IsEnabledDeviceUsageNoInline @ 0x1404B1C98 (Feature_RestrictKernelAddressLeaks__private_IsEnabledDeviceUsageNoInline.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     SeCaptureSubjectContext @ 0x14090F1D0 (SeCaptureSubjectContext.c)
 */

__int64 __fastcall ExIsRestrictedCaller(KPROCESSOR_MODE a1, _DWORD *a2)
{
  unsigned int v2; // edi
  BOOLEAN v5; // bl
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+50h] [rbp-28h] BYREF
  NTSTATUS AccessStatus; // [rsp+80h] [rbp+8h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+88h] [rbp+10h] BYREF

  v2 = 0;
  AccessStatus = 0;
  GrantedAccess = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( a2 )
    *a2 = 0;
  if ( !a1 )
    return 0LL;
  if ( a2 && (unsigned int)Feature_RestrictKernelAddressLeaks__private_IsEnabledDeviceUsageNoInline() )
    *a2 = SeSinglePrivilegeCheck(SeDebugPrivilege, a1) == 0;
  SeCaptureSubjectContext(&SubjectContext);
  v5 = SeAccessCheck(
         PspSiloMonitorLock.Timer.Dpc,
         &SubjectContext,
         0,
         0x20000u,
         0,
         0LL,
         (PGENERIC_MAPPING)&ExpRestrictedGenericMapping,
         1,
         &GrantedAccess,
         &AccessStatus);
  SeReleaseSubjectContext(&SubjectContext);
  if ( !v5 )
    return 1LL;
  LOBYTE(v2) = AccessStatus < 0;
  return v2;
}
