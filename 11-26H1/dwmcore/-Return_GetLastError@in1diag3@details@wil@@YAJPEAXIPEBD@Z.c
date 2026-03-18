/*
 * XREFs of ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802015DC
 * Callers:
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x180078884 (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 *     ?WaitForSyncFlush@CInternalMilCmdConnection@@QEAAJI@Z @ 0x180116970 (-WaitForSyncFlush@CInternalMilCmdConnection@@QEAAJI@Z.c)
 *     ?SyncDesktopCaptureBits@CChannel@@UEAAJU_LUID@@HHIIW4DXGI_FORMAT@@_KPEAX@Z @ 0x180116D60 (-SyncDesktopCaptureBits@CChannel@@UEAAJU_LUID@@HHIIW4DXGI_FORMAT@@_KPEAX@Z.c)
 *     ?StartCompositionThread@CConnection@@IEAAJH@Z @ 0x180131F18 (-StartCompositionThread@CConnection@@IEAAJH@Z.c)
 *     ?PostMessageToClient@CInternalMilCmdConnection@@UEAAJPEBUUCE_RDP_HEADER@@@Z @ 0x18018D3D0 (-PostMessageToClient@CInternalMilCmdConnection@@UEAAJPEBUUCE_RDP_HEADER@@@Z.c)
 *     ?InitializeServer@DataProviderManager@@AEAAJXZ @ 0x1801CBFCC (-InitializeServer@DataProviderManager@@AEAAJXZ.c)
 *     ?WaitForCommandList@CComputeScribbleFramebuffer@@AEAAJPEAUID3D12CommandQueue@@@Z @ 0x1801FDACC (-WaitForCommandList@CComputeScribbleFramebuffer@@AEAAJPEAUID3D12CommandQueue@@@Z.c)
 *     ?Initialize@CChannel@@AEAAJXZ @ 0x18020155C (-Initialize@CChannel@@AEAAJXZ.c)
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x180223508 (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 *     ?StartWorkerThread@CComputeScribbleScheduler@@AEAAJXZ @ 0x18025D220 (-StartWorkerThread@CComputeScribbleScheduler@@AEAAJXZ.c)
 *     FlushAndWait @ 0x18028D0D8 (FlushAndWait.c)
 *     CAsyncTask_CD3DDevice::D3D12Resources_::Start__CD3DDevice::EnsureBeginCreateD3D12Resources_::_5_::_lambda_1___ @ 0x180295C04 (CAsyncTask_CD3DDevice--D3D12Resources_--Start__CD3DDevice--EnsureBeginCreateD3D12Resources_--_5_.c)
 * Callees:
 *     ??$ReportFailure_GetLastErrorHr@$00@details@wil@@YAJPEAXIPEBD110@Z @ 0x180201630 (--$ReportFailure_GetLastErrorHr@$00@details@wil@@YAJPEAXIPEBD110@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Return_GetLastError(
        wil::details::in1diag3 *this,
        void *a2,
        int a3,
        const char *a4)
{
  return wil::details::ReportFailure_GetLastErrorHr<1>((_DWORD)this, (_DWORD)a2, a3, (_DWORD)a4);
}
