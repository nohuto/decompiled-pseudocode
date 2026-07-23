/*
 * XREFs of ?TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x140B52970
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPostReleaseEx @ 0x140271BE0 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     LookUpTableFlushComplete @ 0x140AF012C (LookUpTableFlushComplete.c)
 */

void __fastcall TlgAggregateInternalProviderCallback(const struct _GUID *a1, int a2, __int64 a3, __int64 a4)
{
  AutoBoost *v4; // rax
  void *v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  struct _LIST_ENTRY *i; // rbx

  if ( a2 == 2 && a4 == 32 )
  {
    v4 = (AutoBoost *)KeAbPreAcquire((__int64)&WheapPfaLock.1008, 0LL, 1LL, (struct _KLOCK_ENTRIES *)0x20);
    if ( _interlockedbittestandset64((volatile signed __int32 *)&WheapPfaLock.1008, 0LL) )
    {
      if ( v4 )
        KeAbPostReleaseEx((struct _KTHREAD *)&WheapPfaLock.1008, (unsigned __int64)v4, v6, v7);
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
      for ( i = WheapPfaLock.GlobalUpdateVpThreadPriorityListEntry.Blink; i; i = i[22].Flink )
        LookUpTableFlushComplete((__int64)i);
      if ( (_InterlockedExchangeAdd64(
              (volatile signed __int64 *)&WheapPfaLock.GlobalUpdateVpThreadPriorityListEntry.Flink,
              0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&WheapPfaLock.1008);
      KeAbPostRelease((unsigned __int64)&WheapPfaLock.1008);
    }
  }
}
