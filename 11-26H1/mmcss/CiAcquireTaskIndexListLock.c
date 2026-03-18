/*
 * XREFs of CiAcquireTaskIndexListLock @ 0x14000E8E0
 * Callers:
 *     CiTaskIndexDereference @ 0x140003BB0 (CiTaskIndexDereference.c)
 * Callees:
 *     CiSystemAcquirePushLock @ 0x14000F090 (CiSystemAcquirePushLock.c)
 */

__int64 CiAcquireTaskIndexListLock()
{
  return CiSystemAcquirePushLock(&WPP_MAIN_CB.Dpc.DpcListEntry);
}
