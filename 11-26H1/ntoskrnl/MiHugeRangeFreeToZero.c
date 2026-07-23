/*
 * XREFs of MiHugeRangeFreeToZero @ 0x1404878B0
 * Callers:
 *     MiMoveZeroedPage @ 0x140521CB0 (MiMoveZeroedPage.c)
 *     MiCanPageBeScrubbed @ 0x140710AE0 (MiCanPageBeScrubbed.c)
 * Callees:
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiStopPageAccessor @ 0x140487B48 (MiStopPageAccessor.c)
 *     MiHugePfnPartition @ 0x140487CC0 (MiHugePfnPartition.c)
 *     MiLockHugeRangeColorHeadAtDpc @ 0x140487E90 (MiLockHugeRangeColorHeadAtDpc.c)
 *     MiUnlinkHugeRangeEx @ 0x140487ED8 (MiUnlinkHugeRangeEx.c)
 *     MiInsertHugeRangeInList @ 0x1404881AC (MiInsertHugeRangeInList.c)
 */

__int64 __fastcall MiHugeRangeFreeToZero(__int64 a1, char a2, int a3)
{
  unsigned __int64 v4; // rbp
  ULONG_PTR v7; // r12
  volatile signed __int64 *v8; // r15
  unsigned int v9; // eax
  __int64 v10; // r9
  __int64 v11; // r14
  signed __int64 v12; // rax
  signed __int64 v13; // rtt
  __int64 result; // rax
  unsigned __int64 v15; // rcx
  __int64 v16; // rtt
  __int64 v17; // r10
  unsigned __int64 v18; // r9
  volatile signed __int32 *v19; // r8
  __int64 v20; // r10
  unsigned __int64 v21; // r9
  volatile signed __int32 *v22; // r8
  int v23; // ebp
  unsigned __int64 v24; // rcx
  int v25; // ebp
  unsigned __int64 v26; // rcx
  __int64 v27; // [rsp+50h] [rbp+8h]

  v4 = a1 & 0x3FFFFF;
  v7 = *(_QWORD *)((char *)&stru_140E2ED08.116 + 4) + 8 * v4;
  v8 = (volatile signed __int64 *)MiLockHugeRangeColorHeadAtDpc(v7);
  v27 = MiHugePfnPartition(v7);
  v9 = MiPageToNode((unsigned __int64)(unsigned int)v4 << 18);
  v10 = v27;
  v11 = *(_QWORD *)(v27 + 16) + 56320LL * v9;
  if ( !a3 )
  {
LABEL_2:
    v12 = *(_QWORD *)(v11 + 14120);
    do
    {
      v13 = v12;
      v12 = _InterlockedCompareExchange64(
              (volatile signed __int64 *)(v11 + 14120),
              (v12 + 1) ^ (v12 ^ (v12 + 1)) & 0xFFFFFFFFFFFF0000uLL,
              v12);
    }
    while ( v13 != v12 );
    MiUnlinkHugeRangeEx(v10, a1, 0LL);
    _InterlockedAnd64(v8, 0xFFFFFFFFFFFFFFF7uLL);
    MiInsertHugeRangeInList(0LL, a1, 2 - (unsigned int)(a3 != 0));
    result = *(_QWORD *)(v11 + 14120);
    do
    {
      v15 = (result - 1) ^ (result ^ (result - 1)) & 0xFFFFFFFFFFFF0000uLL;
      if ( (_WORD)result == 1 )
        v15 ^= (v15 ^ (v15 + 0x10000)) & 0xFFFFFFFFFFFF0000uLL;
      v16 = result;
      result = _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 14120), v15, result);
    }
    while ( v16 != result );
    return result;
  }
  MiStopPageAccessor(v7);
  if ( (a2 & 2) == 0 )
  {
    v10 = v27;
    goto LABEL_2;
  }
  result = LODWORD(stru_140E2ED08.Timer.TimerListEntry.Flink);
  if ( LODWORD(stru_140E2ED08.Timer.TimerListEntry.Flink) == 1 )
  {
    v17 = v4 & 0x1F;
    LOBYTE(v18) = 1;
    v19 = (volatile signed __int32 *)stru_140E2ED08.WaitBlock[2].WaitListEntry.Blink + (v4 >> 5);
    result = v17 + 1;
    if ( (unsigned __int64)(v17 + 1) > 0x20 )
    {
      if ( (v4 & 0x1F) == 0 )
        goto LABEL_24;
      v25 = v4 & 0x1F;
      result = (unsigned int)(((1 << (32 - v25)) - 1) << v17);
      _InterlockedOr(v19, result);
      v18 = 1LL - (unsigned int)(32 - v25);
      ++v19;
      if ( v18 >= 0x20 )
      {
        v26 = v18 >> 5;
        v18 += -32LL * (v18 >> 5);
        result = 0xFFFFFFFFLL;
        do
        {
          *v19++ = -1;
          --v26;
        }
        while ( v26 );
      }
      if ( v18 )
      {
LABEL_24:
        result = (unsigned int)((1 << v18) - 1);
        _InterlockedOr(v19, result);
      }
    }
    else
    {
      _InterlockedOr(v19, 1 << v17);
    }
  }
  else if ( LODWORD(stru_140E2ED08.Timer.TimerListEntry.Flink) == 3 )
  {
    v20 = v4 & 0x1F;
    LOBYTE(v21) = 1;
    v22 = (volatile signed __int32 *)stru_140E2ED08.WaitBlock[2].WaitListEntry.Blink + (v4 >> 5);
    result = v20 + 1;
    if ( (unsigned __int64)(v20 + 1) > 0x20 )
    {
      if ( (v4 & 0x1F) == 0 )
        goto LABEL_22;
      v23 = v4 & 0x1F;
      result = (unsigned int)~(((1 << (32 - v23)) - 1) << v20);
      _InterlockedAnd(v22, result);
      v21 = 1LL - (unsigned int)(32 - v23);
      ++v22;
      if ( v21 >= 0x20 )
      {
        v24 = v21 >> 5;
        result = -32LL * (v21 >> 5);
        v21 += result;
        do
        {
          *v22++ = 0;
          --v24;
        }
        while ( v24 );
      }
      if ( v21 )
      {
LABEL_22:
        result = (unsigned int)(-1 << v21);
        _InterlockedAnd(v22, result);
      }
    }
    else
    {
      _InterlockedAnd(v22, ~(1 << v20));
    }
  }
  _InterlockedAnd64(v8, 0xFFFFFFFFFFFFFFF7uLL);
  return result;
}
