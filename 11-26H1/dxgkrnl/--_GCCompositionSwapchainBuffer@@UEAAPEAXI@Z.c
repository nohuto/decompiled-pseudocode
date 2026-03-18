/*
 * XREFs of ??_GCCompositionSwapchainBuffer@@UEAAPEAXI@Z @ 0x14004E260
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??1CFlipExBuffer@@MEAA@XZ @ 0x14004E2D8 (--1CFlipExBuffer@@MEAA@XZ.c)
 */

CCompositionSwapchainBuffer *__fastcall CCompositionSwapchainBuffer::`scalar deleting destructor'(
        CCompositionSwapchainBuffer *this,
        char a2)
{
  *(_QWORD *)this = &CCompositionSwapchainBuffer::`vftable';
  CFlipExBuffer::~CFlipExBuffer(this);
  if ( (a2 & 1) != 0 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this);
  return this;
}
