/*
 * XREFs of McTemplateK0q_EtwWriteTransfer @ 0x14000C170
 * Callers:
 *     DeviceStop @ 0x14002EEA0 (DeviceStop.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x14000BD84 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14001C6A0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0q_EtwWriteTransfer(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+30h] [rbp-38h] BYREF
  int *v6; // [rsp+40h] [rbp-28h]
  __int64 v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+88h] [rbp+20h] BYREF

  v8 = a4;
  v7 = 4LL;
  v6 = &v8;
  return McGenEventWrite_EtwWriteTransfer(a1, &EXBUS_DEVICE_STOP_EXIT, a3, 2u, &v5);
}
