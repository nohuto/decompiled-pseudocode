/*
 * XREFs of ?Release@FxObject@@UEAAKPEAXJPEBD@Z @ 0x14002D660
 * Callers:
 *     ?ReleaseOverride@FxRequest@@UEAAKGPEAXJPEBD@Z @ 0x140094B50 (-ReleaseOverride@FxRequest@@UEAAKGPEAXJPEBD@Z.c)
 * Callees:
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1400205B8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x14002C910 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z @ 0x140037B4C (-Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x140037F00 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ??1FxTagTracker@@QEAA@XZ @ 0x14008263C (--1FxTagTracker@@QEAA@XZ.c)
 *     ?CheckForAbandondedTags@FxTagTracker@@QEAAXXZ @ 0x140082B78 (-CheckForAbandondedTags@FxTagTracker@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxObject::Release(FxObject *this, void *Tag, __int64 Line, const char *File)
{
  FxTagTracker *m_Lock; // rcx
  unsigned __int32 v6; // edi
  unsigned __int16 m_ObjectFlags; // ax
  unsigned __int16 v9; // ax
  FxTagTracker *v10; // rbp
  _QWORD *i; // r14
  void (__fastcall *v12)(unsigned __int64, void *, __int64, const char *); // rax
  void (__fastcall *v13)(unsigned __int64, void *, __int64, const char *); // rax
  __int64 m_ObjectSize; // rcx
  char v15; // al
  _QWORD *v16; // rcx
  _QWORD *v17; // r14
  FxObjectExcessiveAllocation *ObjectExcessiveAllocation; // rcx

  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    m_Lock = (FxTagTracker *)this[-1].m_SpinLock.m_Lock;
    if ( m_Lock )
      FxTagTracker::UpdateTagHistory(m_Lock, Tag, Line, File, TagRelease, this->m_Refcnt - 1);
  }
  v6 = _InterlockedDecrement(&this->m_Refcnt);
  if ( v6 )
    return v6;
  m_ObjectFlags = this->m_ObjectFlags;
  if ( (m_ObjectFlags & 0x20) != 0 || (m_ObjectFlags & 0x10) != 0 && KeGetCurrentIrql() )
  {
    FxObject::SetObjectStateLocked(this, FxObjectStateDeferedDestroy);
    FxDisposeList::Add(this->m_Globals->Driver->m_DisposeList, this);
    return v6;
  }
  v9 = this->m_ObjectFlags;
  if ( (v9 & 0x80u) != 0 )
  {
    v10 = (FxTagTracker *)this[-1].m_SpinLock.m_Lock;
    if ( v10 )
    {
      FxTagTracker::CheckForAbandondedTags((FxTagTracker *)this[-1].m_SpinLock.m_Lock);
      v9 = this->m_ObjectFlags;
    }
  }
  else
  {
    v10 = 0LL;
  }
  if ( this->m_ObjectSize && (v9 & 8) != 0 )
  {
    for ( i = (FxObject_vtbl **)((char *)&this->__vftable + this->m_ObjectSize); i; i = (_QWORD *)i[1] )
    {
      v12 = (void (__fastcall *)(unsigned __int64, void *, __int64, const char *))i[2];
      if ( v12 )
      {
        v12((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL, Tag, Line, File);
        i[2] = 0LL;
      }
      v13 = (void (__fastcall *)(unsigned __int64, void *, __int64, const char *))i[3];
      if ( v13 )
      {
        v13((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL, Tag, Line, File);
        i[3] = 0LL;
      }
    }
    m_ObjectSize = this->m_ObjectSize;
    v15 = 1;
    if ( (_WORD)m_ObjectSize )
    {
      v16 = (FxObject_vtbl **)((char *)&this->__vftable + m_ObjectSize);
      if ( v16 )
      {
        do
        {
          v17 = (_QWORD *)v16[1];
          if ( !v15 )
            FxPoolFree(v16);
          v15 = 0;
          v16 = v17;
        }
        while ( v17 );
      }
    }
  }
  if ( (this->m_ObjectFlags & 0x40) != 0 )
  {
    ObjectExcessiveAllocation = this->m_Globals->ObjectExcessiveAllocation;
    _InterlockedDecrement(&ObjectExcessiveAllocation->ObjectCnt);
    if ( this->m_Type == 4098 && _InterlockedExchangeAdd(&ObjectExcessiveAllocation->DeviceCnt, 0xFFFFFFFF) != 1 )
      _InterlockedAdd(&ObjectExcessiveAllocation->LimitScaled, -ObjectExcessiveAllocation->Limit);
  }
  if ( v10 )
  {
    this[-1].m_SpinLock.m_Lock = 0LL;
    FxTagTracker::~FxTagTracker(v10);
    FxPoolFree(v10);
  }
  ((void (__fastcall *)(FxObject *, void *, __int64, const char *))this->SelfDestruct)(this, Tag, Line, File);
  return 0LL;
}
