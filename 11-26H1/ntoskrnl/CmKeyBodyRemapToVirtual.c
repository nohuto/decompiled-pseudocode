/*
 * XREFs of CmKeyBodyRemapToVirtual @ 0x140B4BD9C
 * Callers:
 *     NtDeleteValueKey @ 0x14097CD00 (NtDeleteValueKey.c)
 *     NtDeleteKey @ 0x140AB2390 (NtDeleteKey.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     KCBNeedsVirtualImage @ 0x14044F7D8 (KCBNeedsVirtualImage.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     CmpReparseToVirtualPath @ 0x1408AF5E0 (CmpReparseToVirtualPath.c)
 *     SeDeleteAccessState @ 0x1408F16E0 (SeDeleteAccessState.c)
 *     CmpInitializeParseContext @ 0x14097C5D0 (CmpInitializeParseContext.c)
 *     CmpCleanupParseContext @ 0x14097C850 (CmpCleanupParseContext.c)
 *     RtlFreeAnsiString @ 0x140A007C0 (RtlFreeAnsiString.c)
 *     SeCreateAccessStateFromSubjectContext @ 0x140AC859C (SeCreateAccessStateFromSubjectContext.c)
 *     CmpUnlockKcb @ 0x140C582B0 (CmpUnlockKcb.c)
 *     CmpLockKcbShared @ 0x140C583F0 (CmpLockKcbShared.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140C587C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpLockRegistry @ 0x140C58850 (CmpLockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140C58930 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140C58970 (CmpUnlockRegistry.c)
 *     CmpDetachFromRegistryProcess @ 0x140C58A50 (CmpDetachFromRegistryProcess.c)
 *     CmObReferenceObjectByName @ 0x140C58F38 (CmObReferenceObjectByName.c)
 */

__int64 __fastcall CmKeyBodyRemapToVirtual(__int64 *a1, char a2, int a3, __int64 a4, _DWORD *a5)
{
  __int64 v8; // rsi
  ULONG_PTR v9; // rdi
  int AccessStateFromSubjectContext; // ebx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v16; // rcx
  int v17; // r9d
  int v18; // eax
  __int64 v20; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v22; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v23; // [rsp+70h] [rbp-90h]
  __int128 v24; // [rsp+80h] [rbp-80h]
  _DWORD v25[18]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v26; // [rsp+D8h] [rbp-28h]
  struct _KAPC_STATE ApcState; // [rsp+260h] [rbp+160h] BYREF
  _QWORD v28[20]; // [rsp+290h] [rbp+190h] BYREF
  _QWORD v29[28]; // [rsp+330h] [rbp+230h] BYREF

  memset_0(v25, 0, 0x1D0uLL);
  DestinationString = 0LL;
  memset_0(v28, 0, sizeof(v28));
  memset_0(v29, 0, sizeof(v29));
  *(_QWORD *)&v24 = 0LL;
  DWORD2(v24) = 0;
  v22 = 0LL;
  v23 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  memset(&ApcState, 0, sizeof(ApcState));
  CmpInitializeParseContext((__int64)v25);
  v8 = *a1;
  v20 = 0LL;
  v9 = *(_QWORD *)(v8 + 8);
  if ( *(_WORD *)(v9 + 66)
    || (*(_BYTE *)(v8 + 48) & 0x10) != 0
    || !KCBNeedsVirtualImage()
    || (v11 = *(_DWORD *)(v9 + 184), (v11 & 0x800000) == 0)
    || (v11 & 0x20) != 0 )
  {
    AccessStateFromSubjectContext = -1073741790;
    goto LABEL_12;
  }
  CmpAttachToRegistryProcess(&ApcState);
  CmpLockRegistry(v12);
  CmpLockKcbShared(v9);
  AccessStateFromSubjectContext = CmpPerformKeyBodyDeletionCheck(v8, 0LL);
  if ( AccessStateFromSubjectContext >= 0 )
  {
    if ( CmpReparseToVirtualPath(v9, v13, a4, &DestinationString) )
    {
      CmpUnlockKcb(*(_QWORD *)(*a1 + 8));
      CmpUnlockRegistry(v16);
      v25[4] = *a5;
      v25[0] = 8;
      v26 = *(_QWORD *)(v8 + 56);
      AccessStateFromSubjectContext = SeCreateAccessStateFromSubjectContext(
                                        a4,
                                        v28,
                                        v29,
                                        a3,
                                        (_DWORD *)CmKeyObjectType + 19);
      if ( AccessStateFromSubjectContext >= 0 )
      {
        v18 = 1600;
        LODWORD(v22) = 48;
        *((_QWORD *)&v22 + 1) = 0LL;
        if ( a2 != 1 )
          v18 = 576;
        DWORD2(v23) = v18;
        *(_QWORD *)&v23 = &DestinationString;
        v24 = 0LL;
        if ( (int)CmObReferenceObjectByName(
                    (unsigned int)&v22,
                    (unsigned int)v28,
                    a3,
                    v17,
                    0,
                    (__int64)v25,
                    (__int64)&v20) >= 0 )
        {
          *a1 = v20;
          ObfDereferenceObject((PVOID)v8);
          AccessStateFromSubjectContext = 0;
        }
        else
        {
          AccessStateFromSubjectContext = -1073741790;
        }
        SeDeleteAccessState((__int64)v28);
      }
      goto LABEL_11;
    }
    AccessStateFromSubjectContext = 0;
  }
  CmpUnlockKcb(v9);
  CmpUnlockRegistry(v14);
LABEL_11:
  CmpDetachFromRegistryProcess(&ApcState);
LABEL_12:
  if ( DestinationString.Buffer )
    RtlFreeAnsiString(&DestinationString);
  CmpCleanupParseContext((__int64)v25, 0);
  return (unsigned int)AccessStateFromSubjectContext;
}
