/*
 * XREFs of ?HasApprovedCustomDuration@CGlobalCompositionSurfaceInfo@@UEBA_NXZ @ 0x1802665B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CGlobalCompositionSurfaceInfo::HasApprovedCustomDuration(CGlobalCompositionSurfaceInfo *this)
{
  return *((_DWORD *)this + 82) != 0;
}
