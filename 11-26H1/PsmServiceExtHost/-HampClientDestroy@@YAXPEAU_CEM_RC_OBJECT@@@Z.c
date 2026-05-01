/*
 * XREFs of ?HampClientDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x18003CC80
 * Callers:
 *     <none>
 * Callees:
 *     ?HampClientRundownObjects@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18003CCAC (-HampClientRundownObjects@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampClientCleanup@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18003CE34 (-HampClientCleanup@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 */

void __fastcall HampClientDestroy(struct _CEM_RC_OBJECT *a1)
{
  HampClientRundownObjects(a1);
  HampClientCleanup(a1);
  HampFreeHeap(a1);
}
