/*
 * XREFs of KseShimDatabaseBootInitialize @ 0x140CD3BC0
 * Callers:
 *     KseInitialize @ 0x140CD3040 (KseInitialize.c)
 * Callees:
 *     KsepLogError @ 0x1404C635C (KsepLogError.c)
 *     KsepDebugPrint @ 0x140508694 (KsepDebugPrint.c)
 *     RtlAssert @ 0x14061CB00 (RtlAssert.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     KsepSdbBootInitialize @ 0x1407C153C (KsepSdbBootInitialize.c)
 *     KsepSdbBootRelease @ 0x1407C1674 (KsepSdbBootRelease.c)
 */

__int64 __fastcall KseShimDatabaseBootInitialize(void *Src, size_t Size, void *a3, unsigned int a4)
{
  unsigned int v6; // ebx
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // ebx
  __int64 v11; // rax

  v6 = Size;
  if ( KsepShimDbDuringBoot )
  {
    v8 = ((unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)&AlpcpMessageLogLock.AbWaitEntryCount, 1u)
        + 1) & 0x3F;
    *(&AlpcpMessageLogLock.Timer.DueTime.HighPart + 2 * v8) = -1073740768;
    *(&AlpcpMessageLogLock.Timer.DueTime.LowPart + 2 * v8) = 590049;
    if ( ((__int64)stru_140E66D40.StackBase & 4) != 0 )
      RtlAssert("KsepShimDbDuringBoot == FALSE", "minkernel\\ntos\\kshim\\ksesdb.c", 0xE1u, 0LL);
  }
  if ( KsepShimDbHandle )
  {
    v9 = ((unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)&AlpcpMessageLogLock.AbWaitEntryCount, 1u)
        + 1) & 0x3F;
    *(&AlpcpMessageLogLock.Timer.DueTime.HighPart + 2 * v9) = -1073740768;
    *(&AlpcpMessageLogLock.Timer.DueTime.LowPart + 2 * v9) = 590050;
    if ( ((__int64)stru_140E66D40.StackBase & 4) != 0 )
      RtlAssert("KsepShimDbHandle == NULL", "minkernel\\ntos\\kshim\\ksesdb.c", 0xE2u, 0LL);
  }
  *(_QWORD *)&KsepShimDbLock.Header.Lock = 0LL;
  KsepShimDbDuringBoot = 1;
  KsepShimDbHandle = 0LL;
  memset_0(&KsepShimDbLock.Header.WaitListHead, 0, 0x70uLL);
  if ( Src && v6 )
  {
    v10 = KsepSdbBootInitialize(Src, v6, (__int64)&KsepShimDbLock.Header.WaitListHead);
    if ( v10 >= 0 )
    {
      if ( a3 && a4 )
      {
        if ( (int)KsepSdbBootInitialize(a3, a4, (__int64)&KsepShimDbLock.ThreadLock) < 0 )
        {
          v11 = ((unsigned __int8)_InterlockedExchangeAdd(
                                    (volatile signed __int32 *)&AlpcpMessageLogLock.AbWaitEntryCount,
                                    1u)
               + 1) & 0x3F;
          *(&AlpcpMessageLogLock.Timer.DueTime.HighPart + 2 * v11) = v10;
          *(&AlpcpMessageLogLock.Timer.DueTime.LowPart + 2 * v11) = 590108;
          if ( ((__int64)stru_140E66D40.StackBase & 2) != 0 )
            KsepDebugPrint(1LL, (int)"KSE: KsepSdbBootInitialize failed for patch SDB!\n");
          KsepLogError(1LL, (__int64)"KSE: KsepSdbBootInitialize failed for patch SDB!\n");
        }
        else if ( LODWORD(KsepShimDbLock.StackBase) >= *(_DWORD *)&KsepShimDbLock.WaitRegister.Flags )
        {
          KsepSdbBootRelease(&KsepShimDbLock.ThreadLock);
        }
      }
      ++KsepShimDbRefCount;
      v10 = 0;
      KsepShimDbHandle = (__int64)&KsepShimDbLock.Header.WaitListHead;
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v10;
}
