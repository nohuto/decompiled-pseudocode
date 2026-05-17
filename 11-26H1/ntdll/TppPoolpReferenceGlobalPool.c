/*
 * XREFs of TppPoolpReferenceGlobalPool @ 0x18004E450
 * Callers:
 *     TppCleanupGroupMemberInitialize @ 0x18004DA10 (TppCleanupGroupMemberInitialize.c)
 *     RtlQueueWorkItem @ 0x180066390 (RtlQueueWorkItem.c)
 *     RtlpTpIoAlloc @ 0x1800B833C (RtlpTpIoAlloc.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x18002D9F0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockShared @ 0x18004C610 (RtlAcquireSRWLockShared.c)
 *     TpAllocPoolInternal @ 0x1800655CC (TpAllocPoolInternal.c)
 *     TpSetPoolStackInformation @ 0x180065BF0 (TpSetPoolStackInformation.c)
 *     TppRaiseInvalidParameter @ 0x180067FF8 (TppRaiseInvalidParameter.c)
 *     TpReleasePool @ 0x1800CB610 (TpReleasePool.c)
 *     TpSetPoolMaxThreads @ 0x1800ECDE0 (TpSetPoolMaxThreads.c)
 *     TpSetPoolMinThreads @ 0x1800FDDB0 (TpSetPoolMinThreads.c)
 *     TpSetPoolMaxThreadsSoftLimit @ 0x1800FF6B0 (TpSetPoolMaxThreadsSoftLimit.c)
 */

__int64 __fastcall TppPoolpReferenceGlobalPool(
        volatile signed __int32 **a1,
        volatile signed __int64 *a2,
        volatile signed __int32 **a3)
{
  char v6; // si
  __int64 v8; // rsi
  __int64 v9; // rdx
  int v10; // r15d
  __int64 v11; // rdx
  int v12; // edx
  int v13; // edx
  __int64 v14; // rdx
  __int64 v15; // [rsp+60h] [rbp+18h] BYREF

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
    v15 = 0LL;
    if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    {
      TppRaiseInvalidParameter();
      v10 = -1073741811;
    }
    else
    {
      v10 = TpAllocPoolInternal(&v15, 0LL);
      v8 = v15;
    }
    if ( v10 < 0 )
      return (unsigned int)v10;
    RtlAcquireSRWLockExclusive(a2, v9);
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
          TpSetPoolMaxThreads(v8, (unsigned int)TppPoolpGlobalPoolMaxThreads);
        }
        else
        {
          v11 = (unsigned int)TppPoolpGlobalPoolMaxThreadsOverride;
          if ( !TppPoolpGlobalPoolMaxThreadsOverride )
          {
            if ( !v8 || (v12 = *(_DWORD *)(v8 + 440)) == 0 )
              v12 = MEMORY[0x7FFE03C0];
            v11 = (unsigned int)(8 * v12);
            if ( (unsigned int)v11 < 0x300 )
              v11 = 768LL;
          }
          TpSetPoolMaxThreads(v8, v11);
          if ( TppPoolpGlobalPoolMaxThreadsOverride )
          {
            v14 = 0LL;
          }
          else
          {
            if ( !v8 || (v13 = *(_DWORD *)(v8 + 440)) == 0 )
              v13 = MEMORY[0x7FFE03C0];
            v14 = (unsigned int)(4 * v13);
            if ( (unsigned int)v14 < 0x180 )
              v14 = 384LL;
          }
          TpSetPoolMaxThreadsSoftLimit(v8, v14);
        }
        if ( TppPoolpGlobalPoolStackSize )
        {
          v10 = TpSetPoolStackInformation(v8);
          if ( v10 < 0 )
            goto LABEL_40;
        }
      }
      else if ( a1 == (volatile signed __int32 **)&TppPoolpSerializedPool )
      {
        TpSetPoolMaxThreads(v8, 1LL);
        v10 = TpSetPoolMinThreads(v8, 1LL);
        if ( v10 < 0 )
          goto LABEL_40;
      }
      *a1 = (volatile signed __int32 *)v8;
      v8 = 0LL;
      v15 = 0LL;
    }
LABEL_40:
    RtlReleaseSRWLockExclusive(a2);
    if ( v8 )
      TpReleasePool(v8);
    if ( v10 >= 0 )
      *a3 = *a1;
    return (unsigned int)v10;
  }
  TppRaiseInvalidParameter();
  return 3221225485LL;
}
