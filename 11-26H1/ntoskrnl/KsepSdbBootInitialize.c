/*
 * XREFs of KsepSdbBootInitialize @ 0x1407BE4DC
 * Callers:
 *     KseShimDatabaseBootInitialize @ 0x140CCDA60 (KseShimDatabaseBootInitialize.c)
 * Callees:
 *     KsepLogError @ 0x1404CCBBC (KsepLogError.c)
 *     KsepPoolAllocatePaged @ 0x1404DE51C (KsepPoolAllocatePaged.c)
 *     KsepPoolFreePaged @ 0x1404E2A70 (KsepPoolFreePaged.c)
 *     KsepDebugPrint @ 0x14050EC24 (KsepDebugPrint.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     SdbInitDatabaseInMemory @ 0x1409E62EC (SdbInitDatabaseInMemory.c)
 *     SdbGetDatabaseEdition @ 0x1409E6C00 (SdbGetDatabaseEdition.c)
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
                                (volatile signed __int32 *)&AlpcpMessageLogLock.PriorityFloorCounts[8],
                                1u)
           + 1) & 0x3F;
      *(_DWORD *)&AlpcpMessageLogLock.WaitBlockFill6[8 * v11 + 4] = -1073741823;
      *((_DWORD *)&AlpcpMessageLogLock.WaitBlock[0].WaitListEntry.Flink + 2 * v11) = 590002;
      if ( ((__int64)stru_140E66B30.StackBase & 2) != 0 )
        KsepDebugPrint(1LL, (int)"KSE: SdbInitDatabaseInMemory failed during boot!\n");
      KsepLogError(1LL, (__int64)"KSE: SdbInitDatabaseInMemory failed during boot!\n");
      KsepPoolFreePaged(v8);
    }
  }
  else
  {
    v7 = -1073741670;
    v9 = ((unsigned __int8)_InterlockedExchangeAdd(
                             (volatile signed __int32 *)&AlpcpMessageLogLock.PriorityFloorCounts[8],
                             1u)
        + 1) & 0x3F;
    *(_DWORD *)&AlpcpMessageLogLock.WaitBlockFill6[8 * v9 + 4] = -1073741670;
    *((_DWORD *)&AlpcpMessageLogLock.WaitBlock[0].WaitListEntry.Flink + 2 * v9) = 589986;
    if ( ((__int64)stru_140E66B30.StackBase & 2) != 0 )
      KsepDebugPrint(0LL, (int)"KSE: Failed to allocate memory for shim database during boot!\n");
    KsepLogError(0LL, (__int64)"KSE: Failed to allocate memory for shim database during boot!\n");
  }
  return v7;
}
