/*
 * XREFs of ??0DMMVIDPNTARGETMODESET@@IEAA@PEAVDMMVIDPNTARGET@@@Z @ 0x14002CD94
 * Callers:
 *     ?_SetEmptyCofuncModeSet@DMMVIDPNTARGET@@IEAAXXZ @ 0x14002CCFC (-_SetEmptyCofuncModeSet@DMMVIDPNTARGET@@IEAAXXZ.c)
 *     ?CreateNewCofuncModeSet@DMMVIDPNTARGET@@QEAAJPEAPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x14002D558 (-CreateNewCofuncModeSet@DMMVIDPNTARGET@@QEAAJPEAPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 * Callees:
 *     ?IsConstructed@?$Set@VDMMVIDPNTARGET@@@@UEBAEXZ @ 0x14002CEE0 (-IsConstructed@-$Set@VDMMVIDPNTARGET@@@@UEBAEXZ.c)
 */

DMMVIDPNTARGETMODESET *__fastcall DMMVIDPNTARGETMODESET::DMMVIDPNTARGETMODESET(
        DMMVIDPNTARGETMODESET *this,
        struct DMMVIDPNTARGET *a2)
{
  char *v3; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx

  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = &SetElement::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 4) = &DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>::`vftable';
  v3 = (char *)this + 24;
  *((_DWORD *)v3 + 4) = 0;
  *((_QWORD *)v3 + 5) = 0LL;
  *((_QWORD *)v3 + 4) = v3 + 24;
  *((_QWORD *)v3 + 3) = v3 + 24;
  *((_DWORD *)v3 + 12) = 2;
  *(_QWORD *)v3 = &IndexedSet<DMMVIDPNTARGETMODE>::`vftable';
  *((_DWORD *)v3 + 14) = 0;
  *((_QWORD *)this + 11) = &rc_buffer<DispBroker::AlpcRequest<7>>::`vftable';
  *((_DWORD *)this + 24) = 1;
  *((_BYTE *)this + 136) = 1;
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 32) = 1833173005;
  *(_QWORD *)this = &DMMVIDPNTARGETMODESET::`vftable'{for `SetElement'};
  *(_QWORD *)v3 = &DMMVIDPNTARGETMODESET::`vftable'{for `IndexedSet<DMMVIDPNTARGETMODE>'};
  *((_QWORD *)this + 11) = &DMMVIDPNTARGETMODESET::`vftable'{for `ReferenceCounted'};
  *((_QWORD *)this + 13) = &DMMVIDPNSOURCEMODESET::`vftable'{for `AggregatedBy<DMMVIDPNSOURCE>'};
  *((_QWORD *)this + 15) = &DMMVIDPNTARGETMODESET::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGETMODESET>'};
  *((_QWORD *)this + 18) = 0LL;
  if ( (unsigned __int8)Set<DMMVIDPNTARGET>::IsConstructed() )
  {
    if ( a2 && *((_QWORD *)this + 14) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 140;
    }
    *((_QWORD *)this + 14) = a2;
  }
  else
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v6, v5) + 24) = *((int *)this + 10);
    WdLogGlobalForLineNumber = 647;
  }
  return this;
}
