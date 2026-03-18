/*
 * XREFs of McTemplateK0j_EtwWriteTransfer @ 0x1405B08AC
 * Callers:
 *     CcInitializeVolumeCacheMap @ 0x14038538C (CcInitializeVolumeCacheMap.c)
 *     PpCheckInDriverDatabase @ 0x140A26144 (PpCheckInDriverDatabase.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x14049F320 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0j_EtwWriteTransfer(REGHANDLE *a1, const EVENT_DESCRIPTOR *a2, __int64 a3, __int64 a4)
{
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+30h] [rbp-38h] BYREF
  __int64 v6; // [rsp+40h] [rbp-28h]
  __int64 v7; // [rsp+48h] [rbp-20h]

  v6 = a4;
  v7 = 16LL;
  return McGenEventWrite_EtwWriteTransfer(a1, a2, 0LL, 2u, &v5);
}
