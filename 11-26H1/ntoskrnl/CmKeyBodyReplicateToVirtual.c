/*
 * XREFs of CmKeyBodyReplicateToVirtual @ 0x140B3181C
 * Callers:
 *     NtRenameKey @ 0x14084F890 (NtRenameKey.c)
 *     NtSetInformationKey @ 0x1408B0310 (NtSetInformationKey.c)
 *     NtSetValueKey @ 0x14097DE30 (NtSetValueKey.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     CmpDrainDelayDerefContext @ 0x140446E30 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x14044EE20 (CmpInitializeDelayDerefContext.c)
 *     KCBNeedsVirtualImage @ 0x14044F7D8 (KCBNeedsVirtualImage.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     CmpReplicateKeyToVirtual @ 0x140859F40 (CmpReplicateKeyToVirtual.c)
 *     CmpExamineSaclForAuditEvent @ 0x14085B068 (CmpExamineSaclForAuditEvent.c)
 *     CmpReportAuditVirtualizationEvent @ 0x14085B480 (CmpReportAuditVirtualizationEvent.c)
 *     CmpReparseToVirtualPath @ 0x1408AF5E0 (CmpReparseToVirtualPath.c)
 *     CmpLockRegistryExclusive @ 0x1408C2148 (CmpLockRegistryExclusive.c)
 *     CmpLockKcbExclusive @ 0x1408CEB50 (CmpLockKcbExclusive.c)
 *     SeDeleteAccessState @ 0x1408F16E0 (SeDeleteAccessState.c)
 *     CmpInitializeParseContext @ 0x14097C5D0 (CmpInitializeParseContext.c)
 *     CmpCleanupParseContext @ 0x14097C850 (CmpCleanupParseContext.c)
 *     RtlFreeAnsiString @ 0x140A007C0 (RtlFreeAnsiString.c)
 *     CmpCheckAdminAccess @ 0x140A33904 (CmpCheckAdminAccess.c)
 *     SeCreateAccessStateFromSubjectContext @ 0x140AC859C (SeCreateAccessStateFromSubjectContext.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x140AE0D24 (CmpSearchKeyControlBlockTreeEx.c)
 *     CmpUnlockKcb @ 0x140C582B0 (CmpUnlockKcb.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140C587C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpLockRegistry @ 0x140C58850 (CmpLockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140C58930 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140C58970 (CmpUnlockRegistry.c)
 *     CmpDetachFromRegistryProcess @ 0x140C58A50 (CmpDetachFromRegistryProcess.c)
 *     CmObReferenceObjectByName @ 0x140C58F38 (CmObReferenceObjectByName.c)
 */

