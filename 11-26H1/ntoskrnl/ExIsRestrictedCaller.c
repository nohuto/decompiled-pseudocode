/*
 * XREFs of ExIsRestrictedCaller @ 0x140A8C678
 * Callers:
 *     ExpProfileCreate @ 0x140842064 (ExpProfileCreate.c)
 *     ExpGetProcessInformation @ 0x14096767C (ExpGetProcessInformation.c)
 *     ExProcessCounterSetCallback @ 0x140969300 (ExProcessCounterSetCallback.c)
 *     NtQueryInformationProcess @ 0x140A4A1F0 (NtQueryInformationProcess.c)
 *     PspQueryWorkingSetWatch @ 0x140A8C1D4 (PspQueryWorkingSetWatch.c)
 *     ExpQuerySystemInformation @ 0x140B145DC (ExpQuerySystemInformation.c)
 * Callees:
 *     SeAccessCheck @ 0x1402B6340 (SeAccessCheck.c)
 *     Feature_RestrictKernelAddressLeaks__private_IsEnabledDeviceUsageNoInline @ 0x1404B8468 (Feature_RestrictKernelAddressLeaks__private_IsEnabledDeviceUsageNoInline.c)
 *     SeReleaseSubjectContext @ 0x1408CB2E0 (SeReleaseSubjectContext.c)
 *     SeSinglePrivilegeCheck @ 0x140932280 (SeSinglePrivilegeCheck.c)
 *     SeCaptureSubjectContext @ 0x140933620 (SeCaptureSubjectContext.c)
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
         PspSiloMonitorLock.WaitBlock[1].Object,
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
