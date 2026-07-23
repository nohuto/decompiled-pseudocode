/*
 * XREFs of ExConfigurePoolCommitCaching @ 0x1406D6740
 * Callers:
 *     VfPoolCommitCachingPluginEntry @ 0x140C49ED0 (VfPoolCommitCachingPluginEntry.c)
 *     VfPoolCommitCachingPluginUnload @ 0x140C49F30 (VfPoolCommitCachingPluginUnload.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     RtlpHpEnvCompactionSchedule @ 0x14034F6D0 (RtlpHpEnvCompactionSchedule.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     RtlpHpHeapSuspendCommitCaching @ 0x14063B8CC (RtlpHpHeapSuspendCommitCaching.c)
 */

void __fastcall ExConfigurePoolCommitCaching(int a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v6; // rax
  volatile unsigned __int8 *v7; // rdx
  signed __int8 v8; // cf
  AutoBoost *v9; // rdi
  int Flink_high; // eax
  unsigned int i; // r8d
  __int64 v12; // r9
  volatile __int32 *v13; // rcx
  unsigned int v14; // edi
  void **v15; // rsi
  unsigned int v16; // r15d
  int *v17; // r14
  void *v18; // r11
  _QWORD *v19; // r11
  int v20; // eax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140E6BFE8, 0LL, 0LL, a4);
  v8 = _interlockedbittestandset64(&stru_140E6BFE8.Header.Lock, 0LL);
  v9 = v6;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140E6BFE8, v6, (__int64)&stru_140E6BFE8);
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
    {
      LOBYTE(v7) = 2;
      AutoBoost::KiAbpSetEntryValue((AutoBoost *)((char *)v9 + 33), v7, 1);
    }
    else
    {
      *((_BYTE *)v9 + 10) = 1;
    }
  }
  if ( (LOBYTE(stru_140E6BFE8.Header.WaitListHead.Flink) != 0) != (a1 != 0) )
  {
    Flink_high = HIDWORD(stru_140E6BFE8.Header.WaitListHead.Flink);
    for ( i = 0; i < HIDWORD(stru_140E6BFE8.Header.WaitListHead.Flink); ++i )
    {
      v12 = 2LL;
      v13 = (volatile __int32 *)&stru_140E6BFE8.StateSaveArea + 2096 * i + 1;
      do
      {
        _InterlockedExchange(v13, a1 == 0 ? 0x10 : 0);
        v13 += 1040;
        --v12;
      }
      while ( v12 );
      Flink_high = HIDWORD(stru_140E6BFE8.Header.WaitListHead.Flink);
    }
    v14 = 0;
    if ( Flink_high )
    {
      do
      {
        v15 = &stru_140E6BFE8.SListFaultAddress + 1048 * v14;
        v16 = 0;
        v17 = (int *)(v15 + 4);
        do
        {
          v18 = *v15;
          if ( *v15 )
          {
            if ( a1 )
            {
              RtlpHpHeapSuspendCommitCaching(*v15, v17);
              RtlpHpEnvCompactionSchedule(v19);
            }
            else
            {
              v20 = *v17;
              if ( !HIBYTE(*v17) )
                _InterlockedAnd8((volatile signed __int8 *)v18 + 525, 0xF7u);
              if ( !BYTE2(v20) )
                _InterlockedAnd8((volatile signed __int8 *)v18 + 333, 0xF7u);
              if ( BYTE1(v20) )
                _InterlockedOr8((volatile signed __int8 *)v18 + 708, 2u);
              *((_BYTE *)v18 + 978) = v20;
              _InterlockedAnd16((volatile signed __int16 *)v18 + 15, 0xFFF7u);
            }
          }
          ++v16;
          ++v17;
          ++v15;
        }
        while ( v16 < 4 );
        ++v14;
      }
      while ( v14 < HIDWORD(stru_140E6BFE8.Header.WaitListHead.Flink) );
    }
    LOBYTE(stru_140E6BFE8.Header.WaitListHead.Flink) = a1 != 0;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140E6BFE8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&stru_140E6BFE8.Header.Lock);
  KeAbPostRelease((unsigned __int64)&stru_140E6BFE8);
  KeLeaveCriticalRegion();
}
