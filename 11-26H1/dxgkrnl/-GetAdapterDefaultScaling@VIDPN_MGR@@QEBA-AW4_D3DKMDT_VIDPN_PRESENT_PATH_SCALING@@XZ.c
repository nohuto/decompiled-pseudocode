/*
 * XREFs of ?GetAdapterDefaultScaling@VIDPN_MGR@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ @ 0x14040F3DC
 * Callers:
 *     ?DmmGetDefaultScaling@@YAJQEAXPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x140259E88 (-DmmGetDefaultScaling@@YAJQEAXPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z.c)
 *     BmlInternalTryPinningScaling @ 0x1402D9C60 (BmlInternalTryPinningScaling.c)
 *     BmlPinPathContentScaling @ 0x1402D9D38 (BmlPinPathContentScaling.c)
 *     DxgkGetAdapterDefaultScaling @ 0x14033F530 (DxgkGetAdapterDefaultScaling.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x140342C10 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     EnforceDriverModelScalingPolicy @ 0x14037F530 (EnforceDriverModelScalingPolicy.c)
 *     _EnforceDriverModelScalingPolicy @ 0x14040EA38 (_EnforceDriverModelScalingPolicy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDPN_MGR::GetAdapterDefaultScaling(VIDPN_MGR *this)
{
  __int64 result; // rax

  if ( !*((_QWORD *)this + 1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 68;
  }
  result = 255LL;
  if ( *(int *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 3044LL) >= 1105 )
    return 4LL;
  return result;
}
