/*
 * XREFs of ?CheckForAbandondedTags@FxTagTracker@@QEAAXXZ @ 0x140082B78
 * Callers:
 *     ?FinalRelease@FxObject@@AEAAXXZ @ 0x14002CB10 (-FinalRelease@FxObject@@AEAAXXZ.c)
 *     ?ProcessDestroy@FxObject@@AEAAXXZ @ 0x14002D4F0 (-ProcessDestroy@FxObject@@AEAAXXZ.c)
 *     ?Release@FxObject@@UEAAKPEAXJPEBD@Z @ 0x14002D660 (-Release@FxObject@@UEAAKPEAXJPEBD@Z.c)
 *     ?Release@FxRequest@@UEAAKPEAXJPEBD@Z @ 0x14002DF70 (-Release@FxRequest@@UEAAKPEAXJPEBD@Z.c)
 *     ??1FxTagTracker@@QEAA@XZ @ 0x14008263C (--1FxTagTracker@@QEAA@XZ.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qqsd @ 0x140097EE4 (WPP_IFR_SF_qqsd.c)
 */

void __fastcall FxTagTracker::CheckForAbandondedTags(FxTagTracker *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  char v3; // di
  KIRQL v4; // al
  FxTagTrackingBlock *m_Next; // rcx
  KIRQL v6; // r15
  FxTagTrackingBlock *Next; // rbp
  int level; // eax
  const char *globals; // rdx
  void *_a4; // r8
  const _GUID *traceGuid; // [rsp+20h] [rbp-48h]

  m_Globals = this->m_Globals;
  if ( (this->m_OwningObject->m_ObjectFlags & 8) != 0 )
  {
    if ( this->m_Next || (v3 = 1, this->m_FailedCount) )
    {
      WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0xBu, WPP_fxtagtracker_cpp_Traceguids, this);
      v3 = 1;
    }
  }
  else
  {
    v3 = 0;
  }
  v4 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  m_Next = this->m_Next;
  v6 = v4;
  if ( m_Next )
  {
    do
    {
      Next = m_Next->Next;
      level = m_Next->Line;
      globals = m_Next->File;
      _a4 = m_Next->Tag;
      if ( v3 )
      {
        WPP_IFR_SF_qqsd(m_Globals, 2u, (unsigned int)_a4, 0xCu, traceGuid, this->m_OwningObject, _a4, globals, level);
      }
      else
      {
        v3 = 1;
        WPP_IFR_SF_qqsd(m_Globals, 3u, (unsigned int)_a4, 0xDu, traceGuid, this->m_OwningObject, _a4, globals, level);
      }
      m_Next = Next;
    }
    while ( Next );
  }
  KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v6);
}
