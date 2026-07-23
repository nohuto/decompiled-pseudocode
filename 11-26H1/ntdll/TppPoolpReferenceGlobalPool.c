/*
 * XREFs of TppPoolpReferenceGlobalPool @ 0x1800389D0
 * Callers:
 *     TppCleanupGroupMemberInitialize @ 0x180037F90 (TppCleanupGroupMemberInitialize.c)
 *     RtlQueueWorkItem @ 0x1800867E0 (RtlQueueWorkItem.c)
 *     RtlpTpIoAlloc @ 0x1800B585C (RtlpTpIoAlloc.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180018AF0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockShared @ 0x180036B90 (RtlAcquireSRWLockShared.c)
 *     TpAllocPoolInternal @ 0x180085A1C (TpAllocPoolInternal.c)
 *     TpSetPoolStackInformation @ 0x180086040 (TpSetPoolStackInformation.c)
 *     TppRaiseInvalidParameter @ 0x180088448 (TppRaiseInvalidParameter.c)
 *     TpReleasePool @ 0x1800C8D80 (TpReleasePool.c)
 *     TpSetPoolMaxThreads @ 0x1800EC1D0 (TpSetPoolMaxThreads.c)
 *     TpSetPoolMinThreads @ 0x1800FD500 (TpSetPoolMinThreads.c)
 *     TpSetPoolMaxThreadsSoftLimit @ 0x1800FEE00 (TpSetPoolMaxThreadsSoftLimit.c)
 */

__int64 __fastcall TppPoolpReferenceGlobalPool(
        volatile signed __int32 **a1,
        _RTL_SRWLOCK *a2,
        volatile signed __int32 **a3)
{
  char v6; // si
  PTP_POOL v8; // rsi
  NTSTATUS v9; // r15d
  ULONG v10; // edx
  unsigned int SelectedCpuSetCount; // edx
  unsigned int v12; // edx
  __int64 v13; // rdx
  PTP_POOL Pool; // [rsp+60h] [rbp+18h] BYREF

  if ( a3 && a1 && a2 && !NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    if ( *a1 )
    {
      v6 = 0;
      RtlAcquireSRWLockShared(a2);
      if ( *a1 )
      {
        _InterlockedIncrement(*a1);
        *a3 = *a1;
        v6 = 1;
      }
      RtlReleaseSRWLockShared(a2);
      if ( v6 )
        return 0LL;
    }
    v8 = 0LL;
    Pool = 0LL;
    if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    {
      TppRaiseInvalidParameter();
      v9 = -1073741811;
    }
    else
    {
      v9 = TpAllocPoolInternal(&Pool, 0LL);
      v8 = Pool;
    }
    if ( v9 < 0 )
      return (unsigned int)v9;
    RtlAcquireSRWLockExclusive(a2);
    if ( *a1 )
    {
      _InterlockedIncrement(*a1);
    }
    else
    {
      if ( a1 == (volatile signed __int32 **)&TppPoolpGlobalPool )
      {
        if ( TppPoolpGlobalPoolMaxThreads )
        {
          TpSetPoolMaxThreads(v8, TppPoolpGlobalPoolMaxThreads);
        }
        else
        {
          v10 = TppPoolpGlobalPoolMaxThreadsOverride;
          if ( !TppPoolpGlobalPoolMaxThreadsOverride )
          {
            if ( !v8 || (SelectedCpuSetCount = v8->SelectedCpuSetCount) == 0 )
              SelectedCpuSetCount = MEMORY[0x7FFE03C0];
            v10 = 8 * SelectedCpuSetCount;
            if ( v10 < 0x300 )
              v10 = 768;
          }
          TpSetPoolMaxThreads(v8, v10);
          if ( TppPoolpGlobalPoolMaxThreadsOverride )
          {
            v13 = 0LL;
          }
          else
          {
            if ( !v8 || (v12 = v8->SelectedCpuSetCount) == 0 )
              v12 = MEMORY[0x7FFE03C0];
            v13 = 4 * v12;
            if ( (unsigned int)v13 < 0x180 )
              v13 = 384LL;
          }
          TpSetPoolMaxThreadsSoftLimit(v8, v13);
        }
        if ( TppPoolpGlobalPoolStackSize )
        {
          v9 = TpSetPoolStackInformation(v8, TppPoolpGlobalPoolStackSize);
          if ( v9 < 0 )
            goto LABEL_40;
        }
      }
      else if ( a1 == (volatile signed __int32 **)&TppPoolpSerializedPool )
      {
        TpSetPoolMaxThreads(v8, 1u);
        v9 = TpSetPoolMinThreads(v8, 1u);
        if ( v9 < 0 )
          goto LABEL_40;
      }
      *a1 = &v8->Refcount.Refcount;
      v8 = 0LL;
      Pool = 0LL;
    }
LABEL_40:
    RtlReleaseSRWLockExclusive(a2);
    if ( v8 )
      TpReleasePool(v8);
    if ( v9 >= 0 )
      *a3 = *a1;
    return (unsigned int)v9;
  }
  TppRaiseInvalidParameter();
  return 3221225485LL;
}
