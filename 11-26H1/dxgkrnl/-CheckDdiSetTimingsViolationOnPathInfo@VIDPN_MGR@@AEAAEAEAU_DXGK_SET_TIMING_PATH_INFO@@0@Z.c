/*
 * XREFs of ?CheckDdiSetTimingsViolationOnPathInfo@VIDPN_MGR@@AEAAEAEAU_DXGK_SET_TIMING_PATH_INFO@@0@Z @ 0x14037A020
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402D4EF8 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x14004B460 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x14037AA90 (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 */

unsigned __int8 __fastcall VIDPN_MGR::CheckDdiSetTimingsViolationOnPathInfo(
        VIDPN_MGR *this,
        struct _DXGK_SET_TIMING_PATH_INFO *a2,
        struct _DXGK_SET_TIMING_PATH_INFO *a3)
{
  DXGADAPTER *ContainingAdapter; // rax
  unsigned int *v6; // rcx
  unsigned __int64 v7; // rdx
  int v8; // ecx

  ContainingAdapter = VIDPN_MGR::GetContainingAdapter(this);
  if ( !DXGADAPTER::UsingSetTimingsFromVidPn(ContainingAdapter) )
    return 1;
  if ( a2->VidPnTargetId == a3->VidPnTargetId
    && a2->OutputColorSpace == a3->OutputColorSpace
    && a2->SelectedWireFormat.Value == a3->SelectedWireFormat.Value
    && a2->InputFlags == a3->InputFlags )
  {
    if ( a3->OutputFlags >= 2
      || (v6 = (unsigned int *)((char *)&a3->TargetState + 8), *((_DWORD *)&a3->TargetState + 2) >= 0x10000000u)
      || a3->Reserved )
    {
      WdLogSingleEntry1(1LL);
      v6 = (unsigned int *)((char *)&a3->TargetState + 8);
      WdLogGlobalForLineNumber = 1197;
    }
    if ( a3->TargetState.ConnectionChangeId )
    {
      v7 = *v6;
      v8 = v7 & 0xF000000;
      if ( (((v7 & 0xF000000) - 201326592) & 0xFCFFFFFF) != 0 || v8 == 251658240 )
      {
        WdLogSingleEntry2(1LL, (v7 >> 24) & 0xF, a3->VidPnTargetId);
        WdLogGlobalForLineNumber = 1222;
        return 0;
      }
      if ( (*(_BYTE *)&a2->Input & 3) == 3 && v8 != 234881024 )
      {
        WdLogSingleEntry2(1LL, (v7 >> 24) & 0xF, a3->VidPnTargetId);
        WdLogGlobalForLineNumber = 1235;
        return 0;
      }
      return 1;
    }
    WdLogSingleEntry1(1LL);
    WdLogGlobalForLineNumber = 1206;
  }
  else
  {
    WdLogSingleEntry1(1LL);
    WdLogGlobalForLineNumber = 1184;
  }
  return 0;
}
