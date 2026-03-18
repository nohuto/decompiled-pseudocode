/*
 * XREFs of DpiIsFeatureEnabled @ 0x1403EC964
 * Callers:
 *     DpiIsFeatureEnabled2 @ 0x140085590 (DpiIsFeatureEnabled2.c)
 *     ?DpiFdoInitializePanelBufferControl@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x140085E00 (-DpiFdoInitializePanelBufferControl@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?IsFeatureEnabled@DXGADAPTER@@QEAA?AU_DXGK_ISFEATUREENABLED_RESULT@@W4_DXGK_FEATURE_ID@@@Z @ 0x14019CD44 (-IsFeatureEnabled@DXGADAPTER@@QEAA-AU_DXGK_ISFEATUREENABLED_RESULT@@W4_DXGK_FEATURE_ID@@@Z.c)
 *     NtDxgkIsFeatureEnabled @ 0x1401DB020 (NtDxgkIsFeatureEnabled.c)
 *     ?VmBusIsFeatureEnabled@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140227C60 (-VmBusIsFeatureEnabled@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusIsFeatureEnabled@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140227D00 (-VmBusIsFeatureEnabled@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DpQueryFeatureSupport @ 0x140237CF0 (DpQueryFeatureSupport.c)
 *     DpiGetAdapterInfo @ 0x140238980 (DpiGetAdapterInfo.c)
 * Callees:
 *     ?DxgkIsFeatureEnabled@@YAJPEAUDXGK_FEATURE_DATABASE@@W4_DXGK_FEATURE_ID@@UDXGK_ISFEATUREENABLED_FLAGS@@PEAU_DXGK_ISFEATUREENABLED_RESULT@@@Z @ 0x1403EC9D0 (-DxgkIsFeatureEnabled@@YAJPEAUDXGK_FEATURE_DATABASE@@W4_DXGK_FEATURE_ID@@UDXGK_ISFEATUREENABLED_.c)
 */

__int64 __fastcall DpiIsFeatureEnabled(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct DXGK_FEATURE_DATABASE *v4; // rcx
  __int64 result; // rax
  __int64 v6; // rax

  if ( !a1 )
  {
    v4 = qword_140169458;
    return DxgkIsFeatureEnabled(v4, a2, a3, a4);
  }
  v6 = *(_QWORD *)(a1 + 64);
  if ( v6 && *(_DWORD *)(v6 + 16) == 1953656900 && *(_DWORD *)(v6 + 20) == 2 )
  {
    v4 = *(struct DXGK_FEATURE_DATABASE **)(v6 + 5832);
    return DxgkIsFeatureEnabled(v4, a2, a3, a4);
  }
  WdLogSingleEntry1(2LL);
  result = 3221225485LL;
  WdLogGlobalForLineNumber = 272;
  return result;
}
