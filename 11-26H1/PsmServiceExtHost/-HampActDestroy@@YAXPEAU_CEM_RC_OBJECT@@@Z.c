/*
 * XREFs of ?HampActDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x18003D000
 * Callers:
 *     <none>
 * Callees:
 *     ?HampActCleanup@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x18003D038 (-HampActCleanup@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 */

void __fastcall HampActDestroy(struct _CEM_RC_OBJECT *a1)
{
  HampActCleanup(a1);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
