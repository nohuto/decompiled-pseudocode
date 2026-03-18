/*
 * XREFs of PopBootStatGet @ 0x140B67DA4
 * Callers:
 *     PopPowerInformationInternal @ 0x140B6F6FC (PopPowerInformationInternal.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     ProbeForRead @ 0x1408EF880 (ProbeForRead.c)
 *     ProbeForWrite @ 0x1408F5D00 (ProbeForWrite.c)
 *     RtlGetSetBootStatusData @ 0x140ACB990 (RtlGetSetBootStatusData.c)
 *     RtlUnlockBootStatusData @ 0x140ACBD70 (RtlUnlockBootStatusData.c)
 *     RtlBootStatusItemInfo @ 0x140B05228 (RtlBootStatusItemInfo.c)
 *     RtlLockBootStatusData @ 0x140B12DA0 (RtlLockBootStatusData.c)
 *     PopBootStatAccessCheck @ 0x140B50828 (PopBootStatAccessCheck.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopBootStatGet(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned int *Pool2; // rdi
  KPROCESSOR_MODE PreviousMode; // r14
  unsigned __int64 v7; // rcx
  unsigned __int128 v8; // rax
  SIZE_T v9; // r15
  int SetBootStatusData; // esi
  __int64 i; // rsi
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v14; // rax
  void *v15; // rdx
  __int64 v16; // r8
  struct _KLOCK_ENTRIES *v17; // r9
  AutoBoost *v18; // rsi
  __int64 j; // r15
  int v20; // r11d
  void *v21; // rcx
  size_t Size; // [rsp+30h] [rbp-68h] BYREF
  int v23; // [rsp+38h] [rbp-60h]
  void *Src; // [rsp+40h] [rbp-58h] BYREF
  HANDLE FileHandle; // [rsp+48h] [rbp-50h] BYREF
  unsigned int *v26; // [rsp+50h] [rbp-48h]
  char v28; // [rsp+B8h] [rbp+20h]

  Size = 0LL;
  Pool2 = 0LL;
  FileHandle = 0LL;
  v28 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v26 = 0LL;
    v7 = *(unsigned int *)(a1 + 8);
    v8 = v7 * (unsigned __int128)0x18u;
    v9 = 24 * v7;
    if ( is_mul_ok(v7, 0x18uLL) )
    {
      SetBootStatusData = 0;
    }
    else
    {
      v9 = -1LL;
      SetBootStatusData = -1073741675;
    }
    if ( SetBootStatusData < 0 )
      goto LABEL_8;
    Pool2 = (unsigned int *)ExAllocatePool2(0x100uLL);
    v26 = Pool2;
    if ( !Pool2 )
    {
      SetBootStatusData = -1073741670;
      goto LABEL_8;
    }
    ProbeForRead(*(volatile void **)(a1 + 16), v9, 8u);
    RtlCopyFromUser(Pool2, *(void **)(a1 + 16), v9);
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      v23 = i;
      if ( (unsigned int)i >= *(_DWORD *)(a1 + 8) )
        break;
      ProbeForWrite(*(volatile void **)&Pool2[6 * i + 2], Pool2[6 * i + 4], 1u);
    }
  }
  else
  {
    Pool2 = *(unsigned int **)(a1 + 16);
    v26 = Pool2;
  }
  v28 = 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v14 = (AutoBoost *)KeAbPreAcquire((__int64)&PopModernStandbyStateNotify.AbWaitObject, 0LL, 0LL, a4);
  v18 = v14;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&PopModernStandbyStateNotify.AbWaitObject, 0LL) )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&PopModernStandbyStateNotify.AbWaitObject,
      v14,
      (__int64)&PopModernStandbyStateNotify.AbWaitObject);
  if ( v18 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v18, v15);
    else
      *((_BYTE *)v18 + 10) = 1;
  }
  SetBootStatusData = RtlLockBootStatusData(&FileHandle, (__int64)v15, v16, v17);
  if ( SetBootStatusData >= 0 )
  {
    if ( !PreviousMode
      || (SetBootStatusData = PopBootStatAccessCheck(FileHandle, PreviousMode, 1u), SetBootStatusData >= 0) )
    {
      for ( j = 0LL; (unsigned int)j < *(_DWORD *)(a1 + 8); j = (unsigned int)(j + 1) )
      {
        SetBootStatusData = RtlBootStatusItemInfo(Pool2[6 * j], (_DWORD *)&Size + 1, &Src);
        if ( SetBootStatusData < 0 )
          break;
        Src = (char *)&PopBootStat + HIDWORD(Size);
        SetBootStatusData = RtlGetSetBootStatusData(FileHandle, 1, v20, Src, Pool2[6 * j + 4], &Size);
        if ( SetBootStatusData >= 0 && (_DWORD)Size )
        {
          v21 = *(void **)&Pool2[6 * j + 2];
          if ( PreviousMode )
            RtlCopyToUser(v21, Src, (unsigned int)Size);
          else
            RtlCopyVolatileMemory(v21, Src, (unsigned int)Size);
        }
        if ( a2 )
          *(_DWORD *)(a2 + 4 * j) = Size;
      }
    }
  }
LABEL_8:
  if ( FileHandle )
    RtlUnlockBootStatusData((__int64)FileHandle, *((__int64 *)&v8 + 1), a3, a4);
  if ( v28 )
  {
    if ( (_InterlockedExchangeAdd64(
            (volatile signed __int64 *)&PopModernStandbyStateNotify.AbWaitObject,
            0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopModernStandbyStateNotify.AbWaitObject);
    KeAbPostRelease((unsigned __int64)&PopModernStandbyStateNotify.AbWaitObject);
    KeLeaveCriticalRegion();
  }
  if ( PreviousMode && Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)SetBootStatusData;
}
