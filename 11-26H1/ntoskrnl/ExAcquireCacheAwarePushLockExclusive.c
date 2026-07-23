/*
 * XREFs of ExAcquireCacheAwarePushLockExclusive @ 0x140476670
 * Callers:
 *     CmpLockRegistryExclusive @ 0x1408C8718 (CmpLockRegistryExclusive.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 */

AutoBoost *__fastcall ExAcquireCacheAwarePushLockExclusive(
        volatile signed __int32 **a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  AutoBoost *result; // rax
  volatile signed __int32 **v6; // rdi
  AutoBoost *v7; // rbx
  volatile signed __int32 **v8; // rsi
  volatile signed __int32 *v9; // rcx

  result = (AutoBoost *)KeAbPreAcquire((__int64)a1, 0LL, 0LL, a4);
  v6 = a1 + 1;
  v7 = result;
  v8 = a1 + 32;
  if ( _interlockedbittestandset64(*a1, 0LL) )
  {
    v9 = *a1;
LABEL_3:
    result = (AutoBoost *)ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v9, v7, (__int64)a1);
  }
  while ( v6 < v8 )
  {
    result = (AutoBoost *)*v6;
    if ( _interlockedbittestandset64(*v6, 0LL) )
    {
      result = (AutoBoost *)*--v8;
      if ( _interlockedbittestandset64(*v8, 0LL) )
      {
        v9 = *v8;
        goto LABEL_3;
      }
    }
    else
    {
      ++v6;
    }
  }
  if ( v7 )
  {
    result = (AutoBoost *)KiAbpGlobalState;
    if ( (KiAbpGlobalState & 1) != 0 )
      *((_BYTE *)v7 + 33) |= 2u;
    else
      *((_BYTE *)v7 + 10) = 1;
  }
  return result;
}
