/*
 * XREFs of McTemplateK0qp_EtwWriteTransfer @ 0x14003FAF0
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1400ACB50 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 *     EtwTraceFlipManagerPresentQueueDepth @ 0x1401284C0 (EtwTraceFlipManagerPresentQueueDepth.c)
 *     EtwTraceFlipManagerStopTokenReleaseToFrame @ 0x140128B80 (EtwTraceFlipManagerStopTokenReleaseToFrame.c)
 *     EtwTraceFlipManagerStartTokenReleaseToFrame @ 0x140128F00 (EtwTraceFlipManagerStartTokenReleaseToFrame.c)
 *     EtwTraceFlipManagerPresentConfirmed @ 0x140137420 (EtwTraceFlipManagerPresentConfirmed.c)
 *     EtwTraceFlipManagerAddRemoveContent @ 0x140153050 (EtwTraceFlipManagerAddRemoveContent.c)
 *     EtwTraceFlipManagerRemoveBuffer @ 0x14015CE80 (EtwTraceFlipManagerRemoveBuffer.c)
 *     EtwTraceFlipManagerCancelPosted @ 0x1401B7D50 (EtwTraceFlipManagerCancelPosted.c)
 *     EtwTraceFlipManagerDiscardPresentAfterDestroy @ 0x1401B7DF0 (EtwTraceFlipManagerDiscardPresentAfterDestroy.c)
 *     EtwTraceFlipManagerNoOpPresent @ 0x1401B7EB0 (EtwTraceFlipManagerNoOpPresent.c)
 *     EtwTraceFlipManagerPresentIFlipPurgePreviousPresents @ 0x1401B82C0 (EtwTraceFlipManagerPresentIFlipPurgePreviousPresents.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x14003E650 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qp_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        __int64 a5)
{
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+30h] [rbp-48h] BYREF
  int *v7; // [rsp+40h] [rbp-38h]
  int v8; // [rsp+48h] [rbp-30h]
  int v9; // [rsp+4Ch] [rbp-2Ch]
  __int64 *v10; // [rsp+50h] [rbp-28h]
  int v11; // [rsp+58h] [rbp-20h]
  int v12; // [rsp+5Ch] [rbp-1Ch]
  int v13; // [rsp+98h] [rbp+20h] BYREF

  v13 = a4;
  v7 = &v13;
  v9 = 0;
  v8 = 4;
  v10 = &a5;
  v12 = 0;
  v11 = 8;
  return McGenEventWrite_EtwWriteTransfer(a1, a2, &W32kControlGuid, 3u, &v6);
}
