/*
 * XREFs of ??1FxPagedObject@@UEAA@XZ @ 0x1400521D0
 * Callers:
 *     ??1FxRegKey@@UEAA@XZ @ 0x140052188 (--1FxRegKey@@UEAA@XZ.c)
 *     ??_GFxPagedObject@@UEAAPEAXI@Z @ 0x14009A5B0 (--_GFxPagedObject@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x14002C910 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxObject@@UEAA@XZ @ 0x140052560 (--1FxObject@@UEAA@XZ.c)
 */

void __fastcall FxPagedObject::~FxPagedObject(FxPagedObject *this)
{
  MxPagedLock *m_Lock; // rcx

  this->__vftable = (FxPagedObject_vtbl *)FxPagedObject::`vftable';
  m_Lock = this->m_Lock;
  if ( m_Lock )
  {
    FxPoolFree(m_Lock);
    this->m_Lock = 0LL;
  }
  FxObject::~FxObject(this);
}
