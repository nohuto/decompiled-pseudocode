/*
 * XREFs of StorAcquireSpinLockEx @ 0x140001700
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAdapterAcquireInterruptLock @ 0x14000CD40 (RaidAdapterAcquireInterruptLock.c)
 *     RaidAdapterAcquireStartIoLock @ 0x14000ECB0 (RaidAdapterAcquireStartIoLock.c)
 */

__int64 __fastcall StorAcquireSpinLockEx(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx
  unsigned int v5; // edi
  _DWORD *v8; // rsi
  int v9; // edx
  int v11; // edx
  int v12; // edx

  v4 = *(_QWORD *)(a1 - 16);
  v5 = 0;
  v8 = 0LL;
  if ( v4 && *(_QWORD *)v4 && (*(_DWORD *)(v4 + 248) & 1) == 0 && **(_DWORD **)v4 == 1094997074 )
  {
    v8 = *(_DWORD **)v4;
  }
  else if ( (unsigned int)(a2 - 2) <= 1 )
  {
    return 3238002694LL;
  }
  if ( a4 )
  {
    *(_DWORD *)a4 = a2;
    if ( a2 == 1 )
    {
      if ( KeGetCurrentIrql() <= 2u )
      {
        if ( a3 )
        {
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a3 + 64), (PKLOCK_QUEUE_HANDLE)(a4 + 8));
          return v5;
        }
        return (unsigned int)-1056964602;
      }
    }
    else
    {
      v9 = a2 - 2;
      if ( v9 )
      {
        v11 = v9 - 1;
        if ( v11 )
        {
          v12 = v11 - 1;
          if ( !v12 )
          {
            if ( a3 )
            {
              KeAcquireInStackQueuedSpinLockForDpc((PKSPIN_LOCK)(a3 + 64), (PKLOCK_QUEUE_HANDLE)(a4 + 8));
              return v5;
            }
            return (unsigned int)-1056964602;
          }
          if ( v12 != 1 )
          {
            *(_DWORD *)a4 = 0;
            return (unsigned int)-1056964602;
          }
          if ( KeGetCurrentIrql() >= 2u )
          {
            if ( a3 )
            {
              KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a3 + 64), (PKLOCK_QUEUE_HANDLE)(a4 + 8));
              return v5;
            }
            return (unsigned int)-1056964602;
          }
        }
        else if ( KeGetCurrentIrql() <= 2u )
        {
          *(_BYTE *)(a4 + 24) = RaidAdapterAcquireInterruptLock(v8);
          return v5;
        }
      }
      else if ( KeGetCurrentIrql() <= 2u )
      {
        RaidAdapterAcquireStartIoLock(v8, a4 + 8);
        return v5;
      }
    }
    return (unsigned int)-1056964600;
  }
  return 3238002694LL;
}
