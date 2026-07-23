/*
 * XREFs of CmKeyBodyReplicateToVirtual @ 0x140B33A1C
 * Callers:
 *     NtRenameKey @ 0x140855BA0 (NtRenameKey.c)
 *     NtSetInformationKey @ 0x1408B6800 (NtSetInformationKey.c)
 *     NtSetValueKey @ 0x14093FE40 (NtSetValueKey.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     CmpDrainDelayDerefContext @ 0x14043F920 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x140446F50 (CmpInitializeDelayDerefContext.c)
 *     KCBNeedsVirtualImage @ 0x140447908 (KCBNeedsVirtualImage.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     CmpReplicateKeyToVirtual @ 0x140860234 (CmpReplicateKeyToVirtual.c)
 *     CmpExamineSaclForAuditEvent @ 0x14086135C (CmpExamineSaclForAuditEvent.c)
 *     CmpReportAuditVirtualizationEvent @ 0x140861774 (CmpReportAuditVirtualizationEvent.c)
 *     CmpLockRegistryExclusive @ 0x1408C8718 (CmpLockRegistryExclusive.c)
 *     CmpLockKcbExclusive @ 0x1408D5100 (CmpLockKcbExclusive.c)
 *     SeDeleteAccessState @ 0x1408F7CA0 (SeDeleteAccessState.c)
 *     CmpInitializeParseContext @ 0x14093E5E0 (CmpInitializeParseContext.c)
 *     CmpCleanupParseContext @ 0x14093E860 (CmpCleanupParseContext.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 *     CmpCheckAdminAccess @ 0x140A4E864 (CmpCheckAdminAccess.c)
 *     SeCreateAccessStateFromSubjectContext @ 0x140ACA18C (SeCreateAccessStateFromSubjectContext.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x140ADE3F8 (CmpSearchKeyControlBlockTreeEx.c)
 *     CmpReparseToVirtualPath @ 0x140B07FA4 (CmpReparseToVirtualPath.c)
 *     CmpUnlockKcb @ 0x140C5E2B0 (CmpUnlockKcb.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140C5E7C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpLockRegistry @ 0x140C5E850 (CmpLockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140C5E930 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 *     CmpDetachFromRegistryProcess @ 0x140C5EA50 (CmpDetachFromRegistryProcess.c)
 *     CmObReferenceObjectByName @ 0x140C5EF38 (CmObReferenceObjectByName.c)
 */

