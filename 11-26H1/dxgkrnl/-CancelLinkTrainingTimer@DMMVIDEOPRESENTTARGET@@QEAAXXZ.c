/*
 * XREFs of ?CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ @ 0x1404041E0
 * Callers:
 *     ?SetConnectedMonitor@DMMVIDEOPRESENTTARGET@@QEAAXPEAUHDXGMONITOR__@@@Z @ 0x14006AA6C (-SetConnectedMonitor@DMMVIDEOPRESENTTARGET@@QEAAXPEAUHDXGMONITOR__@@@Z.c)
 *     ?DmmReset@@YAXPEAX@Z @ 0x14025BD1C (-DmmReset@@YAXPEAX@Z.c)
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x14025F128 (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 *     ?DestroyDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x14026023C (-DestroyDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAW4_CONNECTION_CHANGE_FAILUR.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402D4EF8 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ??1DMMVIDEOPRESENTTARGET@@UEAA@XZ @ 0x140426878 (--1DMMVIDEOPRESENTTARGET@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DMMVIDEOPRESENTTARGET::CancelLinkTrainingTimer(DMMVIDEOPRESENTTARGET *this)
{
  __int64 v2; // rcx
  signed __int32 v3; // eax

  if ( *(_DWORD *)(*((_QWORD *)this + 67) + 152LL) == 1 || *(_DWORD *)(*((_QWORD *)this + 67) + 152LL) == 3 )
  {
    KeCancelTimer((PKTIMER)(*((_QWORD *)this + 67) + 16LL));
    KeFlushQueuedDpcs();
  }
  if ( ((_InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 67) + 152LL), 5) - 2) & 0xFFFFFFFD) != 0 )
  {
    v2 = *((_QWORD *)this + 67);
    v3 = _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 152), 0, 5);
    if ( v3 != 5 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v2, 0LL) + 24) = v3;
      WdLogGlobalForLineNumber = 510;
    }
  }
}
