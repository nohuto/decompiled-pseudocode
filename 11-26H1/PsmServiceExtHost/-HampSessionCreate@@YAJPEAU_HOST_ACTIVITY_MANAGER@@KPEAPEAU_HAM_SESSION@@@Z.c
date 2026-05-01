/*
 * XREFs of ?HampSessionCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z @ 0x180049814
 * Callers:
 *     ?HampUserFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAT_RM_SID@@KPEAPEAU_HAM_USER@@@Z @ 0x18003738C (-HampUserFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAT_RM_SID@@KPEAPEAU_HAM_USER@@@Z.c)
 *     ?HampAppFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@KPEAPEAU_HAM_APPLICATION@@@Z @ 0x180037690 (-HampAppFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@KPEAPEAU_HAM_APP.c)
 *     ?HampSessionFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z @ 0x18004975C (-HampSessionFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z.c)
 * Callees:
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x180032320 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     CemRcObjectDereference @ 0x180038DE0 (CemRcObjectDereference.c)
 *     ?HampSessionInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KPEAU_HAM_SESSION@@@Z @ 0x1800498A8 (-HampSessionInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KPEAU_HAM_SESSION@@@Z.c)
 *     ?HampSystemBamStart@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_SESSION@@@Z @ 0x180049930 (-HampSystemBamStart@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_SESSION@@@Z.c)
 */

__int64 __fastcall HampSessionCreate(struct _HOST_ACTIVITY_MANAGER *a1, unsigned int a2, struct _HAM_SESSION **a3)
{
  struct _HAM_SESSION *Heap; // rax
  unsigned int v7; // ebx
  struct _HAM_SESSION *v8; // rdi
  int v9; // eax
  int v10; // esi

  Heap = (struct _HAM_SESSION *)HampAllocateHeap(0x98uLL);
  v7 = 0;
  v8 = Heap;
  if ( Heap )
  {
    HampSessionInitialize(a1, a2, Heap);
    v9 = HampSystemBamStart(a1, v8);
    v10 = 0;
    if ( v9 < 0 )
      v10 = v9;
    if ( v10 >= 0 )
    {
      *a3 = v8;
    }
    else
    {
      CemRcObjectDereference(v8);
      return (unsigned int)v10;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v7;
}
