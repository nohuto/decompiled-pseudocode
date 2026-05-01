/*
 * XREFs of ?HampInProcSetExternalResourcePriority@@YAJPEAX_KPEAU_RM_RESOURCE_REQUEST_EXTERNAL_PRIORITY@@@Z @ 0x1800744E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall HampInProcSetExternalResourcePriority(
        struct _HAM_CLIENT_CONTEXT *a1,
        unsigned __int64 a2,
        struct _RM_RESOURCE_REQUEST_EXTERNAL_PRIORITY *a3)
{
  return HamSrvSetExternalResourcePriority(a1, a2, a3);
}
