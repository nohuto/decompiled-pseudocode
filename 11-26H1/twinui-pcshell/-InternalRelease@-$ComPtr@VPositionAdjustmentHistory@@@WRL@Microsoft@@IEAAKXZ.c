/*
 * XREFs of ?InternalRelease@?$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D8604
 * Callers:
 *     ??$MakeAndInitialize@VPositionAdjustmentHistory@@V1@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@@012@@Z @ 0x1800D8688 (--$MakeAndInitialize@VPositionAdjustmentHistory@@V1@$$V@Details@WRL@Microsoft@@YAJV-$ComPtrRef@V.c)
 *     ?CMultitaskingViewHotKeyHandler_CreateInstance@@YAJPEAUIImmersiveWindowMessageService@@PEAUIImmersiveMonitorManager@@PEAUIMultitaskingViewTaskScheduler@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x1801F5C24 (-CMultitaskingViewHotKeyHandler_CreateInstance@@YAJPEAUIImmersiveWindowMessageService@@PEAUIImme.c)
 *     ??$MakeAndInitialize@VCMultitaskingViewHotKeyHandler@@V1@AEAPEAUIImmersiveWindowMessageService@@AEAPEAUIImmersiveMonitorManager@@AEAPEAUIMultitaskingViewTaskScheduler@@AEAPEAUIApplicationViewCollection@@@Details@WRL@Microsoft@@YAJPEAPEAVCMultitaskingViewHotKeyHandler@@AEAPEAUIImmersiveWindowMessageService@@AEAPEAUIImmersiveMonitorManager@@AEAPEAUIMultitaskingViewTaskScheduler@@AEAPEAUIApplicationViewCollection@@@Z @ 0x1802A5188 (--$MakeAndInitialize@VCMultitaskingViewHotKeyHandler@@V1@AEAPEAUIImmersiveWindowMessageService@@.c)
 *     ??1?$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@QEAA@XZ @ 0x1802C64C8 (--1-$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@QEAA@XZ.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a506e902e7170e918a173785fdf388b8___::_CTaskWrapper__lambda_a506e902e7170e918a173785fdf388b8___ @ 0x180522898 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_a506e902e7170e918a173785fdf388b8___--_CTask.c)
 *     ?AddPositionAdjustment@PositionAdjustmentHistory@@UEAA?AW4PositionAdjustmentAction@@PEAUIApplicationView@@@Z @ 0x180522900 (-AddPositionAdjustment@PositionAdjustmentHistory@@UEAA-AW4PositionAdjustmentAction@@PEAUIApplica.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMessageProxyReconnectAdapter@@UIMessageProxyListener@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800D8630 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMessageProxyRec.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<PositionAdjustmentHistory>::InternalRelease(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMessageProxyReconnectAdapter,IMessageProxyListener>::Release(v1);
  }
  return result;
}
