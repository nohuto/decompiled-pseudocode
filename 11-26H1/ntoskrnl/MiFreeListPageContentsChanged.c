/*
 * XREFs of MiFreeListPageContentsChanged @ 0x14028D0B0
 * Callers:
 *     MiBeginPageAccessor @ 0x1403CED40 (MiBeginPageAccessor.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiFreeZeroPageToColorHead @ 0x14028D340 (MiFreeZeroPageToColorHead.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

__int64 __fastcall MiFreeListPageContentsChanged(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  ULONG_PTR v4; // rcx
  int v5; // edx
  unsigned __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 result; // rax
  ULONG_PTR v9; // rdx
  volatile signed __int32 *v10; // r9
  ULONG_PTR v11; // r9
  volatile signed __int32 *v12; // r10
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  int v15; // edi
  int v16; // edi
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v4 = 48 * BugCheckParameter2 - 0x220000000000LL;
  v5 = 3;
  if ( (*(_QWORD *)(v4 + 40) & 0x10000000000LL) != 0 )
  {
    v5 = 3 - ((*(_DWORD *)(v4 + 36) >> 27) & 3);
    if ( v5 == 3 )
      v5 = 3;
  }
  v6 = MiPageSizes[v5];
  if ( a2 )
  {
    v7 = 0LL;
  }
  else
  {
    v7 = MiFreeZeroPageToColorHead(BugCheckParameter2);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v7 + 32));
  }
  result = LODWORD(stru_140E2ED08.Timer.TimerListEntry.Flink);
  if ( LODWORD(stru_140E2ED08.Timer.TimerListEntry.Flink) == 1 )
  {
    v11 = BugCheckParameter2 & 0x1F;
    v12 = &stru_140E2ED08.WaitBlock[1].Thread->Header.Lock + (BugCheckParameter2 >> 5);
    result = v11 + v6;
    if ( v11 + v6 > 0x20 )
    {
      if ( (BugCheckParameter2 & 0x1F) != 0 )
      {
        v16 = BugCheckParameter2 & 0x1F;
        result = (unsigned int)(((1 << (32 - v16)) - 1) << v11);
        _InterlockedOr(v12, result);
        v6 -= (unsigned int)(32 - v16);
        ++v12;
      }
      if ( v6 >= 0x20 )
      {
        v14 = v6 >> 5;
        v6 += -32LL * (v6 >> 5);
        result = 0xFFFFFFFFLL;
        do
        {
          *v12++ = -1;
          --v14;
        }
        while ( v14 );
      }
      if ( v6 )
        _InterlockedOr(v12, (1 << v6) - 1);
    }
    else if ( v6 == 32 )
    {
      result = 0xFFFFFFFFLL;
      *v12 = -1;
    }
    else
    {
      _InterlockedOr(v12, ((1 << v6) - 1) << v11);
    }
  }
  else if ( LODWORD(stru_140E2ED08.Timer.TimerListEntry.Flink) == 3 )
  {
    v9 = BugCheckParameter2 & 0x1F;
    v10 = &stru_140E2ED08.WaitBlock[1].Thread->Header.Lock + (BugCheckParameter2 >> 5);
    result = v9 + v6;
    if ( v9 + v6 > 0x20 )
    {
      if ( (BugCheckParameter2 & 0x1F) != 0 )
      {
        v15 = BugCheckParameter2 & 0x1F;
        result = (unsigned int)(32 - v15);
        _InterlockedAnd(v10, ~(((1 << (32 - v15)) - 1) << v9));
        v6 -= result;
        ++v10;
      }
      if ( v6 >= 0x20 )
      {
        v13 = v6 >> 5;
        result = -32LL * (v6 >> 5);
        v6 += result;
        do
        {
          *v10++ = 0;
          --v13;
        }
        while ( v13 );
      }
      if ( v6 )
      {
        result = (unsigned int)(-1 << v6);
        _InterlockedAnd(v10, result);
      }
    }
    else if ( v6 == 32 )
    {
      *v10 = 0;
    }
    else
    {
      _InterlockedAnd(v10, ~(((1 << v6) - 1) << v9));
    }
  }
  if ( v7 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0
      || (result = (unsigned int)PopHibernateInProgress, PopHibernateInProgress) )
    {
      *(_DWORD *)(v7 + 32) = 0;
    }
    else
    {
      return ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(v7 + 32), retaddr);
    }
  }
  return result;
}
