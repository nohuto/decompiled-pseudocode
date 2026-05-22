/*
 * XREFs of ?Thunk_UpdateComponentViewId_8@?$IComponentSiteInputObjectProxy_Receive@VBamoComponentSiteInputObjectProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801291D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IComponentSiteInputObjectProxy_Receive<BamoImpl::BamoComponentSiteInputObjectProxyImpl>::Thunk_UpdateComponentViewId_8(
        BamoImpl::BamoComponentSiteInputObjectProxyImpl *a1,
        _QWORD *a2)
{
  unsigned int *v2; // r8

  v2 = (unsigned int *)*a2;
  LOBYTE(a2) = 1;
  return BamoImpl::BamoComponentSiteInputObjectProxyImpl::UpdateComponentViewId(a1, (__int64)a2, *v2);
}
