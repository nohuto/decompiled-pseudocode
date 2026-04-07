/*
 * XREFs of ??0CClientArea@@IEAA@XZ @ 0x180022D98
 * Callers:
 *     ?Create@CClientArea@@KAJPEAVCVisualProxy@@PEAPEAV1@@Z @ 0x180022CFC (-Create@CClientArea@@KAJPEAVCVisualProxy@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CVisual@@IEAA@XZ @ 0x1800212F0 (--0CVisual@@IEAA@XZ.c)
 */

CClientArea *__fastcall CClientArea::CClientArea(CClientArea *this)
{
  CClientArea *v1; // rcx
  CClientArea *result; // rax

  CVisual::CVisual(this);
  result = v1;
  *(_QWORD *)v1 = &CClientArea::`vftable';
  return result;
}
