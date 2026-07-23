/*
 * XREFs of PopBootStatRestoreDefaults @ 0x140B53F84
 * Callers:
 *     PopPowerInformationInternal @ 0x140B73EF0 (PopPowerInformationInternal.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlpAcquireBootStatusLock @ 0x1404DD410 (RtlpAcquireBootStatusLock.c)
 *     RtlpReleaseBootStatusLock @ 0x1404E8D18 (RtlpReleaseBootStatusLock.c)
 *     RtlInitializeBootStatDataCache @ 0x14061CE34 (RtlInitializeBootStatDataCache.c)
 *     RtlpGetBootStatusPath @ 0x14061CF5C (RtlpGetBootStatusPath.c)
 *     ZwOpenFile @ 0x140728620 (ZwOpenFile.c)
 *     RtlRestoreBootStatusDefaults @ 0x14080B528 (RtlRestoreBootStatusDefaults.c)
 *     RtlUnlockBootStatusData @ 0x140ACDFB0 (RtlUnlockBootStatusData.c)
 *     PopBootStatAccessCheck @ 0x140B530B8 (PopBootStatAccessCheck.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopBootStatRestoreDefaults(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  KPROCESSOR_MODE PreviousMode; // r15
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v6; // rax
  void *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct _KLOCK_ENTRIES *v10; // r9
  signed __int8 v11; // cf
  AutoBoost *v12; // rdi
  WCHAR *v13; // r14
  int v14; // esi
  HANDLE v15; // rdi
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  __int64 v20; // [rsp+C0h] [rbp+40h] BYREF
  HANDLE FileHandle; // [rsp+C8h] [rbp+48h] BYREF
  PCWSTR SourceString; // [rsp+D0h] [rbp+50h] BYREF

  v20 = a1;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = (AutoBoost *)KeAbPreAcquire((__int64)&PopPdcDeviceListLock.ApcState.ApcListHead[0].Blink, 0LL, 0LL, a4);
  v11 = _interlockedbittestandset64((volatile signed __int32 *)&PopPdcDeviceListLock.ApcStateFill[8], 0LL);
  v12 = v6;
  if ( v11 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&PopPdcDeviceListLock.ApcState.ApcListHead[0].Blink,
      v6,
      (__int64)&PopPdcDeviceListLock.ApcState.ApcListHead[0].Blink);
  if ( v12 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v12, v7);
    else
      *((_BYTE *)v12 + 10) = 1;
  }
  v13 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  FileHandle = 0LL;
  v14 = 0;
  SourceString = 0LL;
  DestinationString = 0LL;
  LOBYTE(v20) = 0;
  IoStatusBlock = 0LL;
  RtlpAcquireBootStatusLock(v8, (__int64)v7, v9, v10);
  ++HIDWORD(NormalizationListLock.SchedulingGroup);
  if ( BYTE4(NormalizationListLock.CycleTime) )
  {
    v15 = *(HANDLE *)&NormalizationListLock.CurrentRunTime;
  }
  else
  {
    RtlpGetBootStatusPath(&SourceString, (char *)&v20);
    v13 = (WCHAR *)SourceString;
    RtlInitUnicodeString(&DestinationString, SourceString);
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 704;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v14 = ZwOpenFile(&FileHandle, 0x12019Fu, &ObjectAttributes, &IoStatusBlock, 1u, 0x20u);
    if ( v14 < 0 )
    {
      *(_QWORD *)&NormalizationListLock.CurrentRunTime = 0LL;
      v15 = 0LL;
      BYTE4(NormalizationListLock.CycleTime) = 0;
      HIDWORD(NormalizationListLock.SchedulingGroup) = 0;
    }
    else
    {
      *(_QWORD *)&NormalizationListLock.CurrentRunTime = FileHandle;
      BYTE4(NormalizationListLock.CycleTime) = 1;
      RtlInitializeBootStatDataCache();
      v15 = FileHandle;
    }
  }
  RtlpReleaseBootStatusLock();
  if ( (_BYTE)v20 )
    ExFreePoolWithTag(v13, 0);
  if ( v14 >= 0 )
  {
    if ( !PreviousMode || (v14 = PopBootStatAccessCheck(v15, PreviousMode, 1u), v14 >= 0) )
      v14 = RtlRestoreBootStatusDefaults(v15);
  }
  if ( v15 )
    RtlUnlockBootStatusData(v15);
  if ( (_InterlockedExchangeAdd64(
          (volatile signed __int64 *)&PopPdcDeviceListLock.ApcState.ApcListHead[0].Blink,
          0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopPdcDeviceListLock.ApcState.ApcListHead[0].Blink);
  KeAbPostRelease((unsigned __int64)&PopPdcDeviceListLock.ApcState.ApcListHead[0].Blink);
  KeLeaveCriticalRegion();
  return (unsigned int)v14;
}
