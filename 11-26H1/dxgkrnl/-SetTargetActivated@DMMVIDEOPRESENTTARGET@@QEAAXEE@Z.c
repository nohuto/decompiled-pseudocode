/*
 * XREFs of ?SetTargetActivated@DMMVIDEOPRESENTTARGET@@QEAAXEE@Z @ 0x1403FC6E0
 * Callers:
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x14025F128 (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402D4EF8 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x14004B460 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z @ 0x140062E24 (-SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z.c)
 */

void __fastcall DMMVIDEOPRESENTTARGET::SetTargetActivated(DMMVIDEOPRESENTTARGET *this, char a2, unsigned __int8 a3)
{
  struct DXGADAPTER *ContainingAdapter; // rax

  if ( !*((_QWORD *)this + 5) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 68;
  }
  ContainingAdapter = VIDPN_MGR::GetContainingAdapter(*(VIDPN_MGR **)(*((_QWORD *)this + 5) + 88LL));
  DMMVIDEOPRESENTTARGET::SetPowerState(this, ContainingAdapter, a3);
  if ( *((_BYTE *)this + 418) != a2 )
  {
    if ( a2 )
      *((_QWORD *)this + 53) = MEMORY[0xFFFFF78000000014];
    else
      *((_QWORD *)this + 54) = MEMORY[0xFFFFF78000000014];
  }
  *((_BYTE *)this + 418) = a2;
}
