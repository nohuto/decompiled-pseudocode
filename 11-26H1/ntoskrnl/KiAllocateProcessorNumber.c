/*
 * XREFs of KiAllocateProcessorNumber @ 0x1405F1B14
 * Callers:
 *     KiAllocateProcessorStateInitializationParameters @ 0x1405ECB30 (KiAllocateProcessorStateInitializationParameters.c)
 *     KiConfigureInitialNodes @ 0x1405F1FE8 (KiConfigureInitialNodes.c)
 * Callees:
 *     KiAdjustGroupConfiguration @ 0x1405F1640 (KiAdjustGroupConfiguration.c)
 *     KiAllocateProcessorNumberFromGroup @ 0x1405F1C5C (KiAllocateProcessorNumberFromGroup.c)
 *     KiAllocateSchedulerSubNode @ 0x1405F1CFC (KiAllocateSchedulerSubNode.c)
 *     KiCommitGroupSubNodeAssignments @ 0x1405F1F20 (KiCommitGroupSubNodeAssignments.c)
 *     KiUncommitGroupSubNodeAssignments @ 0x1405F2930 (KiUncommitGroupSubNodeAssignments.c)
 */

__int64 __fastcall KiAllocateProcessorNumber(int a1, __int64 a2)
{
  int v3; // ebx
  unsigned __int16 v4; // bp
  __int64 v5; // rdi
  unsigned __int16 v6; // r8
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 SchedulerSubNode; // rax
  __int64 v10; // r8
  unsigned int v11; // r9d

  v3 = 0;
  v4 = -1;
  v5 = 0LL;
  v6 = 0;
  v7 = KeNodeBlock[a1];
  while ( v6 < (unsigned __int16)KiSubNodeCount )
  {
    v8 = KiSubNodeConfigBlock + 24LL * v6;
    if ( *(unsigned __int16 *)(v8 + 2) == a1
      && (unsigned int)__popcnt(*(_QWORD *)(v8 + 16)) < *(unsigned __int8 *)(v8 + 4) )
    {
      v5 = KiSubNodeConfigBlock + 24LL * v6;
      v4 = v6;
      break;
    }
    ++v6;
  }
  if ( (*(_BYTE *)(v5 + 5) & 2) == 0 )
  {
    KiAdjustGroupConfiguration(v5);
    if ( (*(_BYTE *)(v5 + 5) & 2) == 0 )
    {
      KiCommitGroupSubNodeAssignments(*(unsigned __int16 *)(v5 + 6));
      v3 = 1;
    }
  }
  if ( *(_QWORD *)(KiSubNodes + 8LL * v4) )
    goto LABEL_15;
  SchedulerSubNode = KiAllocateSchedulerSubNode(v5);
  if ( SchedulerSubNode )
  {
    *(_QWORD *)(KiSubNodes + 8LL * v4) = SchedulerSubNode;
    *(_WORD *)(SchedulerSubNode + 142) = *(_WORD *)(v7 + 44);
    *(_QWORD *)(*(_QWORD *)(v7 + 32) + 8LL * (unsigned int)(*(_DWORD *)(v7 + 44))++) = SchedulerSubNode;
LABEL_15:
    KiAllocateProcessorNumberFromGroup(*(unsigned __int16 *)(v5 + 6), a2);
    v11 = 0;
    *(_QWORD *)(v5 + 16) |= 1LL << *(_BYTE *)(a2 + 2);
    return v11;
  }
  v11 = -1073741670;
  if ( v3 )
    KiUncommitGroupSubNodeAssignments(*(unsigned __int16 *)(v5 + 6), 0LL, v10, 3221225626LL);
  return v11;
}
