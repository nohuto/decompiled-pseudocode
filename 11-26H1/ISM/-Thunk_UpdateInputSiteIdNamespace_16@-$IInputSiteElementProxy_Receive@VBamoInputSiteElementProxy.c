/*
 * XREFs of ?Thunk_UpdateInputSiteIdNamespace_16@?$IInputSiteElementProxy_Receive@VBamoInputSiteElementProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180066800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IInputSiteElementProxy_Receive<BamoImpl::BamoInputSiteElementProxyImpl>::Thunk_UpdateInputSiteIdNamespace_16(
        __int64 a1,
        unsigned int **a2)
{
  unsigned int *v2; // r8

  v2 = *a2;
  LOBYTE(a2) = 1;
  return BamoImpl::BamoInputSiteElementProxyImpl::UpdateInputSiteIdNamespace(a1, a2, *v2);
}
