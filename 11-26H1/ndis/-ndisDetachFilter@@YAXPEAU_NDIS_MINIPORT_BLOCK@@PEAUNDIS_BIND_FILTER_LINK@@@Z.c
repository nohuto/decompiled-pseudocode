/*
 * XREFs of ?ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x140157770
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NAEBU_GUID@@@Z @ 0x140158AF0 (-Iterate@BindEngine@Ndis@@AEAA_NAEBU_GUID@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF__guid_Dq @ 0x140060BF0 (WPP_RECORDER_SF__guid_Dq.c)
 *     ?GetBindContext@BindState@Ndis@@QEAAPEAXXZ @ 0x140157290 (-GetBindContext@BindState@Ndis@@QEAAPEAXXZ.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140158AB0 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ndisClearTransientBindFailuresAboveThisFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x140164010 (-ndisClearTransientBindFailuresAboveThisFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTE.c)
 *     ?RemoveBindContext@BindState@Ndis@@QEAAXPEAX@Z @ 0x140166980 (-RemoveBindContext@BindState@Ndis@@QEAAXPEAX@Z.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14017A580 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 */

void __fastcall ndisDetachFilter(struct _NDIS_MINIPORT_BLOCK *a1, struct NDIS_BIND_FILTER_LINK *a2)
{
  _NDIS_FILTER_BLOCK *BindContext; // r12
  Ndis::BindState *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r8
  int v9; // [rsp+20h] [rbp-48h]

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
  BindContext = (_NDIS_FILTER_BLOCK *)Ndis::BindState::GetBindContext(&a2->BindState);
  Ndis::BindState::RemoveBindContext(v5, BindContext);
  Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF__guid_Dq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      v7,
      0x27u,
      v9,
      (__int64)&a2->BindDriver._p->_t.Guid);
  ndisDetachFilterInner(a1, BindContext);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF__guid_Dq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)&a2->BindDriver._p->_t.Guid,
      v8,
      0x28u,
      v9,
      (__int64)&a2->BindDriver._p->_t.Guid);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
  ndisClearTransientBindFailuresAboveThisFilter(a1, a2);
  Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine);
}
