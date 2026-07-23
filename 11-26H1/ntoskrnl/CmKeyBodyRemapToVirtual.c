/*
 * XREFs of CmKeyBodyRemapToVirtual @ 0x140B4DB2C
 * Callers:
 *     NtDeleteValueKey @ 0x14093ED10 (NtDeleteValueKey.c)
 *     NtDeleteKey @ 0x140AB0060 (NtDeleteKey.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     KCBNeedsVirtualImage @ 0x140447908 (KCBNeedsVirtualImage.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     SeDeleteAccessState @ 0x1408F7CA0 (SeDeleteAccessState.c)
 *     CmpInitializeParseContext @ 0x14093E5E0 (CmpInitializeParseContext.c)
 *     CmpCleanupParseContext @ 0x14093E860 (CmpCleanupParseContext.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 *     SeCreateAccessStateFromSubjectContext @ 0x140ACA18C (SeCreateAccessStateFromSubjectContext.c)
 *     CmpReparseToVirtualPath @ 0x140B07FA4 (CmpReparseToVirtualPath.c)
 *     CmpUnlockKcb @ 0x140C5E2B0 (CmpUnlockKcb.c)
 *     CmpLockKcbShared @ 0x140C5E3F0 (CmpLockKcbShared.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140C5E7C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpLockRegistry @ 0x140C5E850 (CmpLockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140C5E930 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 *     CmpDetachFromRegistryProcess @ 0x140C5EA50 (CmpDetachFromRegistryProcess.c)
 *     CmObReferenceObjectByName @ 0x140C5EF38 (CmObReferenceObjectByName.c)
 */

__int64 __fastcall CmKeyBodyRemapToVirtual(__int64 *a1, char a2, int a3, int *a4, _DWORD *a5)
{
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rsi
  ULONG_PTR v11; // rdi
  int AccessStateFromSubjectContext; // ebx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v21; // rcx
  int v22; // r9d
  int v23; // eax
  __int64 v25; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v27; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v28; // [rsp+70h] [rbp-90h]
  __int128 v29; // [rsp+80h] [rbp-80h]
  _DWORD v30[18]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v31; // [rsp+D8h] [rbp-28h]
  struct _KAPC_STATE ApcState; // [rsp+260h] [rbp+160h] BYREF
  _QWORD v33[20]; // [rsp+290h] [rbp+190h] BYREF
  _QWORD v34[28]; // [rsp+330h] [rbp+230h] BYREF

  memset_0(v30, 0, 0x1D0uLL);
  DestinationString = 0LL;
  memset_0(v33, 0, sizeof(v33));
  memset_0(v34, 0, sizeof(v34));
  *(_QWORD *)&v29 = 0LL;
  DWORD2(v29) = 0;
  v27 = 0LL;
  v28 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  memset(&ApcState, 0, sizeof(ApcState));
  CmpInitializeParseContext((__int64)v30);
  v10 = *a1;
  v25 = 0LL;
  v11 = *(_QWORD *)(v10 + 8);
  if ( *(_WORD *)(v11 + 66)
    || (*(_BYTE *)(v10 + 48) & 0x10) != 0
    || !KCBNeedsVirtualImage()
    || (v13 = *(_DWORD *)(v11 + 184), (v13 & 0x800000) == 0)
    || (v13 & 0x20) != 0 )
  {
    AccessStateFromSubjectContext = -1073741790;
    goto LABEL_12;
  }
  CmpAttachToRegistryProcess(&ApcState);
  CmpLockRegistry(v15, v14, v16, v17);
  CmpLockKcbShared(v11);
  AccessStateFromSubjectContext = CmpPerformKeyBodyDeletionCheck(v10, 0LL);
  if ( AccessStateFromSubjectContext >= 0 )
  {
    if ( CmpReparseToVirtualPath(v11, v18, a4, &DestinationString) )
    {
      CmpUnlockKcb(*(_QWORD *)(*a1 + 8));
      CmpUnlockRegistry(v21);
      v30[4] = *a5;
      v30[0] = 8;
      v31 = *(_QWORD *)(v10 + 56);
      AccessStateFromSubjectContext = SeCreateAccessStateFromSubjectContext(
                                        (__int64)a4,
                                        v33,
                                        v34,
                                        a3,
                                        (_DWORD *)CmKeyObjectType + 19);
      if ( AccessStateFromSubjectContext >= 0 )
      {
        v23 = 1600;
        LODWORD(v27) = 48;
        *((_QWORD *)&v27 + 1) = 0LL;
        if ( a2 != 1 )
          v23 = 576;
        DWORD2(v28) = v23;
        *(_QWORD *)&v28 = &DestinationString;
        v29 = 0LL;
        if ( (int)CmObReferenceObjectByName(
                    (unsigned int)&v27,
                    (unsigned int)v33,
                    a3,
                    v22,
                    0,
                    (__int64)v30,
                    (__int64)&v25) >= 0 )
        {
          *a1 = v25;
          ObfDereferenceObject((PVOID)v10);
          AccessStateFromSubjectContext = 0;
        }
        else
        {
          AccessStateFromSubjectContext = -1073741790;
        }
        SeDeleteAccessState((__int64)v33);
      }
      goto LABEL_11;
    }
    AccessStateFromSubjectContext = 0;
  }
  CmpUnlockKcb(v11);
  CmpUnlockRegistry(v19);
LABEL_11:
  CmpDetachFromRegistryProcess(&ApcState);
LABEL_12:
  if ( DestinationString.Buffer )
    RtlFreeAnsiString(&DestinationString);
  CmpCleanupParseContext((__int64)v30, 0LL, v8, v9);
  return (unsigned int)AccessStateFromSubjectContext;
}
