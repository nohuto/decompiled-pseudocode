/*
 * XREFs of LpcExitProcess @ 0x1409FD5D4
 * Callers:
 *     PspProcessDelete @ 0x140800D10 (PspProcessDelete.c)
 *     PspExitLastThread @ 0x1409FD314 (PspExitLastThread.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x1403C6E00 (PsReturnProcessPagedPoolQuota.c)
 *     AlpcpCleanupProcessViews @ 0x1409FD618 (AlpcpCleanupProcessViews.c)
 */

__int64 __fastcall LpcExitProcess(ULONG_PTR a1)
{
  if ( *(_QWORD *)(a1 + 1432) )
  {
    PsReturnProcessPagedPoolQuota(a1, *(_QWORD *)(a1 + 1432));
    *(_QWORD *)(a1 + 1432) = 0LL;
  }
  return AlpcpCleanupProcessViews(a1);
}
