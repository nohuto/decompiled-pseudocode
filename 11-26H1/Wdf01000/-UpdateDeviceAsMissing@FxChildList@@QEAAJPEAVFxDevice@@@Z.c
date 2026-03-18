/*
 * XREFs of ?UpdateDeviceAsMissing@FxChildList@@QEAAJPEAVFxDevice@@@Z @ 0x14007B2CC
 * Callers:
 *     imp_WdfPdoMarkMissing @ 0x14007B260 (imp_WdfPdoMarkMissing.c)
 * Callees:
 *     ?DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x140043B90 (-DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x140047130 (-ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?MarkDescriptionNotPresentWorker@FxChildList@@IEAAXPEAUFxDeviceDescriptionEntry@@E@Z @ 0x140072830 (-MarkDescriptionNotPresentWorker@FxChildList@@IEAAXPEAUFxDeviceDescriptionEntry@@E@Z.c)
 *     ?MarkModificationNotPresentWorker@FxChildList@@IEAAXPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntry@@@Z @ 0x140084478 (-MarkModificationNotPresentWorker@FxChildList@@IEAAXPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntr.c)
 */

__int64 __fastcall FxChildList::UpdateDeviceAsMissing(FxChildList *this, FxDevice *Device)
{
  unsigned __int64 *p_m_ListLock; // rbp
  char v4; // di
  KIRQL v6; // al
  _LIST_ENTRY *Blink; // rcx
  KIRQL v8; // r14
  FxDeviceDescriptionEntry *p_Blink; // r8
  FxDevice *m_Pdo; // rdx
  _LIST_ENTRY *i; // rdx
  FxDevice *Flink; // rcx
  int v13; // eax
  unsigned __int8 v14; // r8
  _LIST_ENTRY freeHead; // [rsp+20h] [rbp-18h] BYREF

  freeHead.Blink = &freeHead;
  p_m_ListLock = &this->m_ListLock;
  v4 = 0;
  freeHead.Flink = &freeHead;
  v6 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  Blink = this->m_ModificationListHead.Blink;
  v8 = v6;
  while ( Blink != &this->m_ModificationListHead )
  {
    p_Blink = (FxDeviceDescriptionEntry *)&Blink[-3].Blink;
    if ( this->m_StaticList )
      m_Pdo = *(FxDevice **)&p_Blink->m_IdentificationDescription[2].IdentificationDescriptionSize;
    else
      m_Pdo = p_Blink->m_Pdo;
    if ( m_Pdo == Device )
    {
      v4 = 1;
      FxChildList::MarkModificationNotPresentWorker(this, &freeHead, p_Blink);
      goto LABEL_19;
    }
    Blink = Blink->Blink;
  }
  for ( i = this->m_DescriptionListHead.Blink; i != &this->m_DescriptionListHead; i = i->Blink )
  {
    if ( this->m_StaticList )
      Flink = (FxDevice *)i[1].Blink->Blink;
    else
      Flink = (FxDevice *)i[4].Flink;
    if ( Flink == Device )
    {
      v13 = (int)i[1].Flink;
      v4 = 1;
      if ( v13 == 1 || v13 == 2 )
        FxChildList::MarkDescriptionNotPresentWorker(this, (FxDeviceDescriptionEntry *)i, 0);
      break;
    }
  }
LABEL_19:
  FxChildList::ProcessModificationsLocked(this, &freeHead);
  KeReleaseSpinLock(p_m_ListLock, v8);
  FxChildList::DrainFreeListHead(this, &freeHead, v14);
  return v4 == 0 ? 0xC000000E : 0;
}
