/*
 * XREFs of ??_GCCompositionBuffer@@UEAAPEAXI@Z @ 0x1400A35F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??1CCompositionBuffer@@UEAA@XZ @ 0x14004E398 (--1CCompositionBuffer@@UEAA@XZ.c)
 */

CCompositionBuffer *__fastcall CCompositionBuffer::`scalar deleting destructor'(CCompositionBuffer *this, char a2)
{
  CCompositionBuffer::~CCompositionBuffer(this);
  if ( (a2 & 1) != 0 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this);
  return this;
}
