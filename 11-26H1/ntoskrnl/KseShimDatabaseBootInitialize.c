/*
 * XREFs of KseShimDatabaseBootInitialize @ 0x140CCDA60
 * Callers:
 *     KseInitialize @ 0x140CCCEE0 (KseInitialize.c)
 * Callees:
 *     KsepLogError @ 0x1404CCBBC (KsepLogError.c)
 *     KsepDebugPrint @ 0x14050EC24 (KsepDebugPrint.c)
 *     RtlAssert @ 0x140619AB0 (RtlAssert.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     KsepSdbBootInitialize @ 0x1407BE4DC (KsepSdbBootInitialize.c)
 *     KsepSdbBootRelease @ 0x1407BE614 (KsepSdbBootRelease.c)
 */

__int64 __fastcall KseShimDatabaseBootInitialize(void *Src, size_t Size, void *a3, unsigned int a4)
{
  unsigned int v6; // ebx
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // ebx
  __int64 v11; // rax

  v6 = Size;
  if ( LODWORD(KsepShimDbLock.FirstArgument) )
  {
    v8 = ((unsigned __int8)_InterlockedExchangeAdd(
                             (volatile signed __int32 *)&AlpcpMessageLogLock.PriorityFloorCounts[8],
                             1u)
        + 1) & 0x3F;
    *(_DWORD *)&AlpcpMessageLogLock.WaitBlockFill6[8 * v8 + 4] = -1073740768;
    *((_DWORD *)&AlpcpMessageLogLock.WaitBlock[0].WaitListEntry.Flink + 2 * v8) = 590049;
    if ( ((__int64)stru_140E66B30.StackBase & 4) != 0 )
      RtlAssert("KsepShimDbDuringBoot == FALSE", "minkernel\\ntos\\kshim\\ksesdb.c", 0xE1u, 0LL);
  }
  if ( KsepShimDbLock.TrapFrame )
  {
    v9 = ((unsigned __int8)_InterlockedExchangeAdd(
                             (volatile signed __int32 *)&AlpcpMessageLogLock.PriorityFloorCounts[8],
                             1u)
        + 1) & 0x3F;
    *(_DWORD *)&AlpcpMessageLogLock.WaitBlockFill6[8 * v9 + 4] = -1073740768;
    *((_DWORD *)&AlpcpMessageLogLock.WaitBlock[0].WaitListEntry.Flink + 2 * v9) = 590050;
    if ( ((__int64)stru_140E66B30.StackBase & 4) != 0 )
      RtlAssert("KsepShimDbHandle == NULL", "minkernel\\ntos\\kshim\\ksesdb.c", 0xE2u, 0LL);
  }
  *(_QWORD *)&KsepShimDbLock.Header.Lock = 0LL;
  LODWORD(KsepShimDbLock.FirstArgument) = 1;
  KsepShimDbLock.TrapFrame = 0LL;
  memset_0(&KsepShimDbLock.SListFaultAddress, 0, 0x70uLL);
  if ( Src && v6 )
  {
    v10 = KsepSdbBootInitialize(Src, v6, (__int64)&KsepShimDbLock.SListFaultAddress);
    if ( v10 >= 0 )
    {
      if ( a3 && a4 )
      {
        if ( (int)KsepSdbBootInitialize(a3, a4, (__int64)&KsepShimDbLock.CurrentRunTime) < 0 )
        {
          v11 = ((unsigned __int8)_InterlockedExchangeAdd(
                                    (volatile signed __int32 *)&AlpcpMessageLogLock.PriorityFloorCounts[8],
                                    1u)
               + 1) & 0x3F;
          *(_DWORD *)&AlpcpMessageLogLock.WaitBlockFill6[8 * v11 + 4] = v10;
          *((_DWORD *)&AlpcpMessageLogLock.WaitBlock[0].WaitListEntry.Flink + 2 * v11) = 590108;
          if ( ((__int64)stru_140E66B30.StackBase & 2) != 0 )
            KsepDebugPrint(1LL, (int)"KSE: KsepSdbBootInitialize failed for patch SDB!\n");
          KsepLogError(1LL, (__int64)"KSE: KsepSdbBootInitialize failed for patch SDB!\n");
        }
        else if ( LODWORD(KsepShimDbLock.CycleTime) >= KsepShimDbLock.SystemCallNumber )
        {
          KsepSdbBootRelease(&KsepShimDbLock.CurrentRunTime);
        }
      }
      ++KsepShimDbRefCount;
      v10 = 0;
      KsepShimDbLock.TrapFrame = (_KTRAP_FRAME *)&KsepShimDbLock.SListFaultAddress;
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v10;
}
