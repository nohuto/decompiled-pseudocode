/*
 * XREFs of McTemplateK0qp_EtwWriteTransfer @ 0x1400ABEA4
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1400AA7E0 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 *     EtwTraceFlipManagerRemoveBuffer @ 0x14012BB00 (EtwTraceFlipManagerRemoveBuffer.c)
 *     EtwTraceFlipManagerAddRemoveContent @ 0x14012BB30 (EtwTraceFlipManagerAddRemoveContent.c)
 *     EtwTraceFlipManagerPresentQueueDepth @ 0x1401595B0 (EtwTraceFlipManagerPresentQueueDepth.c)
 *     EtwTraceFlipManagerStartTokenReleaseToFrame @ 0x14015D830 (EtwTraceFlipManagerStartTokenReleaseToFrame.c)
 *     EtwTraceFlipManagerStopTokenReleaseToFrame @ 0x14015E0B0 (EtwTraceFlipManagerStopTokenReleaseToFrame.c)
 *     EtwTraceFlipManagerPresentConfirmed @ 0x140163100 (EtwTraceFlipManagerPresentConfirmed.c)
 *     EtwTraceFlipManagerNoOpPresent @ 0x140166CE0 (EtwTraceFlipManagerNoOpPresent.c)
 *     EtwTraceFlipManagerCancelPosted @ 0x1401DAD40 (EtwTraceFlipManagerCancelPosted.c)
 *     EtwTraceFlipManagerDiscardPresentAfterDestroy @ 0x1401DADB0 (EtwTraceFlipManagerDiscardPresentAfterDestroy.c)
 *     EtwTraceFlipManagerPresentIFlipPurgePreviousPresents @ 0x1401DB250 (EtwTraceFlipManagerPresentIFlipPurgePreviousPresents.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x14001E680 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
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
  __int64 v8; // [rsp+48h] [rbp-30h]
  __int64 *v9; // [rsp+50h] [rbp-28h]
  __int64 v10; // [rsp+58h] [rbp-20h]
  int v11; // [rsp+98h] [rbp+20h] BYREF

  v11 = a4;
  v8 = 4LL;
  v7 = &v11;
  v10 = 8LL;
  v9 = &a5;
  return McGenEventWrite_EtwWriteTransfer(a1, a2, &W32kControlGuid, 3u, &v6);
}
