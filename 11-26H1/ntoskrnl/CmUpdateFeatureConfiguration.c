/*
 * XREFs of CmUpdateFeatureConfiguration @ 0x14085AFF0
 * Callers:
 *     NtSetSystemInformation @ 0x140839A80 (NtSetSystemInformation.c)
 * Callees:
 *     SeAccessCheck @ 0x140301000 (SeAccessCheck.c)
 *     CmpAllocatePoolWithQuota @ 0x140480A54 (CmpAllocatePoolWithQuota.c)
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     CmFcManagerOverwriteFeatureConfigurationSection @ 0x140866EE0 (CmFcManagerOverwriteFeatureConfigurationSection.c)
 *     CmFcManagerUpdateFeatureConfigurations @ 0x1408674B4 (CmFcManagerUpdateFeatureConfigurations.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     SeCaptureSubjectContext @ 0x14090F1D0 (SeCaptureSubjectContext.c)
 */

__int64 __fastcall CmUpdateFeatureConfiguration(void *Src, size_t Size, KPROCESSOR_MODE AccessMode)
{
  size_t v4; // r14
  unsigned int *v6; // rdi
  struct _PRIVILEGE_SET *v7; // rsi
  BOOLEAN v8; // bl
  unsigned int v9; // ebx
  unsigned int *PoolWithQuota; // rax
  __int64 v11; // rcx
  struct _PRIVILEGE_SET *v12; // rax
  size_t v13; // r8
  void *v14; // rdx
  unsigned int updated; // eax
  unsigned __int64 v16; // rax
  int v17; // ecx
  ACCESS_MASK GrantedAccess[4]; // [rsp+60h] [rbp-68h] BYREF
  unsigned int *v20; // [rsp+70h] [rbp-58h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+80h] [rbp-48h] BYREF
  NTSTATUS AccessStatus; // [rsp+E8h] [rbp+20h] BYREF

  v4 = (unsigned int)Size;
  AccessStatus = 0;
  GrantedAccess[0] = 0;
  memset(&SubjectSecurityContext, 0, sizeof(SubjectSecurityContext));
  v6 = 0LL;
  v7 = 0LL;
  SeCaptureSubjectContext(&SubjectSecurityContext);
  v8 = SeAccessCheck(
         CmFcFeatureConfigSecurityDescriptor,
         &SubjectSecurityContext,
         0,
         1u,
         0,
         0LL,
         &CmFcFeatureConfigMapping,
         AccessMode,
         GrantedAccess,
         &AccessStatus);
  SeReleaseSubjectContext(&SubjectSecurityContext);
  if ( !v8 )
  {
    v9 = AccessStatus;
    goto LABEL_30;
  }
  if ( (unsigned int)v4 < 4 )
    goto LABEL_4;
  PoolWithQuota = (unsigned int *)CmpAllocatePoolWithQuota(256LL);
  v6 = PoolWithQuota;
  v20 = PoolWithQuota;
  if ( !PoolWithQuota )
    goto LABEL_6;
  if ( AccessMode )
    RtlCopyFromUser(PoolWithQuota, Src, v4);
  else
    RtlCopyVolatileMemory(PoolWithQuota, Src, v4);
  v11 = *v6;
  if ( (_DWORD)v11 )
  {
    if ( (_DWORD)v11 != 1 )
      goto LABEL_29;
    if ( (_DWORD)v4 == 40 )
    {
      if ( v6[4] == 1 )
      {
        if ( AccessMode )
          ProbeForRead(*((volatile void **)v6 + 4), *((_QWORD *)v6 + 3), 4u);
        if ( *((_QWORD *)v6 + 3) )
        {
          v12 = (struct _PRIVILEGE_SET *)CmpAllocatePoolWithQuota(256LL);
          v7 = v12;
          if ( !v12 )
          {
LABEL_6:
            v9 = -1073741670;
            goto LABEL_30;
          }
          v13 = *((_QWORD *)v6 + 3);
          v14 = (void *)*((_QWORD *)v6 + 4);
          if ( AccessMode )
            RtlCopyFromUser(v12, v14, v13);
          else
            RtlCopyVolatileMemory(v12, v14, v13);
        }
        updated = CmFcManagerOverwriteFeatureConfigurationSection(
                    v11,
                    *((_QWORD *)v6 + 1),
                    v6[4],
                    v7,
                    *((_QWORD *)v6 + 3));
        goto LABEL_28;
      }
      goto LABEL_29;
    }
LABEL_4:
    v9 = -1073741820;
    goto LABEL_30;
  }
  if ( (unsigned int)v4 < 0x18 )
    goto LABEL_4;
  v16 = 32LL * v6[5];
  if ( v16 > 0xFFFFFFFF )
    goto LABEL_29;
  v17 = v16 + 24;
  if ( (int)v16 + 24 < (unsigned int)v16 )
    goto LABEL_29;
  if ( v17 != (_DWORD)v4 )
    goto LABEL_4;
  if ( v6[4] == 1 )
  {
    updated = CmFcManagerUpdateFeatureConfigurations(v17, *((_QWORD *)v6 + 1), 1, (int)v6 + 24, v6[5]);
LABEL_28:
    v9 = updated;
    goto LABEL_30;
  }
LABEL_29:
  v9 = -1073741811;
LABEL_30:
  if ( v6 )
    CmSiFreeMemory((PPRIVILEGE_SET)v6);
  if ( v7 )
    CmSiFreeMemory(v7);
  return v9;
}
