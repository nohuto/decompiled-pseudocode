/*
 * XREFs of RtlInitializeSListHead @ 0x180075D90
 * Callers:
 *     RtlpSubSegmentDebugInitialize @ 0x1800753AC (RtlpSubSegmentDebugInitialize.c)
 *     RtlStdInitializeStackDatabase @ 0x180075850 (RtlStdInitializeStackDatabase.c)
 *     RtlpHpVsSlotCreate @ 0x180075AE0 (RtlpHpVsSlotCreate.c)
 *     RtlCreateMemoryBlockLookaside @ 0x180075B80 (RtlCreateMemoryBlockLookaside.c)
 *     RtlResetMemoryBlockLookaside @ 0x1801404A0 (RtlResetMemoryBlockLookaside.c)
 *     RtlAllocateMemoryBlockLookaside @ 0x18016E010 (RtlAllocateMemoryBlockLookaside.c)
 * Callees:
 *     RtlRaiseStatus @ 0x18004A7C0 (RtlRaiseStatus.c)
 */

void __stdcall RtlInitializeSListHead(PSLIST_HEADER ListHead)
{
  if ( ((unsigned __int8)ListHead & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  *ListHead = 0LL;
}
