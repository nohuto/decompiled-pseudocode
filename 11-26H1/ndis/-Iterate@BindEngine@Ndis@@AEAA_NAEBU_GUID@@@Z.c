/*
 * XREFs of ?Iterate@BindEngine@Ndis@@AEAA_NAEBU_GUID@@@Z @ 0x140158AF0
 * Callers:
 *     ?UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z @ 0x14015C1E0 (-UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z.c)
 * Callees:
 *     ??0Miniport@BindingMetrics@@QEAA@W4OperationType@1@PEBU_NDIS_MINIPORT_BLOCK@@AEBU_GUID@@@Z @ 0x14005AA90 (--0Miniport@BindingMetrics@@QEAA@W4OperationType@1@PEBU_NDIS_MINIPORT_BLOCK@@AEBU_GUID@@@Z.c)
 *     ??0Filter@BindingMetrics@@QEAA@W4OperationType@1@PEBU_NDIS_MINIPORT_BLOCK@@PEBUNDIS_BIND_FILTER_LINK@@AEBU_GUID@@@Z @ 0x14005AAB0 (--0Filter@BindingMetrics@@QEAA@W4OperationType@1@PEBU_NDIS_MINIPORT_BLOCK@@PEBUNDIS_BIND_FILTER_.c)
 *     WPP_RECORDER_SF_Zq @ 0x14005F000 (WPP_RECORDER_SF_Zq.c)
 *     ??1Filter@BindingMetrics@@QEAA@XZ @ 0x14005F2C0 (--1Filter@BindingMetrics@@QEAA@XZ.c)
 *     ?ndisPostProcessRestartParametersAfterFilters@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x140060190 (-ndisPostProcessRestartParametersAfterFilters@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_IN.c)
 *     ??1Protocol@BindingMetrics@@QEAA@XZ @ 0x140063810 (--1Protocol@BindingMetrics@@QEAA@XZ.c)
 *     ?ndisPostProcessRestartParametersAfterMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x140064F70 (-ndisPostProcessRestartParametersAfterMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_IN.c)
 *     ??1Miniport@BindingMetrics@@QEAA@XZ @ 0x14006E7C0 (--1Miniport@BindingMetrics@@QEAA@XZ.c)
 *     ?ndisPostProcessRestartParametersAfterProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x140086340 (-ndisPostProcessRestartParametersAfterProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_I.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     ?ndisMPauseMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140157170 (-ndisMPauseMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1401572B0 (-ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INF.c)
 *     ?ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x140157420 (-ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 *     ?ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x140157770 (-ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x140157D40 (-ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?ndisMCheckForInitModeExit@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140158150 (-ndisMCheckForInitModeExit@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPauseProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1401581C0 (-ndisPauseProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 *     ?GarbageCollectDeadBindings@BindStack@Ndis@@QEAAXXZ @ 0x140158330 (-GarbageCollectDeadBindings@BindStack@Ndis@@QEAAXXZ.c)
 *     ?Release@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1401583F0 (-Release@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ?ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x140158470 (-ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART.c)
 *     ?ndisMRecalculateMiniportStackAfterBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140158830 (-ndisMRecalculateMiniportStackAfterBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ??1NDIS_RESTART_INFORMATION@@QEAA@XZ @ 0x140158A50 (--1NDIS_RESTART_INFORMATION@@QEAA@XZ.c)
 *     ?GetActualBindingState@BindState@Ndis@@QEAA?AW4BINDING_ENABLED_OR_DISABLED@@XZ @ 0x140159620 (-GetActualBindingState@BindState@Ndis@@QEAA-AW4BINDING_ENABLED_OR_DISABLED@@XZ.c)
 *     ?ApplyRules@BindEngine@Ndis@@AEAAXXZ @ 0x140159640 (-ApplyRules@BindEngine@Ndis@@AEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015C650 (--1KLockHolder@@QEAA@XZ.c)
 *     ?SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z @ 0x140161AC0 (-SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z.c)
 *     ?ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x140163ED0 (-ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?ndisUnbindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1401667C0 (-ndisUnbindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 *     ?ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x140166F10 (-ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z.c)
 */

