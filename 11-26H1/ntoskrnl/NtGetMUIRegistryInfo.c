/*
 * XREFs of NtGetMUIRegistryInfo @ 0x140AE2DD0
 * Callers:
 *     DifNtGetMUIRegistryInfoWrapper @ 0x14067CD20 (DifNtGetMUIRegistryInfoWrapper.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     MUIBugCheck @ 0x1406D78C4 (MUIBugCheck.c)
 *     MigrateOOBELanguageToInstallationLanguage @ 0x1406D78EC (MigrateOOBELanguageToInstallationLanguage.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlSetUserMemory @ 0x140782108 (RtlSetUserMemory.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     PsCreateSystemThreadEx @ 0x140A78DE0 (PsCreateSystemThreadEx.c)
 *     MUIInitializeResourceLock @ 0x140AE3038 (MUIInitializeResourceLock.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtGetMUIRegistryInfo(ULONG Flags, PULONG DataSize, PVOID Data)
{
  unsigned int ULongFromUser; // r14d
  NTSTATUS v7; // edi
  ULONG v8; // esi
  struct _KTHREAD *CurrentThread; // rax
  char v10; // si
  __int128 v12; // [rsp+60h] [rbp-98h] BYREF
  __int128 v13; // [rsp+70h] [rbp-88h]
  __int128 v14; // [rsp+80h] [rbp-78h]
  HANDLE Handle; // [rsp+90h] [rbp-68h] BYREF
  struct _KEVENT Event; // [rsp+98h] [rbp-60h] BYREF
  __int128 v17; // [rsp+B0h] [rbp-48h] BYREF
  __int64 v18; // [rsp+C0h] [rbp-38h]
  int v19; // [rsp+C8h] [rbp-30h]
  int v20; // [rsp+CCh] [rbp-2Ch]
  __int128 v21; // [rsp+D0h] [rbp-28h]
  char v22; // [rsp+118h] [rbp+20h]

  DWORD1(v17) = 0;
  v20 = 0;
  memset(&Event, 0, sizeof(Event));
  Handle = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v22 = 0;
  if ( !KeGetCurrentThread()->PreviousMode || InitSafeBootMode )
    goto LABEL_23;
  if ( DataSize )
  {
    ULongFromUser = RtlReadULongFromUser(DataSize);
    if ( ULongFromUser )
    {
      if ( !Data )
        goto LABEL_6;
      goto LABEL_8;
    }
  }
  else
  {
    if ( (Flags & 0xA) == 0 )
      goto LABEL_6;
    ULongFromUser = 0;
  }
  if ( Data )
  {
LABEL_6:
    v7 = -1073741811;
    goto LABEL_19;
  }
LABEL_8:
  v8 = 1;
  if ( Flags )
    v8 = Flags;
  if ( (v8 & 0xFFFFFFF4) != 0 )
    goto LABEL_6;
  if ( MUIRegistryLock || (v7 = MUIInitializeResourceLock(&MUIRegistryLock), (v7 & 0xC0000000) != 0xC0000000) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(MUIRegistryLock, 1u);
    v22 = 1;
    if ( MUIRegistryInfo != (PVOID)-1LL )
    {
      if ( (v8 & 1) != 0 )
      {
        v10 = 0;
        if ( MUIRegistryInfo )
          goto LABEL_15;
        KeInitializeEvent(&Event, SynchronizationEvent, 0);
        *(_QWORD *)&v12 = &Event;
        *((_QWORD *)&v12 + 1) = 0LL;
        *(_QWORD *)&v13 = 0LL;
        *((_QWORD *)&v13 + 1) = (unsigned __int16)PsInstallUILanguageId;
        *(_QWORD *)&v14 = (unsigned __int16)PsMachineUILanguageId;
        DWORD2(v14) = -1073741823;
        LODWORD(v17) = 48;
        *((_QWORD *)&v17 + 1) = 0LL;
        v19 = 512;
        v18 = 0LL;
        v21 = 0LL;
        v7 = PsCreateSystemThreadEx(
               (__int64)&Handle,
               0x1FFFFFu,
               &v17,
               0LL,
               0LL,
               (__int64)MUIRegistrySystemRoutine,
               (__int64)&v12,
               0LL,
               0LL);
        if ( v7 >= 0 )
        {
          ZwClose(Handle);
          v7 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
          if ( v7 >= 0 )
          {
            v7 = DWORD2(v14);
            if ( SDWORD2(v14) < 0 )
              goto LABEL_48;
            MUIRegistryInfo = (PVOID)*((_QWORD *)&v12 + 1);
            LODWORD(MUIRegistryInfoSize) = v13;
            if ( !DWORD1(v13) )
              MUIBugCheck(32770);
            if ( !HIDWORD(v13) )
            {
              if ( PspSiloMonitorLock.CurrentRunTime )
                MUIBugCheck(32769);
              MigrateOOBELanguageToInstallationLanguage();
            }
            if ( !DWORD1(v14) )
              PsMachineUILanguageId = PsInstallUILanguageId;
          }
        }
        if ( v7 >= 0 )
        {
LABEL_15:
          if ( ULongFromUser )
          {
            if ( ULongFromUser < (unsigned int)MUIRegistryInfoSize )
            {
              v7 = -1073741789;
LABEL_17:
              RtlWriteULongToUser(DataSize, MUIRegistryInfoSize);
              if ( v10 )
              {
                RtlSetUserMemory(Data, 0, ULongFromUser);
                RtlCopyToUser(Data, MUIRegistryInfo, (unsigned int)MUIRegistryInfoSize);
              }
              goto LABEL_19;
            }
            v10 = 1;
          }
          v7 = 0;
          goto LABEL_17;
        }
LABEL_48:
        MUIRegistryInfo = (PVOID)-1LL;
        LODWORD(MUIRegistryInfoSize) = 0;
        goto LABEL_19;
      }
      if ( (v8 & 2) != 0 )
      {
        if ( MUIRegistryInfo )
        {
          ExFreePoolWithTag(MUIRegistryInfo, 0);
          MUIRegistryInfo = 0LL;
          LODWORD(MUIRegistryInfoSize) = 0;
          if ( (v8 & 8) != 0 )
            ++*(_DWORD *)(MmWriteableSharedUserData + 932);
        }
      }
      else
      {
        if ( (v8 & 8) == 0 )
          goto LABEL_6;
        ++*(_DWORD *)(MmWriteableSharedUserData + 932);
        if ( MUIRegistryInfo )
          *((_DWORD *)MUIRegistryInfo + 3) = MEMORY[0xFFFFF780000003A4];
      }
LABEL_52:
      v7 = 0;
      goto LABEL_19;
    }
    if ( (v8 & 2) != 0 )
    {
      MUIRegistryInfo = 0LL;
      LODWORD(MUIRegistryInfoSize) = 0;
      goto LABEL_52;
    }
LABEL_23:
    v7 = -1073741823;
  }
LABEL_19:
  if ( v22 )
  {
    ExReleaseResourceLite(MUIRegistryLock);
    KeLeaveCriticalRegion();
  }
  return v7;
}
