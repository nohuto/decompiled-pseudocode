/*
 * XREFs of McTemplateK0p_EtwWriteTransfer @ 0x14001E620
 * Callers:
 *     EtwTraceWakeInputIdle @ 0x14001E5F0 (EtwTraceWakeInputIdle.c)
 *     NtDCompositionGetConnectionBatch @ 0x1400A4A90 (NtDCompositionGetConnectionBatch.c)
 *     ?RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1400A50D0 (-RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z.c)
 *     EtwTraceSleepInputIdle @ 0x14012DC40 (EtwTraceSleepInputIdle.c)
 *     EtwTraceDCompGetBatchEvent @ 0x140136650 (EtwTraceDCompGetBatchEvent.c)
 *     EtwTraceFlipManagerBindingStart @ 0x14017CF20 (EtwTraceFlipManagerBindingStart.c)
 *     EtwTraceDITSpeedHitTestFailedRevalidation @ 0x1401DAB30 (EtwTraceDITSpeedHitTestFailedRevalidation.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x14001E680 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 McTemplateK0p_EtwWriteTransfer(__int64 a1, __int64 a2, __int64 a3, ...)
{
  _QWORD v4[4]; // [rsp+30h] [rbp-38h] BYREF
  va_list va; // [rsp+88h] [rbp+20h] BYREF

  va_start(va, a3);
  v4[3] = 8LL;
  va_copy((va_list)&v4[2], va);
  return McGenEventWrite_EtwWriteTransfer(a1, a2, a3, 2LL, v4);
}
