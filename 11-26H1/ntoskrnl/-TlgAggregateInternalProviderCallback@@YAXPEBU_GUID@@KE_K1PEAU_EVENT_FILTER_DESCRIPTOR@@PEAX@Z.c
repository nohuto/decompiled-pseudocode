/*
 * XREFs of ?TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x140B500E0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPostReleaseEx @ 0x140272670 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     LookUpTableFlushComplete @ 0x140AED3DC (LookUpTableFlushComplete.c)
 */

void __fastcall TlgAggregateInternalProviderCallback(const struct _GUID *a1, int a2, __int64 a3, __int64 a4)
{
  AutoBoost *v4; // rax
  void *v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 i; // rbx

  if ( a2 == 2 && a4 == 32 )
  {
    v4 = (AutoBoost *)KeAbPreAcquire((__int64)&WheapPfaLock.ReadTransferCount, 0LL, 1LL, (struct _KLOCK_ENTRIES *)0x20);
    if ( _interlockedbittestandset64((volatile signed __int32 *)&WheapPfaLock.ReadTransferCount, 0LL) )
    {
      if ( v4 )
        KeAbPostReleaseEx((struct _KTHREAD *)&WheapPfaLock.ReadTransferCount, (unsigned __int64)v4, v6, v7);
    }
    else
    {
      if ( v4 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v4, v5);
        else
          *((_BYTE *)v4 + 10) = 1;
      }
      for ( i = WheapPfaLock.WriteTransferCount; i; i = *(_QWORD *)(i + 352) )
        LookUpTableFlushComplete(i);
      if ( (_InterlockedExchangeAdd64(&WheapPfaLock.ReadTransferCount, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&WheapPfaLock.ReadTransferCount);
      KeAbPostRelease((unsigned __int64)&WheapPfaLock.ReadTransferCount);
    }
  }
}
