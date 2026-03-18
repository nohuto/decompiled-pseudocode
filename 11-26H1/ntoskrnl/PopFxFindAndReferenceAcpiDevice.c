/*
 * XREFs of PopFxFindAndReferenceAcpiDevice @ 0x1404FD140
 * Callers:
 *     PopFxAcpiForwardPepAcpiNotifyRequest @ 0x1404FD0B0 (PopFxAcpiForwardPepAcpiNotifyRequest.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 */

__int64 __fastcall PopFxFindAndReferenceAcpiDevice(__int64 *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v6; // edi
  LegacyAutoBoost *v7; // rbx
  __int64 *i; // rax
  __int64 *v9; // rcx

  CurrentThread = KeGetCurrentThread();
  v6 = -1073741810;
  --CurrentThread->KernelApcDisable;
  v7 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&qword_140F123D0, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140F123D0, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&qword_140F123D0.Header.Lock, 0, v7, &qword_140F123D0);
  if ( v7 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      *((_BYTE *)v7 + 33) |= 2u;
    else
      *((_BYTE *)v7 + 10) = 1;
  }
  for ( i = (__int64 *)qword_140F123C0; i != &qword_140F123C0; i = (__int64 *)*i )
  {
    v9 = i - 25;
    if ( i - 25 == a1 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v9 + 79);
      if ( *((_BYTE *)v9 + 312) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v9 + 79, 0xFFFFFFFF) == 1 )
          KeSetEvent((PRKEVENT)(v9 + 40), 0, 0);
        v6 = -1073741738;
      }
      else
      {
        v6 = 0;
      }
      break;
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140F123D0, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140F123D0.Header.Lock);
  KeAbPostRelease((unsigned __int64)&qword_140F123D0);
  KeLeaveCriticalRegion();
  return v6;
}
