/*
 * XREFs of PopBootStatGet @ 0x140B6AD34
 * Callers:
 *     PopPowerInformationInternal @ 0x140B73EF0 (PopPowerInformationInternal.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     RtlGetSetBootStatusData @ 0x140ACDBD0 (RtlGetSetBootStatusData.c)
 *     RtlUnlockBootStatusData @ 0x140ACDFB0 (RtlUnlockBootStatusData.c)
 *     RtlBootStatusItemInfo @ 0x140B06E38 (RtlBootStatusItemInfo.c)
 *     RtlLockBootStatusData @ 0x140B14C40 (RtlLockBootStatusData.c)
 *     PopBootStatAccessCheck @ 0x140B530B8 (PopBootStatAccessCheck.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopBootStatGet(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned int *Pool2; // rdi
  KPROCESSOR_MODE PreviousMode; // r14
  unsigned __int64 v7; // rcx
  SIZE_T v8; // r15
  int SetBootStatusData; // esi
  __int64 i; // rsi
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v13; // rax
  void *v14; // rdx
  AutoBoost *v15; // rsi
  __int64 j; // r15
  RTL_BSD_ITEM_TYPE v17; // r11d
  void *v18; // rcx
  ULONG ReturnLength; // [rsp+30h] [rbp-68h] BYREF
  _DWORD v20[3]; // [rsp+34h] [rbp-64h] BYREF
  void *Src; // [rsp+40h] [rbp-58h] BYREF
  HANDLE FileHandle; // [rsp+48h] [rbp-50h] BYREF
  unsigned int *v23; // [rsp+50h] [rbp-48h]
  char v25; // [rsp+B8h] [rbp+20h]

  ReturnLength = 0;
  v20[0] = 0;
  Pool2 = 0LL;
  FileHandle = 0LL;
  v25 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v23 = 0LL;
    v7 = *(unsigned int *)(a1 + 8);
    v8 = 24 * v7;
    if ( is_mul_ok(v7, 0x18uLL) )
    {
      SetBootStatusData = 0;
    }
    else
    {
      v8 = -1LL;
      SetBootStatusData = -1073741675;
    }
    if ( SetBootStatusData < 0 )
      goto LABEL_8;
    Pool2 = (unsigned int *)ExAllocatePool2(0x100uLL);
    v23 = Pool2;
    if ( !Pool2 )
    {
      SetBootStatusData = -1073741670;
      goto LABEL_8;
    }
    ProbeForRead(*(volatile void **)(a1 + 16), v8, 8u);
    RtlCopyFromUser(Pool2, *(void **)(a1 + 16), v8);
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      v20[1] = i;
      if ( (unsigned int)i >= *(_DWORD *)(a1 + 8) )
        break;
      ProbeForWrite(*(volatile void **)&Pool2[6 * i + 2], Pool2[6 * i + 4], 1u);
    }
  }
  else
  {
    Pool2 = *(unsigned int **)(a1 + 16);
    v23 = Pool2;
  }
  v25 = 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v13 = (AutoBoost *)KeAbPreAcquire((__int64)&PopPdcDeviceListLock.ApcState.ApcListHead[0].Blink, 0LL, 0LL, a4);
  v15 = v13;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&PopPdcDeviceListLock.ApcStateFill[8], 0LL) )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&PopPdcDeviceListLock.ApcState.ApcListHead[0].Blink,
      v13,
      (__int64)&PopPdcDeviceListLock.ApcState.ApcListHead[0].Blink);
  if ( v15 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v15, v14);
    else
      *((_BYTE *)v15 + 10) = 1;
  }
  SetBootStatusData = RtlLockBootStatusData(&FileHandle);
  if ( SetBootStatusData >= 0 )
  {
    if ( !PreviousMode
      || (SetBootStatusData = PopBootStatAccessCheck(FileHandle, PreviousMode, 1u), SetBootStatusData >= 0) )
    {
      for ( j = 0LL; (unsigned int)j < *(_DWORD *)(a1 + 8); j = (unsigned int)(j + 1) )
      {
        SetBootStatusData = RtlBootStatusItemInfo(Pool2[6 * j], v20, &Src);
        if ( SetBootStatusData < 0 )
          break;
        Src = (char *)&PopBootStat + v20[0];
        SetBootStatusData = RtlGetSetBootStatusData(FileHandle, 1u, v17, Src, Pool2[6 * j + 4], &ReturnLength);
        if ( SetBootStatusData >= 0 && ReturnLength )
        {
          v18 = *(void **)&Pool2[6 * j + 2];
          if ( PreviousMode )
            RtlCopyToUser(v18, Src, ReturnLength);
          else
            RtlCopyVolatileMemory(v18, Src, ReturnLength);
        }
        if ( a2 )
          *(_DWORD *)(a2 + 4 * j) = ReturnLength;
      }
    }
  }
LABEL_8:
  if ( FileHandle )
    RtlUnlockBootStatusData(FileHandle);
  if ( v25 )
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
