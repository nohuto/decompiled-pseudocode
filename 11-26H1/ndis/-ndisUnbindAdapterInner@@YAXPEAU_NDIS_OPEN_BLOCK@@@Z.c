/*
 * XREFs of ?ndisUnbindAdapterInner@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1400BB7B4
 * Callers:
 *     ?ndisUnbindAdapterWorkItem@@YAXPEAX@Z @ 0x1400BB910 (-ndisUnbindAdapterWorkItem@@YAXPEAX@Z.c)
 *     NdisUnbindAdapter @ 0x1400BC950 (NdisUnbindAdapter.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_Zq @ 0x14005F000 (WPP_RECORDER_SF_Zq.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x14014C3CC (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x140157B40 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140158AB0 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x14015BE50 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140164950 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 */

void __fastcall ndisUnbindAdapterInner(struct _NDIS_OPEN_BLOCK *a1)
{
  int v2; // edx
  char v3[160]; // [rsp+40h] [rbp-A8h] BYREF

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      6,
      56,
      (struct _GUID *)&WPP_1e356a0c3ca735481fb26761a46e734e_Traceguids,
      (char)a1);
  Ndis::BindEngine::BeginPolicyUpdates(&a1->MiniportHandle->BindEngine);
  if ( Ndis::BindState::SetBinding(&a1->Bind->BindState, BindingDisabled, Reason_DriverRejectedBinding) )
  {
    memset(v3, 0, sizeof(v3));
    if ( (unsigned __int8)byte_14011EAD3 >= 4u )
    {
      ndisGetBindLinkNameForTracing(a1->Bind, (struct NDIS_PNPTRACE_LOCALS *)v3);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Zq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v2,
          0x1Cu,
          0x39u,
          (struct _GUID *)&WPP_1e356a0c3ca735481fb26761a46e734e_Traceguids,
          *(unsigned __int16 **)&v3[8],
          *(_QWORD *)v3);
    }
  }
  Ndis::BindEngine::EndPolicyUpdates(&a1->MiniportHandle->BindEngine);
  Ndis::BindEngine::ApplyBindChanges(&a1->MiniportHandle->BindEngine, RunAsynchronous, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      6,
      58,
      (struct _GUID *)&WPP_1e356a0c3ca735481fb26761a46e734e_Traceguids,
      (char)a1);
}
