/*
 * XREFs of EtwpCpuStarvationProvEnableCallback @ 0x1406C3940
 * Callers:
 *     <none>
 * Callees:
 *     KeEtwInitializeCpuStarvationProvider @ 0x1405E8CE4 (KeEtwInitializeCpuStarvationProvider.c)
 */

void __fastcall EtwpCpuStarvationProvEnableCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  if ( ControlCode == 1 )
    KeEtwInitializeCpuStarvationProvider();
}
