/*
 * XREFs of ?SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z @ 0x140161AC0
 * Callers:
 *     ?ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x140157420 (-ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 *     ?ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x140158470 (-ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART.c)
 *     ?Iterate@BindEngine@Ndis@@AEAA_NAEBU_GUID@@@Z @ 0x140158AF0 (-Iterate@BindEngine@Ndis@@AEAA_NAEBU_GUID@@@Z.c)
 *     Ndis::BindRegistry::UpdateFiltersInner @ 0x140160EB0 (Ndis--BindRegistry--UpdateFiltersInner.c)
 *     Ndis::BindRegistry::RemoveBindingsInSpan @ 0x1401610C0 (Ndis--BindRegistry--RemoveBindingsInSpan.c)
 *     ??$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@_KAEAV?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@@Z @ 0x140161350 (--$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEA.c)
 *     ?CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_NDIS_MINIPORT_BLOCK@@W4Flags@BindSource@2@@Z @ 0x140161680 (-CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV-$KRef@UNDIS_BIND_PRO.c)
 *     ?UpdateProtocols@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@1W4Flags@ReadBindingsOptions@2@@Z @ 0x140162090 (-UpdateProtocols@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV-$KArray@V-$unique_ptr@UND.c)
 *     ??$AddBindingToSet@UNDIS_BIND_PROTOCOL_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@_KAEAV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@@Z @ 0x1401622F0 (--$AddBindingToSet@UNDIS_BIND_PROTOCOL_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@A.c)
 * Callees:
 *     WPP_RECORDER_SF_Ld @ 0x14005D7A0 (WPP_RECORDER_SF_Ld.c)
 *     WPP_RECORDER_SF_Zq @ 0x14005F000 (WPP_RECORDER_SF_Zq.c)
 *     WPP_RECORDER_SF_LZq @ 0x1400A34B0 (WPP_RECORDER_SF_LZq.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x14015BE50 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 */

char __fastcall Ndis::BindState::SetSource(
        Ndis::BindState *this,
        enum BIND_SOURCE_STATE a2,
        enum Ndis::BindSource::Flags a3)
{
  unsigned int m_bindSources; // r10d
  unsigned int v4; // eax
  unsigned int m_unbindReasons; // edx
  bool v8; // cf
  unsigned __int16 v9; // r9
  int v10; // edx
  int v11; // r8d
  char v12[8]; // [rsp+30h] [rbp-18h]

  m_bindSources = this->m_bindSources;
  v4 = m_bindSources;
  if ( a2 == AddBindSource )
  {
    v4 = a3 | m_bindSources;
LABEL_3:
    this->m_bindSources = v4;
    goto LABEL_4;
  }
  if ( a2 == RemoveBindSource )
  {
    v4 = m_bindSources & ~a3;
    goto LABEL_3;
  }
LABEL_4:
  if ( (m_bindSources != 0) == (v4 != 0) )
    return 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
    WPP_RECORDER_SF_Ld(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5u,
      0x1Cu,
      0xAu,
      (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
      m_bindSources,
      v4);
  if ( this->m_bindSources )
  {
    if ( Ndis::BindState::SetBinding(this, BindingEnabled, Reason_NoBindSourceWantsThisBinding)
      && (unsigned __int8)byte_14011EAD3 >= 4u
      && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_LZq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v10,
        v11,
        0xBu,
        (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
        this->m_bindSources,
        0LL,
        0LL);
    }
    if ( !Ndis::BindState::SetBinding(
            this,
            BindingEnabled,
            Reason_DisabledByLegacyIoctl|Reason_DriverRejectedBinding|Reason_LastRestartAttemptFailed|Reason_LastBindAttemptFailed)
      || (unsigned __int8)byte_14011EAD3 < 4u
      || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      goto LABEL_14;
    }
    v9 = 12;
  }
  else
  {
    m_unbindReasons = this->m_unbindReasons;
    this->m_unbindReasons = m_unbindReasons | 1;
    if ( m_unbindReasons && this->Miniport )
      goto LABEL_14;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
    {
      *(_DWORD *)v12 = m_unbindReasons | 1;
      WPP_RECORDER_SF_Ld(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        5u,
        0x1Cu,
        0xEu,
        (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
        m_unbindReasons,
        *(_QWORD *)v12);
    }
    v8 = (unsigned __int8)byte_14011EAD3 < 4u;
    this->Miniport->BindEngine.m_isDirty = 1;
    if ( v8 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_14;
    v9 = 13;
  }
  WPP_RECORDER_SF_Zq(
    *((_QWORD *)WPP_GLOBAL_Control + 8),
    m_unbindReasons,
    0x1Cu,
    v9,
    (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
    0LL,
    0LL);
LABEL_14:
  this->Miniport->BindEngine.m_isDirty = 1;
  return 1;
}
