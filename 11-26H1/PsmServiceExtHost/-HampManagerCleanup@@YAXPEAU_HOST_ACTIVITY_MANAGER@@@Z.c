/*
 * XREFs of ?HampManagerCleanup@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18007BB90
 * Callers:
 *     ?RmpCleanupAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800800A0 (-RmpCleanupAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ?HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z @ 0x180036A5C (-HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z.c)
 *     CemRcObjectDereference @ 0x180038DE0 (CemRcObjectDereference.c)
 *     ?HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z @ 0x18003BC30 (-HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z.c)
 *     ?HampPdcCleanup@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x18007E240 (-HampPdcCleanup@@YAXPEAU_HAM_PDC_CONTEXT@@@Z.c)
 */

void __fastcall HampManagerCleanup(struct _HOST_ACTIVITY_MANAGER *a1)
{
  struct _HAM_RC_TREE_NODE *v1; // rdi
  struct _HAM_RC_TREE_NODE *i; // rax
  struct _HAM_RC_TREE_NODE *v3; // rbx

  v1 = (struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 808);
  HampPdcCleanup((struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 576));
  for ( i = HamRcNodeGetFirst(v1, 4); ; i = HamRcNodeGetSuccessor(v1, v3) )
  {
    v3 = i;
    if ( !i )
      break;
    CemRcObjectDereference(i);
  }
}
