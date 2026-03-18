/*
 * XREFs of ?StartLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXE@Z @ 0x14042F6A0
 * Callers:
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x14025F128 (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 *     ?LinkTrainingTimeoutWorkItem@DMMVIDEOPRESENTTARGET@@SAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1402604F0 (-LinkTrainingTimeoutWorkItem@DMMVIDEOPRESENTTARGET@@SAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402D4EF8 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     <none>
 */

void __fastcall DMMVIDEOPRESENTTARGET::StartLinkTrainingTimer(DMMVIDEOPRESENTTARGET *this, unsigned __int8 a2)
{
  __int64 v3; // rdi
  __int64 v4; // r9
  __int64 v5; // rax
  unsigned int v6; // ecx

  v3 = a2;
  if ( *(_DWORD *)(*((_QWORD *)this + 67) + 152LL) == 1 || *(_DWORD *)(*((_QWORD *)this + 67) + 152LL) == 3 )
  {
    KeCancelTimer((PKTIMER)(*((_QWORD *)this + 67) + 16LL));
    KeFlushQueuedDpcs();
  }
  if ( !(_BYTE)v3 && *(_DWORD *)(*((_QWORD *)this + 67) + 152LL) != 2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 455;
  }
  WdLogSingleEntry2(
    7LL,
    v3,
    _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 67) + 152LL), (_BYTE)v3 != 0 ? 1 : 3));
  v4 = *((_QWORD *)this + 67);
  WdLogGlobalForLineNumber = 463;
  v5 = *(_QWORD *)(*(_QWORD *)v4 + 3160LL);
  v6 = *(_DWORD *)(v5 + 532);
  if ( !(_BYTE)v3 )
    v6 = *(_DWORD *)(v5 + 536) - v6;
  KeSetTimer((PKTIMER)(v4 + 16), (LARGE_INTEGER)(-100000LL * v6), (PKDPC)(v4 + 80));
}
