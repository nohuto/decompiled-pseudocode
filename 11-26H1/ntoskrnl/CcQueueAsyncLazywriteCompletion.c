/*
 * XREFs of CcQueueAsyncLazywriteCompletion @ 0x1405B6238
 * Callers:
 *     CcAsyncLazywriteWorkerMulti @ 0x1404B4E10 (CcAsyncLazywriteWorkerMulti.c)
 * Callees:
 *     CcWriteBehindReleaseFile @ 0x140387F44 (CcWriteBehindReleaseFile.c)
 *     CcPostWorkQueueAsyncLazywrite @ 0x140389E24 (CcPostWorkQueueAsyncLazywrite.c)
 *     CcFlushCachePostProcess @ 0x14039B640 (CcFlushCachePostProcess.c)
 */

char __fastcall CcQueueAsyncLazywriteCompletion(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // rbp
  char v5; // di
  __int64 v6; // r14
  char v7; // si

  v4 = *(_QWORD *)(a1 + 16);
  v5 = 0;
  v6 = *(_QWORD *)(a1 + 152);
  v7 = a3;
  if ( (_BYTE)a2 )
    CcFlushCachePostProcess(*(__int64 **)(a1 + 16), a2, a3);
  if ( v7 )
    v5 = CcWriteBehindReleaseFile(v4, a2, a3, a4);
  *(_DWORD *)(a1 + 128) = 8;
  *(_BYTE *)(a1 + 72) = v7;
  CcPostWorkQueueAsyncLazywrite(a1, v6 + 384, a3, (__int64)a4);
  return v5;
}
