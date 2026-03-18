/*
 * XREFs of ??1DMMVIDPNTARGETSET@@UEAA@XZ @ 0x14004A618
 * Callers:
 *     ??_GDMMVIDPNTARGETSET@@UEAAPEAXI@Z @ 0x14004A5E0 (--_GDMMVIDPNTARGETSET@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Clear@?$DoublyLinkedList@VDMMVIDPNTARGET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGET@@@@@@QEAAXXZ @ 0x14004A680 (-Clear@-$DoublyLinkedList@VDMMVIDPNTARGET@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNTARGET@@@@.c)
 */

void __fastcall DMMVIDPNTARGETSET::~DMMVIDPNTARGETSET(DMMVIDPNTARGETSET *this)
{
  *(_QWORD *)this = &DMMVIDPNTARGETSET::`vftable'{for `IndexedSet<DMMVIDPNTARGET>'};
  *((_QWORD *)this + 8) = &DMMVIDPNTARGETSET::`vftable'{for `ContainedBy<DMMVIDPN>'};
  *((_QWORD *)this + 10) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *((_DWORD *)this + 22) |= 0x6D640000u;
  *((_QWORD *)this + 8) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  *((_QWORD *)this + 9) = 0LL;
  *(_QWORD *)this = &IndexedSet<DMMVIDPNTARGET>::`vftable';
  *((_QWORD *)this + 1) = &DoublyLinkedList<DMMVIDPNTARGET,DoubleLinkedListElementDeleter<DMMVIDPNTARGET>>::`vftable';
  DoublyLinkedList<DMMVIDPNTARGET,DoubleLinkedListElementDeleter<DMMVIDPNTARGET>>::Clear();
}
