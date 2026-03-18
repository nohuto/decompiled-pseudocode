/*
 * XREFs of ??_GCFlipContentToken@@UEAAPEAXI@Z @ 0x14003E510
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??1CFlipContentToken@@UEAA@XZ @ 0x14003E548 (--1CFlipContentToken@@UEAA@XZ.c)
 */

CFlipContentToken *__fastcall CFlipContentToken::`scalar deleting destructor'(CFlipContentToken *this, char a2)
{
  CFlipContentToken::~CFlipContentToken(this);
  if ( (a2 & 1) != 0 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this);
  return this;
}
