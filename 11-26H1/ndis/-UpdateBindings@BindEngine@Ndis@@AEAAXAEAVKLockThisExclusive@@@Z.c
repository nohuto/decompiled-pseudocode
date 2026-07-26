/*
 * XREFs of ?UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z @ 0x14015C1E0
 * Callers:
 *     ?DispatchPendingWork@BindEngine@Ndis@@AEAAXW4CallRunMode@@AEAVKLockThisExclusive@@@Z @ 0x140157CA0 (-DispatchPendingWork@BindEngine@Ndis@@AEAAXW4CallRunMode@@AEAVKLockThisExclusive@@@Z.c)
 *     ?UpdateBindingsWorkItem@BindEngine@Ndis@@AEAAXXZ @ 0x14015C130 (-UpdateBindingsWorkItem@BindEngine@Ndis@@AEAAXXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     ??0UpdateBindings@BindingMetrics@@QEAA@PEBU_NDIS_MINIPORT_BLOCK@@AEBU_GUID@@@Z @ 0x14005AA60 (--0UpdateBindings@BindingMetrics@@QEAA@PEBU_NDIS_MINIPORT_BLOCK@@AEBU_GUID@@@Z.c)
 *     ??1UpdateBindings@BindingMetrics@@QEAA@XZ @ 0x14006BEA0 (--1UpdateBindings@BindingMetrics@@QEAA@XZ.c)
 *     ?SetIterations@UpdateBindings@BindingMetrics@@QEAAX_K@Z @ 0x140073490 (-SetIterations@UpdateBindings@BindingMetrics@@QEAAX_K@Z.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     ?Iterate@BindEngine@Ndis@@AEAA_NAEBU_GUID@@@Z @ 0x140158AF0 (-Iterate@BindEngine@Ndis@@AEAA_NAEBU_GUID@@@Z.c)
 *     ?EndBindOperation@BindEngine@Ndis@@SAXXZ @ 0x14015C390 (-EndBindOperation@BindEngine@Ndis@@SAXXZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x14015C400 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?ndisMStartOpportunisticPowerSavings@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_N@Z @ 0x14015C440 (-ndisMStartOpportunisticPowerSavings@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_N@Z.c)
 *     ?ndisMDisableOpportunisticPowerSavings@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEA_N@Z @ 0x14015C4B0 (-ndisMDisableOpportunisticPowerSavings@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEA_N@Z.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x14015C6A0 (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 */

void __fastcall Ndis::BindEngine::UpdateBindings(Ndis::BindEngine *this, KLockHolder *a2)
{
  KLockHolder *v2; // rdi
  __int64 v4; // rsi
  struct _NDIS_MINIPORT_BLOCK *m_miniport; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  bool v9; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v10[56]; // [rsp+38h] [rbp-70h] BYREF
  GUID ActivityId; // [rsp+70h] [rbp-38h] BYREF

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      28,
      11,
      (struct _GUID *)&WPP_2e89932a50af35deab5418396cb84628_Traceguids,
      (char)this->m_miniport);
  }
  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  BindingMetrics::UpdateBindings::UpdateBindings((BindingMetrics::UpdateBindings *)v10, this->m_miniport, &ActivityId);
  v4 = 0LL;
  do
  {
    KLockHolder::ReleaseExclusive(v2);
    _InterlockedIncrement((volatile signed __int32 *)&Ndis::BindEngine::s_NumBindOperationsInProgress);
    m_miniport = this->m_miniport;
    v9 = 0;
    ndisMDisableOpportunisticPowerSavings(m_miniport, &v9);
    do
      ++v4;
    while ( Ndis::BindEngine::Iterate(this, &ActivityId) );
    ndisMStartOpportunisticPowerSavings(this->m_miniport, v9);
    Ndis::BindEngine::EndBindOperation();
    KLockHolder::AcquireExclusive(v2);
  }
  while ( this->m_isDirty );
  BindingMetrics::UpdateBindings::SetIterations((BindingMetrics::UpdateBindings *)v10, v4);
  this->m_bindThread = 0LL;
  KeSetEvent(&this->m_bindCompleteEvent.m_event, 0, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
  {
    LOBYTE(v6) = 5;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      28,
      12,
      (struct _GUID *)&WPP_2e89932a50af35deab5418396cb84628_Traceguids,
      (char)this->m_miniport);
  }
  BindingMetrics::UpdateBindings::~UpdateBindings((BindingMetrics::UpdateBindings *)v10, v6, v7, v8);
}
