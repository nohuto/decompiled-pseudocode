/*
 * XREFs of ??_EDXGPROCESSVM@@UEAAPEAXI@Z @ 0x140080550
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??1DXGPROCESSVM@@UEAA@XZ @ 0x1400804D8 (--1DXGPROCESSVM@@UEAA@XZ.c)
 */

void **__fastcall DXGPROCESSVM::`vector deleting destructor'(void **this, char a2)
{
  DXGPROCESSVM::~DXGPROCESSVM(this);
  if ( (a2 & 1) != 0 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this);
  return this;
}
