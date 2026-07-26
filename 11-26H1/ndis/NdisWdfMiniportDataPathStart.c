/*
 * XREFs of NdisWdfMiniportDataPathStart @ 0x140096900
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_Zq @ 0x14005F000 (WPP_RECORDER_SF_Zq.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x14014C3E8 (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x140157B40 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140158AB0 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1401625B0 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140164950 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 */

void __fastcall NdisWdfMiniportDataPathStart(struct _NDIS_MINIPORT_BLOCK *a1)
{
  Ndis::BindEngine *p_BindEngine; // rbx
  int v3; // edx
  char v4[168]; // [rsp+40h] [rbp-A8h] BYREF

  p_BindEngine = &a1->BindEngine;
  Ndis::BindEngine::BeginPolicyUpdates(&a1->BindEngine);
  if ( Ndis::BindState::SetPause(&a1->Bindings.Miniport, DatapathRunning, PauseReason_Wdf) )
  {
    memset(v4, 0, 0xA0uLL);
    if ( (unsigned __int8)byte_14011EAD3 >= 4u )
    {
      ndisGetBindLinkNameForTracing(a1, (struct NDIS_PNPTRACE_LOCALS *)v4);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Zq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v3,
          0x1Cu,
          0x7Au,
          (struct _GUID *)&WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids,
          *(unsigned __int16 **)&v4[8],
          *(_QWORD *)v4);
    }
  }
  Ndis::BindEngine::EndPolicyUpdates(p_BindEngine);
  Ndis::BindEngine::ApplyBindChanges(p_BindEngine, RunAsynchronous, 0);
}
