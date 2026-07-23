/*
 * XREFs of CmpLoadHiveVolatile @ 0x140853B84
 * Callers:
 *     CmRestoreKey @ 0x140947D24 (CmRestoreKey.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x14040DFC0 (RtlCopyUnicodeString.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x14041FEE0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x14041FFA0 (RtlAppendUnicodeStringToString.c)
 *     CmpAllocatePool @ 0x14046DFF0 (CmpAllocatePool.c)
 *     CmpFreeTransientPoolWithTag @ 0x140470A10 (CmpFreeTransientPoolWithTag.c)
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmpCreateHive @ 0x1408BC440 (CmpCreateHive.c)
 *     CmpDestroyHive @ 0x1408BD394 (CmpDestroyHive.c)
 *     CmpConstructNameWithStatus @ 0x1408C7C30 (CmpConstructNameWithStatus.c)
 *     CmpCopyCompressedName @ 0x1408C82E0 (CmpCopyCompressedName.c)
 *     CmpLockRegistryExclusive @ 0x1408C8718 (CmpLockRegistryExclusive.c)
 *     CmpLockHiveListExclusive @ 0x1408CEA7C (CmpLockHiveListExclusive.c)
 *     CmpUnlockHiveList @ 0x1408CEBE8 (CmpUnlockHiveList.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408DF8E0 (HvpGetCellContextInitialize.c)
 *     CmpCopyKeyPartial @ 0x1408E41BC (CmpCopyKeyPartial.c)
 *     CmpLinkHiveToMaster @ 0x14093E12C (CmpLinkHiveToMaster.c)
 *     CmpCopySyncTree @ 0x140948D9C (CmpCopySyncTree.c)
 *     CmpUuidCreate @ 0x140A7EF4C (CmpUuidCreate.c)
 *     CmpAddToHiveFileList @ 0x140B06E90 (CmpAddToHiveFileList.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140C5E7C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 *     CmpAcquireHiveLoadUnloadRundown @ 0x140C5ECD4 (CmpAcquireHiveLoadUnloadRundown.c)
 *     CmpReleaseHiveLoadUnloadRundown @ 0x140C5EF14 (CmpReleaseHiveLoadUnloadRundown.c)
 */

