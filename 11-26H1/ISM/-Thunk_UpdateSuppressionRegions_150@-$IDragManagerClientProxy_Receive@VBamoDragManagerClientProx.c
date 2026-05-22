/*
 * XREFs of ?Thunk_UpdateSuppressionRegions_150@?$IDragManagerClientProxy_Receive@VBamoDragManagerClientProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180148A30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IDragManagerClientProxy_Receive<BamoImpl::BamoDragManagerClientProxyImpl>::Thunk_UpdateSuppressionRegions_150(
        BamoImpl::BamoDragManagerClientProxyImpl *a1,
        __int64 a2)
{
  return BamoImpl::BamoDragManagerClientProxyImpl::UpdateSuppressionRegions(
           a1,
           1,
           *(const struct tagRECT **)a2,
           *(_DWORD *)(a2 + 8));
}
