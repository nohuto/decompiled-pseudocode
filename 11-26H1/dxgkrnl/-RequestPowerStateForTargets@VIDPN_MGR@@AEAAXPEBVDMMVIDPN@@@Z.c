/*
 * XREFs of ?RequestPowerStateForTargets@VIDPN_MGR@@AEAAXPEBVDMMVIDPN@@@Z @ 0x140409454
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402D4EF8 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x14004B460 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z @ 0x140062E24 (-SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z.c)
 */

void __fastcall VIDPN_MGR::RequestPowerStateForTargets(VIDPN_MGR *this, const struct DMMVIDPN *a2)
{
  char *v2; // rsi
  char *v3; // rdx
  char *v4; // rdi
  DMMVIDEOPRESENTTARGET *v6; // rbx
  struct DXGADAPTER *ContainingAdapter; // rax
  char *v8; // rax

  v2 = (char *)a2 + 120;
  v3 = (char *)*((_QWORD *)a2 + 15);
  v4 = 0LL;
  if ( v3 != v2 )
    v4 = v3 - 8;
  while ( v4 )
  {
    v6 = *(DMMVIDEOPRESENTTARGET **)(*((_QWORD *)v4 + 12) + 96LL);
    ContainingAdapter = VIDPN_MGR::GetContainingAdapter(this);
    DMMVIDEOPRESENTTARGET::SetPowerState(v6, ContainingAdapter, 1u);
    v8 = (char *)*((_QWORD *)v4 + 1);
    v4 = v8 - 8;
    if ( v8 == v2 )
      v4 = 0LL;
  }
}
