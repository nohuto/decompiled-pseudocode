/*
 * XREFs of ??_GCFlipTokenOperation@@MEAAPEAXI@Z @ 0x1400A4490
 * Callers:
 *     <none>
 * Callees:
 *     ??1CFlipTokenOperation@@MEAA@XZ @ 0x14001B910 (--1CFlipTokenOperation@@MEAA@XZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 */

CFlipTokenOperation *__fastcall CFlipTokenOperation::`scalar deleting destructor'(CFlipTokenOperation *this, char a2)
{
  CFlipTokenOperation::~CFlipTokenOperation(this);
  if ( (a2 & 1) != 0 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this);
  return this;
}
