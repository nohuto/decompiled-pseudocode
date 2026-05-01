/*
 * XREFs of ?HampPkgDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x18003CEF0
 * Callers:
 *     <none>
 * Callees:
 *     CemRcObjectDereference @ 0x180038DE0 (CemRcObjectDereference.c)
 *     ?HamRcNodeCleanup@@YAXPEAU_HAM_RC_TREE_NODE@@@Z @ 0x18003CEC4 (-HamRcNodeCleanup@@YAXPEAU_HAM_RC_TREE_NODE@@@Z.c)
 */

void __fastcall HampPkgDestroy(struct _CEM_RC_OBJECT *a1)
{
  _QWORD *v2; // rcx

  HamRcNodeCleanup(a1);
  v2 = (_QWORD *)*((_QWORD *)a1 + 11);
  if ( v2 )
    CemRcObjectDereference(v2);
  HampFreeHeap(a1);
}
