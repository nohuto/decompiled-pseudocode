/*
 * XREFs of RtlWriteUCharToUser @ 0x1401967C8
 * Callers:
 *     RtlWriteUCharToUser$thunk$17166446407143655193 @ 0x1400A7050 (RtlWriteUCharToUser$thunk$17166446407143655193.c)
 *     ?DxgkNotifyWorkSubmissionInternal@@YAJPEAU_D3DKMT_NOTIFY_WORK_SUBMISSION@@_N@Z @ 0x1401E265C (-DxgkNotifyWorkSubmissionInternal@@YAJPEAU_D3DKMT_NOTIFY_WORK_SUBMISSION@@_N@Z.c)
 *     DxgkGetProcessDeviceRemovalSupport @ 0x1401F80B0 (DxgkGetProcessDeviceRemovalSupport.c)
 *     DxgkGetScanLine @ 0x1402A3580 (DxgkGetScanLine.c)
 *     DxgkSubmitPresentToHwQueue @ 0x1402B6190 (DxgkSubmitPresentToHwQueue.c)
 * Callees:
 *     ProbeForRead_0 @ 0x14006E455 (ProbeForRead_0.c)
 */

void __fastcall RtlWriteUCharToUser(_BYTE *a1, char a2)
{
  ProbeForRead_0(a1, 1uLL, 1u);
  *a1 = a2;
}
