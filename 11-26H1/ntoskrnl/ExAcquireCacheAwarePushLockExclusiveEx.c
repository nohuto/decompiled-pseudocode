/*
 * XREFs of ExAcquireCacheAwarePushLockExclusiveEx @ 0x1404731F0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 */

volatile signed __int32 *__fastcall ExAcquireCacheAwarePushLockExclusiveEx(
        volatile signed __int32 **a1,
        char a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  AutoBoost *v5; // rbx
  volatile signed __int32 *result; // rax
  volatile signed __int32 **v7; // rsi
  volatile signed __int32 **v8; // r14
  unsigned __int64 *v9; // rcx

  if ( (a2 & 2) != 0 )
    v5 = 0LL;
  else
    v5 = (AutoBoost *)KeAbPreAcquire((__int64)a1, 0LL, 0LL, a4);
  result = *a1;
  v7 = a1 + 1;
  v8 = a1 + 32;
  if ( _interlockedbittestandset64(*a1, 0LL) )
  {
    v9 = (unsigned __int64 *)*a1;
LABEL_5:
    result = (volatile signed __int32 *)ExfAcquirePushLockExclusiveEx(v9, v5, (__int64)a1);
  }
  while ( v7 < v8 )
  {
    result = *v7;
    if ( _interlockedbittestandset64(*v7, 0LL) )
    {
      result = *--v8;
      if ( _interlockedbittestandset64(*v8, 0LL) )
      {
        v9 = (unsigned __int64 *)*v8;
        goto LABEL_5;
      }
    }
    else
    {
      ++v7;
    }
  }
  if ( v5 )
  {
    result = (volatile signed __int32 *)KiAbpGlobalState;
    if ( (KiAbpGlobalState & 1) != 0 )
      *((_BYTE *)v5 + 33) |= 2u;
    else
      *((_BYTE *)v5 + 10) = 1;
  }
  return result;
}
