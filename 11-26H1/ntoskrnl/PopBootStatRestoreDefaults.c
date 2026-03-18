/*
 * XREFs of PopBootStatRestoreDefaults @ 0x140B516E4
 * Callers:
 *     PopPowerInformationInternal @ 0x140B6F6FC (PopPowerInformationInternal.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     RtlpAcquireBootStatusLock @ 0x1404E3E70 (RtlpAcquireBootStatusLock.c)
 *     RtlpReleaseBootStatusLock @ 0x1404EF738 (RtlpReleaseBootStatusLock.c)
 *     RtlInitializeBootStatDataCache @ 0x140619DE4 (RtlInitializeBootStatDataCache.c)
 *     RtlpGetBootStatusPath @ 0x140619F0C (RtlpGetBootStatusPath.c)
 *     ZwOpenFile @ 0x140723A50 (ZwOpenFile.c)
 *     RtlRestoreBootStatusDefaults @ 0x140805A88 (RtlRestoreBootStatusDefaults.c)
 *     RtlUnlockBootStatusData @ 0x140ACBD70 (RtlUnlockBootStatusData.c)
 *     PopBootStatAccessCheck @ 0x140B50828 (PopBootStatAccessCheck.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
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
  void *CycleTime; // rdi
  __int64 v16; // rdx
  __int64 v17; // r8
  struct _KLOCK_ENTRIES *v18; // r9
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  __int64 v23; // [rsp+C0h] [rbp+40h] BYREF
  HANDLE FileHandle; // [rsp+C8h] [rbp+48h] BYREF
  PCWSTR SourceString; // [rsp+D0h] [rbp+50h] BYREF

  v23 = a1;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = (AutoBoost *)KeAbPreAcquire((__int64)&PopModernStandbyStateNotify.AbWaitObject, 0LL, 0LL, a4);
  v11 = _interlockedbittestandset64((volatile signed __int32 *)&PopModernStandbyStateNotify.AbWaitObject, 0LL);
  v12 = v6;
  if ( v11 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&PopModernStandbyStateNotify.AbWaitObject,
      v6,
      (__int64)&PopModernStandbyStateNotify.AbWaitObject);
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
  LOBYTE(v23) = 0;
  IoStatusBlock = 0LL;
  RtlpAcquireBootStatusLock(v8, (__int64)v7, v9, v10);
  ++HIDWORD(NormalizationListLock.StateSaveArea);
  if ( LOBYTE(NormalizationListLock.CurrentRunTime) )
  {
    CycleTime = (void *)NormalizationListLock.CycleTime;
  }
  else
  {
    RtlpGetBootStatusPath(&SourceString, (char *)&v23);
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
      NormalizationListLock.CycleTime = 0LL;
      CycleTime = 0LL;
      LOBYTE(NormalizationListLock.CurrentRunTime) = 0;
      HIDWORD(NormalizationListLock.StateSaveArea) = 0;
    }
    else
    {
      NormalizationListLock.CycleTime = (volatile unsigned __int64)FileHandle;
      LOBYTE(NormalizationListLock.CurrentRunTime) = 1;
      RtlInitializeBootStatDataCache();
      CycleTime = FileHandle;
    }
  }
  RtlpReleaseBootStatusLock();
  if ( (_BYTE)v23 )
    ExFreePoolWithTag(v13, 0);
  if ( v14 >= 0 )
  {
    if ( !PreviousMode || (v14 = PopBootStatAccessCheck(CycleTime, PreviousMode, 1u), v14 >= 0) )
      v14 = RtlRestoreBootStatusDefaults(CycleTime);
  }
  if ( CycleTime )
    RtlUnlockBootStatusData((__int64)CycleTime, v16, v17, v18);
  if ( (_InterlockedExchangeAdd64(
          (volatile signed __int64 *)&PopModernStandbyStateNotify.AbWaitObject,
          0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopModernStandbyStateNotify.AbWaitObject);
  KeAbPostRelease((unsigned __int64)&PopModernStandbyStateNotify.AbWaitObject);
  KeLeaveCriticalRegion();
  return (unsigned int)v14;
}
