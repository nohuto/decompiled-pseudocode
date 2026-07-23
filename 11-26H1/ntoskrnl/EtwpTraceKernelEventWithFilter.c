/*
 * XREFs of EtwpTraceKernelEventWithFilter @ 0x1404C7F18
 * Callers:
 *     EtwTraceObjectOperation @ 0x14042D490 (EtwTraceObjectOperation.c)
 *     EtwTraceObject @ 0x14082DD04 (EtwTraceObject.c)
 *     EtwpTraceHandle @ 0x140A87B14 (EtwpTraceHandle.c)
 *     EtwTraceDuplicateHandle @ 0x140AD3AE0 (EtwTraceDuplicateHandle.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x14032EDF0 (EtwpLogKernelEvent.c)
 */

__int64 __fastcall EtwpTraceKernelEventWithFilter(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int16 a4,
        unsigned int a5)
{
  __int64 result; // rax
  unsigned int v9; // ebx
  bool i; // zf

  result = EtwpHostSiloState;
  v9 = a3 & *(_DWORD *)(EtwpHostSiloState + 4520);
  for ( i = !_BitScanForward((unsigned int *)&a3, v9); !i; i = !_BitScanForward((unsigned int *)&a3, v9) )
  {
    v9 &= v9 - 1;
    result = EtwpLogKernelEvent(
               a1,
               EtwpHostSiloState,
               *(unsigned __int8 *)(EtwpHostSiloState + 2 * a3 + 4504),
               a2,
               a4,
               a5);
  }
  return result;
}
