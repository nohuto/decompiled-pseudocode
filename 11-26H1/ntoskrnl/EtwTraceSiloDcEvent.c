/*
 * XREFs of EtwTraceSiloDcEvent @ 0x1404B4AA4
 * Callers:
 *     PsPerfLogSessionRundown @ 0x140804B5C (PsPerfLogSessionRundown.c)
 *     CmpLogHiveRundownEvent @ 0x14085B75C (CmpLogHiveRundownEvent.c)
 *     MmIdentifyPhysicalMemory @ 0x14086E774 (MmIdentifyPhysicalMemory.c)
 *     MmLogQueryCombineStats @ 0x140A5D5AC (MmLogQueryCombineStats.c)
 *     CmEtwRunDown @ 0x140B07438 (CmEtwRunDown.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x14032EDF0 (EtwpLogKernelEvent.c)
 */

__int64 __fastcall EtwTraceSiloDcEvent(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int16 a5,
        unsigned int a6)
{
  return EtwpLogKernelEvent(a1, a3, a4, a2, a5, a6);
}
