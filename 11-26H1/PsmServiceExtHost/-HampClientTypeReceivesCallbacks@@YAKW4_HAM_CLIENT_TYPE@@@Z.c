/*
 * XREFs of ?HampClientTypeReceivesCallbacks@@YAKW4_HAM_CLIENT_TYPE@@@Z @ 0x180065E10
 * Callers:
 *     ?HampClientStart@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAT_RM_SID@@PEAXKKPEAU_HAM_CLIENT_CONNECTION_PARAMETERS@@@Z @ 0x1800139F4 (-HampClientStart@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAT_RM_SID@@PEAXKKPEAU_HAM_CLIENT_CONNECTION_PARA.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall HampClientTypeReceivesCallbacks(char a1)
{
  return !a1 || a1 == 1 || a1 == 2 || a1 == 3 || a1 == 6;
}
