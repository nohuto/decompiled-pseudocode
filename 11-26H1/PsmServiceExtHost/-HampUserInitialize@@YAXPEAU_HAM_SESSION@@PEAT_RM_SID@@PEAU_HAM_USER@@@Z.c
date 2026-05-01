/*
 * XREFs of ?HampUserInitialize@@YAXPEAU_HAM_SESSION@@PEAT_RM_SID@@PEAU_HAM_USER@@@Z @ 0x18005F71C
 * Callers:
 *     ?HampUserFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAT_RM_SID@@KPEAPEAU_HAM_USER@@@Z @ 0x18003738C (-HampUserFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAT_RM_SID@@KPEAPEAU_HAM_USER@@@Z.c)
 *     ?HampAppFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@KPEAPEAU_HAM_APPLICATION@@@Z @ 0x180037690 (-HampAppFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@KPEAPEAU_HAM_APP.c)
 * Callees:
 *     ?HamRcNodeInitialize@@YAXP6AXPEAU_CEM_RC_OBJECT@@@ZPEAU_HAM_RC_TREE_NODE@@2@Z @ 0x18005F924 (-HamRcNodeInitialize@@YAXP6AXPEAU_CEM_RC_OBJECT@@@ZPEAU_HAM_RC_TREE_NODE@@2@Z.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 */

void __fastcall HampUserInitialize(struct _HAM_SESSION *a1, union _RM_SID *a2, struct _HAM_USER *a3)
{
  memset_0(a3, 0, 0xC8uLL);
  HamRcNodeInitialize((void (*)(struct _CEM_RC_OBJECT *))HampPkgDestroy, a1, a3);
  if ( _InterlockedIncrement64((volatile signed __int64 *)a1 + 3) <= 1 )
    __fastfail(0xEu);
  *((_QWORD *)a3 + 20) = a1;
  *(_OWORD *)((char *)a3 + 88) = *(_OWORD *)a2;
  *(_OWORD *)((char *)a3 + 104) = *((_OWORD *)a2 + 1);
  *(_OWORD *)((char *)a3 + 120) = *((_OWORD *)a2 + 2);
  *(_OWORD *)((char *)a3 + 136) = *((_OWORD *)a2 + 3);
  *((_DWORD *)a3 + 38) = *((_DWORD *)a2 + 16);
  *((_QWORD *)a3 + 23) = 0LL;
}
