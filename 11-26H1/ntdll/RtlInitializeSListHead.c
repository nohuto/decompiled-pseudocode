/*
 * XREFs of RtlInitializeSListHead @ 0x180096990
 * Callers:
 *     RtlpSubSegmentDebugInitialize @ 0x180095F9C (RtlpSubSegmentDebugInitialize.c)
 *     RtlStdInitializeStackDatabase @ 0x180096440 (RtlStdInitializeStackDatabase.c)
 *     RtlpHpVsSlotCreate @ 0x1800966D0 (RtlpHpVsSlotCreate.c)
 *     RtlCreateMemoryBlockLookaside @ 0x180096780 (RtlCreateMemoryBlockLookaside.c)
 *     RtlResetMemoryBlockLookaside @ 0x1801403A0 (RtlResetMemoryBlockLookaside.c)
 *     RtlAllocateMemoryBlockLookaside @ 0x18016D010 (RtlAllocateMemoryBlockLookaside.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180034D40 (RtlRaiseStatus.c)
 */

void __stdcall RtlInitializeSListHead(PSLIST_HEADER ListHead)
{
  if ( ((unsigned __int8)ListHead & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  *ListHead = 0LL;
}
