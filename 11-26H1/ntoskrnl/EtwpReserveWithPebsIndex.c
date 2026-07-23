/*
 * XREFs of EtwpReserveWithPebsIndex @ 0x140218D2C
 * Callers:
 *     EtwpLogKernelEvent @ 0x14032EDF0 (EtwpLogKernelEvent.c)
 *     EtwpLogContextSwapEvent @ 0x1404075AC (EtwpLogContextSwapEvent.c)
 * Callees:
 *     EtwpReserveTraceBuffer @ 0x140218740 (EtwpReserveTraceBuffer.c)
 */

__int64 __fastcall EtwpReserveWithPebsIndex(
        unsigned int *a1,
        __int16 a2,
        int a3,
        __int64 a4,
        signed __int64 *a5,
        int a6)
{
  __int16 v6; // bx
  __int64 result; // rax

  v6 = a3 + 24;
  result = EtwpReserveTraceBuffer(a1, a3 + 24, a4, a5, a6);
  if ( result )
  {
    *(_QWORD *)(result + 8) = *a5;
    *(_WORD *)(result + 4) = v6;
    *(_WORD *)(result + 6) = a2;
    *(_DWORD *)result = (unsigned __int8)a6 | 0xC0118000;
    *(_QWORD *)(result + 16) = *(_QWORD *)KeGetCurrentPrcb()->ProfileEventIndexAddress;
    result += 24LL;
  }
  return result;
}
