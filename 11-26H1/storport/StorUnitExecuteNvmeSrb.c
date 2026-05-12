/*
 * XREFs of StorUnitExecuteNvmeSrb @ 0x1400034B4
 * Callers:
 *     RaDriverScsiIrp @ 0x140003DF0 (RaDriverScsiIrp.c)
 *     RaUnitScsiIrp @ 0x140004D30 (RaUnitScsiIrp.c)
 * Callees:
 *     RaidZeroXrb @ 0x140011A50 (RaidZeroXrb.c)
 *     RaidAdapterPostScatterGatherExecute @ 0x140015840 (RaidAdapterPostScatterGatherExecute.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x14001A620 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     StorAllocateContiguousIoResources @ 0x14001B548 (StorAllocateContiguousIoResources.c)
 *     RaidAdapterMapBuffers @ 0x140027920 (RaidAdapterMapBuffers.c)
 *     RaAllocateIoResource @ 0x14002AFF0 (RaAllocateIoResource.c)
 *     RaidAdapterPoFxActivateComponent @ 0x14003DA54 (RaidAdapterPoFxActivateComponent.c)
 */

__int64 __fastcall StorUnitExecuteNvmeSrb(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rbx
  int v8; // eax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 ContiguousIoResources; // rax
  __int64 v14; // rdx
  __int64 v15; // rbx
  __int64 v16; // r14
  __int64 v17; // rax
  __int64 v18; // rcx
  char v19; // al
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 24);
  ProcNumber = 0;
  v5 = *(_QWORD *)(a2 + 184);
  v6 = *(_QWORD *)(v5 + 8);
  *(_BYTE *)(v5 + 3) |= 1u;
  *(_BYTE *)(v6 + 3) = 0;
  v7 = *(unsigned int *)(v6 + 120);
  *(_QWORD *)(*(_QWORD *)(a2 + 184) + 24LL) = 0LL;
  if ( *(_BYTE *)(v6 + 2) != 40 )
    return 3221225473LL;
  if ( DisableIEEE1667 )
  {
    if ( *(_BYTE *)(v7 + v6 + 80) == 1 )
    {
      v8 = (unsigned __int8)*(_DWORD *)(v7 + v6 + 16);
      if ( (v8 == 129 || v8 == 130) && *(_BYTE *)(v7 + v6 + 59) == 0xEE )
        return 3221225659LL;
    }
  }
  KeGetCurrentProcessorNumberEx(&ProcNumber);
  *(struct _PROCESSOR_NUMBER *)(v6 + 96) = ProcNumber;
  v11 = *(_QWORD *)(a2 + 184);
  *(_BYTE *)(a2 + 141) = -88;
  *(_QWORD *)(v11 + 8) = v6;
  if ( *(_BYTE *)(v7 + v6 + 80) == 1 )
  {
    v12 = 316LL;
    if ( *(_DWORD *)v2 != 1314275652 )
      v12 = 524LL;
    ContiguousIoResources = StorAllocateContiguousIoResources(
                              ((*(_DWORD *)(v12 + v2) + 7) & 0xFFFFFFF8) + 1200,
                              v10,
                              v2);
  }
  else
  {
    ContiguousIoResources = RaAllocateIoResource(*(_QWORD *)(a1 + 728) + 64LL);
  }
  if ( !ContiguousIoResources )
    return 3221225473LL;
  v15 = ContiguousIoResources + 48;
  v16 = ContiguousIoResources + 1200;
  RaidZeroXrb(ContiguousIoResources + 48, v14, 0LL, 0LL);
  v17 = 104LL;
  if ( *(_BYTE *)(v6 + 2) != 40 )
    v17 = 40LL;
  v18 = *(_QWORD *)(v17 + v6);
  *(_QWORD *)(v15 + 160) = a2;
  *(_QWORD *)(v15 + 168) = v6;
  *(_QWORD *)(v15 + 224) = a1;
  *(_QWORD *)(v15 + 104) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(v15 + 136) = 0LL;
  *(_QWORD *)(v15 + 768) = v18;
  if ( (*(_BYTE *)(v2 + 4724) & 1) != 0 )
  {
    *(_DWORD *)(v15 + 20) = *(_DWORD *)(v6 + 96);
  }
  else
  {
    *(_WORD *)(v15 + 20) = -1;
    *(_BYTE *)(v15 + 22) = -1;
  }
  v19 = *(_BYTE *)(v15 + 16);
  *(_DWORD *)(v15 + 24) = 0;
  *(_BYTE *)(v15 + 16) = v19 & 0xE3 | 4;
  *(_QWORD *)(v15 + 176) = *(_QWORD *)(v6 + 80);
  *(_QWORD *)(v15 + 184) = *(_QWORD *)(v6 + 64);
  *(_QWORD *)(v15 + 192) = 0LL;
  *(_QWORD *)(v6 + 96) = v15;
  *(_QWORD *)(v6 + 104) = v16;
  RaidAdapterMapBuffers(v2, a2);
  *(_QWORD *)(v15 + 656) = StorUnitExecuteNvmeSrbComplete;
  if ( *(_QWORD *)(v2 + 5024) )
    RaidAdapterPoFxActivateComponent(v2, 0LL, 1LL);
  if ( *(_BYTE *)(v2 + 4434) )
    RaidAdapterRaiseIrqlAndExecuteXrb(v2, v15);
  else
    RaidAdapterPostScatterGatherExecute(v2, v15);
  return 259LL;
}
