/*
 * XREFs of ??_ECDisableScanoutToken@@UEAAPEAXI@Z @ 0x14003E4D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??1CToken@@UEAA@XZ @ 0x14003E580 (--1CToken@@UEAA@XZ.c)
 */

CDisableScanoutToken *__fastcall CDisableScanoutToken::`vector deleting destructor'(
        CDisableScanoutToken *this,
        char a2)
{
  CToken::~CToken(this);
  if ( (a2 & 1) != 0 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this);
  return this;
}
