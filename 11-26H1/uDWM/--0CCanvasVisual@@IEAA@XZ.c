/*
 * XREFs of ??0CCanvasVisual@@IEAA@XZ @ 0x1800211A8
 * Callers:
 *     ??0CPrimitiveGroupVisual@@IEAA@XZ @ 0x180027818 (--0CPrimitiveGroupVisual@@IEAA@XZ.c)
 *     ??0CButton@@IEAA@XZ @ 0x18005D1EC (--0CButton@@IEAA@XZ.c)
 *     ??0CLivePreview@@IEAA@XZ @ 0x18007C558 (--0CLivePreview@@IEAA@XZ.c)
 * Callees:
 *     ??0CContainerVisual@@IEAA@XZ @ 0x1800212BC (--0CContainerVisual@@IEAA@XZ.c)
 */

CCanvasVisual *__fastcall CCanvasVisual::CCanvasVisual(CCanvasVisual *this)
{
  CCanvasVisual *v1; // r9
  CCanvasVisual *result; // rax

  CContainerVisual::CContainerVisual(this);
  result = v1;
  *(_QWORD *)v1 = &CCanvasVisual::`vftable';
  return result;
}
