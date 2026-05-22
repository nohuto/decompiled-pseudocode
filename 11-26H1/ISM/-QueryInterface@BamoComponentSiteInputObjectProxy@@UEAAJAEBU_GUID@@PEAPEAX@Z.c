/*
 * XREFs of ?QueryInterface@BamoComponentSiteInputObjectProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180095650
 * Callers:
 *     ?QueryInterface@BamoComponentSiteInputObjectProxy@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180124210 (-QueryInterface@BamoComponentSiteInputObjectProxy@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall BamoComponentSiteInputObjectProxy::QueryInterface(
        BamoComponentSiteInputObjectProxy *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::BamoImpl::Util::QueryInterface<BamoComponentSiteInputObjectProxy,IComponentSiteInputObjectProxy>(
           this,
           a2,
           a3);
}