__int64 __fastcall CmpLoadHiveVolatile(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  UNICODE_STRING *v5; // rsi
  char UnloadRundown; // r13
  int Hive; // ebx
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rcx
  unsigned int v11; // edi
  int v12; // r9d
  __int64 CellFlat; // rax
  __int64 v14; // rdi
  int v15; // eax
  __int16 v16; // dx
  unsigned __int16 v17; // bx
  unsigned __int16 v18; // cx
  __int16 v19; // cx
  struct _KTHREAD *Thread; // rcx
  struct _KTHREAD *v21; // rax
  __int64 v23; // [rsp+28h] [rbp-D8h]
  ULONG_PTR BugCheckParameter3; // [rsp+70h] [rbp-90h] BYREF
  __int64 v25; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  __int64 v27; // [rsp+90h] [rbp-70h] BYREF
  ULONG_PTR v28; // [rsp+98h] [rbp-68h] BYREF
  PCUNICODE_STRING SourceString; // [rsp+A0h] [rbp-60h] BYREF
  UNICODE_STRING Source; // [rsp+A8h] [rbp-58h] BYREF
  UUID v31[2]; // [rsp+B8h] [rbp-48h] BYREF
  UUID v32; // [rsp+D8h] [rbp-28h] BYREF
  UUID Uuid; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v34[54]; // [rsp+100h] [rbp+0h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v25 = 0LL;
  LODWORD(v27) = 0;
  SourceString = 0LL;
  Source = 0LL;
  v5 = 0LL;
  DestinationString = 0LL;
  Uuid = 0LL;
  v32 = 0LL;
  memset(v31, 0, sizeof(v31));
  memset_0(v34, 0, sizeof(v34));
  BugCheckParameter3 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  HvpGetCellContextInitialize(&v25);
  v28 = 0LL;
  UnloadRundown = CmpAcquireHiveLoadUnloadRundown();
  if ( !UnloadRundown )
  {
    Hive = -1073741431;
    goto LABEL_41;
  }
  Hive = CmpUuidCreate(&Uuid);
  if ( Hive >= 0 )
  {
    Hive = CmpUuidCreate(&v32);
    if ( Hive >= 0 )
    {
      v8 = *(_QWORD *)(v2 + 32);
      if ( v8 != CmpMasterHive )
      {
        Hive = -1073741811;
        goto LABEL_41;
      }
      *(_QWORD *)&v31[0].Data1 = a2;
      Hive = CmpCreateHive(
               (unsigned int)&v28,
               2,
               0x8000,
               0,
               0LL,
               (__int64)v31,
               0LL,
               18415617,
               0LL,
               0LL,
               0LL,
               0LL,
               (__int64)v34);
      if ( Hive >= 0 )
      {
        Hive = CmpCreateHive(
                 (unsigned int)&BugCheckParameter3,
                 0,
                 1,
                 0,
                 0LL,
                 0LL,
                 0LL,
                 17956864,
                 (__int64)&Uuid,
                 (__int64)&v32,
                 0LL,
                 0LL,
                 (__int64)v34);
        if ( Hive >= 0 )
        {
          CmpLockRegistryExclusive(v9);
          Hive = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
          if ( Hive >= 0 )
          {
            if ( *(_BYTE *)(v8 + 2952) == 1 )
            {
              Hive = -1073741431;
            }
            else
            {
              Hive = CmpCopyKeyPartial(v28, 2, v23, 1, (__int64)&v27);
              if ( Hive >= 0 )
              {
                v11 = v27;
                v12 = v27;
                *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL) = v27;
                Hive = CmpCopySyncTree(v28, *(_DWORD *)(*(_QWORD *)(v28 + 64) + 36LL), BugCheckParameter3, v12, 2, 0);
                if ( Hive >= 0 )
                {
                  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                    CellFlat = HvpGetCellFlat(BugCheckParameter3, v11, &v25);
                  else
                    CellFlat = HvpGetCellPaged(BugCheckParameter3);
                  v14 = CellFlat;
                  v15 = CmpConstructNameWithStatus(v2, &SourceString);
                  v5 = (UNICODE_STRING *)SourceString;
                  Hive = v15;
                  if ( v15 >= 0 )
                  {
                    v16 = 2 * *(_WORD *)(v14 + 72);
                    if ( (*(_BYTE *)(v14 + 2) & 0x20) == 0 )
                      v16 = *(_WORD *)(v14 + 72);
                    v17 = SourceString->Length + v16 + 2;
                    DestinationString.Buffer = (wchar_t *)CmpAllocatePool(0x100uLL);
                    if ( DestinationString.Buffer )
                    {
                      DestinationString.MaximumLength = v17;
                      DestinationString.Length = v17;
                      RtlCopyUnicodeString(&DestinationString, v5);
                      RtlAppendUnicodeToString(&DestinationString, L"\\");
                      v18 = *(_WORD *)(v14 + 72);
                      if ( (*(_BYTE *)(v14 + 2) & 0x20) != 0 )
                      {
                        CmpCopyCompressedName(
                          &DestinationString.Buffer[(unsigned __int64)DestinationString.Length >> 1],
                          DestinationString.MaximumLength - (unsigned int)DestinationString.Length,
                          v14 + 76,
                          (unsigned __int16)(2 * v18));
                        v19 = 2 * *(_WORD *)(v14 + 72);
                        if ( (*(_BYTE *)(v14 + 2) & 0x20) == 0 )
                          v19 = *(_WORD *)(v14 + 72);
                        DestinationString.Length += v19;
                      }
                      else
                      {
                        Source.MaximumLength = *(_WORD *)(v14 + 72);
                        Source.Length = v18;
                        Source.Buffer = (wchar_t *)(v14 + 76);
                        RtlAppendUnicodeStringToString(&DestinationString, &Source);
                      }
                      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                        HvpReleaseCellFlat(BugCheckParameter3, &v25);
                      else
                        HvpReleaseCellPaged(BugCheckParameter3, &v25);
                      Hive = CmpLinkHiveToMaster(
                               (int)&DestinationString,
                               0,
                               BugCheckParameter3,
                               0,
                               512,
                               0,
                               0LL,
                               0LL,
                               0LL,
                               0LL,
                               1,
                               (__int64)v34);
                      if ( Hive >= 0 )
                      {
                        CmpAddToHiveFileList(BugCheckParameter3);
                        CmpLockHiveListExclusive();
                        Thread = PspSiloMonitorLock.WaitBlock[2].Thread;
                        v21 = (struct _KTHREAD *)(BugCheckParameter3 + 1608);
                        if ( *(struct _KTHREAD **)PspSiloMonitorLock.WaitBlock[2].Thread != (struct _KTHREAD *)&PspSiloMonitorLock.WaitBlockFill11[112] )
                          __fastfail(3u);
                        *(_QWORD *)&v21->Header.Lock = &PspSiloMonitorLock.WaitBlockFill11[112];
                        v21->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)Thread;
                        *(_QWORD *)&Thread->Header.Lock = v21;
                        PspSiloMonitorLock.WaitBlock[2].Thread = v21;
                        CmpUnlockHiveList();
                        if ( !CmpProfileLoaded )
                        {
                          ExpPlatformBinaryLock.Timer.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)CmpGlobalQuota;
                          CmpProfileLoaded = 1;
                        }
                        BugCheckParameter3 = 0LL;
                        Hive = 0;
                      }
                      goto LABEL_40;
                    }
                    Hive = -1073741670;
                  }
                  if ( v14 )
                  {
                    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                      HvpReleaseCellFlat(BugCheckParameter3, &v25);
                    else
                      HvpReleaseCellPaged(BugCheckParameter3, &v25);
                  }
                }
              }
            }
          }
LABEL_40:
          CmpUnlockRegistry(v10);
        }
      }
    }
  }
LABEL_41:
  if ( BugCheckParameter3 )
    CmpDestroyHive((PVOID)BugCheckParameter3);
  if ( v28 )
    CmpDestroyHive((PVOID)v28);
  if ( UnloadRundown )
    CmpReleaseHiveLoadUnloadRundown();
  if ( DestinationString.Buffer )
    CmSiFreeMemory((PPRIVILEGE_SET)DestinationString.Buffer);
  if ( v5 )
    CmpFreeTransientPoolWithTag(v5, 0x624E4D43u);
  return (unsigned int)Hive;
}
