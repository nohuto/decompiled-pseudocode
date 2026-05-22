/*
 * XREFs of ?Thunk_GetConstantsForInputType_21@?$IMPCConstantManagerClientPrincipal_Receive@VBamoMPCConstantManagerClientPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800B51E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IMPCConstantManagerClientPrincipal_Receive<BamoImpl::BamoMPCConstantManagerClientPrincipalImpl>::Thunk_GetConstantsForInputType_21(
        int *a1,
        unsigned int **a2)
{
  return BamoImpl::BamoMPCConstantManagerClientPrincipalImpl::GetConstantsForInputType(a1, **a2, *a2[1]);
}
