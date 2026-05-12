/*
 * XREFs of RaAdapterStartPowerIo @ 0x1400118E8
 * Callers:
 *     RaidPowerPassToMiniPort @ 0x140011518 (RaidPowerPassToMiniPort.c)
 * Callees:
 *     RaidZeroXrb @ 0x140011A50 (RaidZeroXrb.c)
 *     RaidXrbDeallocateResources @ 0x1400127A0 (RaidXrbDeallocateResources.c)
 *     RaidAdapterPostScatterGatherExecute @ 0x140015840 (RaidAdapterPostScatterGatherExecute.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x14001A620 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     WPP_SF_qqD @ 0x14005BAF8 (WPP_SF_qqD.c)
 */

__int64 __fastcall RaAdapterStartPowerIo(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbx
  int *v7; // rsi
  __int64 v10; // r15
  char v11; // al
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // r8d
  int v15; // eax
  unsigned int v16; // ebp

  v5 = *(_QWORD *)(a4 + 16);
  v7 = *(int **)(a1 + 64);
  v10 = 0LL;
  RaidZeroXrb(v5, a2, 0LL, 0LL);
  v11 = *(_BYTE *)(v5 + 16) & 0xE7;
  *(_QWORD *)(v5 + 160) = a2;
  *(_QWORD *)(v5 + 168) = a3;
  *(_BYTE *)(v5 + 16) = v11 | 4;
  *(_QWORD *)(v5 + 216) = v7;
  *(_QWORD *)(v5 + 104) = 0LL;
  if ( *(_BYTE *)(a3 + 2) == 40 )
  {
    v10 = a3;
    *(_QWORD *)(v5 + 176) = *(_QWORD *)(a3 + 80);
    *(_QWORD *)(v5 + 184) = *(_QWORD *)(a3 + 64);
    *(_QWORD *)(a3 + 96) = v5;
    *(_QWORD *)(a3 + 80) = a2;
  }
  else
  {
    *(_QWORD *)(v5 + 176) = *(_QWORD *)(a3 + 48);
    *(_QWORD *)(v5 + 184) = *(_QWORD *)(a3 + 24);
    *(_QWORD *)(a3 + 48) = v5;
  }
  v12 = 79LL;
  v13 = *(_QWORD *)(a4 + 8);
  v14 = *v7;
  if ( *(_BYTE *)(a3 + 2) == 40 )
  {
    if ( v14 != 1314275652 )
      v12 = 131LL;
    if ( ((v7[v12] + 7) & 0xFFFFFFF8) != 0 )
      *(_QWORD *)(a3 + 104) = v13;
  }
  else
  {
    if ( v14 != 1314275652 )
      v12 = 131LL;
    if ( ((v7[v12] + 7) & 0xFFFFFFF8) != 0 )
      *(_QWORD *)(a3 + 56) = v13;
  }
  *(_QWORD *)(v5 + 656) = a5;
  if ( *((_BYTE *)v7 + 4434) )
    v15 = RaidAdapterRaiseIrqlAndExecuteXrb(v7, v5);
  else
    v15 = RaidAdapterPostScatterGatherExecute(v7, v5);
  v16 = v15;
  if ( v15 < 0 )
  {
    if ( *(_BYTE *)(a3 + 2) == 40 )
    {
      *(_QWORD *)(v10 + 64) = *(_QWORD *)(v5 + 184);
    }
    else
    {
      *(_QWORD *)(a3 + 48) = *(_QWORD *)(v5 + 176);
      *(_QWORD *)(a3 + 24) = *(_QWORD *)(v5 + 184);
    }
    RaidXrbDeallocateResources(v5, 0LL);
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_qqD(
        WPP_GLOBAL_Control->AttachedDevice,
        10LL,
        &WPP_1c5ab61e0b3334897529fa80e10aa52d_Traceguids,
        v7,
        a2,
        *(_DWORD *)(a2 + 48));
    }
  }
  return v16;
}
