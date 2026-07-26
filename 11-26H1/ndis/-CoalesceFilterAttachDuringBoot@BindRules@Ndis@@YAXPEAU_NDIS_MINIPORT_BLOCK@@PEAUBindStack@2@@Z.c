/*
 * XREFs of ?CoalesceFilterAttachDuringBoot@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z @ 0x14015B1C0
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140159D50 (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x140169CA0 (-ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Ld @ 0x14005D7A0 (WPP_RECORDER_SF_Ld.c)
 *     WPP_RECORDER_SF_Zq @ 0x14005F000 (WPP_RECORDER_SF_Zq.c)
 *     WPP_RECORDER_SF__guid_D @ 0x1400E625C (WPP_RECORDER_SF__guid_D_ea_1400E625C.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x14014C3E8 (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?IsAlive@BindState@Ndis@@QEBA_NXZ @ 0x1401583D0 (-IsAlive@BindState@Ndis@@QEBA_NXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x14015BE50 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015C650 (--1KLockHolder@@QEAA@XZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1401625B0 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ??0KLockThisShared@@QEAA@AEAVKPushLockBase@@@Z @ 0x140163240 (--0KLockThisShared@@QEAA@AEAVKPushLockBase@@@Z.c)
 */

void __fastcall Ndis::BindRules::CoalesceFilterAttachDuringBoot(
        struct _NDIS_MINIPORT_BLOCK *this,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct Ndis::BindStack *a3)
{
  __int64 BaseMiniport_high; // r15
  unsigned __int64 i; // rbx
  Ndis::BindState **v7; // r14
  __int64 v8; // r8
  _DWORD *m_AdditionalContext; // rdx
  int SpinLock; // ecx
  $B86B21B9CD3D320E9D12224C3EB689D6 *v11; // rbx
  $B86B21B9CD3D320E9D12224C3EB689D6 *v12; // r14
  int v13; // edx
  int v14; // edx
  int v15; // edx
  Ndis::BindState *v16; // rdi
  int v17; // edx
  int v18; // edx
  unsigned __int16 v19; // r9
  int v20; // edx
  int v21; // [rsp+20h] [rbp-A9h]
  char v22[8]; // [rsp+30h] [rbp-99h]
  char v23[160]; // [rsp+40h] [rbp-89h] BYREF
  KLockHolder v24; // [rsp+E0h] [rbp+17h] BYREF

