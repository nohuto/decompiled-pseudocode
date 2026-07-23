/*
 * XREFs of McTemplateK0jq_EtwWriteTransfer @ 0x1405BA714
 * Callers:
 *     FsRtlpTieringHeatEventsControlCallbackV2 @ 0x1405BA5F0 (FsRtlpTieringHeatEventsControlCallbackV2.c)
 *     FsRtlpHeatRegisterVolume @ 0x14079305C (FsRtlpHeatRegisterVolume.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140498E70 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0jq_EtwWriteTransfer(REGHANDLE *a1, __int64 a2, const GUID *a3, __int64 a4, __int64 a5)
{
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+30h] [rbp-48h] BYREF
  __int64 v7; // [rsp+40h] [rbp-38h]
  __int64 v8; // [rsp+48h] [rbp-30h]
  __int64 *v9; // [rsp+50h] [rbp-28h]
  __int64 v10; // [rsp+58h] [rbp-20h]

  v7 = a4;
  v9 = &a5;
  v8 = 16LL;
  v10 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(a1, (const EVENT_DESCRIPTOR *)TieredStorage_NewVolume, a3, 3u, &v6);
}
