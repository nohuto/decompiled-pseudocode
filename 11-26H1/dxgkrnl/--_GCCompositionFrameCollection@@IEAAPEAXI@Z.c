/*
 * XREFs of ??_GCCompositionFrameCollection@@IEAAPEAXI@Z @ 0x140036E94
 * Callers:
 *     ?Release@CCompositionFrameCollection@@UEAAJXZ @ 0x140062760 (-Release@CCompositionFrameCollection@@UEAAJXZ.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?DiscardAllCompositionFrames@CCompositionFrameCollection@@UEAAXXZ @ 0x140036ED0 (-DiscardAllCompositionFrames@CCompositionFrameCollection@@UEAAXXZ.c)
 */

CCompositionFrameCollection *__fastcall CCompositionFrameCollection::`scalar deleting destructor'(
        CCompositionFrameCollection *this)
{
  *(_QWORD *)this = &CCompositionFrameCollection::`vftable';
  CCompositionFrameCollection::DiscardAllCompositionFrames(this);
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this);
  return this;
}
