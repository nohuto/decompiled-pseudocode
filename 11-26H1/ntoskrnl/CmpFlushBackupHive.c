/*
 * XREFs of CmpFlushBackupHive @ 0x14085A45C
 * Callers:
 *     CmpSyncNextBackupHive @ 0x14085A968 (CmpSyncNextBackupHive.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x140432EB0 (RtlAppendUnicodeToString.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwSetInformationFile @ 0x1407238D0 (ZwSetInformationFile.c)
 *     ZwSetInformationObject @ 0x140723F70 (ZwSetInformationObject.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     CmpCmdRenameHive @ 0x140854A18 (CmpCmdRenameHive.c)
 *     CmpFreeOffsetArray @ 0x14085A7E0 (CmpFreeOffsetArray.c)
 *     CmpInitBackupHive @ 0x14085A834 (CmpInitBackupHive.c)
 *     CmpWriteOffsetArrayToFile @ 0x14085AACC (CmpWriteOffsetArrayToFile.c)
 *     CmpCmdHiveOpen @ 0x1408B4674 (CmpCmdHiveOpen.c)
 *     CmpDestroyHive @ 0x1408B6DC4 (CmpDestroyHive.c)
 *     RtlAppendStringToString @ 0x140B20220 (RtlAppendStringToString.c)
 *     HvAllocateOffsetArraysForHiveSnapshot @ 0x140B3BD78 (HvAllocateOffsetArraysForHiveSnapshot.c)
 *     HvSnapshotHiveToOffsetArray @ 0x140C5846C (HvSnapshotHiveToOffsetArray.c)
 *     CmpLockRegistry @ 0x140C58850 (CmpLockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140C58930 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140C58970 (CmpUnlockRegistry.c)
 *     CmpDetachFromRegistryProcess @ 0x140C58A50 (CmpDetachFromRegistryProcess.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140C58D14 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x140C58D30 (HvLockHiveFlusherExclusive.c)
 */

__int64 __fastcall CmpFlushBackupHive(unsigned int a1)
{
  __int64 v1; // rbx
  __int64 v2; // rbx
  wchar_t *v3; // rdi
  NTSTATUS v4; // esi
  void *v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rcx
  int v9; // ecx
  int v10; // ebx
  __int64 v11; // rcx
  _QWORD *v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v16; // [rsp+50h] [rbp-B0h] BYREF
  char FileInformation[4]; // [rsp+54h] [rbp-ACh] BYREF
  int v18; // [rsp+58h] [rbp-A8h] BYREF
  STRING Destination; // [rsp+60h] [rbp-A0h] BYREF
  int v20[2]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD *v21; // [rsp+78h] [rbp-88h]
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+90h] [rbp-70h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v25[432]; // [rsp+D0h] [rbp-30h] BYREF
  char v26; // [rsp+280h] [rbp+180h] BYREF

  v1 = a1;
  FileInformation[0] = 1;
  *(_DWORD *)(&Destination.MaximumLength + 1) = 0;
  v21 = 0LL;
  v16 = 0;
  DestinationString = 0LL;
  *(_QWORD *)v20 = 0LL;
  v18 = 0;
  IoStatusBlock = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  memset_0(v25, 0, sizeof(v25));
  v2 = 23 * v1;
  v3 = CmpMachineHiveList[v2 + 6];
  if ( !*(_DWORD *)&WheapPfaLock.ApcStateFill[40] )
    return (unsigned int)-1073741431;
  *(_DWORD *)&Destination.Length = 0x800000;
  Destination.Buffer = &v26;
  RtlInitUnicodeString(&DestinationString, L"\\SystemRoot\\System32\\Config\\RegBack\\");
  RtlAppendStringToString(&Destination, (const STRING *)&DestinationString);
  RtlInitUnicodeString(&DestinationString, CmpMachineHiveList[v2]);
  RtlAppendStringToString(&Destination, (const STRING *)&DestinationString);
  RtlAppendUnicodeToString((PUNICODE_STRING)&Destination, L".OLD");
  v5 = (void *)*((_QWORD *)v3 + 196);
  if ( v5 )
  {
    v4 = CmpCmdRenameHive(v5, 0LL, (const void **)&Destination, 0, 1);
    if ( v4 >= 0 )
    {
      Destination.Length -= 8;
      *((_QWORD *)v3 + 196) = 0LL;
      if ( (int)CmpInitBackupHive(v3, CmpMachineHiveList[v2]) >= 0 )
      {
        CmpAttachToRegistryProcess(&ApcState);
        CmpLockRegistry();
        HvLockHiveFlusherExclusive(v3);
        if ( (int)HvAllocateOffsetArraysForHiveSnapshot(v3, &v16, v20, &v18) < 0
          || (v7 = *(_QWORD *)v20, (int)HvSnapshotHiveToOffsetArray(v3, v6, *(_QWORD *)v20) < 0) )
        {
          HvUnlockHiveFlusherExclusive(v3);
          CmpUnlockRegistry(v13);
          CmpDetachFromRegistryProcess(&ApcState);
        }
        else
        {
          HvUnlockHiveFlusherExclusive(v3);
          CmpUnlockRegistry(v8);
          CmpDetachFromRegistryProcess(&ApcState);
          v10 = CmpWriteOffsetArrayToFile(v9, v16, v7, v18, *((HANDLE *)v3 + 196));
          CmpFreeOffsetArray((unsigned int)v16, v7);
          if ( v10 >= 0 )
          {
            v11 = *((_QWORD *)v3 + 196);
            LOWORD(v16) = 0;
            ZwSetInformationObject(v11, 4LL);
            ZwClose(*((HANDLE *)v3 + 196));
            *((_QWORD *)v3 + 196) = 0LL;
            LOBYTE(v16) = 0;
            v4 = CmpCmdHiveOpen((unsigned int)&Destination, 18415617, 0, 0LL, 0LL, (__int64)v25);
            if ( v4 >= 0 )
            {
              v12 = v21;
              *((_QWORD *)v3 + 196) = v21[193];
              v12[193] = 0LL;
              CmpAttachToRegistryProcess(&ApcState);
              CmpDestroyHive(v12);
              CmpDetachFromRegistryProcess(&ApcState);
              ZwSetInformationFile(v5, &IoStatusBlock, FileInformation, 1u, FileDispositionInformation);
              LOWORD(v16) = 0;
              ZwSetInformationObject((__int64)v5, 4LL);
              ZwClose(v5);
              return (unsigned int)v4;
            }
          }
        }
      }
      v14 = *((_QWORD *)v3 + 196);
      if ( v14 )
      {
        LOWORD(v16) = 0;
        ZwSetInformationObject(v14, 4LL);
        ZwClose(*((HANDLE *)v3 + 196));
        *((_QWORD *)v3 + 196) = 0LL;
      }
      v4 = CmpCmdRenameHive(v5, 0LL, (const void **)&Destination, 0, 1);
      if ( v4 >= 0 )
        *((_QWORD *)v3 + 196) = v5;
    }
  }
  else
  {
    return (unsigned int)-1073741431;
  }
  return (unsigned int)v4;
}
