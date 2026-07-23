/*
 * XREFs of LdrLockLoaderLock @ 0x1800E49F0
 * Callers:
 *     TppIopExecuteCallback @ 0x180015CD0 (TppIopExecuteCallback.c)
 *     TppWorkCallbackPrologRelease @ 0x18003E030 (TppWorkCallbackPrologRelease.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180034D40 (RtlRaiseStatus.c)
 *     LdrpAcquireLoaderLock @ 0x18007B430 (LdrpAcquireLoaderLock.c)
 *     LdrpTryAcquireLoaderLock @ 0x1800E4BB8 (LdrpTryAcquireLoaderLock.c)
 *     LdrpGenericExceptionFilter @ 0x18015B628 (LdrpGenericExceptionFilter.c)
 */

NTSTATUS __cdecl LdrLockLoaderLock(ULONG Flags, ULONG *Disposition, PVOID *Cookie)
{
  NTSTATUS v5; // ebx
  ULONG v6; // edi
  int UniqueThread; // ecx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rcx

  v5 = 0;
  if ( Disposition )
    *Disposition = 0;
  if ( Cookie )
    *Cookie = 0LL;
  if ( (Flags & 0xFFFFFFFC) != 0 )
  {
    if ( (Flags & 1) != 0 )
      RtlRaiseStatus(-1073741585);
    return -1073741585;
  }
  else if ( Cookie )
  {
    if ( (Flags & 2) != 0 && !Disposition )
    {
      if ( (Flags & 1) != 0 )
        RtlRaiseStatus(-1073741584);
      return -1073741584;
    }
    if ( LdrInitState != 3 )
      return v5;
    v6 = 1;
    if ( (Flags & 1) == 0 )
    {
      if ( (Flags & 2) != 0 )
      {
        if ( !(unsigned __int8)LdrpTryAcquireLoaderLock() )
        {
          *Disposition = 2;
          return v5;
        }
      }
      else
      {
        LdrpAcquireLoaderLock();
        if ( !Disposition )
        {
LABEL_13:
          UniqueThread = (int)NtCurrentTeb()->ClientId.UniqueThread;
          *Cookie = (PVOID)(((unsigned __int64)(UniqueThread & 0xFFF) << 48) | (unsigned __int16)(_InterlockedExchangeAdd(
                                                                                                    &LdrpLoaderLockAcquisitionCount,
                                                                                                    1u)
                                                                                                + 1) & 0xFFFE | 1LL);
          return v5;
        }
      }
      *Disposition = 1;
      goto LABEL_13;
    }
    if ( (Flags & 2) != 0 )
    {
      if ( (unsigned __int8)LdrpTryAcquireLoaderLock() )
      {
        v10 = (unsigned __int64)((__int64)NtCurrentTeb()->ClientId.UniqueThread & 0xFFF) << 48;
        *Cookie = (PVOID)(v10 | (unsigned __int16)(_InterlockedExchangeAdd(&LdrpLoaderLockAcquisitionCount, 1u) + 1) & 0xFFFE | 1);
      }
      else
      {
        v6 = 2;
      }
      *Disposition = v6;
    }
    else
    {
      LdrpAcquireLoaderLock();
      if ( Disposition )
        *Disposition = 1;
      v9 = (unsigned __int64)((__int64)NtCurrentTeb()->ClientId.UniqueThread & 0xFFF) << 48;
      *Cookie = (PVOID)(v9 | (unsigned __int16)(_InterlockedExchangeAdd(&LdrpLoaderLockAcquisitionCount, 1u) + 1) & 0xFFFE | 1);
    }
  }
  else
  {
    if ( (Flags & 1) != 0 )
      RtlRaiseStatus(-1073741583);
    return -1073741583;
  }
  return v5;
}
