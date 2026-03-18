/*
 * XREFs of McTemplateK0qqq_EtwWriteTransfer @ 0x140066268
 * Callers:
 *     EtwTraceEndPointerFrameCoalesce @ 0x140065460 (EtwTraceEndPointerFrameCoalesce.c)
 *     EtwTraceFocusedProcessChange @ 0x140065880 (EtwTraceFocusedProcessChange.c)
 *     ?ReportGetAsyncKeyStateAnomaly@CAsyncKeyEventMonitor@@AEAAXK@Z @ 0x140066128 (-ReportGetAsyncKeyStateAnomaly@CAsyncKeyEventMonitor@@AEAAXK@Z.c)
 *     EtwTraceEndPointerFrameCreation @ 0x1400661B0 (EtwTraceEndPointerFrameCreation.c)
 *     EtwTraceEndPointerFrameCommit @ 0x1400661F0 (EtwTraceEndPointerFrameCommit.c)
 *     EtwTraceBeginPointerFrameCommit @ 0x140066230 (EtwTraceBeginPointerFrameCommit.c)
 *     EtwTraceBeginPointerFrameMessageGeneration @ 0x140066EE0 (EtwTraceBeginPointerFrameMessageGeneration.c)
 *     EtwTraceEndPointerFrameMessageGeneration @ 0x140066F20 (EtwTraceEndPointerFrameMessageGeneration.c)
 *     ?TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z @ 0x140069CB8 (-TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z.c)
 *     ?CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z @ 0x14006DC54 (-CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z.c)
 *     rimGetCompleteFrameAndReleaseHoldingFrame @ 0x140074598 (rimGetCompleteFrameAndReleaseHoldingFrame.c)
 *     EtwTraceGreMovePointerBegin @ 0x14012D930 (EtwTraceGreMovePointerBegin.c)
 *     EtwTraceGreMovePointerEnd @ 0x14012D970 (EtwTraceGreMovePointerEnd.c)
 *     EtwTraceBeginPointerFrameCoalesce @ 0x1401779D0 (EtwTraceBeginPointerFrameCoalesce.c)
 *     EtwTraceBeginPointerFrameBuildPartial @ 0x1401DAA20 (EtwTraceBeginPointerFrameBuildPartial.c)
 *     EtwTraceBeginPointerFrameCreation @ 0x1401DAA50 (EtwTraceBeginPointerFrameCreation.c)
 *     EtwTraceCursorSize @ 0x1401DAAF0 (EtwTraceCursorSize.c)
 *     EtwTraceEndPointerFrameBuildPartial @ 0x1401DAD10 (EtwTraceEndPointerFrameBuildPartial.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x14001E680 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qqq_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        char a5,
        char a6)
{
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+30h] [rbp-50h] BYREF
  int *v8; // [rsp+40h] [rbp-40h]
  __int64 v9; // [rsp+48h] [rbp-38h]
  char *v10; // [rsp+50h] [rbp-30h]
  __int64 v11; // [rsp+58h] [rbp-28h]
  char *v12; // [rsp+60h] [rbp-20h]
  __int64 v13; // [rsp+68h] [rbp-18h]
  int v14; // [rsp+A8h] [rbp+28h] BYREF

  v14 = a4;
  v8 = &v14;
  v9 = 4LL;
  v10 = &a5;
  v12 = &a6;
  v11 = 4LL;
  v13 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(a1, a2, &W32kControlGuid, 4u, &v7);
}
