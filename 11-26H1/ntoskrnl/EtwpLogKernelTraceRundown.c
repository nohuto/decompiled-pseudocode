/*
 * XREFs of EtwpLogKernelTraceRundown @ 0x140A99D58
 * Callers:
 *     EtwpCheckGuidAccessAndDoRundown @ 0x140A99B60 (EtwpCheckGuidAccessAndDoRundown.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x140A99C44 (EtwpCheckLoggerAccessAndDoRundown.c)
 * Callees:
 *     EtwpKernelTraceRundown @ 0x140A99DCC (EtwpKernelTraceRundown.c)
 *     EtwpLogAlwaysPresentRundown @ 0x140A9A15C (EtwpLogAlwaysPresentRundown.c)
 *     EtwpLogGroupMask @ 0x140A9A1C8 (EtwpLogGroupMask.c)
 */

__int64 __fastcall EtwpLogKernelTraceRundown(__int64 a1, __int64 a2, __int64 a3, char a4, __int64 a5, int a6)
{
  int v7; // edi
  unsigned int v8; // esi
  int v10; // r9d

  v7 = a3;
  v8 = a2;
  EtwpLogGroupMask(a1, a2, a3, 32LL);
  LOBYTE(v10) = a4;
  EtwpKernelTraceRundown(v7, a1, v8, v10, a5, a6);
  return EtwpLogAlwaysPresentRundown(a1, v8);
}
