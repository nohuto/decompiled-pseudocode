/*
 * XREFs of ??0StackBackfaceVisibilityEntry@CDrawingContext@@QEAA@PEBVCVisual@@_N@Z @ 0x18019BCCC
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800831C0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

CDrawingContext::StackBackfaceVisibilityEntry *__fastcall CDrawingContext::StackBackfaceVisibilityEntry::StackBackfaceVisibilityEntry(
        CDrawingContext::StackBackfaceVisibilityEntry *this,
        const struct CVisual *a2,
        char a3)
{
  CDrawingContext::StackBackfaceVisibilityEntry *result; // rax

  *(_QWORD *)this = a2;
  result = this;
  *((_BYTE *)this + 8) = a3;
  return result;
}
