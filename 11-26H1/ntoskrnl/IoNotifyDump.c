/*
 * XREFs of IoNotifyDump @ 0x1405C7314
 * Callers:
 *     PopSaveHiberContext @ 0x140BFBD50 (PopSaveHiberContext.c)
 *     PopRestoreHiberContext @ 0x140C03138 (PopRestoreHiberContext.c)
 *     IoShutdownSystem @ 0x140C0C858 (IoShutdownSystem.c)
 * Callees:
 *     IoNotifyDumpEx @ 0x1405C732C (IoNotifyDumpEx.c)
 */

__int64 __fastcall IoNotifyDump(__int64 a1, __int64 a2)
{
  return IoNotifyDumpEx(a1, a2, 0LL);
}
