/*
 * XREFs of CiReleaseTaskIndexListLock @ 0x14000F820
 * Callers:
 *     CiTaskIndexDereference @ 0x140003BB0 (CiTaskIndexDereference.c)
 * Callees:
 *     <none>
 */

__int64 CiReleaseTaskIndexListLock()
{
  WPP_MAIN_CB.Dpc.ProcessorHistory = 0LL;
  return ExReleasePushLockExclusiveEx(&WPP_MAIN_CB.Dpc.DpcListEntry, 0LL);
}
