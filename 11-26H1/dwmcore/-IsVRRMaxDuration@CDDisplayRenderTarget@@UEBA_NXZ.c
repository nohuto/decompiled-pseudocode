/*
 * XREFs of ?IsVRRMaxDuration@CDDisplayRenderTarget@@UEBA_NXZ @ 0x1801DAEF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDDisplayRenderTarget::IsVRRMaxDuration(CDDisplayRenderTarget *this)
{
  return *((_QWORD *)this + 4013) == 0xFFFFFFFFLL;
}