__int64 __fastcall CmKeyBodyReplicateToVirtual(_QWORD **a1, char a2, ACCESS_MASK a3, int *a4)
{
  _QWORD *v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r8
  struct _KLOCK_ENTRIES *v14; // r9
  char i; // r12
  ULONG_PTR v16; // rdi
  int AccessStateFromSubjectContext; // ebx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v22; // rdx
  __int64 v23; // r8
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // eax
  BOOLEAN v29; // [rsp+40h] [rbp-C0h] BYREF
  char v30; // [rsp+41h] [rbp-BFh] BYREF
  char v31; // [rsp+42h] [rbp-BEh]
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  ULONG_PTR v33; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v34; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD *v35; // [rsp+68h] [rbp-98h]
  __int128 v36; // [rsp+70h] [rbp-90h] BYREF
  __int128 v37; // [rsp+80h] [rbp-80h] BYREF
  __int128 v38; // [rsp+90h] [rbp-70h]
  __int128 v39; // [rsp+A0h] [rbp-60h]
  _DWORD v40[18]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v41; // [rsp+F8h] [rbp-8h]
  struct _KAPC_STATE ApcState; // [rsp+280h] [rbp+180h] BYREF
  _QWORD v43[20]; // [rsp+2B0h] [rbp+1B0h] BYREF
  _QWORD v44[28]; // [rsp+350h] [rbp+250h] BYREF

  v31 = a2;
  v35 = a1;
  v29 = 0;
  v33 = 0LL;
  v30 = 0;
  DestinationString = 0LL;
  memset_0(v40, 0, 0x1D0uLL);
  memset(&ApcState, 0, sizeof(ApcState));
  v36 = 0LL;
  memset_0(v43, 0, sizeof(v43));
  memset_0(v44, 0, sizeof(v44));
  *(_QWORD *)&v39 = 0LL;
  DWORD2(v39) = 0;
  v37 = 0LL;
  v38 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v7 = *a1;
  CmpInitializeParseContext((__int64)v40);
  v34 = 0LL;
  CmpInitializeDelayDerefContext(&v36);
  CmpAttachToRegistryProcess(&ApcState);
  CmpLockRegistry(v9, v8, v10, v11);
  for ( i = 0; ; i = 1 )
  {
    v16 = v7[1];
    CmpLockKcbExclusive(v16, v12, v13, v14);
    if ( !KCBNeedsVirtualImage() )
    {
LABEL_3:
      AccessStateFromSubjectContext = -1073741790;
LABEL_4:
      CmpUnlockKcb(v16);
      CmpUnlockRegistry(v18);
      goto LABEL_5;
    }
    AccessStateFromSubjectContext = CmpPerformKeyBodyDeletionCheck(v7, 0LL);
    if ( AccessStateFromSubjectContext < 0 )
      goto LABEL_4;
    if ( CmpReparseToVirtualPath(v16, v22, a4, &DestinationString) )
    {
      CmpUnlockKcb(v16);
      goto LABEL_23;
    }
    if ( (*(_DWORD *)(v16 + 184) & 0x20) != 0 )
      goto LABEL_3;
    AccessStateFromSubjectContext = CmpCheckAdminAccess(
                                      a3,
                                      (PSECURITY_DESCRIPTOR)(*(_QWORD *)(v16 + 88) + 32LL),
                                      (__int64)a4,
                                      &v29);
    if ( AccessStateFromSubjectContext < 0 )
      goto LABEL_4;
    if ( !v29 )
      goto LABEL_3;
    LOBYTE(v23) = i;
    v24 = CmpReplicateKeyToVirtual(v16, (__int64)a4, v23, &v33);
    AccessStateFromSubjectContext = v24;
    if ( v24 != -1073741739 )
      break;
    CmpUnlockKcb(v16);
    CmpUnlockRegistry(v25);
    CmpLockRegistryExclusive();
  }
  if ( v24 < 0 )
    goto LABEL_4;
  AccessStateFromSubjectContext = CmpExamineSaclForAuditEvent((void *)(*(_QWORD *)(v16 + 88) + 32LL), (__int64)a4, &v30);
  if ( AccessStateFromSubjectContext < 0 )
    goto LABEL_4;
  if ( v30 )
  {
    AccessStateFromSubjectContext = CmpReportAuditVirtualizationEvent(v16, (__int64)a4);
    if ( AccessStateFromSubjectContext < 0 )
      goto LABEL_4;
  }
  if ( !CmpReparseToVirtualPath(v16, v26, a4, &DestinationString) )
  {
    AccessStateFromSubjectContext = -1073741670;
    goto LABEL_4;
  }
  CmpUnlockKcb(v16);
  CmpSearchKeyControlBlockTreeEx((__int64)CmpSyncKcbCacheForHive, v33, (__int64)&v36, 0LL, 1);
LABEL_23:
  CmpDrainDelayDerefContext((_QWORD **)&v36);
  CmpUnlockRegistry(v27);
  v40[0] = 8;
  v41 = v7[7];
  AccessStateFromSubjectContext = SeCreateAccessStateFromSubjectContext(
                                    (__int64)a4,
                                    v43,
                                    v44,
                                    a3,
                                    (_DWORD *)CmKeyObjectType + 19);
  if ( AccessStateFromSubjectContext >= 0 )
  {
    v28 = 1600;
    LODWORD(v37) = 48;
    *((_QWORD *)&v37 + 1) = 0LL;
    if ( v31 != 1 )
      v28 = 576;
    DWORD2(v38) = v28;
    *(_QWORD *)&v38 = &DestinationString;
    v39 = 0LL;
    AccessStateFromSubjectContext = CmObReferenceObjectByName(
                                      (unsigned int)&v37,
                                      (unsigned int)v43,
                                      a3,
                                      v20,
                                      0,
                                      (__int64)v40,
                                      (__int64)&v34);
    if ( AccessStateFromSubjectContext >= 0 )
    {
      *v35 = v34;
      ObfDereferenceObject(v7);
      AccessStateFromSubjectContext = 0;
    }
    SeDeleteAccessState((__int64)v43);
  }
LABEL_5:
  CmpCleanupParseContext((__int64)v40, 0LL, v19, v20);
  if ( DestinationString.Buffer )
    RtlFreeAnsiString(&DestinationString);
  CmpDetachFromRegistryProcess(&ApcState);
  return (unsigned int)AccessStateFromSubjectContext;
}
