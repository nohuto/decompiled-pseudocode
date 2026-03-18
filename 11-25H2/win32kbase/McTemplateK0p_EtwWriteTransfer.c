/*
 * XREFs of McTemplateK0p_EtwWriteTransfer @ 0x14003E5F0
 * Callers:
 *     EtwTraceWakeInputIdle @ 0x14003E5C0 (EtwTraceWakeInputIdle.c)
 *     ?RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1400BB4A8 (-RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z.c)
 *     ?GetBatchesFromFrame@CConnection@DirectComposition@@QEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1400BB7AC (-GetBatchesFromFrame@CConnection@DirectComposition@@QEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z.c)
 *     EtwTraceSleepInputIdle @ 0x1400E65A0 (EtwTraceSleepInputIdle.c)
 *     EtwTraceDCompGetBatchEvent @ 0x1400F0670 (EtwTraceDCompGetBatchEvent.c)
 *     EtwTraceFlipManagerBindingStart @ 0x14015CE50 (EtwTraceFlipManagerBindingStart.c)
 *     EtwTraceDITSpeedHitTestFailedRevalidation @ 0x1401B7B10 (EtwTraceDITSpeedHitTestFailedRevalidation.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x14003E650 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

__int64 McTemplateK0p_EtwWriteTransfer(__int64 a1, __int64 a2, __int64 a3, ...)
{
  _QWORD v4[3]; // [rsp+30h] [rbp-38h] BYREF
  int v5; // [rsp+48h] [rbp-20h]
  int v6; // [rsp+4Ch] [rbp-1Ch]
  va_list va; // [rsp+88h] [rbp+20h] BYREF

  va_start(va, a3);
  va_copy((va_list)&v4[2], va);
  v6 = 0;
  v5 = 8;
  return McGenEventWrite_EtwWriteTransfer(a1, a2, a3, 2LL, v4);
}
