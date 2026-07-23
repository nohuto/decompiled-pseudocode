/*
 * XREFs of PopBootStatSet @ 0x140ACD7B0
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
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     RtlInitializeBootStatDataCache @ 0x14061CE34 (RtlInitializeBootStatDataCache.c)
 *     RtlpGetBootStatusPath @ 0x14061CF5C (RtlpGetBootStatusPath.c)
 *     ZwOpenFile @ 0x140728620 (ZwOpenFile.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     RtlGetSetBootStatusData @ 0x140ACDBD0 (RtlGetSetBootStatusData.c)
 *     RtlUnlockBootStatusData @ 0x140ACDFB0 (RtlUnlockBootStatusData.c)
 *     PopBootStatAccessCheck @ 0x140B530B8 (PopBootStatAccessCheck.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopBootStatSet(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned int *Pool2; // r14
  WCHAR *v5; // r15
  char PreviousMode; // r13
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v8; // rax
  void *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct _KLOCK_ENTRIES *v12; // r9
  AutoBoost *v13; // rsi
  WCHAR *v14; // r12
  NTSTATUS SetBootStatusData; // esi
  __int64 v16; // rdx
  __int64 j; // r12
  __int64 v18; // rax
  unsigned int v19; // edx
  ULONG v20; // eax
  char *v21; // rsi
  void *v22; // rdx
  unsigned __int64 v24; // rcx
  SIZE_T v25; // r12
  __int64 i; // rsi
  char v27; // [rsp+30h] [rbp-B8h]
  PCWSTR SourceString; // [rsp+38h] [rbp-B0h] BYREF
  ULONG BufferSize; // [rsp+40h] [rbp-A8h]
  unsigned int v30; // [rsp+44h] [rbp-A4h]
  ULONG ReturnLength[2]; // [rsp+48h] [rbp-A0h] BYREF
  HANDLE FileHandle; // [rsp+50h] [rbp-98h] BYREF
  unsigned int *v33; // [rsp+58h] [rbp-90h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-58h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A0h] [rbp-48h] BYREF
  __int64 v39; // [rsp+100h] [rbp+18h] BYREF
  char v40; // [rsp+108h] [rbp+20h]

  ReturnLength[0] = 0;
  v30 = 0;
  BufferSize = 0;
  Pool2 = 0LL;
  v5 = 0LL;
  SourceString = 0LL;
  v27 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v40 = PreviousMode;
  if ( PreviousMode )
  {
    v39 = 0LL;
    v24 = *(unsigned int *)(a1 + 8);
    v25 = 24 * v24;
    if ( is_mul_ok(v24, 0x18uLL) )
    {
      SetBootStatusData = 0;
    }
    else
    {
      v25 = -1LL;
      SetBootStatusData = -1073741675;
    }
    if ( SetBootStatusData < 0 )
      goto LABEL_26;
    Pool2 = (unsigned int *)ExAllocatePool2(0x100uLL);
    v33 = Pool2;
    if ( !Pool2 )
    {
      SetBootStatusData = -1073741670;
      goto LABEL_26;
    }
    ProbeForRead(*(volatile void **)(a1 + 16), v25, 8u);
    RtlCopyFromUser(Pool2, *(void **)(a1 + 16), v25);
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      ReturnLength[1] = i;
      if ( (unsigned int)i >= *(_DWORD *)(a1 + 8) )
        break;
      ProbeForRead(*(volatile void **)&Pool2[6 * i + 2], Pool2[6 * i + 4], 1u);
    }
  }
  else
  {
    Pool2 = *(unsigned int **)(a1 + 16);
    v33 = Pool2;
  }
  v27 = 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = (AutoBoost *)KeAbPreAcquire((__int64)&PopPdcDeviceListLock.ApcState.ApcListHead[0].Blink, 0LL, 0LL, a4);
  v13 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&PopPdcDeviceListLock.ApcStateFill[8], 0LL) )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&PopPdcDeviceListLock.ApcState.ApcListHead[0].Blink,
      v8,
      (__int64)&PopPdcDeviceListLock.ApcState.ApcListHead[0].Blink);
  if ( v13 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v13, v9);
    else
      *((_BYTE *)v13 + 10) = 1;
  }
  memset(&ObjectAttributes, 0, 44);
  DestinationString = 0LL;
  FileHandle = 0LL;
  IoStatusBlock = 0LL;
  v14 = 0LL;
  SourceString = 0LL;
  LOBYTE(v39) = 0;
  SetBootStatusData = 0;
  RtlpAcquireBootStatusLock(v10, (__int64)v9, v11, v12);
  ++HIDWORD(NormalizationListLock.SchedulingGroup);
  if ( BYTE4(NormalizationListLock.CycleTime) )
  {
    v5 = *(WCHAR **)&NormalizationListLock.CurrentRunTime;
  }
  else
  {
    RtlpGetBootStatusPath(&SourceString, (char *)&v39);
    v14 = (WCHAR *)SourceString;
    RtlInitUnicodeString(&DestinationString, SourceString);
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 704;
    ObjectAttributes.ObjectName = &DestinationString;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    SetBootStatusData = ZwOpenFile(&FileHandle, 0x12019Fu, &ObjectAttributes, &IoStatusBlock, 1u, 0x20u);
    if ( SetBootStatusData < 0 )
    {
      *(_QWORD *)&NormalizationListLock.CurrentRunTime = 0LL;
      BYTE4(NormalizationListLock.CycleTime) = 0;
      HIDWORD(NormalizationListLock.SchedulingGroup) = 0;
      v5 = 0LL;
    }
    else
    {
      *(_QWORD *)&NormalizationListLock.CurrentRunTime = FileHandle;
      BYTE4(NormalizationListLock.CycleTime) = 1;
      RtlInitializeBootStatDataCache();
      v5 = (WCHAR *)FileHandle;
    }
  }
  SourceString = v5;
  RtlpReleaseBootStatusLock();
  if ( (_BYTE)v39 )
    ExFreePoolWithTag(v14, 0);
  if ( SetBootStatusData >= 0 )
  {
    if ( !PreviousMode
      || (LOBYTE(v16) = PreviousMode, SetBootStatusData = PopBootStatAccessCheck(v5, v16, 2LL), SetBootStatusData >= 0) )
    {
      for ( j = 0LL; (unsigned int)j < *(_DWORD *)(a1 + 8); j = (unsigned int)(j + 1) )
      {
        v18 = (int)Pool2[6 * j];
        if ( (unsigned int)v18 > 0x12 )
        {
          SetBootStatusData = -1073741811;
          v20 = BufferSize;
          v19 = v30;
        }
        else
        {
          v19 = RtlpBootStatusFields[v18];
          v30 = v19;
          v20 = HIDWORD(RtlpBootStatusFields[v18]);
          BufferSize = v20;
          SetBootStatusData = 0;
        }
        if ( SetBootStatusData < 0 )
          break;
        if ( Pool2[6 * j + 4] < v20 )
        {
          SetBootStatusData = -1073741811;
          break;
        }
        v21 = (char *)&PopBootStat + v19;
        v22 = *(void **)&Pool2[6 * j + 2];
        if ( PreviousMode )
          RtlCopyFromUser(v21, v22, v20);
        else
          RtlCopyVolatileMemory(v21, v22, v20);
        SetBootStatusData = RtlGetSetBootStatusData(
                              v5,
                              0,
                              (RTL_BSD_ITEM_TYPE)Pool2[6 * j],
                              v21,
                              BufferSize,
                              ReturnLength);
        if ( a2 )
          *(_DWORD *)(a2 + 4 * j) = ReturnLength[0];
      }
    }
  }
LABEL_26:
  if ( v5 )
    RtlUnlockBootStatusData(v5);
  if ( v27 )
  {
    if ( (_InterlockedExchangeAdd64(
            (volatile signed __int64 *)&PopPdcDeviceListLock.ApcState.ApcListHead[0].Blink,
            0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopPdcDeviceListLock.ApcState.ApcListHead[0].Blink);
    KeAbPostRelease((unsigned __int64)&PopPdcDeviceListLock.ApcState.ApcListHead[0].Blink);
    KeLeaveCriticalRegion();
  }
  if ( PreviousMode && Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)SetBootStatusData;
}
