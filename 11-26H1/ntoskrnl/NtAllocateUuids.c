/*
 * XREFs of NtAllocateUuids @ 0x140A75270
 * Callers:
 *     DifNtAllocateUuidsWrapper @ 0x14066B6D0 (DifNtAllocateUuidsWrapper.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402BA1B0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F29F0 (ExRaiseDatatypeMisalignment.c)
 *     ProbeForWrite @ 0x1408F5D00 (ProbeForWrite.c)
 *     ExpAllocateUuids @ 0x140A76DB0 (ExpAllocateUuids.c)
 *     ExpUuidSaveSequenceNumberIf @ 0x140A77BB0 (ExpUuidSaveSequenceNumberIf.c)
 */

__int64 __fastcall NtAllocateUuids(_QWORD *a1, unsigned int *a2, unsigned int *a3, struct _KLOCK_ENTRIES *a4)
{
  char PreviousMode; // di
  int ULongFromUser; // eax
  int v9; // eax
  struct _KTHREAD *CurrentThread; // r13
  AutoBoost *v11; // rax
  void *v12; // rdx
  AutoBoost *v13; // r14
  __int64 v14; // rcx
  int v15; // r14d
  char v16; // r14
  __int64 v17; // rdx
  __int64 v19; // rdx
  int v20; // [rsp+24h] [rbp-44h] BYREF
  int v21[4]; // [rsp+28h] [rbp-40h] BYREF
  __int64 v22[6]; // [rsp+38h] [rbp-30h] BYREF

  v22[0] = 0LL;
  v20 = 0;
  v21[0] = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ProbeForWrite(a1, 8uLL, 4u);
    if ( ((unsigned __int8)a2 & 3) != 0
      || (ULongFromUser = RtlReadULongFromUser(a2),
          RtlWriteULongToUser(a2, ULongFromUser),
          ((unsigned __int8)a3 & 3) != 0) )
    {
      ExRaiseDatatypeMisalignment();
    }
    v9 = RtlReadULongFromUser(a3);
    RtlWriteULongToUser(a3, v9);
    ProbeForWrite(a4, 6uLL, 1u);
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v11 = (AutoBoost *)KeAbPreAcquire((__int64)&ExpUuidLock, 0LL, 0LL, a4);
  v13 = v11;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpUuidLock, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&ExpUuidLock, v11, (__int64)&ExpUuidLock);
  if ( v13 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v13, v12);
    else
      *((_BYTE *)v13 + 10) = 1;
  }
  v15 = ExpAllocateUuids(v22, &v20, v21);
  if ( v15 < 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpUuidLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpUuidLock.Header.Lock);
    KeAbPostRelease((unsigned __int64)&ExpUuidLock);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v19);
    return (unsigned int)v15;
  }
  else
  {
    ExpUuidSaveSequenceNumberIf(v14);
    v16 = HIBYTE(NlsMbOemCodePageTag);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpUuidLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpUuidLock.Header.Lock);
    KeAbPostRelease((unsigned __int64)&ExpUuidLock);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v17);
    if ( PreviousMode )
      RtlWriteULong64ToUser(a1, v22[0]);
    else
      *a1 = v22[0];
    if ( PreviousMode )
      RtlWriteULongToUser(a2, v20);
    else
      *a2 = v20;
    if ( PreviousMode )
      RtlWriteULongToUser(a3, v21[0]);
    else
      *a3 = v21[0];
    if ( PreviousMode )
      RtlCopyToUser(a4, &ExpPlatformBinaryLock.WaitBlockFill11[78], 6uLL);
    else
      RtlCopyVolatileMemory(a4, &ExpPlatformBinaryLock.WaitBlockFill11[78], 6uLL);
    return v16 == 0 ? 0x40020056 : 0;
  }
}
