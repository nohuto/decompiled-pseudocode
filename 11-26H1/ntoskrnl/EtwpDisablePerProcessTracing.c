/*
 * XREFs of EtwpDisablePerProcessTracing @ 0x14082E698
 * Callers:
 *     EtwpDisableTraceProviders @ 0x140913480 (EtwpDisableTraceProviders.c)
 *     EtwpEnableDisableUMGL @ 0x140A99A14 (EtwpEnableDisableUMGL.c)
 * Callees:
 *     PsEnumProcesses @ 0x1409BBF0C (PsEnumProcesses.c)
 */

__int64 __fastcall EtwpDisablePerProcessTracing(int a1)
{
  int v2; // [rsp+38h] [rbp+10h] BYREF
  int v3; // [rsp+3Ch] [rbp+14h]

  v3 = 0;
  v2 = a1;
  return PsEnumProcesses(EtwpUpdateProcessTracingCallback, &v2);
}
