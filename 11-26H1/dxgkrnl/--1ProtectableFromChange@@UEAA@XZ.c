/*
 * XREFs of ??1ProtectableFromChange@@UEAA@XZ @ 0x14001D7FC
 * Callers:
 *     ??1DMMVIDPNTOPOLOGY@@UEAA@XZ @ 0x14001CC38 (--1DMMVIDPNTOPOLOGY@@UEAA@XZ.c)
 *     ??_EProtectableFromChange@@UEAAPEAXI@Z @ 0x140097A20 (--_EProtectableFromChange@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 */

void __fastcall ProtectableFromChange::~ProtectableFromChange(ProtectableFromChange *this)
{
  void *v2; // rcx

  *((_QWORD *)this + 8) = &Vector<unsigned __int64>::`vftable';
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 11));
  v2 = (void *)*((_QWORD *)this + 6);
  *((_QWORD *)this + 3) = &Vector<unsigned __int64>::`vftable';
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v2);
}
