/*
 * XREFs of FsRtlAcquireHeaderMutex @ 0x140276E20
 * Callers:
 *     FsRtlpWaitForIoAtEof @ 0x140205138 (FsRtlpWaitForIoAtEof.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeAbPreWait @ 0x140278050 (KeAbPreWait.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

volatile signed __int32 *__fastcall FsRtlAcquireHeaderMutex(__int64 a1, volatile signed __int32 *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  unsigned __int8 CurrentIrql; // bp
  int v5; // r14d
  LegacyAutoBoost *v6; // rsi
  int i; // r15d
  signed __int32 v8; // eax
  signed __int32 v9; // ett
  signed __int32 v10; // ett
  volatile signed __int32 *result; // rax

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
  v3 = KeAbPreAcquire((struct _KTHREAD *)v2, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  v5 = 1;
  if ( CurrentIrql != 1 )
    __writecr8(1uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 1LL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)v2, 0) )
  {
    v6 = (LegacyAutoBoost *)v3;
    ++*(_DWORD *)(v2 + 16);
    for ( i = 4; ; i = 2 )
    {
      v8 = *(_DWORD *)v2;
      do
      {
        while ( (v8 & 1) != 0 )
        {
          v10 = v8;
          v8 = _InterlockedCompareExchange((volatile signed __int32 *)v2, v5 ^ v8, v8);
          if ( v10 == v8 )
            goto LABEL_15;
        }
        v9 = v8;
        v8 = _InterlockedCompareExchange((volatile signed __int32 *)v2, i + v8, v8);
      }
      while ( v9 != v8 );
      if ( v6 )
        KeAbPreWait(v6);
      KeWaitForSingleObject((PVOID)(v2 + 24), WrFastMutex, 0, 0, 0LL);
      _m_prefetchw((const void *)v2);
      v5 = 3;
      if ( v6 )
        v6 = (LegacyAutoBoost *)KeAbPreAcquire((struct _KTHREAD *)v2, v6);
    }
  }
LABEL_15:
  if ( v3 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      *(_BYTE *)(v3 + 33) |= 2u;
    else
      *(_BYTE *)(v3 + 10) = 1;
  }
  *(_QWORD *)(v2 + 8) = KeGetCurrentThread();
  *(_DWORD *)(v2 + 48) = CurrentIrql;
  result = a2;
  if ( a2 )
  {
    result = a2;
    _InterlockedIncrement(a2);
  }
  return result;
}
