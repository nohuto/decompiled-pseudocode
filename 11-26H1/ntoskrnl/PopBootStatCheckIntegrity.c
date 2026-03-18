/*
 * XREFs of PopBootStatCheckIntegrity @ 0x1407DAC78
 * Callers:
 *     PopPowerInformationInternal @ 0x140B6F6FC (PopPowerInformationInternal.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     RtlULongLongMult @ 0x1404655A0 (RtlULongLongMult.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     RtlCheckBootStatusIntegrity @ 0x140805778 (RtlCheckBootStatusIntegrity.c)
 *     ProbeForRead @ 0x1408EF880 (ProbeForRead.c)
 *     ProbeForWrite @ 0x1408F5D00 (ProbeForWrite.c)
 *     RtlUnlockBootStatusData @ 0x140ACBD70 (RtlUnlockBootStatusData.c)
 *     RtlLockBootStatusData @ 0x140B12DA0 (RtlLockBootStatusData.c)
 *     PopBootStatAccessCheck @ 0x140B50828 (PopBootStatAccessCheck.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopBootStatCheckIntegrity(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  ULONGLONG Pool2; // rdi
  char PreviousMode; // r15
  NTSTATUS v7; // esi
  SIZE_T v8; // rbx
  __int64 i; // rbx
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v11; // rax
  void *v12; // rdx
  AutoBoost *v13; // rsi
  __int64 v14; // rdx
  void *v15; // rcx
  HANDLE FileHandle; // [rsp+28h] [rbp-40h] BYREF
  ULONGLONG pullResult[7]; // [rsp+30h] [rbp-38h] BYREF
  char Src; // [rsp+78h] [rbp+10h] BYREF
  char v20; // [rsp+80h] [rbp+18h]
  char v21; // [rsp+88h] [rbp+20h]

  pullResult[0] = 0LL;
  Src = 0;
  Pool2 = 0LL;
  FileHandle = 0LL;
  v21 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v20 = PreviousMode;
  if ( PreviousMode )
  {
    v7 = RtlULongLongMult(*(unsigned int *)(a1 + 8), 0x18uLL, pullResult);
    if ( v7 < 0 )
      goto LABEL_26;
    v8 = pullResult[0];
    Pool2 = ExAllocatePool2(0x100uLL);
    pullResult[0] = Pool2;
    if ( !Pool2 )
    {
      v7 = -1073741670;
      goto LABEL_26;
    }
    ProbeForRead(*(volatile void **)(a1 + 16), v8, 8u);
    RtlCopyFromUser((void *)Pool2, *(void **)(a1 + 16), v8);
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 8); i = (unsigned int)(i + 1) )
      ProbeForWrite(*(volatile void **)(Pool2 + 24 * i + 8), *(unsigned int *)(Pool2 + 24 * i + 16), 1u);
  }
  else
  {
    Pool2 = *(_QWORD *)(a1 + 16);
    pullResult[0] = Pool2;
  }
  v21 = 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v11 = (AutoBoost *)KeAbPreAcquire((__int64)&PopModernStandbyStateNotify.AbWaitObject, 0LL, 0LL, a4);
  v13 = v11;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&PopModernStandbyStateNotify.AbWaitObject, 0LL) )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&PopModernStandbyStateNotify.AbWaitObject,
      v11,
      (__int64)&PopModernStandbyStateNotify.AbWaitObject);
  if ( v13 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v13, v12);
    else
      *((_BYTE *)v13 + 10) = 1;
  }
  v7 = RtlLockBootStatusData(&FileHandle);
  if ( v7 >= 0 )
  {
    if ( !PreviousMode || (LOBYTE(v14) = PreviousMode, v7 = PopBootStatAccessCheck(FileHandle, v14, 1LL), v7 >= 0) )
    {
      v7 = RtlCheckBootStatusIntegrity(FileHandle);
      if ( v7 >= 0 )
      {
        if ( *(_DWORD *)(Pool2 + 16) )
        {
          v15 = *(void **)(Pool2 + 8);
          if ( PreviousMode )
            RtlCopyToUser(v15, &Src, 1uLL);
          else
            RtlCopyVolatileMemory(v15, &Src, 1uLL);
        }
        else
        {
          v7 = -1073741811;
        }
      }
    }
  }
LABEL_26:
  if ( FileHandle )
    RtlUnlockBootStatusData(FileHandle);
  if ( v21 )
  {
    if ( (_InterlockedExchangeAdd64(
            (volatile signed __int64 *)&PopModernStandbyStateNotify.AbWaitObject,
            0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopModernStandbyStateNotify.AbWaitObject);
    KeAbPostRelease((unsigned __int64)&PopModernStandbyStateNotify.AbWaitObject);
    KeLeaveCriticalRegion();
  }
  if ( PreviousMode && Pool2 )
    ExFreePoolWithTag((PVOID)Pool2, 0);
  return (unsigned int)v7;
}
