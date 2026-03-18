/*
 * XREFs of ?GetDevice@CRemoteAppRenderTarget@@UEBAPEAVCD3DDevice@@XZ @ 0x180247500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CD3DDevice *__fastcall CRemoteAppRenderTarget::GetDevice(CRemoteAppRenderTarget *this)
{
  return *(struct CD3DDevice **)(*((_QWORD *)this + 1) + 56LL);
}
