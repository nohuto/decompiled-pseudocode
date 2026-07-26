/*
 * XREFs of ?CheckForVBusDependency@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1401387B0
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140159D50 (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Zq @ 0x14005F000 (WPP_RECORDER_SF_Zq.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x14015BE50 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015C650 (--1KLockHolder@@QEAA@XZ.c)
 *     ??0KLockThisShared@@QEAA@AEAVKPushLockBase@@@Z @ 0x140163240 (--0KLockThisShared@@QEAA@AEAVKPushLockBase@@@Z.c)
 */

void __fastcall Ndis::BindRules::CheckForVBusDependency(Ndis::BindRules *this, struct Ndis::BindStack *a2)
{
  __int64 v2; // rdi
  unsigned __int64 i; // rbx
  Ndis::BindState **v5; // r14
  Ndis::BindState *v6; // rcx
  __int64 v7; // rax
  _NDIS_MINIPORT_BLOCK *Miniport; // rcx
  unsigned __int16 *v9; // rdx
  unsigned __int16 v10; // r9
  KLockHolder v11; // [rsp+40h] [rbp-38h] BYREF

  v2 = *((unsigned int *)this + 1);
  for ( i = 0LL; i != v2; ++i )
  {
    if ( i >= *((unsigned int *)this + 1) )
      __fastfail(5u);
    v5 = (Ndis::BindState **)(*((_QWORD *)this + 1) + 8 * i);
    KLockThisShared::KLockThisShared((KLockThisShared *)&v11, (struct KPushLockBase *)(qword_14011F6D8 + 16));
    v6 = *v5;
    v7 = *((_QWORD *)(*v5)[1].m_AdditionalContext + 5);
    if ( v7 )
    {
      if ( (*(_DWORD *)(v7 + 64) & 0x10000000) == 0 || LOBYTE(WPP_MAIN_CB.DeviceQueue.Lock) )
      {
        if ( Ndis::BindState::SetBinding(v6, BindingEnabled, Reason_ProtocolDependsOnVBus)
          && (unsigned __int8)byte_14011EAD3 >= 4u )
        {
          Miniport = (*v5)->Miniport;
          v9 = (unsigned __int16 *)*((_QWORD *)(*v5)[1].m_AdditionalContext + 3);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v10 = 19;
            goto LABEL_15;
          }
        }
      }
      else if ( Ndis::BindState::SetBinding(v6, BindingDisabled, Reason_ProtocolDependsOnVBus)
             && (unsigned __int8)byte_14011EAD3 >= 4u )
      {
        Miniport = (*v5)->Miniport;
        v9 = (unsigned __int16 *)*((_QWORD *)(*v5)[1].m_AdditionalContext + 3);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v10 = 20;
LABEL_15:
          WPP_RECORDER_SF_Zq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            (int)v9,
            0x1Cu,
            v10,
            (struct _GUID *)&WPP_065a33821845343ef30f5566aa9547e7_Traceguids,
            v9,
            Miniport);
        }
      }
    }
    KLockHolder::~KLockHolder(&v11);
  }
}
