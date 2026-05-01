/*
 * XREFs of ?GetOcclusionBasedViewStateOptions@CCommonApplicationViewOcclusionPositionImpl@@UEAAJPEAW4OCCLUSION_BASED_VIEW_STATE_OPTIONS@@@Z @ 0x180415C60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCommonApplicationViewOcclusionPositionImpl::GetOcclusionBasedViewStateOptions(
        CCommonApplicationViewOcclusionPositionImpl *this,
        enum OCCLUSION_BASED_VIEW_STATE_OPTIONS *a2)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 14);
  return 0LL;
}
