/*
 * XREFs of HvlQuerySetBootPagesInfo @ 0x140776180
 * Callers:
 *     NtSetSystemInformation @ 0x140833840 (NtSetSystemInformation.c)
 *     ExpQuerySystemInformation @ 0x140B145DC (ExpQuerySystemInformation.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
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
    v10 = (AutoBoost *)KeAbPreAcquire((__int64)&VslpReservedTransferLock.AffinityVersion, 0LL, 0LL, a4);
    v12 = _interlockedbittestandset64((volatile signed __int32 *)&VslpReservedTransferLock.AffinityVersion, 0LL);
    v13 = v10;
    if ( v12 )
      ExfAcquirePushLockExclusiveEx(
        &VslpReservedTransferLock.AffinityVersion,
        v10,
        (__int64)&VslpReservedTransferLock.AffinityVersion);
    if ( v13 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v13, v11);
      else
        *((_BYTE *)v13 + 10) = 1;
    }
    if ( v6 )
    {
      if ( LOBYTE(VslpReservedTransferLock.Affinity)
        && !BYTE1(VslpReservedTransferLock.Affinity)
        && VslpReservedTransferLock.SavedApcState.ApcListHead[0].Flink->Flink )
      {
        v14 = 8 * (__int64)VslpReservedTransferLock.SavedApcState.ApcListHead[0].Flink->Flink + 8;
        if ( v14 <= a2 )
          memmove(a1, VslpReservedTransferLock.SavedApcState.ApcListHead[0].Flink, v14);
        else
          v5 = -1073741789;
        *a5 = v14;
      }
      else
      {
        *a5 = 0;
      }
    }
    else if ( LOBYTE(VslpReservedTransferLock.Affinity)
           && !BYTE1(VslpReservedTransferLock.Affinity)
           && VslpReservedTransferLock.SavedApcState.ApcListHead[0].Flink->Flink )
    {
      if ( a2 == 16 && a1 && !*a1 )
      {
        ExFreePoolWithTag(VslpReservedTransferLock.SavedApcState.ApcListHead[0].Flink, 0x204C5648u);
        VslpReservedTransferLock.SavedApcState.ApcListHead[0].Flink = 0LL;
        BYTE1(VslpReservedTransferLock.Affinity) = 1;
        KeSetEvent(*(PRKEVENT *)&VslpReservedTransferLock.AffinityPrimaryGroup, 0, 0);
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
            (volatile signed __int64 *)&VslpReservedTransferLock.AffinityVersion,
            0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&VslpReservedTransferLock.AffinityVersion);
    KeAbPostRelease((unsigned __int64)&VslpReservedTransferLock.AffinityVersion);
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v5;
}
