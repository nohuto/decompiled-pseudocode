/*
 * XREFs of IoNotifyDump @ 0x1405C9BE4
 * Callers:
 *     PopSaveHiberContext @ 0x140C01D50 (PopSaveHiberContext.c)
 *     PopRestoreHiberContext @ 0x140C09348 (PopRestoreHiberContext.c)
 *     IoShutdownSystem @ 0x140C12A68 (IoShutdownSystem.c)
 * Callees:
 *     IoNotifyDumpEx @ 0x1405C9BFC (IoNotifyDumpEx.c)
 */

__int64 __fastcall IoNotifyDump(__int64 a1, __int64 a2)
{
  return IoNotifyDumpEx(a1, a2, 0LL);
}
