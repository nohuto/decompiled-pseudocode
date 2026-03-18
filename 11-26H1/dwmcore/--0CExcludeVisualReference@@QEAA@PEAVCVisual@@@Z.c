/*
 * XREFs of ??0CExcludeVisualReference@@QEAA@PEAVCVisual@@@Z @ 0x18013ED8C
 * Callers:
 *     ?Create@CExcludeVisualReference@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x18013ED10 (-Create@CExcludeVisualReference@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?AddCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x18022A5AC (-AddCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z.c)
 * Callees:
 *     ?Create@?$CWeakReference@VCBaseExpression@@@@SAXPEAVCBaseExpression@@PEAPEAV1@@Z @ 0x18013EDCC (-Create@-$CWeakReference@VCBaseExpression@@@@SAXPEAVCBaseExpression@@PEAPEAV1@@Z.c)
 */

CExcludeVisualReference *__fastcall CExcludeVisualReference::CExcludeVisualReference(
        CExcludeVisualReference *this,
        struct CVisual *a2)
{
  *(_QWORD *)this = &CExcludeVisualReference::`vftable';
  *((_DWORD *)this + 4) = 0;
  *((_BYTE *)this + 20) = 0;
  *((_QWORD *)this + 1) = 0LL;
  CWeakReference<CBaseExpression>::Create(a2, (char *)this + 8);
  return this;
}
