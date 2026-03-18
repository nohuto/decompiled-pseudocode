/*
 * XREFs of ?Thunk_UpdateUniqueId_12@?$IDataSourceProxy_Receive@VBamoDataSourceProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1802080F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IDataSourceProxy_Receive<BamoImpl::BamoDataSourceProxyImpl>::Thunk_UpdateUniqueId_12(
        BamoImpl::BamoDataSourceProxyImpl *a1,
        const struct _LUID **a2)
{
  return BamoImpl::BamoDataSourceProxyImpl::UpdateUniqueId(a1, 1, *a2);
}
