/*
 * XREFs of ?GetBitmap@CWarpRenderingEffect@@UEBAAEBVCDrawListBitmap@@I@Z @ 0x18025DA60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const struct CDrawListBitmap *__fastcall CWarpRenderingEffect::GetBitmap(CWarpRenderingEffect *this)
{
  return (const struct CDrawListBitmap *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 16LL))(*((_QWORD *)this + 2));
}
