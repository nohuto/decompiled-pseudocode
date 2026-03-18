/*
 * XREFs of ?SetVidPnPrimaryTarget@ADAPTER_DISPLAY@@QEAAXII@Z @ 0x14005BB04
 * Callers:
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x14025F128 (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402D4EF8 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_96e157b43079a313af61cac4d916eb85___ @ 0x14005BB88 (HOSTVMMONITORMAPPING--RemoveMappingInternal__lambda_96e157b43079a313af61cac4d916eb85___.c)
 */

void __fastcall ADAPTER_DISPLAY::SetVidPnPrimaryTarget(ADAPTER_DISPLAY *this, unsigned int a2, int a3)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  int v6; // edi
  struct DXGGLOBAL *Global; // rax
  __int64 v8; // rdx
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  int v11; // [rsp+48h] [rbp+10h] BYREF

  v4 = 4024LL * a2;
  v5 = *((_QWORD *)this + 16);
  v6 = *(_DWORD *)(v4 + v5 + 1072);
  *(_DWORD *)(v4 + v5 + 1072) = a3;
  if ( a3 == -1 )
  {
    Global = DXGGLOBAL::GetGlobal();
    v11 = v6;
    v8 = *(_QWORD *)(*((_QWORD *)this + 2) + 412LL);
    v9[0] = &v10;
    v10 = v8;
    v9[1] = &v11;
    HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_96e157b43079a313af61cac4d916eb85___((char *)Global + 305328, v9);
  }
}
