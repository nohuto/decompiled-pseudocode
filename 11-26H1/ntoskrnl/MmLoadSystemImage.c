/*
 * XREFs of MmLoadSystemImage @ 0x140A26990
 * Callers:
 *     IoLoadCrashDumpDriver @ 0x1405C7280 (IoLoadCrashDumpDriver.c)
 *     PnprLoadPluginDriver @ 0x1407AF818 (PnprLoadPluginDriver.c)
 *     ExpSetProcessorMicrocodeUpdateInformation @ 0x140833208 (ExpSetProcessorMicrocodeUpdateInformation.c)
 *     NtSetSystemInformation @ 0x140833840 (NtSetSystemInformation.c)
 * Callees:
 *     MmLoadSystemImageEx @ 0x140A269D4 (MmLoadSystemImageEx.c)
 */

__int64 __fastcall MmLoadSystemImage(int a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  if ( (a4 & 0x7FFFFFFC) != 0 )
    return 3221225714LL;
  else
    return MmLoadSystemImageEx(a1, a2, a3, 0, a4, a5, a6);
}
