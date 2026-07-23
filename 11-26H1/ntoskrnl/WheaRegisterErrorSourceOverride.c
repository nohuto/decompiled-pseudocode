/*
 * XREFs of WheaRegisterErrorSourceOverride @ 0x1406DBD20
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     WheaAddErrorSource @ 0x14084D9D0 (WheaAddErrorSource.c)
 */

__int64 __fastcall WheaRegisterErrorSourceOverride(int *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // rbp
  volatile signed __int32 *v8; // rdi
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v10; // rax
  volatile unsigned __int8 *v11; // rdx
  AutoBoost *v12; // r14
  int v13; // esi
  signed __int32 v15[8]; // [rsp+0h] [rbp-418h] BYREF
  _DWORD v16[244]; // [rsp+20h] [rbp-3F8h] BYREF

  v4 = *a1;
  if ( (unsigned int)v4 > 0x12 || (_DWORD)v4 == 16 )
  {
    return (unsigned int)-1073741585;
  }
  else if ( *(_QWORD *)(a2 + 8)
         && *(_QWORD *)(a2 + 16)
         && *(_QWORD *)(a2 + 24)
         && *(_QWORD *)(a2 + 32)
         && *(_QWORD *)(a2 + 40) )
  {
    v8 = (volatile signed __int32 *)((char *)&WheapSourceConfigOverride + 64 * v4);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v10 = (AutoBoost *)KeAbPreAcquire((__int64)v8, 0LL, 0LL, a4);
    v12 = v10;
    if ( _interlockedbittestandset64(v8, 0LL) )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)&WheapSourceConfigOverride + 8 * v4,
        v10,
        (__int64)&WheapSourceConfigOverride + 64 * v4);
    if ( v12 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
      {
        LOBYTE(v11) = 2;
        AutoBoost::KiAbpSetEntryValue((AutoBoost *)((char *)v12 + 33), v11, 1);
      }
      else
      {
        *((_BYTE *)v12 + 10) = 1;
      }
    }
    if ( *((_BYTE *)v8 + 8) )
    {
      v13 = -1073740024;
    }
    else
    {
      *((_DWORD *)v8 + 3) = *(_DWORD *)a2;
      *((_QWORD *)v8 + 2) = *(_QWORD *)(a2 + 8);
      *((_QWORD *)v8 + 3) = *(_QWORD *)(a2 + 16);
      *((_QWORD *)v8 + 4) = *(_QWORD *)(a2 + 24);
      *((_QWORD *)v8 + 5) = *(_QWORD *)(a2 + 32);
      *((_QWORD *)v8 + 6) = *(_QWORD *)(a2 + 40);
      _InterlockedOr(v15, 0);
      *((_BYTE *)v8 + 8) = 1;
      memset_0(v16, 0, 0x3CCuLL);
      v16[5] = a1[2];
      v16[6] = a1[3];
      v16[4] = a1[1];
      v16[0] = 972;
      v16[1] = 10;
      v16[2] = v4;
      v16[3] = 1;
      v16[7] = 0;
      v16[9] = 0x40000000;
      v13 = WheaAddErrorSource(v16, 0LL);
      if ( v13 < 0 )
      {
        *((_QWORD *)v8 + 2) = HalSystemVectorDispatchEntry;
        *((_QWORD *)v8 + 3) = xHalPciEarlyRestore;
        *((_QWORD *)v8 + 4) = WheapDefaultErrSrcCreateRecord;
        *((_QWORD *)v8 + 5) = HalSystemVectorDispatchEntry;
        *((_QWORD *)v8 + 6) = xHalTimerWatchdogStop;
        *((_QWORD *)v8 + 7) = 0LL;
      }
      else
      {
        v13 = 0;
        WheapOverrideHandler[v4] = a3;
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&WheapSourceConfigOverride + 8 * v4);
    KeAbPostRelease((unsigned __int64)&WheapSourceConfigOverride + 64 * v4);
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741584;
  }
  return (unsigned int)v13;
}
