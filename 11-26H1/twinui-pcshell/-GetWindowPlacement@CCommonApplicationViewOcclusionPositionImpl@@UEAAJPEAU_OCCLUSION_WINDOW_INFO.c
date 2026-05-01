/*
 * XREFs of ?GetWindowPlacement@CCommonApplicationViewOcclusionPositionImpl@@UEAAJPEAU_OCCLUSION_WINDOW_INFORMATION@@@Z @ 0x18021FBE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCommonApplicationViewOcclusionPositionImpl::GetWindowPlacement(
        CCommonApplicationViewOcclusionPositionImpl *this,
        struct _OCCLUSION_WINDOW_INFORMATION *a2)
{
  __int64 result; // rax

  result = 0LL;
  *(_OWORD *)a2 = *(_OWORD *)((char *)this + 60);
  *((_OWORD *)a2 + 1) = *(_OWORD *)((char *)this + 76);
  *((_QWORD *)a2 + 4) = *(_QWORD *)((char *)this + 92);
  return result;
}
