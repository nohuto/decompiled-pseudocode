/*
 * XREFs of ?DrainListLocked@FxDisposeList@@AEAAXPEAE@Z @ 0x140038810
 * Callers:
 *     ?_WorkItemThunk@FxDisposeList@@CAXPEAX@Z @ 0x140038890 (-_WorkItemThunk@FxDisposeList@@CAXPEAX@Z.c)
 *     ?WaitForEmpty@FxDisposeList@@QEAAXXZ @ 0x140038C0C (-WaitForEmpty@FxDisposeList@@QEAAXXZ.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14000A7C0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x14000AD10 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?DeferredDisposeWorkItem@FxObject@@AEAAXXZ @ 0x14003874C (-DeferredDisposeWorkItem@FxObject@@AEAAXXZ.c)
 */

void __fastcall FxDisposeList::DrainListLocked(FxDisposeList *this, unsigned __int8 *PreviousIrql, unsigned __int8 a3)
{
  _SINGLE_LIST_ENTRY *p_m_List; // rbx
  _SINGLE_LIST_ENTRY *Next; // rdi
  unsigned __int8 v7; // r8

  p_m_List = &this->m_List;
  while ( 1 )
  {
    Next = p_m_List->Next;
    if ( !p_m_List->Next )
      break;
    p_m_List->Next = Next->Next;
    Next->Next = 0LL;
    if ( !p_m_List->Next )
      this->m_ListEnd = &p_m_List->Next;
    FxNonPagedObject::Unlock(this, *PreviousIrql, a3);
    FxObject::DeferredDisposeWorkItem((FxObject *)&Next[-11]);
    FxNonPagedObject::Lock(this, PreviousIrql, v7);
  }
}
