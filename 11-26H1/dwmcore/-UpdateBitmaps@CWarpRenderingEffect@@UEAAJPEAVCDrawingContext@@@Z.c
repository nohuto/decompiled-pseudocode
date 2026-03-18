/*
 * XREFs of ?UpdateBitmaps@CWarpRenderingEffect@@UEAAJPEAVCDrawingContext@@@Z @ 0x18025DAA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWarpRenderingEffect::UpdateBitmaps(CWarpRenderingEffect *this, struct CDrawingContext *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct CDrawingContext *))(**((_QWORD **)this + 2) + 48LL))(
           *((_QWORD *)this + 2),
           a2);
}
