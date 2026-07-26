/*
 * XREFs of ??1_NDIS_MINIPORT_BLOCK@@QEAA@XZ @ 0x140077050
 * Callers:
 *     ?ndisMDeleteMiniportBlockOnRemove@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14007F1A0 (-ndisMDeleteMiniportBlockOnRemove@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ProcessEventQueue@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ @ 0x14005F6A0 (-ProcessEventQueue@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ.c)
 *     ?ReportExceptionWithLockHeld@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXW4MachineException@3@GG@Z @ 0x1400783E0 (-ReportExceptionWithLockHeld@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXW4MachineExcep.c)
 *     ?AddEventToEventQueue@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA_NG@Z @ 0x14008C430 (-AddEventToEventQueue@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA_NG@Z.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 *     ??1KnobNamespace@@QEAA@XZ @ 0x140137720 (--1KnobNamespace@@QEAA@XZ.c)
 *     ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1401564C0 (-ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ??1BindStack@Ndis@@QEAA@XZ @ 0x140168610 (--1BindStack@Ndis@@QEAA@XZ.c)
 *     ??1BindEngine@Ndis@@QEAA@XZ @ 0x140169130 (--1BindEngine@Ndis@@QEAA@XZ.c)
 */

void __fastcall _NDIS_MINIPORT_BLOCK::~_NDIS_MINIPORT_BLOCK(_NDIS_MINIPORT_BLOCK *this)
{
  TriageData *value; // rbx
  NdisWdfIdle *v3; // r14
  struct SmFx::StateMachineEngine::StateMachineEngineImpl *m_impl; // rbx
  KIRQL v5; // bp
  int v6; // eax
  bool v7; // r15
  void (__fastcall *v8)(_QWORD, _QWORD); // rax
  unsigned __int8 v9; // r8
  __int64 v10; // rdx
  unsigned __int8 v11; // cl
  char v12; // cl
  bool v13; // al
  unsigned __int8 v14; // cl
  char v15; // r9
  unsigned __int8 v16; // al
  unsigned __int8 v17; // dl
  __int16 v18; // r8
  __int64 v19; // rax
  void (__fastcall *v20)(_QWORD, _QWORD); // rax
  KnobDescriptor *p; // rcx
  NDISWATCHDOG__ *m_ptr; // rcx
  NDISWATCHDOG__ *v23; // rcx
  NDISWATCHDOG__ *v24; // rcx
  Rtl::KString *v25; // rcx
  Rtl::KString *v26; // rcx

  value = this->Triage.__ptr_.__value_;
  this->Triage.__ptr_.__value_ = 0LL;
  if ( value )
  {
    ((void (__fastcall *)(TriageData *, _QWORD))value->~TriageData)(value, 0LL);
    ExFreePoolWithTag(value, 0);
  }
  v3 = this->IdleSm.__ptr_.__value_;
  this->IdleSm.__ptr_.__value_ = 0LL;
  if ( v3 )
  {
    m_impl = v3->m_engine.m_impl;
    if ( !v3->m_engine.m_impl )
    {
LABEL_42:
      ExFreePoolWithTag(v3, 0);
      goto LABEL_43;
    }
    v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)m_impl + 125);
    *((_BYTE *)m_impl + 1009) = v5;
    v6 = *((_DWORD *)m_impl + 248);
    if ( v6 == 5 )
    {
      if ( *((_WORD *)m_impl + 440) == 1 )
      {
        v8 = (void (__fastcall *)(_QWORD, _QWORD))*((_QWORD *)m_impl + 116);
        if ( v8 )
          v8(*((_QWORD *)m_impl + 112), *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)m_impl + 111) + 16LL) + 4LL));
        *((_WORD *)m_impl + 440) = 0;
        goto LABEL_11;
      }
      v7 = 0;
    }
    else
    {
      v7 = v6 == 1;
    }
    if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)m_impl + 111) + 16LL) + 6LL) == 1 )
    {
      v13 = SmFx::StateMachineEngine::StateMachineEngineImpl::AddEventToEventQueue(m_impl, 1u);
    }
    else
    {
      if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)m_impl + 111) + 16LL) + 6LL) == 2 )
      {
        v14 = *((_BYTE *)m_impl + 978);
        v15 = 0;
        v16 = *((_BYTE *)m_impl + 979);
        v17 = v14;
        if ( v14 != v16 )
        {
          do
          {
            v18 = *((_WORD *)m_impl + v14 + 416);
            if ( v18 == 1 )
            {
              v15 = 1;
            }
            else
            {
              v19 = v17;
              v17 = (v17 + 1) & 0xF;
              *((_WORD *)m_impl + v19 + 416) = v18;
            }
            v16 = *((_BYTE *)m_impl + 979);
            v14 = (v14 + 1) & 0xF;
          }
          while ( v14 != v16 );
          if ( v15 )
          {
            *((_WORD *)m_impl + ((v16 - 1) & 0xF) + 416) = 1;
            goto LABEL_39;
          }
        }
        v12 = (v16 + 1) & 0xF;
        if ( v12 == *((_BYTE *)m_impl + 978) )
          goto LABEL_22;
        *((_WORD *)m_impl + v16 + 416) = 1;
      }
      else
      {
        if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)m_impl + 111) + 16LL) + 6LL) != 3 )
        {
LABEL_17:
          KeReleaseSpinLock((PKSPIN_LOCK)m_impl + 125, v5);
          goto LABEL_42;
        }
        v9 = *((_BYTE *)m_impl + 978);
        v10 = *((unsigned __int8 *)m_impl + 979);
        v11 = v9;
        if ( v9 != (_BYTE)v10 )
        {
          while ( *((_WORD *)m_impl + v11 + 416) != 1 )
          {
            v11 = (v11 + 1) & 0xF;
            if ( v11 == (_BYTE)v10 )
              goto LABEL_21;
          }
          goto LABEL_17;
        }
