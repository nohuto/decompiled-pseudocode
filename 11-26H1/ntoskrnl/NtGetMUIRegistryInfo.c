/*
 * XREFs of NtGetMUIRegistryInfo @ 0x140AE5010
 * Callers:
 *     DifNtGetMUIRegistryInfoWrapper @ 0x140679140 (DifNtGetMUIRegistryInfoWrapper.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140275200 (ExAcquireResourceExclusiveLite.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     KeInitializeEvent @ 0x140466F30 (KeInitializeEvent.c)
 *     MUIBugCheck @ 0x1406D3894 (MUIBugCheck.c)
 *     MigrateOOBELanguageToInstallationLanguage @ 0x1406D38BC (MigrateOOBELanguageToInstallationLanguage.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlSetUserMemory @ 0x14077F608 (RtlSetUserMemory.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     PsCreateSystemThreadEx @ 0x140A03170 (PsCreateSystemThreadEx.c)
 *     MUIInitializeResourceLock @ 0x140AE5278 (MUIInitializeResourceLock.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtGetMUIRegistryInfo(int a1, unsigned int *a2, void *a3)
{
  unsigned int ULongFromUser; // r14d
  int v7; // edi
  int v8; // esi
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
  if ( !KeGetCurrentThread()->PreviousMode || (_DWORD)InitSafeBootMode )
    goto LABEL_23;
  if ( a2 )
  {
    ULongFromUser = RtlReadULongFromUser(a2);
    if ( ULongFromUser )
    {
      if ( !a3 )
        goto LABEL_6;
      goto LABEL_8;
    }
  }
  else
  {
    if ( (a1 & 0xA) == 0 )
      goto LABEL_6;
    ULongFromUser = 0;
  }
  if ( a3 )
  {
LABEL_6:
    v7 = -1073741811;
    goto LABEL_19;
  }
LABEL_8:
  v8 = 1;
  if ( a1 )
    v8 = a1;
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
               0x1FFFFF,
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
              if ( HIDWORD(PspSiloMonitorLock.CycleTime) )
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
              RtlWriteULongToUser(a2, MUIRegistryInfoSize);
              if ( v10 )
              {
                RtlSetUserMemory(a3, 0, ULongFromUser);
                RtlCopyToUser(a3, MUIRegistryInfo, (unsigned int)MUIRegistryInfoSize);
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
  return (unsigned int)v7;
}
