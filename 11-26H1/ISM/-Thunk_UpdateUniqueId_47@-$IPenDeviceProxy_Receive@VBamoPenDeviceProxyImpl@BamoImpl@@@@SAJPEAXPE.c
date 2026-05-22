/*
 * XREFs of ?Thunk_UpdateUniqueId_47@?$IPenDeviceProxy_Receive@VBamoPenDeviceProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180129940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IPenDeviceProxy_Receive<BamoImpl::BamoPenDeviceProxyImpl>::Thunk_UpdateUniqueId_47(
        BamoImpl::BamoPenDeviceProxyImpl *a1,
        const struct _GUID **a2)
{
  return BamoImpl::BamoPenDeviceProxyImpl::UpdateUniqueId(a1, 1, *a2);
}
