/*
 * XREFs of ??_GCDWMBackchannelManager@@UEAAPEAXI@Z @ 0x14002A000
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??1CBackchannelManager@@UEAA@XZ @ 0x140029FC0 (--1CBackchannelManager@@UEAA@XZ.c)
 */

PVOID *__fastcall CDWMBackchannelManager::`scalar deleting destructor'(PVOID *this, char a2)
{
  *this = &CDWMBackchannelManager::`vftable';
  CBackchannelManager::~CBackchannelManager(this);
  if ( (a2 & 1) != 0 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this);
  return this;
}
