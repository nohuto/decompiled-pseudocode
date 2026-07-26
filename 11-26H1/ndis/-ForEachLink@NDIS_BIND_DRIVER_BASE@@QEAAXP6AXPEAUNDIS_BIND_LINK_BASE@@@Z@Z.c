/*
 * XREFs of ?ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z @ 0x14015C000
 * Callers:
 *     NdisReEnumerateProtocolBindings @ 0x1400BBE70 (NdisReEnumerateProtocolBindings.c)
 *     NdisFRetryAttach @ 0x14013ACC0 (NdisFRetryAttach.c)
 *     _lambda_9290c0fce5c4450c26ce3c7312f90185_::_lambda_invoker_cdecl_ @ 0x140144E80 (_lambda_9290c0fce5c4450c26ce3c7312f90185_--_lambda_invoker_cdecl_.c)
 *     ?SetRunningDriverIsReady@NDIS_BIND_DRIVER_BASE@@IEAAX_NW4CallRunMode@@@Z @ 0x14015BFA0 (-SetRunningDriverIsReady@NDIS_BIND_DRIVER_BASE@@IEAAX_NW4CallRunMode@@@Z.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140015DA0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400177D0 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 *     ?ReleaseShared@KLockHolder@@QEAAXXZ @ 0x14015C6E0 (-ReleaseShared@KLockHolder@@QEAAXXZ.c)
 *     ?AcquireShared@KLockHolder@@QEAAXXZ @ 0x140163270 (-AcquireShared@KLockHolder@@QEAAXXZ.c)
 */

void __fastcall NDIS_BIND_DRIVER_BASE::ForEachLink(NDIS_BIND_DRIVER_BASE *this, void (__fastcall *a2)(_LIST_ENTRY *))
{
  KPushLockBase *m_Lock; // rdi
  bool m_Entered; // si
  _LIST_ENTRY *Flink; // rbx
  _LIST_ENTRY *p_BindLinks; // r14
  KLockHolder::<unnamed_type_m_State> m_State; // ecx
  _LIST_ENTRY *v9; // rdi
  __int32 v10; // ecx
  KLockHolder v11; // [rsp+20h] [rbp-28h] BYREF

  m_Lock = (KPushLockBase *)(qword_14011F6D8 + 8);
  v11.m_Lock = (KPushLockBase *)(qword_14011F6D8 + 8);
  KeEnterCriticalRegion();
  m_Entered = 1;
  v11.m_Region.m_Entered = 1;
  ExAcquirePushLockSharedEx(m_Lock, 0LL);
  Flink = this->BindLinks.Flink;
  p_BindLinks = &this->BindLinks;
  m_State = Shared;
  v11.m_State = Shared;
  if ( Flink != p_BindLinks )
  {
    do
    {
      v9 = Flink[-4].Flink;
      if ( LODWORD(v9[95].Flink) )
      {
        if ( (unsigned __int8)ndisReferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)Flink[-4].Flink, 0x20u) )
        {
          KLockHolder::ReleaseShared(&v11);
          a2(Flink - 4);
          KLockHolder::AcquireShared(&v11);
          ndisDereferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)v9, 0x20u);
        }
      }
      Flink = Flink->Flink;
    }
    while ( Flink != p_BindLinks );
    m_Entered = v11.m_Region.m_Entered;
    m_Lock = v11.m_Lock;
    m_State = v11.m_State;
  }
  v10 = m_State - 1;
  if ( !v10 )
  {
    ExReleasePushLockEx(m_Lock, 0LL);
    goto LABEL_13;
  }
  if ( v10 == 1 )
  {
    ExReleasePushLockExclusiveEx(m_Lock, 0LL);
    goto LABEL_13;
  }
  if ( m_Entered )
LABEL_13:
    KeLeaveCriticalRegion();
}
