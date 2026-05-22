/*
 * XREFs of ?GetInputSite@MPCFocusTarget@@WFA@EAAPEAVInputSite@@XZ @ 0x1801012B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct IMPCFocusTarget *__fastcall MPCFocusTarget::GetInputSite(__int64 a1)
{
  return MPCInputRouter::Get3DFocusTarget((MPCInputRouter *)(a1 - 80));
}
