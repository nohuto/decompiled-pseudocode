/*
 * XREFs of ?ExpLookasideMgrWorkerSetAllocate@@YAJPEAU_EXP_LOOKASIDE_MGR_WORKER_SET@@PEAU_EXP_LOOKASIDE_MGR@@KK@Z @ 0x14084D0B8
 * Callers:
 *     ?ExpLookasideMgrStart@@YAJPEAU_EXP_LOOKASIDE_MGR@@@Z @ 0x14084CFBC (-ExpLookasideMgrStart@@YAJPEAU_EXP_LOOKASIDE_MGR@@@Z.c)
 * Callees:
 *     IoInitializeWorkItem @ 0x14047EE20 (IoInitializeWorkItem.c)
 *     IoSizeofWorkItem @ 0x14049ADE0 (IoSizeofWorkItem.c)
 *     ?ExpLookasideMgrAllocatePoolOnNode@@YAPEAXK_K@Z @ 0x140840B08 (-ExpLookasideMgrAllocatePoolOnNode@@YAPEAXK_K@Z.c)
 *     ?ExpLookasideMgrComputeWorkerSetAffinity@@YAJPEAU_EXP_LOOKASIDE_MGR_WORKER_SET@@G@Z @ 0x14084CE30 (-ExpLookasideMgrComputeWorkerSetAffinity@@YAJPEAU_EXP_LOOKASIDE_MGR_WORKER_SET@@G@Z.c)
 */

__int64 __fastcall ExpLookasideMgrWorkerSetAllocate(
        struct _EXP_LOOKASIDE_MGR_WORKER_SET *a1,
        struct _EXP_LOOKASIDE_MGR *a2,
        int a3,
        int a4)
{
  int v5; // ebp
  __int64 PoolOnNode; // rax
  __int64 result; // rax
  unsigned int v10; // esi
  __int64 v11; // rbp
  __int64 v12; // r13
  __int64 v13; // r12
  struct _IO_WORKITEM *v14; // rax
  struct _IO_WORKITEM *v15; // r14

  v5 = a3;
  *(_OWORD *)a1 = 0LL;
  *(_DWORD *)a1 = a3;
  if ( a3 )
  {
    PoolOnNode = ExpLookasideMgrAllocatePoolOnNode(a4, (unsigned int)(32 * a3));
    *((_QWORD *)a1 + 1) = PoolOnNode;
    if ( !PoolOnNode )
      return 3221225626LL;
    v10 = 0;
    if ( *(_DWORD *)a1 )
    {
      v11 = IoSizeofWorkItem();
      do
      {
        v12 = *((_QWORD *)a1 + 1);
        v13 = 32LL * v10;
        *(_QWORD *)(v13 + v12) = a2;
        *(_DWORD *)(v13 + v12 + 28) = a4;
        v14 = (struct _IO_WORKITEM *)ExpLookasideMgrAllocatePoolOnNode(a4, v11);
        v15 = v14;
        if ( v14 )
          IoInitializeWorkItem((PVOID)ExpSysDbgLock.QuantumTarget, v14);
        ++v10;
        *(_QWORD *)(v13 + v12 + 8) = v15;
      }
      while ( v10 < *(_DWORD *)a1 );
      v5 = a3;
    }
    if ( *((_DWORD *)a2 + 4) )
    {
      *(_DWORD *)(*((_QWORD *)a1 + 1) + 24LL) = 0;
      *(_DWORD *)(*((_QWORD *)a1 + 1) + 56LL) = 1;
      *(_DWORD *)(*((_QWORD *)a1 + 1) + 88LL) = 2;
    }
    else
    {
      result = ExpLookasideMgrComputeWorkerSetAffinity(a1, a4);
      if ( (int)result < 0 )
        return result;
    }
    *((_DWORD *)a2 + 148) += v5;
  }
  return 0LL;
}
