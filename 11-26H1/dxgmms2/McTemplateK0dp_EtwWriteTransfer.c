/*
 * XREFs of McTemplateK0dp_EtwWriteTransfer @ 0x140054754
 * Callers:
 *     VidSchiResetEngine @ 0x1400454F8 (VidSchiResetEngine.c)
 *     VidSchInvalidateHwContext @ 0x140057AA0 (VidSchInvalidateHwContext.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140012A70 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0dp_EtwWriteTransfer(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
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
  return McGenEventWrite_EtwWriteTransfer(&DxgkControlGuid_Context, &EventBlockGpuAccess, a3, 3u, &v6);
}
