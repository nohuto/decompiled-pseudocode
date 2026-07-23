/*
 * XREFs of HvlQuerySetBootPagesInfo @ 0x140779028
 * Callers:
 *     NtSetSystemInformation @ 0x140839A80 (NtSetSystemInformation.c)
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HvlQuerySetBootPagesInfo(
        _DWORD *a1,
        unsigned int a2,
        char a3,
        struct _KLOCK_ENTRIES *a4,
        unsigned int *a5)
{
  unsigned int v5; // edi
  char v6; // r15
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v10; // rax
  void *v11; // rdx
  signed __int8 v12; // cf
  AutoBoost *v13; // rsi
  unsigned int v14; // esi

  v5 = 0;
  v6 = (char)a4;
  if ( a3 )
  {
    return (unsigned int)-1073741790;
  }
  else if ( (HvlpFlags & 2) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v10 = (AutoBoost *)KeAbPreAcquire((__int64)&VslpReservedTransferLock.SavedApcState.ApcListHead[1], 0LL, 0LL, a4);
    v12 = _interlockedbittestandset64((volatile signed __int32 *)&VslpReservedTransferLock.SavedApcStateFill[16], 0LL);
    v13 = v10;
    if ( v12 )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)&VslpReservedTransferLock.SavedApcState.ApcListHead[1],
        v10,
        (__int64)&VslpReservedTransferLock.SavedApcState.ApcListHead[1]);
    if ( v13 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v13, v11);
      else
        *((_BYTE *)v13 + 10) = 1;
    }
    if ( v6 )
    {
      if ( VslpReservedTransferLock.SavedApcStateFill[24]
        && !VslpReservedTransferLock.SavedApcStateFill[25]
        && **(_DWORD **)&VslpReservedTransferLock.SchedulerApc.Type )
      {
        v14 = 8 * **(_DWORD **)&VslpReservedTransferLock.SchedulerApc.Type + 8;
        if ( v14 <= a2 )
          memmove(a1, *(const void **)&VslpReservedTransferLock.SchedulerApc.Type, v14);
        else
          v5 = -1073741789;
        *a5 = v14;
      }
      else
      {
        *a5 = 0;
      }
    }
    else if ( VslpReservedTransferLock.SavedApcStateFill[24]
           && !VslpReservedTransferLock.SavedApcStateFill[25]
           && **(_DWORD **)&VslpReservedTransferLock.SchedulerApc.Type )
    {
      if ( a2 == 16 && a1 && !*a1 )
      {
        ExFreePoolWithTag(*(PVOID *)&VslpReservedTransferLock.SchedulerApc.Type, 0x204C5648u);
        *(_QWORD *)&VslpReservedTransferLock.SchedulerApc.Type = 0LL;
        VslpReservedTransferLock.SavedApcStateFill[25] = 1;
        KeSetEvent((PRKEVENT)VslpReservedTransferLock.SavedApcState.Process, 0, 0);
      }
      else
      {
        v5 = -1073741811;
      }
    }
    else
    {
      v5 = -1073700861;
    }
    if ( (_InterlockedExchangeAdd64(
            (volatile signed __int64 *)&VslpReservedTransferLock.SavedApcState.ApcListHead[1].Flink,
            0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&VslpReservedTransferLock.SavedApcState.ApcListHead[1]);
    KeAbPostRelease((unsigned __int64)&VslpReservedTransferLock.SavedApcState.ApcListHead[1]);
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v5;
}
