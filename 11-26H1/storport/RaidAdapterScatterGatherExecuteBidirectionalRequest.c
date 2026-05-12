/*
 * XREFs of RaidAdapterScatterGatherExecuteBidirectionalRequest @ 0x14002B9D4
 * Callers:
 *     RaUnitStartIo @ 0x140013D70 (RaUnitStartIo.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x14001A620 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x14001BC80 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaUnitStartResetIo @ 0x1400A2224 (RaUnitStartResetIo.c)
 * Callees:
 *     RaidDmaBuildScatterGatherList @ 0x14002BB30 (RaidDmaBuildScatterGatherList.c)
 *     RaidDmaGetScatterGatherList @ 0x140030800 (RaidDmaGetScatterGatherList.c)
 */

__int64 __fastcall RaidAdapterScatterGatherExecuteBidirectionalRequest(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v7; // rcx
  unsigned __int64 v8; // r10
  unsigned int v9; // ebx
  __int64 result; // rax

  v3 = *(_QWORD *)(a2 + 168);
  v4 = 0LL;
  v5 = a2;
  if ( *(_BYTE *)(v3 + 2) == 40 && (*(_BYTE *)(v3 + 24) & 0xC0) == 0xC0 )
  {
    a3 = *(unsigned int *)(v3 + 56);
    a2 = 0LL;
    if ( (_DWORD)a3 )
    {
      while ( 1 )
      {
        v7 = *(unsigned int *)(v3 + 4 * a2 + 120);
        v4 = 0LL;
        if ( (unsigned int)v7 >= 0x80 )
        {
          v8 = *(unsigned int *)(v3 + 16);
          if ( (unsigned int)v7 <= (unsigned int)v8 && *(_DWORD *)(v7 + v3) == 1 && v7 + 24 <= v8 )
            break;
        }
        a2 = (unsigned int)(a2 + 1);
        if ( (unsigned int)a2 >= (unsigned int)a3 )
          goto LABEL_11;
      }
      v4 = v7 + v3;
    }
  }
LABEL_11:
  if ( (*(_DWORD *)(a1 + 604) & 8) == 0 && (*(_BYTE *)(a1 + 108) & 4) == 0 )
  {
    LOBYTE(a3) = 1;
    LOBYTE(a2) = 1;
    KeFlushIoBuffers(*(_QWORD *)(v5 + 136), a2, a3);
  }
  v9 = *(_DWORD *)(v4 + 8);
  if ( *(_DWORD *)(v3 + 20) == 23 && *(_DWORD *)(*(_QWORD *)(v5 + 136) + 40LL) > v9 )
    v9 = *(_DWORD *)(*(_QWORD *)(v5 + 136) + 40LL);
  result = RaidDmaBuildScatterGatherList(
             (int)a1 + 896,
             *(_QWORD *)(a1 + 8),
             *(_QWORD *)(v5 + 136),
             *(_QWORD *)(v5 + 192),
             v9,
             (__int64)RaidpAdapterContinueDataBufferScatterGather,
             v5,
             0,
             v5 + 232);
  if ( (_DWORD)result == -1073741789 )
    return RaidDmaGetScatterGatherList(
             (int)a1 + 896,
             *(_QWORD *)(a1 + 8),
             *(_QWORD *)(v5 + 136),
             *(_QWORD *)(v5 + 192),
             v9,
             (__int64)RaidpAdapterContinueDataBufferScatterGather,
             v5,
             0);
  return result;
}