LABEL_21:
        v12 = (v10 + 1) & 0xF;
        if ( v12 == v9 )
        {
LABEL_22:
          SmFx::StateMachineEngine::StateMachineEngineImpl::ReportExceptionWithLockHeld(
            m_impl,
            RequiresDedicatedThread,
            1u,
            0);
          v13 = 0;
          goto LABEL_37;
        }
        *((_WORD *)m_impl + v10 + 416) = 1;
      }
      v20 = (void (__fastcall *)(_QWORD, _QWORD))*((_QWORD *)m_impl + 116);
      *((_BYTE *)m_impl + 979) = v12;
      if ( v20 )
        v20(*((_QWORD *)m_impl + 112), *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)m_impl + 111) + 16LL) + 4LL));
      v13 = 1;
    }
LABEL_37:
    if ( !v13 )
      goto LABEL_42;
    if ( !v7 )
    {
LABEL_39:
      KeReleaseSpinLock((PKSPIN_LOCK)m_impl + 125, *((_BYTE *)m_impl + 1009));
      goto LABEL_42;
    }
LABEL_11:
    *((_BYTE *)m_impl + 983) = v5;
    *((_BYTE *)m_impl + 982) = 0;
    if ( v5 >= 2u )
      *((_DWORD *)m_impl + 246) = KeGetPcr()->Prcb.Number;
    else
      *((_QWORD *)m_impl + 123) = KeGetCurrentThread();
    SmFx::StateMachineEngine::StateMachineEngineImpl::ProcessEventQueue(m_impl);
    goto LABEL_42;
  }
LABEL_43:
  p = this->PollModeConfigKnobDescriptors._p;
  if ( p )
  {
    ExFreePoolWithTag(p, 0x7272414Bu);
    this->PollModeConfigKnobDescriptors._p = 0LL;
    *(_QWORD *)&this->PollModeConfigKnobDescriptors.m_bufferSize = 0LL;
  }
  KnobNamespace::~KnobNamespace(&this->PollModeConfigKnobsNamespace);
  m_ptr = this->ReenumerateWatchdog.m_ptr;
  if ( m_ptr != (NDISWATCHDOG__ *)-1LL )
    ndisFreeWatchdog(m_ptr);
  v23 = this->HookedOidWatchdog.m_ptr;
  if ( v23 != (NDISWATCHDOG__ *)-1LL )
    ndisFreeWatchdog(v23);
  v24 = this->PendingOidWatchdog.m_ptr;
  if ( v24 != (NDISWATCHDOG__ *)-1LL )
    ndisFreeWatchdog(v24);
  Ndis::BindEngine::~BindEngine(&this->BindEngine);
  Ndis::BindStack::~BindStack(&this->Bindings);
  v25 = this->FilterClass.__ptr_.__value_;
  this->FilterClass.__ptr_.__value_ = 0LL;
  if ( v25 )
    ExFreePoolWithTag(v25, 0x7274534Bu);
  v26 = this->ExportName.__ptr_.__value_;
  this->ExportName.__ptr_.__value_ = 0LL;
  if ( v26 )
    ExFreePoolWithTag(v26, 0x7274534Bu);
}
