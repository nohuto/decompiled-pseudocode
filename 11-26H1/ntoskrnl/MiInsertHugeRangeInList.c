/*
 * XREFs of MiInsertHugeRangeInList @ 0x1404881AC
 * Callers:
 *     MiHugeRangeFreeToZero @ 0x1404878B0 (MiHugeRangeFreeToZero.c)
 *     MiHugePurgeZeroList @ 0x140512B18 (MiHugePurgeZeroList.c)
 *     MiAddPartitionHugeRange @ 0x1406EFCE8 (MiAddPartitionHugeRange.c)
 *     MiDereferenceIoHugeRange @ 0x1406F0028 (MiDereferenceIoHugeRange.c)
 *     MiMarkHugePfnBad @ 0x1406F144C (MiMarkHugePfnBad.c)
 *     MiMarkHugePfnGood @ 0x1406F1A84 (MiMarkHugePfnGood.c)
 *     MiMoveBadHugeRangeCrossPartition @ 0x1406F1D1C (MiMoveBadHugeRangeCrossPartition.c)
 *     MiMoveHibernateHugeRangesFreeToZeroCallback @ 0x1406F1EB0 (MiMoveHibernateHugeRangesFreeToZeroCallback.c)
 *     MiReleaseMemoryRuns @ 0x1406F2148 (MiReleaseMemoryRuns.c)
 *     MiInsertHugeRangeInPartition @ 0x14070DB08 (MiInsertHugeRangeInPartition.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiColorGetCache @ 0x140288F60 (MiColorGetCache.c)
 *     MiWakePageZeroing @ 0x14028DC7C (MiWakePageZeroing.c)
 *     MiPageToChannel @ 0x140294DD0 (MiPageToChannel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiHugePfnPartition @ 0x140487CC0 (MiHugePfnPartition.c)
 *     MiGetColorHeadHugeRangeBase @ 0x1404883BC (MiGetColorHeadHugeRangeBase.c)
 *     MiMarkHugeRangeTransition @ 0x14048852C (MiMarkHugeRangeTransition.c)
 *     MiSimpleInsertHugeRange @ 0x1406F2830 (MiSimpleInsertHugeRange.c)
 *     MiUpdateHugePageCounts @ 0x1406F2AC0 (MiUpdateHugePageCounts.c)
 */

void __fastcall MiInsertHugeRangeInList(unsigned __int16 *a1, __int64 a2, char a3)
{
  __int64 v3; // r14
  unsigned __int64 *v7; // r13
  unsigned __int64 v8; // rsi
  unsigned __int16 *v9; // r15
  ULONG_PTR v10; // r14
  __int64 v11; // rbx
  __int64 v12; // rdx
  int v13; // r8d
  __int64 v14; // rbx
  unsigned int v15; // r14d
  int v16; // ebp
  volatile signed __int32 *ColorHeadHugeRangeBase; // rbx
  unsigned int v18; // r11d
  unsigned int Cache; // eax
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v23; // [rsp+68h] [rbp+10h]
  unsigned __int8 v24; // [rsp+70h] [rbp+18h]

  v3 = a2 & 0x3FFFFF;
  v7 = (unsigned __int64 *)(*(_QWORD *)((char *)&stru_140E2ED08.116 + 4) + 8 * v3);
  v8 = *v7;
  if ( a1 )
    v9 = a1;
  else
    v9 = (unsigned __int16 *)MiHugePfnPartition((_QWORD *)(*(_QWORD *)((char *)&stru_140E2ED08.116 + 4) + 8 * v3));
  v10 = v3 << 18;
  v11 = (unsigned int)MiPageToNode(v10);
  v24 = MiPageToChannel(v10);
  v13 = v24 & 1 | (2 * (v11 & 0x3F | 0x200));
  v14 = *((_QWORD *)v9 + 2) + 56320 * v11;
  v23 = v14;
  v22 = (unsigned __int8)(v10 >> 18) | (v13 << 8);
  if ( (a3 & 8) != 0 || !(unsigned int)MiMarkHugeRangeTransition(v10) )
  {
    if ( (v8 & 8) != 0 )
      a3 = a3 & 0xF8 | 4;
    if ( (a3 & 1) != 0 )
    {
      v15 = 0;
    }
    else
    {
      v15 = 5;
      if ( (a3 & 4) == 0 )
        v15 = 1;
    }
    v16 = a3 & 4;
    ColorHeadHugeRangeBase = (volatile signed __int32 *)MiGetColorHeadHugeRangeBase(v14, v12, v15);
    if ( v16 )
    {
      ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E2EC90);
    }
    else
    {
      Cache = MiColorGetCache(v18);
      v22 = 0;
      ColorHeadHugeRangeBase += 2 * Cache;
      while ( _interlockedbittestandset64(ColorHeadHugeRangeBase, 3uLL) )
      {
        do
          KeYieldProcessorEx(&v22);
        while ( (*(_QWORD *)ColorHeadHugeRangeBase & 8) != 0 );
      }
    }
    if ( a1 )
    {
      *v7 = (16LL * *v9) ^ (v8 ^ (16LL * *v9)) & 0xFFFFFFFFFFFF800FuLL;
      MiUpdateHugePageCounts(v9, a2, 1LL);
    }
    MiSimpleInsertHugeRange(ColorHeadHugeRangeBase, v15, a2, 1LL);
    v20 = v23;
    if ( v15 == 5 )
    {
      v21 = 8528LL;
    }
    else
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v23 + 8 * (v24 + 2LL * v15) + 13912));
      v21 = 8524LL;
    }
    _InterlockedIncrement64((volatile signed __int64 *)&v9[v21]);
    if ( v15 == 1 )
      MiWakePageZeroing((__int64)v9, v20);
    if ( v16 )
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2EC90);
    else
      _InterlockedAnd64((volatile signed __int64 *)ColorHeadHugeRangeBase, 0xFFFFFFFFFFFFFFF7uLL);
  }
}
