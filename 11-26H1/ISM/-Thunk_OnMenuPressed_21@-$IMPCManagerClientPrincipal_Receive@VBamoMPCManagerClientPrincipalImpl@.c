/*
 * XREFs of ?Thunk_OnMenuPressed_21@?$IMPCManagerClientPrincipal_Receive@VBamoMPCManagerClientPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18016C5A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IMPCManagerClientPrincipal_Receive<BamoImpl::BamoMPCManagerClientPrincipalImpl>::Thunk_OnMenuPressed_21(
        int *a1,
        unsigned int **a2)
{
  return BamoImpl::BamoMPCManagerClientPrincipalImpl::OnMenuPressed(a1, **a2, *a2[1]);
}
