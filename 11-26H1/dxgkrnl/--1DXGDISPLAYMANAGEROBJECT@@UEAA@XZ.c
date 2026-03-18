/*
 * XREFs of ??1DXGDISPLAYMANAGEROBJECT@@UEAA@XZ @ 0x1403DBFEC
 * Callers:
 *     ??_EDXGDISPLAYMANAGEROBJECT@@UEAAPEAXI@Z @ 0x140058FA0 (--_EDXGDISPLAYMANAGEROBJECT@@UEAAPEAXI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??1ReferenceCounted@@UEAA@XZ @ 0x140039D50 (--1ReferenceCounted@@UEAA@XZ.c)
 *     ?Clear@?$DoublyLinkedList@VDXGTARGETENTRY@@U?$DoubleLinkedListElementDeleter@VDXGTARGETENTRY@@@@@@QEAAXXZ @ 0x14005630C (-Clear@-$DoublyLinkedList@VDXGTARGETENTRY@@U-$DoubleLinkedListElementDeleter@VDXGTARGETENTRY@@@@.c)
 *     ?Clear@?$DoublyLinkedList@VDXGDISPLAYMANAGERSOURCEOBJECT@@U?$DoubleLinkedListElementDeleter@VDXGDISPLAYMANAGERSOURCEOBJECT@@@@@@QEAAXXZ @ 0x140057850 (-Clear@-$DoublyLinkedList@VDXGDISPLAYMANAGERSOURCEOBJECT@@U-$DoubleLinkedListElementDeleter@VDXG.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x14006CEFC (--1DXGFASTMUTEX@@QEAA@XZ.c)
 */

void __fastcall DXGDISPLAYMANAGEROBJECT::~DXGDISPLAYMANAGEROBJECT(DXGDISPLAYMANAGEROBJECT *this)
{
  bool v1; // zf

  v1 = *((_QWORD *)this + 9) == 0LL;
  *(_QWORD *)this = &DXGDISPLAYMANAGEROBJECT::`vftable';
  if ( !v1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 99;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_Object == nullptr", 99LL, 0LL, 0LL, 0LL, 0LL);
  }
  *((_QWORD *)this + 17) = &DoublyLinkedList<DXGDISPLAYMANAGERSOURCEOBJECT,DoubleLinkedListElementDeleter<DXGDISPLAYMANAGERSOURCEOBJECT>>::`vftable';
  DoublyLinkedList<DXGDISPLAYMANAGERSOURCEOBJECT,DoubleLinkedListElementDeleter<DXGDISPLAYMANAGERSOURCEOBJECT>>::Clear((__int64)this + 136);
  *((_QWORD *)this + 10) = &Set<DXGTARGETENTRY>::`vftable';
  *((_QWORD *)this + 11) = &DoublyLinkedList<DXGTARGETENTRY,DoubleLinkedListElementDeleter<DXGTARGETENTRY>>::`vftable';
  DoublyLinkedList<DXGTARGETENTRY,DoubleLinkedListElementDeleter<DXGTARGETENTRY>>::Clear((__int64)this + 88);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGDISPLAYMANAGEROBJECT *)((char *)this + 16));
  ReferenceCounted::~ReferenceCounted(this);
}
