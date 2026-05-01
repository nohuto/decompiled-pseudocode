/*
 * XREFs of ?RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLICATION@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180083200
 * Callers:
 *     ?RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLICATION@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18008383C (-RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLI.c)
 * Callees:
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000D420 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     ?RmpPartitionAddRemoveHost@@YAJPEAU_RM_PARTITION@@JK@Z @ 0x180031BC0 (-RmpPartitionAddRemoveHost@@YAJPEAU_RM_PARTITION@@JK@Z.c)
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x180032320 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     ?HampHostInitialize@@YAXKPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180033F6C (-HampHostInitialize@@YAXKPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@.c)
 *     ?RmpSystemDereferenceHostWithPsm@@YAXPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x18005CF1C (-RmpSystemDereferenceHostWithPsm@@YAXPEAU_RM_ACTIVITY_HOST@@PEAX@Z.c)
 *     ?RmpSystemReferenceHostWithPsm@@YAJPEAU_RM_ACTIVITY_HOST@@KPEAPEAX@Z @ 0x18005E400 (-RmpSystemReferenceHostWithPsm@@YAJPEAU_RM_ACTIVITY_HOST@@KPEAPEAX@Z.c)
 *     ?RmpEnforcementInfoInitializeCommon@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18005EACC (-RmpEnforcementInfoInitializeCommon@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpObjectHeaderInitialize@@YAXPEAU_RM_OBJECT_HEADER@@_KW4_HAM_OBJECT_TYPE@@@Z @ 0x18005F058 (-RmpObjectHeaderInitialize@@YAXPEAU_RM_OBJECT_HEADER@@_KW4_HAM_OBJECT_TYPE@@@Z.c)
 *     ?HampHostAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800611CC (-HampHostAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 */

__int64 __fastcall RmpActivityHostAllocateAndInitialize(
        struct _RM_SERVICE_GLOBALS *a1,
        struct _RM_PSM_HOST_INFO *a2,
        struct _HAM_APPLICATION *a3,
        char a4,
        struct _RM_ACTIVITY_HOST **a5)
{
  PVOID Heap; // rax
  __int64 v10; // rbx
  int State; // edi
  __int64 *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  void *v15; // rdx

  Heap = HampAllocateHeap(0x5A8uLL);
  v10 = (__int64)Heap;
  if ( Heap )
  {
    memset_0(Heap, 0, 0x5A8uLL);
    *(_QWORD *)(v10 + 48) = a1;
    RmpObjectHeaderInitialize(v10, *((_QWORD *)a2 + 68), 0);
    HampHostInitialize(a4, a2, a3, (struct _RM_HAM_ACTIVITY_HOST *)(v10 + 56));
    v12 = (__int64 *)(v10 + 1120);
    v13 = 2LL;
    v14 = v10 + 1120;
    do
    {
      *(_OWORD *)v14 = 0LL;
      *(_QWORD *)(v14 + 16) = 0LL;
      v12[1] = v14;
      *v12 = v14;
      v14 += 24LL;
      v12 += 3;
      --v13;
    }
    while ( v13 );
    State = RmpPartitionAddRemoveHost((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 312), 1, *((_DWORD *)a2 + 133));
    if ( State < 0
      || (State = RmpEnforcementInfoInitializeCommon((struct _RM_ACTIVITY_HOST *)v10), State < 0)
      || (*(_DWORD *)(v10 + 1252) |= 0x180u,
          State = RmpSystemReferenceHostWithPsm(
                    (struct _RM_ACTIVITY_HOST *)v10,
                    2 * (a4 & 1u) + 1,
                    (void **)(v10 + 1208)),
          State < 0)
      || (State = HampHostAllocateState(
                    (struct _RM_SERVICE_GLOBALS *)((char *)a1 + 2360),
                    (struct _RM_HAM_ACTIVITY_HOST *)(v10 + 56),
                    a4),
          State < 0) )
    {
      v15 = *(void **)(v10 + 1208);
      if ( v15 )
        RmpSystemDereferenceHostWithPsm((struct _RM_ACTIVITY_HOST *)v10, v15);
      HampFreeHeap((void *)v10);
    }
    else
    {
      State = 0;
      *a5 = (struct _RM_ACTIVITY_HOST *)v10;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)State;
}
