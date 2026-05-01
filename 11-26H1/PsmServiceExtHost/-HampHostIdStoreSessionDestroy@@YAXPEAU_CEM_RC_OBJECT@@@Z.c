/*
 * XREFs of ?HampHostIdStoreSessionDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x18003DC60
 * Callers:
 *     <none>
 * Callees:
 *     CemRcObjectCleanup @ 0x18003D080 (CemRcObjectCleanup.c)
 */

void __fastcall HampHostIdStoreSessionDestroy(struct _CEM_RC_OBJECT *a1)
{
  CemRcObjectCleanup(a1);
  HampFreeHeap(a1);
}
