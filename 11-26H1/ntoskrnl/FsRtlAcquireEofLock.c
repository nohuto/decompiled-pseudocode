/*
 * XREFs of FsRtlAcquireEofLock @ 0x140204E30
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlpWaitForIoAtEof @ 0x140205138 (FsRtlpWaitForIoAtEof.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeAbPreWait @ 0x140278050 (KeAbPreWait.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall FsRtlAcquireEofLock(__int64 a1, volatile signed __int32 *a2)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 v4; // rbx
  __int64 v5; // rsi
  unsigned __int8 CurrentIrql; // r14
  LegacyAutoBoost *v7; // rbp
  int v8; // r12d
  int i; // r13d
  signed __int32 v10; // eax
  signed __int32 v11; // ett
  signed __int32 v12; // ett

  CurrentThread = KeGetCurrentThread();
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
  v5 = KeAbPreAcquire((struct _KTHREAD *)v4, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 1 )
    __writecr8(1uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 1LL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)v4, 0) )
  {
    v7 = (LegacyAutoBoost *)v5;
    v8 = 1;
    ++*(_DWORD *)(v4 + 16);
    for ( i = 4; ; i = 2 )
    {
      v10 = *(_DWORD *)v4;
      do
      {
        while ( (v10 & 1) != 0 )
        {
          v12 = v10;
          v10 = _InterlockedCompareExchange((volatile signed __int32 *)v4, v8 ^ v10, v10);
          if ( v12 == v10 )
            goto LABEL_15;
        }
        v11 = v10;
        v10 = _InterlockedCompareExchange((volatile signed __int32 *)v4, v10 + i, v10);
      }
      while ( v11 != v10 );
      if ( v7 )
        KeAbPreWait(v7);
      KeWaitForSingleObject((PVOID)(v4 + 24), WrFastMutex, 0, 0, 0LL);
      _m_prefetchw((const void *)v4);
      v8 = 3;
      if ( v7 )
        v7 = (LegacyAutoBoost *)KeAbPreAcquire((struct _KTHREAD *)v4, v7);
    }
  }
LABEL_15:
  if ( v5 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      *(_BYTE *)(v5 + 33) |= 2u;
    else
      *(_BYTE *)(v5 + 10) = 1;
  }
  *(_QWORD *)(v4 + 8) = KeGetCurrentThread();
  *(_DWORD *)(v4 + 48) = CurrentIrql;
  if ( a2 )
    _InterlockedIncrement(a2);
  if ( *(struct _KTHREAD **)a1 == CurrentThread )
  {
    ++*(_WORD *)(a1 + 38);
  }
  else if ( *(_QWORD *)a1 )
  {
    FsRtlpWaitForIoAtEof(a1, a2, -1LL);
  }
  else
  {
    *(_QWORD *)a1 = CurrentThread;
    *(_WORD *)(a1 + 38) = 1;
  }
  if ( a2 )
    _InterlockedIncrement(a2);
  KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(*(_QWORD *)(a1 + 24) + 48LL));
}
