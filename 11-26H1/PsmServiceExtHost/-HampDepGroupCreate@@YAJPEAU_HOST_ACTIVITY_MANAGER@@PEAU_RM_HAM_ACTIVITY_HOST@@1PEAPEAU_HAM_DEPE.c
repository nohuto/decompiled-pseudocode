/*
 * XREFs of ?HampDepGroupCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@1PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18001B6B0
 * Callers:
 *     ?HampDepGroupEnsureHostDisposition@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180019ACC (-HampDepGroupEnsureHostDisposition@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@.c)
 * Callees:
 *     ?HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180016FF8 (-HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupEnterStateChangeUnsafe@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180017F2C (-HampDepGroupEnterStateChangeUnsafe@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupAddHost@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180019884 (-HampDepGroupAddHost@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x180032320 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     CempLockInitialize @ 0x180034D44 (CempLockInitialize.c)
 *     ?HampManagerAddDependencyGroup@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18006D334 (-HampManagerAddDependencyGroup@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 */

__int64 __fastcall HampDepGroupCreate(
        struct _HOST_ACTIVITY_MANAGER *a1,
        struct _RM_HAM_ACTIVITY_HOST *a2,
        struct _RM_HAM_ACTIVITY_HOST *a3,
        struct _HAM_DEPENDENCY_GROUP **a4)
{
  signed __int64 *Heap; // rax
  unsigned int v9; // edi
  signed __int64 *v10; // rbx
  signed __int64 v11; // rax
  int v12; // eax
  int v13; // esi

  Heap = (signed __int64 *)HampAllocateHeap(0x88uLL);
  v9 = 0;
  v10 = Heap;
  if ( Heap )
  {
    memset_0(Heap, 0, 0x88uLL);
    v11 = _InterlockedIncrement64(&NextDependencyGroupId);
    v10[4] = (signed __int64)a1;
    *v10 = v11;
    CempLockInitialize(v10 + 1);
    RtlInitializeConditionVariable(v10 + 3);
    v10[7] = 0LL;
    v10[8] = 0LL;
    v10[9] = 0LL;
    v10[10] = 0LL;
    v10[12] = 1LL;
    v12 = TpAllocWork(v10 + 15, HampDepGroupStateWorker, v10, 0LL);
    v13 = 0;
    if ( v12 < 0 )
      v13 = v12;
    if ( v13 < 0 )
    {
      HampDepGroupDereference((struct _HAM_DEPENDENCY_GROUP *)v10);
      return (unsigned int)v13;
    }
    else
    {
      HampDepGroupEnterStateChangeUnsafe((struct _HAM_DEPENDENCY_GROUP *)v10);
      ++v10[14];
      HampDepGroupAddHost((struct _HAM_DEPENDENCY_GROUP *)v10, a2);
      HampDepGroupAddHost((struct _HAM_DEPENDENCY_GROUP *)v10, a3);
      HampManagerAddDependencyGroup(a1, (struct _HAM_DEPENDENCY_GROUP *)v10);
      *a4 = (struct _HAM_DEPENDENCY_GROUP *)v10;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v9;
}
