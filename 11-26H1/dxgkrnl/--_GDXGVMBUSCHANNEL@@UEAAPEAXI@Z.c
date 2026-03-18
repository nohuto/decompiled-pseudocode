/*
 * XREFs of ??_GDXGVMBUSCHANNEL@@UEAAPEAXI@Z @ 0x1402120D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??1DXGVMBUSCHANNEL@@UEAA@XZ @ 0x140211FEC (--1DXGVMBUSCHANNEL@@UEAA@XZ.c)
 */

void **__fastcall DXGVMBUSCHANNEL::`scalar deleting destructor'(void **this, char a2)
{
  DXGVMBUSCHANNEL::~DXGVMBUSCHANNEL(this);
  if ( (a2 & 1) != 0 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this);
  return this;
}
