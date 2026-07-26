/*
 * XREFs of ?MakeOptionalFiltersMandatoryDuringBoot@BindRules@Ndis@@YAXPEAUBindStack@2@_N@Z @ 0x1401379C0
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140159D50 (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x140169CA0 (-ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Zq @ 0x14005F000 (WPP_RECORDER_SF_Zq.c)
 *     WPP_RECORDER_SF__guid_D @ 0x1400E625C (WPP_RECORDER_SF__guid_D_ea_1400E625C.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x14014C2B8 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?IsAlive@BindState@Ndis@@QEBA_NXZ @ 0x1401583D0 (-IsAlive@BindState@Ndis@@QEBA_NXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x14015BE50 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015C650 (--1KLockHolder@@QEAA@XZ.c)
 *     ??0KLockThisShared@@QEAA@AEAVKPushLockBase@@@Z @ 0x140163240 (--0KLockThisShared@@QEAA@AEAVKPushLockBase@@@Z.c)
 */

void __fastcall Ndis::BindRules::MakeOptionalFiltersMandatoryDuringBoot(
        Ndis::BindRules *this,
        struct Ndis::BindStack *a2)
{
  __int64 v2; // rbp
  unsigned __int64 v3; // rbx
  enum BINDING_ENABLED_OR_DISABLED v4; // r14d
  unsigned __int64 v5; // rdi
  char v6; // r15
  struct NDIS_BIND_FILTER_LINK **v8; // r12
  Ndis::BindState *v9; // rcx
  int v10; // edx
  int v11; // edx
  KRef<NDIS_BIND_FILTER_DRIVER>::KRefHolder *p; // rdx
  int v13; // edx
  __int64 v14; // rdi
  Ndis::BindState **v15; // rbp
  Ndis::BindState *v16; // rcx
  _NDIS_MINIPORT_BLOCK *Miniport; // rcx
  unsigned __int16 *v18; // rdx
  unsigned __int16 v19; // r9
  int v20; // [rsp+20h] [rbp-258h]
  KLockHolder v21; // [rsp+40h] [rbp-238h] BYREF
  __int64 v22[20]; // [rsp+60h] [rbp-218h] BYREF
  char v23[160]; // [rsp+100h] [rbp-178h] BYREF
  char v24[160]; // [rsp+1A0h] [rbp-D8h] BYREF

