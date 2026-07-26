/*
 * XREFs of ?UnbindIncompatibleDriversForMacChange@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140137EA0
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140159D50 (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x140169CA0 (-ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Zq @ 0x14005F000 (WPP_RECORDER_SF_Zq.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x14014C2B8 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x14015BE50 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015C650 (--1KLockHolder@@QEAA@XZ.c)
 *     ?ndisMDoesCurrentChangeNotificationRequireUnbind@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x140162660 (-ndisMDoesCurrentChangeNotificationRequireUnbind@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOC.c)
 *     ?ndisMDoesCurrentChangeNotificationRequireUnbind@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@@Z @ 0x140162F80 (-ndisMDoesCurrentChangeNotificationRequireUnbind@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER.c)
 *     ??0KLockThisShared@@QEAA@AEAVKPushLockBase@@@Z @ 0x140163240 (--0KLockThisShared@@QEAA@AEAVKPushLockBase@@@Z.c)
 */

void __fastcall Ndis::BindRules::UnbindIncompatibleDriversForMacChange(
        struct _NDIS_MINIPORT_BLOCK *this,
        struct _NDIS_MINIPORT_BLOCK *a2)
{
  __int64 m_numElements; // rbp
  unsigned __int64 v3; // rbx
  unsigned __int64 i; // rsi
  wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK> > *v6; // r14
  struct _NDIS_FILTER_DRIVER_BLOCK *RunningDriver; // rdx
  bool v8; // al
  Ndis::BindState *p_BindState; // rcx
  int v10; // edx
  unsigned __int16 v11; // r9
  __int64 v12; // rsi
  wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK> > *v13; // r14
  struct _NDIS_PROTOCOL_BLOCK *v14; // rdx
  bool v15; // al
  Ndis::BindState *v16; // rcx
  _NDIS_MINIPORT_BLOCK *Miniport; // rcx
  unsigned __int16 *p_Length; // rdx
  unsigned __int16 v19; // r9
  KLockHolder v20; // [rsp+40h] [rbp-F8h] BYREF
  char v21[160]; // [rsp+60h] [rbp-D8h] BYREF

  m_numElements = this->Bindings.Filters.m_numElements;
  v3 = 0LL;
  for ( i = 0LL; i != m_numElements; ++i )
  {
    if ( i >= this->Bindings.Filters.m_numElements )
LABEL_31:
      __fastfail(5u);
    v6 = &this->Bindings.Filters._p[i];
    KLockThisShared::KLockThisShared((KLockThisShared *)&v20, (struct KPushLockBase *)(qword_14011F6D8 + 16));
    RunningDriver = v6->__ptr_.__value_->BindDriver._p->_t.RunningDriver;
    if ( RunningDriver )
    {
      v8 = ndisMDoesCurrentChangeNotificationRequireUnbind(this, RunningDriver);
      p_BindState = &v6->__ptr_.__value_->BindState;
      if ( v8 )
      {
        if ( Ndis::BindState::SetBinding(p_BindState, BindingDisabled, Reason_IncompatibleWithNotification) )
        {
          memset(v21, 0, sizeof(v21));
          if ( (unsigned __int8)byte_14011EAD3 >= 4u )
          {
            ndisGetBindLinkNameForTracing(v6->__ptr_.__value_, (struct NDIS_PNPTRACE_LOCALS *)v21);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v11 = 21;
LABEL_14:
              WPP_RECORDER_SF_Zq(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v10,
                0x1Cu,
                v11,
                (struct _GUID *)&WPP_065a33821845343ef30f5566aa9547e7_Traceguids,
                *(unsigned __int16 **)&v21[8],
                *(_QWORD *)v21);
            }
          }
        }
      }
      else if ( Ndis::BindState::SetBinding(p_BindState, BindingEnabled, Reason_IncompatibleWithNotification) )
      {
        memset(v21, 0, sizeof(v21));
        if ( (unsigned __int8)byte_14011EAD3 >= 4u )
        {
          ndisGetBindLinkNameForTracing(v6->__ptr_.__value_, (struct NDIS_PNPTRACE_LOCALS *)v21);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v11 = 22;
            goto LABEL_14;
          }
        }
      }
    }
    KLockHolder::~KLockHolder(&v20);
  }
  v12 = this->Bindings.Protocols.m_numElements;
  while ( v3 != v12 )
  {
    if ( v3 >= this->Bindings.Protocols.m_numElements )
      goto LABEL_31;
    v13 = &this->Bindings.Protocols._p[v3];
    KLockThisShared::KLockThisShared((KLockThisShared *)&v20, (struct KPushLockBase *)(qword_14011F6D8 + 16));
    v14 = v13->__ptr_.__value_->BindDriver._p->_t.RunningDriver;
    if ( v14 )
    {
      v15 = ndisMDoesCurrentChangeNotificationRequireUnbind(this, v14);
      v16 = &v13->__ptr_.__value_->BindState;
      if ( v15 )
      {
        if ( Ndis::BindState::SetBinding(v16, BindingDisabled, Reason_IncompatibleWithNotification)
          && (unsigned __int8)byte_14011EAD3 >= 4u )
        {
          Miniport = v13->__ptr_.__value_->BindState.Miniport;
          p_Length = &v13->__ptr_.__value_->BindDriver._p->_t.Name.__ptr_.__value_->Length;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v19 = 23;
LABEL_29:
            WPP_RECORDER_SF_Zq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              (int)p_Length,
              0x1Cu,
              v19,
              (struct _GUID *)&WPP_065a33821845343ef30f5566aa9547e7_Traceguids,
              p_Length,
              Miniport);
          }
        }
      }
      else if ( Ndis::BindState::SetBinding(v16, BindingEnabled, Reason_IncompatibleWithNotification)
             && (unsigned __int8)byte_14011EAD3 >= 4u )
      {
        Miniport = v13->__ptr_.__value_->BindState.Miniport;
        p_Length = &v13->__ptr_.__value_->BindDriver._p->_t.Name.__ptr_.__value_->Length;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v19 = 24;
          goto LABEL_29;
        }
      }
    }
    KLockHolder::~KLockHolder(&v20);
    ++v3;
  }
}
