/*
 * XREFs of EtwpDisablePerProcessTracing @ 0x140828458
 * Callers:
 *     EtwpDisableTraceProviders @ 0x1409378E0 (EtwpDisableTraceProviders.c)
 *     EtwpEnableDisableUMGL @ 0x140A6D758 (EtwpEnableDisableUMGL.c)
 * Callees:
 *     PsEnumProcesses @ 0x14096E8BC (PsEnumProcesses.c)
 */

__int64 __fastcall EtwpDisablePerProcessTracing(int a1)
{
  int v2; // [rsp+38h] [rbp+10h] BYREF
  int v3; // [rsp+3Ch] [rbp+14h]

  v3 = 0;
  v2 = a1;
  return PsEnumProcesses(EtwpUpdateProcessTracingCallback, &v2);
}
