/*
 * XREFs of ??1DMMVIDEOPRESENTSOURCESET@@UEAA@XZ @ 0x14009590C
 * Callers:
 *     ??_GDMMVIDEOPRESENTSOURCESET@@UEAAPEAXI@Z @ 0x140096320 (--_GDMMVIDEOPRESENTSOURCESET@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1ReferenceCounted@@UEAA@XZ @ 0x140039D50 (--1ReferenceCounted@@UEAA@XZ.c)
 *     ?Clear@?$DoublyLinkedList@VDMMVIDEOPRESENTSOURCE@@U?$DoubleLinkedListElementDeleter@VDMMVIDEOPRESENTSOURCE@@@@@@QEAAXXZ @ 0x14004B6A4 (-Clear@-$DoublyLinkedList@VDMMVIDEOPRESENTSOURCE@@U-$DoubleLinkedListElementDeleter@VDMMVIDEOPRE.c)
 */

void __fastcall DMMVIDEOPRESENTSOURCESET::~DMMVIDEOPRESENTSOURCESET(DMMVIDEOPRESENTSOURCESET *this)
{
  ReferenceCounted *v2; // rcx

  *(_QWORD *)this = &DMMVIDEOPRESENTSOURCESET::`vftable'{for `IndexedSet<DMMVIDEOPRESENTSOURCE>'};
  v2 = (DMMVIDEOPRESENTSOURCESET *)((char *)this + 64);
  *(_QWORD *)v2 = &DMMVIDEOPRESENTSOURCESET::`vftable'{for `ReferenceCounted'};
  *((_QWORD *)this + 10) = &DMMVIDEOPRESENTSOURCESET::`vftable'{for `AggregatedBy<VIDPN_MGR>'};
  *((_QWORD *)this + 12) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *((_DWORD *)this + 26) |= 0x6D640000u;
  *((_QWORD *)this + 10) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  *((_QWORD *)this + 11) = 0LL;
  ReferenceCounted::~ReferenceCounted(v2);
  *(_QWORD *)this = &Set<DMMVIDEOPRESENTSOURCE>::`vftable';
  *((_QWORD *)this + 1) = &DoublyLinkedList<DMMVIDEOPRESENTSOURCE,DoubleLinkedListElementDeleter<DMMVIDEOPRESENTSOURCE>>::`vftable';
  DoublyLinkedList<DMMVIDEOPRESENTSOURCE,DoubleLinkedListElementDeleter<DMMVIDEOPRESENTSOURCE>>::Clear((__int64)this + 8);
}
