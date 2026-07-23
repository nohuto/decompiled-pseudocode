/*
 * XREFs of FsRtlpOplockTryPrepForAckTimeout @ 0x140AE4C60
 * Callers:
 *     FsRtlpRequestExclusiveOplock @ 0x1403F8BE4 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpRequestShareableOplock @ 0x140514FAC (FsRtlpRequestShareableOplock.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     ExAllocateFromNPagedLookasideList @ 0x14030C430 (ExAllocateFromNPagedLookasideList.c)
 *     SepPrivilegeCheck @ 0x14041BFB0 (SepPrivilegeCheck.c)
 *     ExGetPreviousMode @ 0x140469E00 (ExGetPreviousMode.c)
 *     KeInitializeDpc @ 0x14047B3C0 (KeInitializeDpc.c)
 *     KeInitializeTimer @ 0x14047D670 (KeInitializeTimer.c)
 *     IoIsFileOriginRemote @ 0x1404939C0 (IoIsFileOriginRemote.c)
 *     Feature_OwnerAckTimeout__private_IsEnabledDeviceUsageNoInline @ 0x140529158 (Feature_OwnerAckTimeout__private_IsEnabledDeviceUsageNoInline.c)
 *     FsRtlpOplockIsSubjectToTimeout @ 0x1405B9FB0 (FsRtlpOplockIsSubjectToTimeout.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     FsRtlpOplockGetThreadIntegrityLevel @ 0x140791B6C (FsRtlpOplockGetThreadIntegrityLevel.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x14090F1D0 (SeCaptureSubjectContext.c)
 */

void __fastcall FsRtlpOplockTryPrepForAckTimeout(
        __int64 a1,
        struct _FILE_OBJECT *a2,
        __int64 a3,
        __int64 a4,
        PVOID *a5)
{
  KPROCESSOR_MODE PreviousMode; // di
  bool v10; // zf
  PACCESS_TOKEN ClientToken; // rcx
  char v12; // di
  _BYTE *v13; // rax
  PVOID v14; // rax
  _QWORD *v15; // rax
  PVOID v16[2]; // [rsp+30h] [rbp-50h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+40h] [rbp-40h] BYREF
  int v18; // [rsp+60h] [rbp-20h]
  int v19; // [rsp+64h] [rbp-1Ch]
  __int64 v20; // [rsp+68h] [rbp-18h] BYREF
  int v21; // [rsp+70h] [rbp-10h]

  v10 = *(_DWORD *)(a4 + 8) == 0;
  LODWORD(v16[0]) = 0;
  if ( !v10 )
    goto LABEL_5;
  *(_DWORD *)(a4 + 8) = 0x80000000;
  if ( IoIsFileOriginRemote(a2) )
  {
    *(_DWORD *)(a4 + 8) = -2147483646;
    return;
  }
  PreviousMode = 1;
  if ( a3 )
  {
    v13 = *(_BYTE **)(a3 + 184);
    if ( *v13 != 13 || *(_BYTE *)(a3 + 64) )
      goto LABEL_10;
    v10 = v13[1] == 4;
  }
  else
  {
    PreviousMode = ExGetPreviousMode();
    v10 = PreviousMode == 0;
  }
  if ( v10 )
  {
LABEL_14:
    *(_DWORD *)(a4 + 8) |= 4u;
    return;
  }
LABEL_10:
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  SeCaptureSubjectContext(&SubjectContext);
  ClientToken = SubjectContext.ClientToken;
  v16[1] = (PVOID)18;
  v20 = 18LL;
  v18 = 1;
  v19 = 1;
  v21 = 0;
  if ( SubjectContext.ClientToken )
  {
    if ( SubjectContext.ImpersonationLevel < SecurityImpersonation )
    {
      v12 = 0;
      goto LABEL_13;
    }
  }
  else
  {
    ClientToken = SubjectContext.PrimaryToken;
  }
  v12 = SepPrivilegeCheck((__int64)ClientToken, (__int64)&v20, 1u, 1, PreviousMode);
LABEL_13:
  SeReleaseSubjectContext(&SubjectContext);
  if ( v12 )
    goto LABEL_14;
  if ( !FsRtlpOplockGetThreadIntegrityLevel((__int64)KeGetCurrentThread(), v16) )
  {
    *(_DWORD *)(a4 + 8) |= 1u;
    return;
  }
LABEL_5:
  if ( (unsigned int)Feature_OwnerAckTimeout__private_IsEnabledDeviceUsageNoInline()
    && FsRtlpOplockIsSubjectToTimeout(a4)
    && !*a5 )
  {
    v14 = ExAllocateFromNPagedLookasideList(&g_OplockAckTimeoutLookaside);
    *a5 = v14;
    memset_0(v14, 0, 0xB8uLL);
    *((_QWORD *)*a5 + 20) = a1;
    *((_QWORD *)*a5 + 21) = a2;
    PsReferenceSiloContext(*((void **)*a5 + 21));
    v15 = *a5;
    v15[18] = FsRtlpOplockAckTimeoutWorker;
    v15[19] = v15;
    v15[16] = 0LL;
    KeInitializeDpc((PRKDPC)*a5 + 1, (PKDEFERRED_ROUTINE)PfSnTracingStateDpcRoutine, *a5);
    KeInitializeTimer((PKTIMER)*a5);
    *((_DWORD *)*a5 + 44) = v16[0];
  }
}
