/*
 * XREFs of McTemplateK0dq_EtwWriteTransfer @ 0x1400756EC
 * Callers:
 *     DxgNotifyDpcCB @ 0x1400374A0 (DxgNotifyDpcCB.c)
 *     DxgNotifyInterruptCB @ 0x14003D130 (DxgNotifyInterruptCB.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400127B0 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0dq_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2)
{
  int v3; // [rsp+30h] [rbp-58h] BYREF
  int v4; // [rsp+38h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+40h] [rbp-48h] BYREF
  int *v6; // [rsp+50h] [rbp-38h]
  __int64 v7; // [rsp+58h] [rbp-30h]
  int *v8; // [rsp+60h] [rbp-28h]
  __int64 v9; // [rsp+68h] [rbp-20h]

  v3 = -2;
  v6 = &v3;
  v7 = 4LL;
  v4 = 0;
  v8 = &v4;
  v9 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, a2, 0LL, 3u, &v5);
}
