/*
 * XREFs of ??_EProtectableFromChange@@UEAAPEAXI@Z @ 0x140097A20
 * Callers:
 *     <none>
 * Callees:
 *     ??1ProtectableFromChange@@UEAA@XZ @ 0x14001D7FC (--1ProtectableFromChange@@UEAA@XZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 */

ProtectableFromChange *__fastcall ProtectableFromChange::`vector deleting destructor'(
        ProtectableFromChange *this,
        char a2)
{
  ProtectableFromChange::~ProtectableFromChange(this);
  if ( (a2 & 1) != 0 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this);
  return this;
}
