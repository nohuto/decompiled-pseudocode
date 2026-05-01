/*
 * XREFs of ?HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x18001B354
 * Callers:
 *     ?HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x180012EA8 (-HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 *     ?HampDepGroupProcessActivityActionForGroup@@YAJPEAU_HAM_DEPENDENCY_GROUP@@W4_HAM_DEPENDENCY_ACTION@@@Z @ 0x180015A70 (-HampDepGroupProcessActivityActionForGroup@@YAJPEAU_HAM_DEPENDENCY_GROUP@@W4_HAM_DEPENDENCY_ACTI.c)
 *     ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180015B68 (-HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAPEAU_HAM_HOST_DEPENDENCY@@PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18001A2EC (-HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@P.c)
 * Callees:
 *     ?HampHostDepCleanup@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x18001B388 (-HampHostDepCleanup@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z.c)
 *     ?HampHostProcessDepRundown@@YAXPEAU_HAM_HOST_PROCESS_DEPENDENCY@@@Z @ 0x18007F158 (-HampHostProcessDepRundown@@YAXPEAU_HAM_HOST_PROCESS_DEPENDENCY@@@Z.c)
 */

void __fastcall HampHostDepDestroy(struct _HAM_HOST_DEPENDENCY *a1)
{
  if ( !*((_BYTE *)a1 + 40) )
    HampHostProcessDepRundown(a1);
  HampHostDepCleanup(a1);
  HampFreeHeap(a1);
}
