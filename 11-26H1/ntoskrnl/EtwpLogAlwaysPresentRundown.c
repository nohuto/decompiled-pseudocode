/*
 * XREFs of EtwpLogAlwaysPresentRundown @ 0x140A9A15C
 * Callers:
 *     EtwpUpdateSelectedGroupMasks @ 0x1404C6488 (EtwpUpdateSelectedGroupMasks.c)
 *     EtwpLogKernelTraceRundown @ 0x140A99D58 (EtwpLogKernelTraceRundown.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x14032EDF0 (EtwpLogKernelEvent.c)
 */

__int64 __fastcall EtwpLogAlwaysPresentRundown(__int64 a1, unsigned int a2)
{
  if ( (_BYTE)KdDebuggerEnabled )
    EtwpLogKernelEvent(0LL, a1, a2, 0, 0xF3Au, 0x501802u);
  return EtwpLogKernelEvent(0LL, a1, a2, 0, 8u, 0x501802u);
}
