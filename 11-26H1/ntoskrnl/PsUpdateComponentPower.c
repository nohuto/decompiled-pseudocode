/*
 * XREFs of PsUpdateComponentPower @ 0x14045A6F0
 * Callers:
 *     PspApplyJobChainLimitsToProcess @ 0x140A8FD18 (PspApplyJobChainLimitsToProcess.c)
 *     PspSetProcessEnergyTrackingStateCallback @ 0x140B20200 (PspSetProcessEnergyTrackingStateCallback.c)
 * Callees:
 *     PoEnergyContextUpdateComponentPower @ 0x1409505D0 (PoEnergyContextUpdateComponentPower.c)
 */

void __fastcall PsUpdateComponentPower(PEPROCESS a1, unsigned int a2, unsigned __int64 a3)
{
  struct _LIST_ENTRY *Flink; // r8
  __int64 v5; // rax
  __int64 v6; // rcx
  volatile signed __int64 *v7; // r10
  signed __int64 v8; // rax
  unsigned int v9; // r9d
  bool v10; // cc
  signed __int64 v11; // rtt
  signed __int64 v12; // [rsp+30h] [rbp+8h]

  if ( !a1 || a1 == PsIdleProcess )
    a1 = PsInitialSystemProcess;
  Flink = a1[3].ProcessListEntry.Flink;
  if ( Flink )
  {
    if ( a2 == 1 )
    {
      if ( !a3 )
        return;
      v5 = 280LL;
      v6 = 64LL;
    }
    else if ( a2 == 2 )
    {
      if ( !a3 )
        return;
      _InterlockedAdd64((volatile signed __int64 *)&Flink[4].Blink, HIDWORD(a3));
      a3 = (unsigned int)a3;
      v5 = 288LL;
      v6 = 88LL;
    }
    else
    {
      switch ( a2 )
      {
        case 3u:
          if ( !a3 )
            return;
          _InterlockedAdd64((volatile signed __int64 *)&Flink[5], HIDWORD(a3));
          a3 = (unsigned int)a3;
          v5 = 296LL;
          v6 = 96LL;
          break;
        case 4u:
        case 5u:
        case 6u:
        case 7u:
        case 8u:
        case 9u:
        case 0xAu:
        case 0xBu:
        case 0xCu:
        case 0xDu:
        case 0xEu:
          PoEnergyContextUpdateComponentPower(a1, a2, a3);
          return;
        default:
          __fastfail(0x25u);
      }
    }
    v7 = (volatile signed __int64 *)((char *)Flink + v5);
    _InterlockedAdd64((volatile signed __int64 *)((char *)Flink + v6), a3);
    if ( (struct _LIST_ENTRY *)((char *)Flink + v5) )
    {
      v8 = *v7;
      v9 = *(&KsepShimDbLock.ReservedPreviousReadyTimeValue + 1);
      v10 = *(&KsepShimDbLock.ReservedPreviousReadyTimeValue + 1) <= (unsigned int)*v7;
      if ( *(&KsepShimDbLock.ReservedPreviousReadyTimeValue + 1) != (unsigned int)*v7 )
        goto LABEL_18;
      if ( (v8 & 0x100000000LL) == 0 )
      {
        do
        {
          v10 = v9 <= (unsigned int)v8;
LABEL_18:
          if ( v10 )
          {
            if ( (unsigned int)v8 - v9 >= 0x20 )
              return;
            HIDWORD(v12) = HIDWORD(v8) | (1 << (v8 - v9));
            if ( HIDWORD(v12) == HIDWORD(v8) )
              return;
            LODWORD(v12) = v8;
          }
          else
          {
            if ( v9 - (unsigned int)v8 >= 0x20 )
              HIDWORD(v12) = 1;
            else
              HIDWORD(v12) = (HIDWORD(v8) << (v9 - v8)) | 1;
            LODWORD(v12) = v9;
          }
          v11 = v8;
          v8 = _InterlockedCompareExchange64(v7, v12, v8);
        }
        while ( v11 != v8 );
      }
    }
  }
}
