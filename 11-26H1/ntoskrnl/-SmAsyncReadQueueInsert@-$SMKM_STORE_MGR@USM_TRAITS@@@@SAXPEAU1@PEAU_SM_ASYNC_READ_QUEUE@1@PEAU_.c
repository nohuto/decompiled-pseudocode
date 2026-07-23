/*
 * XREFs of ?SmAsyncReadQueueInsert@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_ASYNC_READ_QUEUE@1@PEAU_SM_ASYNC_DIRECT_READ_CTX@1@K@Z @ 0x140203D98
 * Callers:
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x1402806B0 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 * Callees:
 *     ExQueueWorkItemToPrivatePool @ 0x140203F38 (ExQueueWorkItemToPrivatePool.c)
 *     KeQueryActiveProcessorCountEx @ 0x140211F80 (KeQueryActiveProcessorCountEx.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 */

ULONG_PTR *__fastcall SMKM_STORE_MGR<SM_TRAITS>::SmAsyncReadQueueInsert(
        __int64 a1,
        __int64 a2,
        ULONG_PTR a3,
        unsigned int a4)
{
  KSPIN_LOCK *v5; // r15
  __int64 v7; // rdi
  int v8; // eax
  KIRQL v9; // r12
  unsigned __int64 v10; // rbx
  ULONG_PTR *result; // rax
  _QWORD *v12; // rcx
  ULONG_PTR *v13; // rdx
  ULONG_PTR BugCheckParameter2[2]; // [rsp+30h] [rbp-10h] BYREF

  BugCheckParameter2[1] = (ULONG_PTR)BugCheckParameter2;
  v5 = (KSPIN_LOCK *)(a2 + 768);
  v7 = a2 + 24LL * a4;
  BugCheckParameter2[0] = 0LL;
  v8 = *(_DWORD *)(a3 + 40);
  *(_DWORD *)(a3 + 32) ^= ((unsigned __int8)a4 ^ (unsigned __int8)*(_DWORD *)(a3 + 32)) & 7;
  *(_DWORD *)(a3 + 40) = v8 ^ ((unsigned __int8)v8 ^ (unsigned __int8)(a4 >> 3)) & 3;
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 768));
  if ( *(_DWORD *)(v7 + 16) || *(_DWORD *)(v7 + 20) )
  {
    *(_QWORD *)a3 = **(_QWORD **)(v7 + 8) + 1LL;
    **(_QWORD **)(v7 + 8) = a3;
    *(_QWORD *)(v7 + 8) = a3;
    v10 = *(_QWORD *)a3;
    if ( v10 >= KeQueryActiveProcessorCountEx(0xFFFFu) && *(_QWORD *)(v7 + 8) != v7 )
    {
      BugCheckParameter2[0] = *(_QWORD *)v7;
      BugCheckParameter2[1] = *(_QWORD *)(v7 + 8);
      *(_QWORD *)(v7 + 8) = v7;
      *(_QWORD *)v7 = 0LL;
    }
  }
  else
  {
    v13 = (ULONG_PTR *)BugCheckParameter2[1];
    *(_QWORD *)a3 = *(_QWORD *)BugCheckParameter2[1] + 1LL;
    *v13 = a3;
    BugCheckParameter2[1] = a3;
  }
  *(_DWORD *)(v7 + 16) += *(_QWORD *)BugCheckParameter2[1];
  KeReleaseSpinLock(v5, v9);
  while ( 1 )
  {
    result = BugCheckParameter2;
    if ( (ULONG_PTR *)BugCheckParameter2[1] == BugCheckParameter2 )
      break;
    v12 = (_QWORD *)BugCheckParameter2[0];
    BugCheckParameter2[0] = *(_QWORD *)BugCheckParameter2[0];
    if ( v12 == (_QWORD *)BugCheckParameter2[1] )
    {
      BugCheckParameter2[0] = 0LL;
      BugCheckParameter2[1] = (ULONG_PTR)BugCheckParameter2;
    }
    else
    {
      --*(_QWORD *)BugCheckParameter2[1];
    }
    v12[3] = v12;
    v12[2] = SMKM_STORE_MGR<SM_TRAITS>::SmAsyncReadQueueWorker;
    *v12 = 0LL;
    ExQueueWorkItemToPrivatePool((ULONG_PTR)v12, *(_QWORD *)(a1 + 2208));
  }
  return result;
}
