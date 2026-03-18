/*
 * XREFs of LpcExitProcess @ 0x140A41C24
 * Callers:
 *     PspProcessDelete @ 0x1407FB2E0 (PspProcessDelete.c)
 *     PspExitLastThread @ 0x140A41964 (PspExitLastThread.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x1403BCF90 (PsReturnProcessPagedPoolQuota.c)
 *     AlpcpCleanupProcessViews @ 0x140A41C68 (AlpcpCleanupProcessViews.c)
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
