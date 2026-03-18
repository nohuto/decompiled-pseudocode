/*
 * XREFs of McTemplateK0q_EtwWriteTransfer @ 0x14000EF10
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x14002A518 (Interrupter_DeferredWorkProcessor.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x14000EF70 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140059450 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateK0q_EtwWriteTransfer(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  _QWORD v5[4]; // [rsp+30h] [rbp-38h] BYREF
  int v6; // [rsp+88h] [rbp+20h] BYREF

  v6 = a4;
  v5[3] = 4LL;
  v5[2] = &v6;
  return McGenEventWrite_EtwWriteTransfer(a1, &USBXHCI_ETW_EVENT_DEFERRED_WORK_STOP_V1, 0LL, 2LL, v5);
}
