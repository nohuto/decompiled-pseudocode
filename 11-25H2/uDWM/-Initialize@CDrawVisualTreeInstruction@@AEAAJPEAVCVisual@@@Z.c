/*
 * XREFs of ?Initialize@CDrawVisualTreeInstruction@@AEAAJPEAVCVisual@@@Z @ 0x1800217F4
 * Callers:
 *     ?Create@CDrawVisualTreeInstruction@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x18002142C (-Create@CDrawVisualTreeInstruction@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x180008530 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 */

__int64 __fastcall CDrawVisualTreeInstruction::Initialize(CDrawVisualTreeInstruction *this, struct CVisual *a2)
{
  *((_QWORD *)this + 2) = a2;
  if ( a2 )
    CMILRefCountBase::AddRef(a2);
  return 0LL;
}