char __fastcall Ndis::BindEngine::Iterate(Ndis::BindEngine *this, const struct _GUID *a2)
{
  KPushLock *p_m_lock; // r13
  unsigned __int64 v3; // rdi
  __int64 v6; // rdx
  _NDIS_MINIPORT_BLOCK *m_miniport; // r14
  __int64 m_numElements; // r15
  __int64 v9; // r14
  unsigned __int64 i; // rsi
  _NDIS_MINIPORT_BLOCK *v11; // r8
  wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK> > *p; // rax
  NDIS_BIND_FILTER_LINK *v13; // rdi
  __int64 value; // rsi
  __int64 v15; // r9
  _NDIS_MINIPORT_BLOCK *v16; // r14
  unsigned __int64 v17; // rsi
  __int64 v18; // r15
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rsi
  wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK> > *v21; // rax
  struct NDIS_BIND_FILTER_LINK *v22; // r14
  __int64 v23; // rdx
  __int64 v24; // r8
  wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK> > *v25; // rax
  Ndis::BindState *p_BindState; // rcx
  struct NDIS_BIND_PROTOCOL_LINK **p_value; // rdi
  Ndis::BindState *v28; // rcx
  unsigned __int16 *p_Length; // rdx
  struct NDIS_BIND_PROTOCOL_LINK *v30; // rdi
  _NDIS_MINIPORT_BLOCK *v31; // r8
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  _NDIS_MINIPORT_BLOCK *v35; // r8
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  _NDIS_MINIPORT_BLOCK *v39; // rsi
  wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK> > *v40; // rax
  struct NDIS_BIND_FILTER_LINK *v41; // r14
  __int64 v42; // rdx
  __int64 v43; // r14
  unsigned __int64 j; // rdi
  wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK> > *v45; // rax
  NDIS_BIND_LINK_BASE *v46; // r15
  __int64 v47; // rdx
  _NDIS_MINIPORT_BLOCK *v48; // r8
  unsigned __int64 k; // rdi
  NDIS_BIND_FILTER_LINK *v50; // rsi
  __int64 v51; // rdx
  __int64 v52; // r8
  _NDIS_MINIPORT_BLOCK *v53; // r15
  unsigned __int64 v54; // rdi
  __int64 v55; // r12
  wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK> > *v56; // rax
  __int64 v57; // rsi
  wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK> > *v58; // r14
  __int64 v59; // rdx
  _NDIS_MINIPORT_BLOCK *v60; // r8
  __int64 v62; // rdx
  _NDIS_MINIPORT_BLOCK *v63; // r8
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rdx
  __int64 v71; // r8
  __int64 v72; // r9
  struct _GUID *v73; // [rsp+20h] [rbp-E0h]
  KLockHolder v74; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v75[56]; // [rsp+58h] [rbp-A8h] BYREF
  const struct _GUID *v76; // [rsp+90h] [rbp-70h]
  struct NDIS_RESTART_INFORMATION v77; // [rsp+A0h] [rbp-60h] BYREF

  v76 = a2;
  p_m_lock = &this->m_lock;
  v3 = 0LL;
  *(_QWORD *)&v77.FilterInstanceBuffer.m_bufferSize = 0LL;
  v77.FilterInstanceBuffer._p = 0LL;
  memset(&v77, 0, 104);
  v74.m_Lock = &this->m_lock;
  memset(&v77.RssCaps, 0, sizeof(v77.RssCaps));
  memset(&v77.ProtocolParameters, 0, 60);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(p_m_lock, 0LL);
  this->m_isDirty = 0;
  ExReleasePushLockExclusiveEx(p_m_lock, 0LL);
  KeLeaveCriticalRegion();
  ndisMCheckForInitModeExit(this->m_miniport);
  KeEnterCriticalRegion();
  v74.m_Region.m_Entered = 1;
  ExAcquirePushLockExclusiveEx(p_m_lock, 0LL);
  v74.m_State = Exclusive;
  this->m_currentOperation = 0LL;
  Ndis::BindEngine::ApplyRules(this);
  if ( this->m_isDirty )
  {
    KLockHolder::~KLockHolder(&v74);
    NDIS_RESTART_INFORMATION::~NDIS_RESTART_INFORMATION(&v77);
    return 1;
  }
  else
  {
    m_miniport = this->m_miniport;
    m_numElements = this->m_miniport->Bindings.Protocols.m_numElements;
    while ( v3 != m_numElements )
    {
      if ( v3 >= m_miniport->Bindings.Protocols.m_numElements )
LABEL_89:
        __fastfail(5u);
      value = (__int64)m_miniport->Bindings.Protocols._p[v3].__ptr_.__value_;
      if ( Ndis::BindState::GetActualBindingState((Ndis::BindState *)value) == BindingEnabled
        && *(_DWORD *)(value + 36)
        && *(_DWORD *)(value + 40) == 1 )
      {
        v35 = this->m_miniport;
        this->m_currentOperation = (NDIS_BIND_LINK_BASE *)value;
        LOBYTE(v6) = 1;
        BindingMetrics::Filter::Filter((__int64)v75, v6, (__int64)v35, value, (__int64)a2);
        ExReleasePushLockExclusiveEx(p_m_lock, 0LL);
        KeLeaveCriticalRegion();
        ndisPauseProtocol(this->m_miniport, (struct NDIS_BIND_PROTOCOL_LINK *)value);
        KeEnterCriticalRegion();
        v74.m_Region.m_Entered = 1;
        ExAcquirePushLockExclusiveEx(p_m_lock, 0LL);
        v74.m_State = Exclusive;
        this->m_currentOperation = 0LL;
        Ndis::BindEngine::ApplyRules(this);
        if ( this->m_isDirty )
        {
          BindingMetrics::Protocol::~Protocol((BindingMetrics::Protocol *)v75, v36, v37, v38);
          KLockHolder::~KLockHolder(&v74);
LABEL_73:
          NDIS_RESTART_INFORMATION::~NDIS_RESTART_INFORMATION(&v77);
          return 1;
        }
        BindingMetrics::Protocol::~Protocol((BindingMetrics::Protocol *)v75, v36, v37, v38);
      }
      ++v3;
    }
    v9 = this->m_miniport->Bindings.Filters.m_numElements;
    for ( i = v9 - 1; ; --i )
    {
      v11 = this->m_miniport;
      if ( !v9 )
        break;
      if ( i >= v11->Bindings.Filters.m_numElements )
        goto LABEL_89;
      p = v11->Bindings.Filters._p;
      v13 = p[i].__ptr_.__value_;
      if ( (v13->BindState.PretendBindingActive || v13->BindState.m_bindContext.m_numElements)
        && v13->BindState.m_pauseReasons
        && v13->BindState.m_actualPauseState == DatapathRunning )
      {
        v15 = (__int64)p[i].__ptr_.__value_;
        this->m_currentOperation = (NDIS_BIND_LINK_BASE *)v13;
        LOBYTE(v6) = 1;
        BindingMetrics::Filter::Filter((__int64)v75, v6, (__int64)v11, v15, (__int64)a2);
        ExReleasePushLockExclusiveEx(p_m_lock, 0LL);
        KeLeaveCriticalRegion();
        ndisPauseFilter(this->m_miniport, v13);
        KeEnterCriticalRegion();
        v74.m_Region.m_Entered = 1;
        ExAcquirePushLockExclusiveEx(p_m_lock, 0LL);
        v74.m_State = Exclusive;
        this->m_currentOperation = 0LL;
        Ndis::BindEngine::ApplyRules(this);
        if ( this->m_isDirty )
        {
LABEL_79:
          BindingMetrics::Filter::~Filter((BindingMetrics::Filter *)v75);
          goto LABEL_72;
        }
        BindingMetrics::Filter::~Filter((BindingMetrics::Filter *)v75);
      }
      --v9;
    }
    if ( v11->Bindings.Miniport.m_pauseReasons && v11->Bindings.Miniport.m_actualPauseState == DatapathRunning )
    {
      LOBYTE(v6) = 1;
      BindingMetrics::Miniport::Miniport((__int64)v75, v6, (__int64)v11, (__int64)a2);
      ExReleasePushLockExclusiveEx(p_m_lock, 0LL);
      KeLeaveCriticalRegion();
      ndisMPauseMiniport(this->m_miniport);
      KeEnterCriticalRegion();
      v74.m_Region.m_Entered = 1;
      ExAcquirePushLockExclusiveEx(p_m_lock, 0LL);
      v74.m_State = Exclusive;
      this->m_currentOperation = 0LL;
      Ndis::BindEngine::ApplyRules(this);
      if ( this->m_isDirty )
      {
        BindingMetrics::Miniport::~Miniport((BindingMetrics::Miniport *)v75, v67, v68, v69);
LABEL_72:
        ExReleasePushLockExclusiveEx(p_m_lock, 0LL);
        KeLeaveCriticalRegion();
        goto LABEL_73;
      }
      BindingMetrics::Miniport::~Miniport((BindingMetrics::Miniport *)v75, v67, v68, v69);
    }
    v16 = this->m_miniport;
    v17 = 0LL;
    v18 = this->m_miniport->Bindings.Protocols.m_numElements;
    while ( v17 != v18 )
    {
      if ( v17 >= v16->Bindings.Protocols.m_numElements )
        goto LABEL_89;
      v25 = v16->Bindings.Protocols._p;
      p_BindState = &v25[v17].__ptr_.__value_->BindState;
      p_value = &v25[v17].__ptr_.__value_;
      if ( p_BindState->m_unbindReasons && Ndis::BindState::GetActualBindingState(p_BindState) == BindingEnabled )
      {
        if ( Ndis::BindState::SetSource(v28, RemoveBindSource, UnsolicitedOpen) && (unsigned __int8)byte_14011EAD3 >= 4u )
        {
          p_Length = &(*p_value)->BindDriver._p->_t.Name.__ptr_.__value_->Length;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Zq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              (int)p_Length,
              0x1Cu,
              0xAu,
              (struct _GUID *)&WPP_2e89932a50af35deab5418396cb84628_Traceguids,
              p_Length,
              (*p_value)->BindState.Miniport);
        }
        v30 = *p_value;
        v31 = this->m_miniport;
        LOBYTE(p_Length) = 2;
        this->m_currentOperation = (NDIS_BIND_LINK_BASE *)v30;
        BindingMetrics::Filter::Filter((__int64)v75, (__int64)p_Length, (__int64)v31, (__int64)v30, (__int64)a2);
        ExReleasePushLockExclusiveEx(p_m_lock, 0LL);
        KeLeaveCriticalRegion();
        ndisUnbindProtocol(this->m_miniport, v30);
        KeEnterCriticalRegion();
        v74.m_Region.m_Entered = 1;
        ExAcquirePushLockExclusiveEx(p_m_lock, 0LL);
        v74.m_State = Exclusive;
        this->m_currentOperation = 0LL;
        Ndis::BindEngine::ApplyRules(this);
        if ( this->m_isDirty )
        {
LABEL_77:
          BindingMetrics::Protocol::~Protocol((BindingMetrics::Protocol *)v75, v32, v33, v34);
          goto LABEL_72;
        }
        BindingMetrics::Protocol::~Protocol((BindingMetrics::Protocol *)v75, v32, v33, v34);
      }
      ++v17;
    }
    v19 = this->m_miniport->Bindings.Filters.m_numElements;
    v20 = v19 - 1;
    while ( v19 )
    {
      if ( v20 >= this->m_miniport->Bindings.Filters.m_numElements )
        goto LABEL_89;
      v21 = this->m_miniport->Bindings.Filters._p;
      v22 = v21[v20].__ptr_.__value_;
      if ( v22->BindState.m_unbindReasons
        && Ndis::BindState::GetActualBindingState(&v21[v20].__ptr_.__value_->BindState) == BindingEnabled )
      {
        this->m_currentOperation = (NDIS_BIND_LINK_BASE *)v22;
        LOBYTE(v23) = 5;
        BindingMetrics::Filter::Filter((__int64)v75, v23, v24, (__int64)v22, (__int64)a2);
        ExReleasePushLockExclusiveEx(p_m_lock, 0LL);
        KeLeaveCriticalRegion();
        ndisDetachFilter(this->m_miniport, v22);
        KeEnterCriticalRegion();
        v74.m_Region.m_Entered = 1;
        ExAcquirePushLockExclusiveEx(p_m_lock, 0LL);
        v74.m_State = Exclusive;
        this->m_currentOperation = 0LL;
        Ndis::BindEngine::ApplyRules(this);
        if ( this->m_isDirty )
          goto LABEL_79;
        BindingMetrics::Filter::~Filter((BindingMetrics::Filter *)v75);
      }
      --v19;
      --v20;
    }
    while ( 1 )
    {
      v39 = this->m_miniport;
      if ( v19 >= this->m_miniport->Bindings.Filters.m_numElements )
        break;
      v40 = v39->Bindings.Filters._p;
      v41 = v40[v19].__ptr_.__value_;
      if ( !v41->BindState.m_unbindReasons
        && Ndis::BindState::GetActualBindingState(&v40[v19].__ptr_.__value_->BindState) == BindingDisabled )
      {
        this->m_currentOperation = (NDIS_BIND_LINK_BASE *)v41;
        LOBYTE(v42) = 6;
        BindingMetrics::Filter::Filter((__int64)v75, v42, (__int64)v39, (__int64)v41, (__int64)a2);
        ExReleasePushLockExclusiveEx(p_m_lock, 0LL);
        KeLeaveCriticalRegion();
        ndisAttachFilter(this->m_miniport, v41);
        KeEnterCriticalRegion();
        v74.m_Region.m_Entered = 1;
        ExAcquirePushLockExclusiveEx(p_m_lock, 0LL);
        v74.m_State = Exclusive;
        this->m_currentOperation = 0LL;
        Ndis::BindEngine::ApplyRules(this);
        if ( this->m_isDirty )
        {
LABEL_88:
          BindingMetrics::Filter::~Filter((BindingMetrics::Filter *)v75);
          KLockHolder::~KLockHolder(&v74);
          NDIS_RESTART_INFORMATION::~NDIS_RESTART_INFORMATION(&v77);
          return 1;
        }
        BindingMetrics::Filter::~Filter((BindingMetrics::Filter *)v75);
      }
      ++v19;
    }
    v43 = v39->Bindings.Protocols.m_numElements;
    for ( j = 0LL; j != v43; ++j )
    {
      if ( j >= v39->Bindings.Protocols.m_numElements )
        goto LABEL_89;
      v45 = v39->Bindings.Protocols._p;
      v46 = &v45[j].__ptr_.__value_->NDIS_BIND_LINK_BASE;
      if ( !v46->BindState.m_unbindReasons
        && Ndis::BindState::GetActualBindingState(&v45[j].__ptr_.__value_->BindState) == BindingDisabled )
      {
        v63 = this->m_miniport;
        this->m_currentOperation = v46;
        LOBYTE(v62) = 3;
        BindingMetrics::Filter::Filter((__int64)v75, v62, (__int64)v63, (__int64)v46, (__int64)a2);
        ExReleasePushLockExclusiveEx(p_m_lock, 0LL);
        KeLeaveCriticalRegion();
        ndisBindProtocol(this->m_miniport, &v46->BindState);
        KeEnterCriticalRegion();
        v74.m_Region.m_Entered = 1;
        ExAcquirePushLockExclusiveEx(p_m_lock, 0LL);
        v74.m_State = Exclusive;
        this->m_currentOperation = 0LL;
        Ndis::BindEngine::ApplyRules(this);
        if ( this->m_isDirty )
        {
          BindingMetrics::Protocol::~Protocol((BindingMetrics::Protocol *)v75, v64, v65, v66);
          KLockHolder::~KLockHolder(&v74);
          NDIS_RESTART_INFORMATION::~NDIS_RESTART_INFORMATION(&v77);
          return 1;
        }
        BindingMetrics::Protocol::~Protocol((BindingMetrics::Protocol *)v75, v64, v65, v66);
      }
    }
    ndisMRecalculateMiniportStackAfterBinding(this->m_miniport);
    v48 = this->m_miniport;
    if ( !this->m_miniport->Bindings.Miniport.m_pauseReasons
      && v48->Bindings.Miniport.m_actualPauseState == DatapathPaused )
    {
      LOBYTE(v47) = 4;
      BindingMetrics::Miniport::Miniport((__int64)v75, v47, (__int64)v48, (__int64)a2);
      ExReleasePushLockExclusiveEx(p_m_lock, 0LL);
      KeLeaveCriticalRegion();
      ndisMRestartMiniport(this->m_miniport, &v77);
      KeEnterCriticalRegion();
      v74.m_Region.m_Entered = 1;
      ExAcquirePushLockExclusiveEx(p_m_lock, 0LL);
      v74.m_State = Exclusive;
      this->m_currentOperation = 0LL;
      Ndis::BindEngine::ApplyRules(this);
      if ( this->m_isDirty )
      {
        BindingMetrics::Miniport::~Miniport((BindingMetrics::Miniport *)v75, v70, v71, v72);
        KLockHolder::~KLockHolder(&v74);
        NDIS_RESTART_INFORMATION::~NDIS_RESTART_INFORMATION(&v77);
        return 1;
      }
      BindingMetrics::Miniport::~Miniport((BindingMetrics::Miniport *)v75, v70, v71, v72);
    }
    ndisPostProcessRestartParametersAfterMiniport(this->m_miniport, &v77);
    for ( k = 0LL; k < this->m_miniport->Bindings.Filters.m_numElements; ++k )
    {
      v50 = this->m_miniport->Bindings.Filters._p[k].__ptr_.__value_;
      if ( Ndis::BindState::GetActualBindingState(&v50->BindState) == BindingEnabled
        && !v50->BindState.m_pauseReasons
        && v50->BindState.m_actualPauseState == DatapathPaused )
      {
        this->m_currentOperation = (NDIS_BIND_LINK_BASE *)v50;
        LOBYTE(v51) = 4;
        BindingMetrics::Filter::Filter((__int64)v75, v51, v52, (__int64)v50, (__int64)a2);
        ExReleasePushLockExclusiveEx(p_m_lock, 0LL);
        KeLeaveCriticalRegion();
        ndisRestartFilter(this->m_miniport, v50, &v77);
        KeEnterCriticalRegion();
        v74.m_Region.m_Entered = 1;
        ExAcquirePushLockExclusiveEx(p_m_lock, 0LL);
        v74.m_State = Exclusive;
        this->m_currentOperation = 0LL;
        Ndis::BindEngine::ApplyRules(this);
        if ( this->m_isDirty )
          goto LABEL_88;
        BindingMetrics::Filter::~Filter((BindingMetrics::Filter *)v75);
      }
    }
    ndisPostProcessRestartParametersAfterFilters(this->m_miniport, &v77);
    v53 = this->m_miniport;
    v54 = 0LL;
    v55 = this->m_miniport->Bindings.Protocols.m_numElements;
    while ( v54 != v55 )
    {
      if ( v54 >= v53->Bindings.Protocols.m_numElements )
        goto LABEL_89;
      v56 = v53->Bindings.Protocols._p;
      v57 = (__int64)v56[v54].__ptr_.__value_;
      v58 = &v56[v54];
      if ( Ndis::BindState::GetActualBindingState((Ndis::BindState *)v57) == BindingEnabled
        && !*(_DWORD *)(v57 + 36)
        && !*(_DWORD *)(v57 + 40) )
      {
        v60 = this->m_miniport;
        LOBYTE(v59) = 4;
        v73 = (struct _GUID *)v76;
        this->m_currentOperation = (NDIS_BIND_LINK_BASE *)v57;
        BindingMetrics::Filter::Filter((__int64)v75, v59, (__int64)v60, v57, (__int64)v73);
        ExReleasePushLockExclusiveEx(p_m_lock, 0LL);
        KeLeaveCriticalRegion();
        ndisRestartProtocol(this->m_miniport, (struct NDIS_BIND_PROTOCOL_LINK *)v57, &v77);
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(p_m_lock, 0LL);
        this->m_currentOperation = 0LL;
        Ndis::BindEngine::ApplyRules(this);
        if ( this->m_isDirty )
          goto LABEL_77;
        BindingMetrics::Protocol::~Protocol((BindingMetrics::Protocol *)v75, v32, v33, v34);
        v59 = 0LL;
      }
      ++v54;
      v58->__ptr_.__value_->BindState.m_AdditionalContext = (void *)v59;
    }
    ndisPostProcessRestartParametersAfterProtocols(this->m_miniport, &v77);
    ndisMRecalculateMiniportStackAfterBinding(this->m_miniport);
    Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release((__int64)&this->m_miniport->MiniportOwner);
    Ndis::BindStack::GarbageCollectDeadBindings(&this->m_miniport->Bindings);
    ExReleasePushLockExclusiveEx(p_m_lock, 0LL);
    KeLeaveCriticalRegion();
    NDIS_RESTART_INFORMATION::~NDIS_RESTART_INFORMATION(&v77);
    return 0;
  }
}
