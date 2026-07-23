/*
 * XREFs of NtAllocateUuids @ 0x140A7DF90
 * Callers:
 *     DifNtAllocateUuidsWrapper @ 0x14066F2B0 (DifNtAllocateUuidsWrapper.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140304E70 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     ExpAllocateUuids @ 0x140A7FAD0 (ExpAllocateUuids.c)
 *     ExpUuidSaveSequenceNumberIf @ 0x140A808D0 (ExpUuidSaveSequenceNumberIf.c)
 */

NTSTATUS __cdecl NtAllocateUuids(PULARGE_INTEGER Time, PULONG Range, PULONG Sequence, PCHAR Seed)
{
  char PreviousMode; // di
  int ULongFromUser; // eax
  int v9; // eax
  struct _KTHREAD *CurrentThread; // r13
  AutoBoost *v11; // rax
  void *v12; // rdx
  AutoBoost *v13; // r14
  __int64 v14; // rcx
  NTSTATUS v15; // r14d
  char v16; // r14
  __int64 v17; // rdx
  __int64 v19; // rdx
  ULONG v20; // [rsp+24h] [rbp-44h] BYREF
  ULONG v21[4]; // [rsp+28h] [rbp-40h] BYREF
  unsigned __int64 v22[6]; // [rsp+38h] [rbp-30h] BYREF

  v22[0] = 0LL;
  v20 = 0;
  v21[0] = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ProbeForWrite(Time, 8uLL, 4u);
    if ( ((unsigned __int8)Range & 3) != 0
      || (ULongFromUser = RtlReadULongFromUser(Range),
          RtlWriteULongToUser(Range, ULongFromUser),
          ((unsigned __int8)Sequence & 3) != 0) )
    {
      ExRaiseDatatypeMisalignment();
    }
    v9 = RtlReadULongFromUser(Sequence);
    RtlWriteULongToUser(Sequence, v9);
    ProbeForWrite(Seed, 6uLL, 1u);
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v11 = (AutoBoost *)KeAbPreAcquire((__int64)&ExpUuidLock, 0LL, 0LL, (struct _KLOCK_ENTRIES *)Seed);
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
    return v15;
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
      RtlWriteULong64ToUser(Time, v22[0]);
    else
      *Time = (ULARGE_INTEGER)v22[0];
    if ( PreviousMode )
      RtlWriteULongToUser(Range, v20);
    else
      *Range = v20;
    if ( PreviousMode )
      RtlWriteULongToUser(Sequence, v21[0]);
    else
      *Sequence = v21[0];
    if ( PreviousMode )
      RtlCopyToUser(Seed, &ExpPlatformBinaryLock.WaitBlockFill11[78], 6uLL);
    else
      RtlCopyVolatileMemory(Seed, &ExpPlatformBinaryLock.WaitBlockFill11[78], 6uLL);
    return v16 == 0 ? 0x40020056 : 0;
  }
}