  v2 = *((unsigned int *)this + 5);
  v3 = 0LL;
  v4 = BindingEnabled;
  v5 = 0LL;
  v6 = (char)a2;
  while ( v5 != v2 )
  {
    if ( v5 >= *((unsigned int *)this + 5) )
LABEL_49:
      __fastfail(5u);
    v8 = (struct NDIS_BIND_FILTER_LINK **)(*((_QWORD *)this + 3) + 8 * v5);
    if ( Ndis::BindState::IsAlive(&(*v8)->BindState) )
    {
      if ( v6 )
      {
        if ( v4 )
        {
          if ( Ndis::BindState::SetBinding(v9, v4, Reason_MissingOptionalFilter) )
          {
            memset(v23, 0, sizeof(v23));
            if ( (unsigned __int8)byte_14011EAD3 >= 4u )
            {
              ndisGetBindLinkNameForTracing(*v8, (struct NDIS_PNPTRACE_LOCALS *)v23);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_Zq(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  v11,
                  0x1Cu,
                  0x2Au,
                  (struct _GUID *)&WPP_065a33821845343ef30f5566aa9547e7_Traceguids,
                  *(unsigned __int16 **)&v23[8],
                  *(_QWORD *)v23);
            }
          }
        }
        else if ( Ndis::BindState::SetBinding(v9, BindingEnabled, Reason_MissingOptionalFilter) )
        {
          memset(v22, 0, sizeof(v22));
          if ( (unsigned __int8)byte_14011EAD3 >= 4u )
          {
            ndisGetBindLinkNameForTracing(*v8, (struct NDIS_PNPTRACE_LOCALS *)v22);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_Zq(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v10,
                0x1Cu,
                0x29u,
                (struct _GUID *)&WPP_065a33821845343ef30f5566aa9547e7_Traceguids,
                (unsigned __int16 *)v22[1],
                v22[0]);
          }
        }
        KLockThisShared::KLockThisShared((KLockThisShared *)&v21, (struct KPushLockBase *)(qword_14011F6D8 + 16));
        p = (*v8)->BindDriver._p;
        if ( (p->_t.FilterBindFlags & 0x11) == 1 && !p->_t.RunningDriver )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            if ( *((_WORD *)WPP_GLOBAL_Control + 36) )
              WPP_RECORDER_SF__guid_D(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                (__int64)&p->_t.Guid,
                (__int64)*v8,
                0x2Cu,
                v20,
                (__int64)&p->_t.Guid);
          }
          v4 = BindingDisabled;
        }
      }
      else if ( v4
             || !Ndis::BindState::SetBinding(v9, BindingEnabled, Reason_MissingOptionalFilter)
             || (memset(v24, 0, sizeof(v24)), (unsigned __int8)byte_14011EAD3 < 4u)
             || (ndisGetBindLinkNameForTracing(*v8, (struct NDIS_PNPTRACE_LOCALS *)v24),
                 WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED) )
      {
        KLockThisShared::KLockThisShared((KLockThisShared *)&v21, (struct KPushLockBase *)(qword_14011F6D8 + 16));
      }
      else
      {
        WPP_RECORDER_SF_Zq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v13,
          0x1Cu,
          0x2Bu,
          (struct _GUID *)&WPP_065a33821845343ef30f5566aa9547e7_Traceguids,
          *(unsigned __int16 **)&v24[8],
          *(_QWORD *)v24);
        KLockThisShared::KLockThisShared((KLockThisShared *)&v21, (struct KPushLockBase *)(qword_14011F6D8 + 16));
      }
      KLockHolder::~KLockHolder(&v21);
    }
    ++v5;
  }
  v14 = *((unsigned int *)this + 1);
  while ( v3 != v14 )
  {
    if ( v3 >= *((unsigned int *)this + 1) )
      goto LABEL_49;
    v15 = (Ndis::BindState **)(*((_QWORD *)this + 1) + 8 * v3);
    if ( v6 )
    {
      v16 = *v15;
      if ( v4 )
      {
        if ( Ndis::BindState::SetBinding(v16, v4, Reason_MissingOptionalFilter) && (unsigned __int8)byte_14011EAD3 >= 4u )
        {
          Miniport = (*v15)->Miniport;
          v18 = (unsigned __int16 *)*((_QWORD *)(*v15)[1].m_AdditionalContext + 3);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v19 = 46;
            goto LABEL_47;
          }
        }
      }
      else if ( Ndis::BindState::SetBinding(v16, BindingEnabled, Reason_MissingOptionalFilter)
             && (unsigned __int8)byte_14011EAD3 >= 4u )
      {
        Miniport = (*v15)->Miniport;
        v18 = (unsigned __int16 *)*((_QWORD *)(*v15)[1].m_AdditionalContext + 3);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v19 = 45;
LABEL_47:
          WPP_RECORDER_SF_Zq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            (int)v18,
            0x1Cu,
            v19,
            (struct _GUID *)&WPP_065a33821845343ef30f5566aa9547e7_Traceguids,
            v18,
            Miniport);
        }
      }
    }
    else if ( v4 == BindingEnabled
           && Ndis::BindState::SetBinding(*v15, BindingEnabled, Reason_MissingOptionalFilter)
           && (unsigned __int8)byte_14011EAD3 >= 4u )
    {
      Miniport = (*v15)->Miniport;
      v18 = (unsigned __int16 *)*((_QWORD *)(*v15)[1].m_AdditionalContext + 3);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v19 = 47;
        goto LABEL_47;
      }
    }
    ++v3;
  }
}
