/*
 * XREFs of ?RmpCpuSetManagerCreateClientContext@@YAJPEAU_RM_CPU_SET_MANAGER@@KPEAPEAU_RM_CPU_SET_CLIENT_CONTEXT@@@Z @ 0x1800850D8
 * Callers:
 *     ?RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18007FEE4 (-RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmSrvCpuSetManagerCreateClientContext@@YAJPEAU_RM_SERVICE_GLOBALS@@KPEAPEAX@Z @ 0x180081EB4 (-RmSrvCpuSetManagerCreateClientContext@@YAJPEAU_RM_SERVICE_GLOBALS@@KPEAPEAX@Z.c)
 * Callees:
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x180032320 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 */

__int64 __fastcall RmpCpuSetManagerCreateClientContext(
        struct _RM_CPU_SET_MANAGER *a1,
        int a2,
        struct _RM_CPU_SET_CLIENT_CONTEXT **a3)
{
  _QWORD *Heap; // rax
  unsigned int v7; // r9d
  _QWORD *v8; // r10
  _QWORD *v9; // rax
  struct _RM_CPU_SET_MANAGER *v10; // rax
  struct _RM_CPU_SET_MANAGER **v11; // rdx

  Heap = HampAllocateHeap(0x40uLL);
  v7 = 0;
  v8 = Heap;
  if ( Heap )
  {
    Heap[1] = 0LL;
    Heap[2] = 0LL;
    *((_DWORD *)Heap + 15) = 0;
    *Heap = a1;
    *((_DWORD *)Heap + 14) = a2;
    v9 = Heap + 3;
    v9[1] = v9;
    *v9 = v9;
    v8[6] = v8 + 5;
    v8[5] = v8 + 5;
    v10 = (struct _RM_CPU_SET_MANAGER *)(v8 + 1);
    v11 = (struct _RM_CPU_SET_MANAGER **)*((_QWORD *)a1 + 2);
    if ( *v11 != (struct _RM_CPU_SET_MANAGER *)((char *)a1 + 8) )
      __fastfail(3u);
    *(_QWORD *)v10 = (char *)a1 + 8;
    v8[2] = v11;
    *v11 = v10;
    *((_QWORD *)a1 + 2) = v10;
    *a3 = (struct _RM_CPU_SET_CLIENT_CONTEXT *)v8;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v7;
}