  if ( this->InitMode )
  {
    BaseMiniport_high = HIDWORD(a2->BaseMiniport);
    for ( i = 0LL; i != BaseMiniport_high; ++i )
    {
      if ( i >= HIDWORD(a2->BaseMiniport) )
        __fastfail(5u);
      v7 = (Ndis::BindState **)((char *)a2->MiniportAdapterContext + 8 * i);
      if ( Ndis::BindState::IsAlive(*v7) )
      {
        KLockThisShared::KLockThisShared((KLockThisShared *)&v24, (struct KPushLockBase *)(qword_14011F6D8 + 16));
        v8 = (__int64)*v7;
        m_AdditionalContext = (*v7)[1].m_AdditionalContext;
        if ( (m_AdditionalContext[10] & 1) == 0 && !*((_QWORD *)m_AdditionalContext + 7) && !*(_BYTE *)(v8 + 8) )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
            WPP_RECORDER_SF__guid_D(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              (__int64)(m_AdditionalContext + 6),
              v8,
              0x22u,
              v21,
              (__int64)(m_AdditionalContext + 6));
          KLockHolder::~KLockHolder(&v24);
          SpinLock = a2->ShortRef.SpinLock;
          v11 = &a2->32;
          LODWORD(a2->ShortRef.SpinLock) = SpinLock | 0x100;
          if ( !SpinLock || !*(_QWORD *)&v11->Reserved4.Length )
          {
            v12 = &a2->32;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
              && *((_WORD *)WPP_GLOBAL_Control + 36) )
            {
              WPP_RECORDER_SF_Ld(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                5u,
                0x1Cu,
                0xEu,
                (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
                SpinLock,
                SpinLock | 0x100);
              v12 = &a2->32;
            }
            *(_BYTE *)(*(_QWORD *)&v11->Reserved4.Length + 5224LL) = 1;
            memset(v23, 0, sizeof(v23));
            v11 = v12;
            if ( (unsigned __int8)byte_14011EAD3 >= 4u )
            {
              ndisGetBindLinkNameForTracing(this, (struct NDIS_PNPTRACE_LOCALS *)v23);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_Zq(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  v13,
                  0x1Cu,
                  0x23u,
                  (struct _GUID *)&WPP_065a33821845343ef30f5566aa9547e7_Traceguids,
                  *(unsigned __int16 **)&v23[8],
                  *(_QWORD *)v23);
            }
          }
          v14 = *(_DWORD *)(&v11[2].MinorNdisVersion + 3);
          *(_DWORD *)(&v11[2].MinorNdisVersion + 3) = v14 | 0x40;
          if ( !v14 || !*(_QWORD *)&v11->Reserved4.Length )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
              && *((_WORD *)WPP_GLOBAL_Control + 36) )
            {
              *(_DWORD *)v22 = v14 | 0x40;
              WPP_RECORDER_SF_Ld(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                5u,
                0x1Cu,
                0xFu,
                (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
                v14,
                *(_QWORD *)v22);
            }
            *(_BYTE *)(*(_QWORD *)&v11->Reserved4.Length + 5224LL) = 1;
            memset(v23, 0, sizeof(v23));
            if ( (unsigned __int8)byte_14011EAD3 >= 4u )
            {
              ndisGetBindLinkNameForTracing(this, (struct NDIS_PNPTRACE_LOCALS *)v23);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_Zq(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  v15,
                  0x1Cu,
                  0x24u,
                  (struct _GUID *)&WPP_065a33821845343ef30f5566aa9547e7_Traceguids,
                  *(unsigned __int16 **)&v23[8],
                  *(_QWORD *)v23);
            }
          }
          return;
        }
        KLockHolder::~KLockHolder(&v24);
      }
    }
  }
  v16 = (Ndis::BindState *)&a2->32;
  if ( this->InitMode )
  {
    if ( Ndis::BindState::SetBinding(v16, BindingEnabled, Reason_MandatoryMissingDuringBoot) )
    {
      memset(v23, 0, sizeof(v23));
      if ( (unsigned __int8)byte_14011EAD3 >= 4u )
      {
        ndisGetBindLinkNameForTracing(this, (struct NDIS_PNPTRACE_LOCALS *)v23);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Zq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v17,
            0x1Cu,
            0x25u,
            (struct _GUID *)&WPP_065a33821845343ef30f5566aa9547e7_Traceguids,
            *(unsigned __int16 **)&v23[8],
            *(_QWORD *)v23);
      }
    }
    if ( Ndis::BindState::SetPause(v16, DatapathRunning, PauseReason_MandatoryMissingDuringBoot) )
    {
      memset(v23, 0, sizeof(v23));
      if ( (unsigned __int8)byte_14011EAD3 >= 4u )
      {
        ndisGetBindLinkNameForTracing(this, (struct NDIS_PNPTRACE_LOCALS *)v23);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v19 = 38;
LABEL_41:
          WPP_RECORDER_SF_Zq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v18,
            0x1Cu,
            v19,
            (struct _GUID *)&WPP_065a33821845343ef30f5566aa9547e7_Traceguids,
            *(unsigned __int16 **)&v23[8],
            *(_QWORD *)v23);
        }
      }
    }
  }
  else
  {
    if ( Ndis::BindState::SetBinding(v16, BindingEnabled, Reason_MandatoryMissingDuringBoot) )
    {
      memset(v23, 0, sizeof(v23));
      if ( (unsigned __int8)byte_14011EAD3 >= 4u )
      {
        ndisGetBindLinkNameForTracing(this, (struct NDIS_PNPTRACE_LOCALS *)v23);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Zq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v20,
            0x1Cu,
            0x27u,
            (struct _GUID *)&WPP_065a33821845343ef30f5566aa9547e7_Traceguids,
            *(unsigned __int16 **)&v23[8],
            *(_QWORD *)v23);
      }
    }
    if ( Ndis::BindState::SetPause(v16, DatapathRunning, PauseReason_MandatoryMissingDuringBoot) )
    {
      memset(v23, 0, sizeof(v23));
      if ( (unsigned __int8)byte_14011EAD3 >= 4u )
      {
        ndisGetBindLinkNameForTracing(this, (struct NDIS_PNPTRACE_LOCALS *)v23);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v19 = 40;
          goto LABEL_41;
        }
      }
    }
  }
}
