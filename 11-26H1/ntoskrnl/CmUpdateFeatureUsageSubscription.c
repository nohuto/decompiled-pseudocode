/*
 * XREFs of CmUpdateFeatureUsageSubscription @ 0x14085B25C
 * Callers:
 *     NtSetSystemInformation @ 0x140839A80 (NtSetSystemInformation.c)
 * Callees:
 *     SeAccessCheck @ 0x140301000 (SeAccessCheck.c)
 *     CmpAllocatePoolWithQuota @ 0x140480A54 (CmpAllocatePoolWithQuota.c)
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x14090F1D0 (SeCaptureSubjectContext.c)
 *     CmFcManagerUpdateFeatureUsageSubscriptions @ 0x140AC0D04 (CmFcManagerUpdateFeatureUsageSubscriptions.c)
 */

__int64 __fastcall CmUpdateFeatureUsageSubscription(void *Src, size_t Size, KPROCESSOR_MODE AccessMode)
{
  size_t v4; // rsi
  struct _PRIVILEGE_SET *v6; // rdi
  BOOLEAN v7; // bl
  unsigned int updated; // ebx
  struct _PRIVILEGE_SET *PoolWithQuota; // rax
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  ACCESS_MASK GrantedAccess; // [rsp+50h] [rbp-48h] BYREF
  struct _PRIVILEGE_SET *v14; // [rsp+58h] [rbp-40h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+60h] [rbp-38h] BYREF
  NTSTATUS AccessStatus; // [rsp+B8h] [rbp+20h] BYREF

  v4 = (unsigned int)Size;
  AccessStatus = 0;
  GrantedAccess = 0;
  memset(&SubjectSecurityContext, 0, sizeof(SubjectSecurityContext));
  v6 = 0LL;
  SeCaptureSubjectContext(&SubjectSecurityContext);
  v7 = SeAccessCheck(
         CmFcFeatureConfigSecurityDescriptor,
         &SubjectSecurityContext,
         0,
         2u,
         0,
         0LL,
         &CmFcFeatureConfigMapping,
         AccessMode,
         &GrantedAccess,
         &AccessStatus);
  SeReleaseSubjectContext(&SubjectSecurityContext);
  if ( !v7 )
  {
    updated = AccessStatus;
    goto LABEL_15;
  }
  if ( (unsigned int)v4 < 4 )
    goto LABEL_4;
  PoolWithQuota = (struct _PRIVILEGE_SET *)CmpAllocatePoolWithQuota(256LL);
  v6 = PoolWithQuota;
  v14 = PoolWithQuota;
  if ( PoolWithQuota )
  {
    if ( AccessMode )
      RtlCopyFromUser(PoolWithQuota, Src, v4);
    else
      RtlCopyVolatileMemory(PoolWithQuota, Src, v4);
    v10 = 20LL * v6->PrivilegeCount;
    if ( v10 > 0xFFFFFFFF || (v11 = (unsigned int)(v10 + 4), (unsigned int)v11 < (unsigned int)v10) )
    {
      updated = -1073741811;
    }
    else
    {
      if ( (_DWORD)v11 != (_DWORD)v4 )
      {
LABEL_4:
        updated = -1073741820;
        goto LABEL_15;
      }
      updated = CmFcManagerUpdateFeatureUsageSubscriptions(v11, &v6->Control);
    }
  }
  else
  {
    updated = -1073741670;
  }
LABEL_15:
  if ( v6 )
    CmSiFreeMemory(v6);
  return updated;
}
