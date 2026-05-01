/*
 * XREFs of ?RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLICATION@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18008383C
 * Callers:
 *     ?RmHamFindOrCreateActivityHost@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLICATION@@KW4_HOST_GROUP@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18007F868 (-RmHamFindOrCreateActivityHost@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPL.c)
 * Callees:
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000D420 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     ?RmpPsmAppFamilyTableCheckDelete@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY@@@Z @ 0x180031570 (-RmpPsmAppFamilyTableCheckDelete@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY@@@Z.c)
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x180032320 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     ?RmpPsmAppFamilyTableFindOrCreate@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_PSM_APP_FAMILY@@@Z @ 0x180032778 (-RmpPsmAppFamilyTableFindOrCreate@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM.c)
 *     ?RmpPsmAppFamilyTableTryRemoveActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800328D0 (-RmpPsmAppFamilyTableTryRemoveActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostIsPple@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180033A1C (-RmpActivityHostIsPple@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostAddToTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800594C0 (-RmpActivityHostAddToTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostCleanupCommonState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180063A78 (-RmpActivityHostCleanupCommonState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLICATION@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180083200 (-RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAU_H.c)
 */

__int64 __fastcall RmpActivityHostCreateHostPsm(
        struct _RM_SERVICE_GLOBALS *a1,
        struct _RM_PSM_HOST_INFO *a2,
        struct _HAM_APPLICATION *a3,
        char a4,
        struct _RM_ACTIVITY_HOST **a5)
{
  int v9; // edi
  struct _RM_PSM_APP_FAMILY *v10; // rdi
  struct _RM_PSM_APP_FAMILY *v11; // rsi
  struct _RM_ACTIVITY_HOST *v12; // rbx
  _QWORD *Heap; // rax
  struct _RM_ACTIVITY_HOST *v14; // rbx
  struct _RM_ACTIVITY_HOST *v16; // [rsp+30h] [rbp-18h] BYREF
  struct _RM_PSM_APP_FAMILY *v17; // [rsp+38h] [rbp-10h] BYREF

  v17 = 0LL;
  v16 = 0LL;
  v9 = RmpPsmAppFamilyTableFindOrCreate(a1, a2, &v17);
  if ( v9 < 0 )
  {
    v11 = v17;
    goto LABEL_18;
  }
  v9 = RmpActivityHostAllocateAndInitialize(a1, a2, a3, a4, &v16);
  if ( v9 < 0 )
  {
    v11 = v17;
  }
  else
  {
    v10 = v17;
    v11 = 0LL;
    if ( !*((_QWORD *)v17 + 69) )
    {
      v12 = v16;
      *((_QWORD *)v17 + 69) = v16;
LABEL_8:
      if ( RmpActivityHostIsPple(v12) )
        *((_QWORD *)v10 + 71) = v12;
      QueryUnbiasedInterruptTime((PULONGLONG)v12 + 179);
      if ( _InterlockedIncrement64((volatile signed __int64 *)v12 + 2) <= 1 )
        __fastfail(0xEu);
      RmpActivityHostAddToTables(v12);
      *a5 = v12;
      v14 = 0LL;
      v9 = 0;
      goto LABEL_15;
    }
    Heap = HampAllocateHeap(0x10uLL);
    if ( Heap )
    {
      Heap[1] = 0LL;
      v12 = v16;
      *Heap = v16;
      Heap[1] = *((_QWORD *)v10 + 70);
      *((_QWORD *)v10 + 70) = Heap + 1;
      goto LABEL_8;
    }
    v9 = -1073741801;
  }
  v14 = v16;
LABEL_15:
  if ( v14 )
  {
    RmpPsmAppFamilyTableTryRemoveActivityHost(v14);
    RmpActivityHostCleanupCommonState(v14);
    HampFreeHeap(v14);
  }
LABEL_18:
  if ( v11 )
    RmpPsmAppFamilyTableCheckDelete(a1, v11);
  return (unsigned int)v9;
}
