/*
 * XREFs of ?IsTargetForceable@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x140340C38
 * Callers:
 *     _lambda_eeea5582e93711493668b9eafd12873f_::operator() @ 0x1401CC7CC (_lambda_eeea5582e93711493668b9eafd12873f_--operator().c)
 *     _lambda_ef85c4d3ba2b9aeb28478c22401d75d8_::operator() @ 0x1401CD050 (_lambda_ef85c4d3ba2b9aeb28478c22401d75d8_--operator().c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402D4EF8 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@Z @ 0x1403403F8 (-_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@.c)
 *     ?DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1403409F4 (-DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?NeedToBeActive@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1403EF3FC (-NeedToBeActive@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall DMMVIDEOPRESENTTARGET::IsTargetForceable(DMMVIDEOPRESENTTARGET *this)
{
  char v1; // di
  __int64 v3; // rsi
  __int64 v4; // rax
  int v5; // eax
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx

  v1 = 0;
  if ( !*((_QWORD *)this + 5) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 68;
  }
  v3 = *(_QWORD *)(*((_QWORD *)this + 5) + 88LL);
  if ( !*(_QWORD *)(v3 + 8) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 68;
  }
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 16LL);
  if ( *(_DWORD *)(v4 + 420) == 21299 && *(int *)(*(_QWORD *)(*(_QWORD *)(v4 + 3160) + 16LL) + 3044LL) < 1105 )
    return 0;
  if ( *((_DWORD *)this + 32) != -1 )
    return 1;
  v5 = *((_DWORD *)this + 102);
  if ( v5 != -1 )
    return v5 == 1;
  v6 = *((_DWORD *)this + 20);
  if ( !v6 )
    return 1;
  v7 = v6 - 1;
  if ( !v7 )
    return 1;
  v8 = v7 - 1;
  if ( !v8 )
    return 1;
  v9 = v8 - 1;
  if ( !v9 || v9 == 11 )
    return 1;
  return v1;
}
