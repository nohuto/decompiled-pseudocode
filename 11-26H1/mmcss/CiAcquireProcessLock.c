/*
 * XREFs of CiAcquireProcessLock @ 0x14000E8C0
 * Callers:
 *     CiProcessSuspend @ 0x140001070 (CiProcessSuspend.c)
 *     CiThreadReferenceTaskIndex @ 0x140003EF0 (CiThreadReferenceTaskIndex.c)
 * Callees:
 *     CiSystemAcquirePushLock @ 0x14000F090 (CiSystemAcquirePushLock.c)
 */

__int64 __fastcall CiAcquireProcessLock(__int64 a1)
{
  return CiSystemAcquirePushLock(a1 + 16);
}
