/*
 * XREFs of KsepSdbBootInitialize @ 0x1407C153C
 * Callers:
 *     KseShimDatabaseBootInitialize @ 0x140CD3BC0 (KseShimDatabaseBootInitialize.c)
 * Callees:
 *     KsepLogError @ 0x1404C635C (KsepLogError.c)
 *     KsepPoolAllocatePaged @ 0x1404D7BFC (KsepPoolAllocatePaged.c)
 *     KsepPoolFreePaged @ 0x1404DC150 (KsepPoolFreePaged.c)
 *     KsepDebugPrint @ 0x140508694 (KsepDebugPrint.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     SdbGetDatabaseEdition @ 0x1409D60CC (SdbGetDatabaseEdition.c)
 *     SdbInitDatabaseInMemory @ 0x1409D6974 (SdbInitDatabaseInMemory.c)
 */

__int64 __fastcall KsepSdbBootInitialize(void *Src, size_t Size, __int64 a3)
{
  size_t v4; // rbp
  void *Paged; // rax
  unsigned int v7; // esi
  void *v8; // rbx
  __int64 v9; // rax
  __int64 inited; // rax
  __int64 v11; // rax

  v4 = (unsigned int)Size;
  Paged = (void *)KsepPoolAllocatePaged();
  v7 = 0;
  v8 = Paged;
  if ( Paged )
  {
    memmove(Paged, Src, v4);
    inited = SdbInitDatabaseInMemory(v8, (unsigned int)v4);
    if ( inited )
    {
      *(_QWORD *)(a3 + 8) = v8;
      *(_QWORD *)a3 = inited;
      *(_DWORD *)(a3 + 48) = SdbGetDatabaseEdition(*(_QWORD *)(inited + 8));
    }
    else
    {
      v7 = -1073741823;
      v11 = ((unsigned __int8)_InterlockedExchangeAdd(
                                (volatile signed __int32 *)&AlpcpMessageLogLock.AbWaitEntryCount,
                                1u)
           + 1) & 0x3F;
      *(&AlpcpMessageLogLock.Timer.DueTime.HighPart + 2 * v11) = -1073741823;
      *(&AlpcpMessageLogLock.Timer.DueTime.LowPart + 2 * v11) = 590002;
      if ( ((__int64)stru_140E66D40.StackBase & 2) != 0 )
        KsepDebugPrint(1LL, (int)"KSE: SdbInitDatabaseInMemory failed during boot!\n");
      KsepLogError(1LL, (__int64)"KSE: SdbInitDatabaseInMemory failed during boot!\n");
      KsepPoolFreePaged(v8);
    }
  }
  else
  {
    v7 = -1073741670;
    v9 = ((unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)&AlpcpMessageLogLock.AbWaitEntryCount, 1u)
        + 1) & 0x3F;
    *(&AlpcpMessageLogLock.Timer.DueTime.HighPart + 2 * v9) = -1073741670;
    *(&AlpcpMessageLogLock.Timer.DueTime.LowPart + 2 * v9) = 589986;
    if ( ((__int64)stru_140E66D40.StackBase & 2) != 0 )
      KsepDebugPrint(0LL, (int)"KSE: Failed to allocate memory for shim database during boot!\n");
    KsepLogError(0LL, (__int64)"KSE: Failed to allocate memory for shim database during boot!\n");
  }
  return v7;
}
