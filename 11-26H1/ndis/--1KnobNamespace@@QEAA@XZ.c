/*
 * XREFs of ??1KnobNamespace@@QEAA@XZ @ 0x140137720
 * Callers:
 *     ??1_NDIS_MINIPORT_BLOCK@@QEAA@XZ @ 0x140077050 (--1_NDIS_MINIPORT_BLOCK@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __fastcall KnobNamespace::~KnobNamespace(KnobNamespace *this)
{
  _LIST_ENTRY *p_m_collectionList; // rbx
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v4; // r8
  _LIST_ENTRY *Blink; // rdx
  _LIST_ENTRY *v6; // r8
  _LIST_ENTRY *v7; // rax

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&this->m_lock, 0LL);
  p_m_collectionList = &this->m_collectionList;
  while ( 1 )
  {
    Flink = p_m_collectionList->Flink;
    if ( p_m_collectionList->Flink == p_m_collectionList )
      break;
    v4 = Flink->Flink;
    if ( Flink->Flink->Blink != Flink )
      goto LABEL_10;
    Blink = Flink->Blink;
    if ( Blink->Flink != Flink )
      goto LABEL_10;
    Blink->Flink = v4;
    v4->Blink = Blink;
    if ( Flink != (_LIST_ENTRY *)8 )
      ((void (__fastcall *)(_LIST_ENTRY **, __int64))Flink[-1].Blink->Flink)(&Flink[-1].Blink, 1LL);
  }
  ExReleasePushLockExclusiveEx(&this->m_lock, 0LL);
  KeLeaveCriticalRegion();
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&unk_14011EA48, 0LL);
  v6 = this->m_globalLinkage.Flink;
  if ( v6->Blink != &this->m_globalLinkage || (v7 = this->m_globalLinkage.Blink, v7->Flink != &this->m_globalLinkage) )
LABEL_10:
    __fastfail(3u);
  v7->Flink = v6;
  v6->Blink = v7;
  ExReleasePushLockExclusiveEx(&unk_14011EA48, 0LL);
  KeLeaveCriticalRegion();
}