__int64 __fastcall CmKeyBodyReplicateToVirtual(_QWORD **a1, char a2, ACCESS_MASK a3, __int64 a4)
{
  _QWORD *v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  struct _KLOCK_ENTRIES *v11; // r9
  char i; // r12
  ULONG_PTR v13; // rdi
  int AccessStateFromSubjectContext; // ebx
  __int64 v15; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // r9d
  int v24; // eax
  BOOLEAN v25; // [rsp+40h] [rbp-C0h] BYREF
  char v26; // [rsp+41h] [rbp-BFh] BYREF
  char v27; // [rsp+42h] [rbp-BEh]
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  ULONG_PTR v29; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v30; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD *v31; // [rsp+68h] [rbp-98h]
  __int128 v32; // [rsp+70h] [rbp-90h] BYREF
  __int128 v33; // [rsp+80h] [rbp-80h] BYREF
  __int128 v34; // [rsp+90h] [rbp-70h]
  __int128 v35; // [rsp+A0h] [rbp-60h]
  _DWORD v36[18]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v37; // [rsp+F8h] [rbp-8h]
  struct _KAPC_STATE ApcState; // [rsp+280h] [rbp+180h] BYREF
  _QWORD v39[20]; // [rsp+2B0h] [rbp+1B0h] BYREF
  _QWORD v40[28]; // [rsp+350h] [rbp+250h] BYREF

  v27 = a2;
  v31 = a1;
  v25 = 0;
  v29 = 0LL;
  v26 = 0;
  DestinationString = 0LL;
  memset_0(v36, 0, 0x1D0uLL);
  memset(&ApcState, 0, sizeof(ApcState));
  v32 = 0LL;
  memset_0(v39, 0, sizeof(v39));
  memset_0(v40, 0, sizeof(v40));
  *(_QWORD *)&v35 = 0LL;
  DWORD2(v35) = 0;
  v33 = 0LL;
  v34 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v7 = *a1;
  CmpInitializeParseContext((__int64)v36);
  v30 = 0LL;
  CmpInitializeDelayDerefContext(&v32);
  CmpAttachToRegistryProcess(&ApcState);
  CmpLockRegistry(v8);
  for ( i = 0; ; i = 1 )
  {
    v13 = v7[1];
    CmpLockKcbExclusive(v13, v9, v10, v11);
    if ( !KCBNeedsVirtualImage() )
    {
LABEL_3:
      AccessStateFromSubjectContext = -1073741790;
LABEL_4:
      CmpUnlockKcb(v13);
      CmpUnlockRegistry(v15);
      goto LABEL_5;
    }
    AccessStateFromSubjectContext = CmpPerformKeyBodyDeletionCheck(v7, 0LL);
    if ( AccessStateFromSubjectContext < 0 )
      goto LABEL_4;
    if ( CmpReparseToVirtualPath(v13, v17, a4, &DestinationString) )
    {
      CmpUnlockKcb(v13);
      goto LABEL_23;
    }
    if ( (*(_DWORD *)(v13 + 184) & 0x20) != 0 )
      goto LABEL_3;
    AccessStateFromSubjectContext = CmpCheckAdminAccess(
                                      a3,
                                      (PSECURITY_DESCRIPTOR)(*(_QWORD *)(v13 + 88) + 32LL),
                                      a4,
                                      &v25);
    if ( AccessStateFromSubjectContext < 0 )
      goto LABEL_4;
    if ( !v25 )
      goto LABEL_3;
    LOBYTE(v18) = i;
    v19 = CmpReplicateKeyToVirtual(v13, a4, v18, &v29);
    AccessStateFromSubjectContext = v19;
    if ( v19 != -1073741739 )
      break;
    CmpUnlockKcb(v13);
    CmpUnlockRegistry(v20);
    CmpLockRegistryExclusive();
  }
  if ( v19 < 0 )
    goto LABEL_4;
  AccessStateFromSubjectContext = CmpExamineSaclForAuditEvent((void *)(*(_QWORD *)(v13 + 88) + 32LL), a4, &v26);
  if ( AccessStateFromSubjectContext < 0 )
    goto LABEL_4;
  if ( v26 )
  {
    AccessStateFromSubjectContext = CmpReportAuditVirtualizationEvent(v13, a4);
    if ( AccessStateFromSubjectContext < 0 )
      goto LABEL_4;
  }
  if ( !CmpReparseToVirtualPath(v13, v21, a4, &DestinationString) )
  {
    AccessStateFromSubjectContext = -1073741670;
    goto LABEL_4;
  }
  CmpUnlockKcb(v13);
  CmpSearchKeyControlBlockTreeEx((__int64)CmpSyncKcbCacheForHive, v29, (__int64)&v32, 0LL, 1);
LABEL_23:
  CmpDrainDelayDerefContext((_QWORD **)&v32);
  CmpUnlockRegistry(v22);
  v36[0] = 8;
  v37 = v7[7];
  AccessStateFromSubjectContext = SeCreateAccessStateFromSubjectContext(
                                    a4,
                                    v39,
                                    v40,
                                    a3,
                                    (_DWORD *)CmKeyObjectType + 19);
  if ( AccessStateFromSubjectContext >= 0 )
  {
    v24 = 1600;
    LODWORD(v33) = 48;
    *((_QWORD *)&v33 + 1) = 0LL;
    if ( v27 != 1 )
      v24 = 576;
    DWORD2(v34) = v24;
    *(_QWORD *)&v34 = &DestinationString;
    v35 = 0LL;
    AccessStateFromSubjectContext = CmObReferenceObjectByName(
                                      (unsigned int)&v33,
                                      (unsigned int)v39,
                                      a3,
                                      v23,
                                      0,
                                      (__int64)v36,
                                      (__int64)&v30);
    if ( AccessStateFromSubjectContext >= 0 )
    {
      *v31 = v30;
      ObfDereferenceObject(v7);
      AccessStateFromSubjectContext = 0;
    }
    SeDeleteAccessState((__int64)v39);
  }
LABEL_5:
  CmpCleanupParseContext((__int64)v36, 0);
  if ( DestinationString.Buffer )
    RtlFreeAnsiString(&DestinationString);
  CmpDetachFromRegistryProcess(&ApcState);
  return (unsigned int)AccessStateFromSubjectContext;
}
