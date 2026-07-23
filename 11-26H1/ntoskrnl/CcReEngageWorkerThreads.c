/*
 * XREFs of CcReEngageWorkerThreads @ 0x14052DD54
 * Callers:
 *     CcAsyncLazywriteWorker @ 0x140387600 (CcAsyncLazywriteWorker.c)
 *     CcWorkerThread @ 0x140388380 (CcWorkerThread.c)
 *     CcAdjustWriteBehindThreadPool @ 0x1405B34A4 (CcAdjustWriteBehindThreadPool.c)
 * Callees:
 *     ExQueueWorkItemToPartition @ 0x140384E80 (ExQueueWorkItemToPartition.c)
 *     CcReferencePartitionAndPrivateVolumeCacheMap @ 0x140388B84 (CcReferencePartitionAndPrivateVolumeCacheMap.c)
 */

void __fastcall CcReEngageWorkerThreads(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // r15
  unsigned int i; // edi
  _QWORD *v10; // rax
  _QWORD *v11; // r10
  __int64 v12; // rcx
  _QWORD *v13; // r10
  unsigned int j; // edi
  _QWORD *v15; // rax
  _QWORD *v16; // r10
  __int64 v17; // rcx
  _QWORD *v18; // r10

  v4 = *(_QWORD *)(a2 + 16);
  for ( i = 0; i < a3; ++i )
  {
    v10 = (_QWORD *)(a2 + 56);
    v11 = *(_QWORD **)(a2 + 56);
    if ( v11 == (_QWORD *)(a2 + 56) )
      break;
    if ( (_QWORD *)v11[1] != v10 || (v12 = *v11, *(_QWORD **)(*v11 + 8LL) != v11) )
LABEL_13:
      __fastfail(3u);
    *v10 = v12;
    *(_QWORD *)(v12 + 8) = v10;
    ++*(_DWORD *)(a2 + 48);
    CcReferencePartitionAndPrivateVolumeCacheMap(a1, v4);
    *v13 = 0LL;
    ExQueueWorkItemToPartition(v13, 0, *(_DWORD *)(a2 + 24));
  }
  for ( j = 0; j < a4; ++j )
  {
    v15 = (_QWORD *)(a2 + 136);
    v16 = *(_QWORD **)(a2 + 136);
    if ( v16 == (_QWORD *)(a2 + 136) )
      break;
    if ( (_QWORD *)v16[1] != v15 )
      goto LABEL_13;
    v17 = *v16;
    if ( *(_QWORD **)(*v16 + 8LL) != v16 )
      goto LABEL_13;
    *v15 = v17;
    *(_QWORD *)(v17 + 8) = v15;
    ++*(_DWORD *)(a2 + 152);
    CcReferencePartitionAndPrivateVolumeCacheMap(a1, v4);
    *v18 = 0LL;
    ExQueueWorkItemToPartition(v18, 0, *(_DWORD *)(a2 + 24));
  }
}
