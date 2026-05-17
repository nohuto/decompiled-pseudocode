/*
 * XREFs of LdrLockLoaderLock @ 0x1800E67E0
 * Callers:
 *     TppIopExecuteCallback @ 0x18002ABD0 (TppIopExecuteCallback.c)
 *     TppWorkCallbackPrologRelease @ 0x180053AB0 (TppWorkCallbackPrologRelease.c)
 * Callees:
 *     RtlRaiseStatus @ 0x18004A7C0 (RtlRaiseStatus.c)
 *     LdrpAcquireLoaderLock @ 0x180084090 (LdrpAcquireLoaderLock.c)
 *     LdrpTryAcquireLoaderLock @ 0x1800E69A8 (LdrpTryAcquireLoaderLock.c)
 *     LdrpGenericExceptionFilter @ 0x18015B768 (LdrpGenericExceptionFilter.c)
 */

__int64 __fastcall LdrLockLoaderLock(int a1, int *a2, unsigned __int64 *a3)
{
  unsigned int v5; // ebx
  int v6; // edi
  int UniqueThread; // ecx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rcx

  v5 = 0;
  if ( a2 )
    *a2 = 0;
  if ( a3 )
    *a3 = 0LL;
  if ( (a1 & 0xFFFFFFFC) != 0 )
  {
    if ( (a1 & 1) != 0 )
      RtlRaiseStatus(-1073741585);
    return (unsigned int)-1073741585;
  }
  else if ( a3 )
  {
    if ( (a1 & 2) != 0 && !a2 )
    {
      if ( (a1 & 1) != 0 )
        RtlRaiseStatus(-1073741584);
      return (unsigned int)-1073741584;
    }
    if ( LdrInitState != 3 )
      return v5;
    v6 = 1;
    if ( (a1 & 1) == 0 )
    {
      if ( (a1 & 2) != 0 )
      {
        if ( !(unsigned __int8)LdrpTryAcquireLoaderLock() )
        {
          *a2 = 2;
          return v5;
        }
      }
      else
      {
        LdrpAcquireLoaderLock();
        if ( !a2 )
        {
LABEL_13:
          UniqueThread = (int)NtCurrentTeb()->ClientId.UniqueThread;
          *a3 = ((unsigned __int64)(UniqueThread & 0xFFF) << 48) | (unsigned __int16)(_InterlockedExchangeAdd(
                                                                                        &LdrpLoaderLockAcquisitionCount,
                                                                                        1u)
                                                                                    + 1) & 0xFFFE | 1LL;
          return v5;
        }
      }
      *a2 = 1;
      goto LABEL_13;
    }
    if ( (a1 & 2) != 0 )
    {
      if ( (unsigned __int8)LdrpTryAcquireLoaderLock() )
      {
        v10 = (unsigned __int64)((__int64)NtCurrentTeb()->ClientId.UniqueThread & 0xFFF) << 48;
        *a3 = v10 | (unsigned __int16)(_InterlockedExchangeAdd(&LdrpLoaderLockAcquisitionCount, 1u) + 1) & 0xFFFE | 1;
      }
      else
      {
        v6 = 2;
      }
      *a2 = v6;
    }
    else
    {
      LdrpAcquireLoaderLock();
      if ( a2 )
        *a2 = 1;
      v9 = (unsigned __int64)((__int64)NtCurrentTeb()->ClientId.UniqueThread & 0xFFF) << 48;
      *a3 = v9 | (unsigned __int16)(_InterlockedExchangeAdd(&LdrpLoaderLockAcquisitionCount, 1u) + 1) & 0xFFFE | 1;
    }
  }
  else
  {
    if ( (a1 & 1) != 0 )
      RtlRaiseStatus(-1073741583);
    return (unsigned int)-1073741583;
  }
  return v5;
}
